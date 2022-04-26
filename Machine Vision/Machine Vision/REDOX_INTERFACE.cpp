#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>
#include <ros/ros.h>
#include "ROS_communication.h"
#include "Gamepad_controller.h"
#include "Servos_controller.h"
#include "Thermal_gas.h"
#include "QR_read.h"
#include "Motion_detection.h"
#include "Hazmat_detection.h"
using namespace std;
using namespace cv;
const int resolution_horizontal = 1366;
const int resolution_vertical = 768;
const int number_of_cameras = 3;
int current_camera_index = 0;
Mat webcam_image;

int main(int argc, char** argv)
{
	ConnectROS(argc, argv);
	system("gnome-terminal play '|rec --buffer 512 -d'");
	InitializeGamepad();
	namedWindow("REDOX", WINDOW_AUTOSIZE);
	namedWindow("Claw");
	namedWindow("CO2");
	namedWindow("Thermal");
	CreateServoSliders();
	VideoCapture capture;
	capture.open(current_camera_index);
	InitializeQR();
	InitializeHazmat();
	while (true)
	{
		UpdateGamepadInput();
		UpdateServosInput();
		if (gamepad_command == "previous_camera")
		{
			current_camera_index--;
			if (current_camera_index < 0)
				current_camera_index = number_of_cameras - 1;
			capture.open(current_camera_index);
		}
		else if (gamepad_command == "next_camera")
		{
			current_camera_index++;
			if (current_camera_index > number_of_cameras - 1)
				current_camera_index = 0;
			capture.open(current_camera_index);
		}
		else if (!servos_command.empty())
		{
			cout << servos_command << "\n";
			WriteArduino(servos_command, servos_value);
		}
		else if (!gamepad_command.empty())
		{
			cout << gamepad_command << "\n";
			WriteArduino(gamepad_command, gamepad_value);
		}
		ReadArduino();
		UpdateGas(current_gas);
		UpdateThermal(current_temperature);
		capture >> webcam_image;
		if (image_processing) {
			webcam_image = ReadQR(webcam_image);
			webcam_image = DetectHazmat(webcam_image);
			webcam_image = DetectMotion(webcam_image);
		}
		resizeWindow("REDOX", resolution_horizontal, resolution_vertical);
		copyMakeBorder(webcam_image, webcam_image, int((resolution_vertical - webcam_image.rows)/3), int((resolution_vertical - webcam_image.rows) / 2), int((resolution_horizontal - webcam_image.cols) / 2), int((resolution_horizontal - webcam_image.cols) / 2), 0, Scalar(50, 50, 50));
		imshow("REDOX", webcam_image);
		imshow("CO2", gas_image);
		imshow("Thermal", thermal_image);
		moveWindow("REDOX", 0, 0);
		moveWindow("Thermal", 0, 0);
		moveWindow("CO2", 0, thermal_height);
		waitKey(1);
	}
	return 0;
}