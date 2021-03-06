# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/insper/catkin_ws/src/REDOX-RoboCup-RMRC-Challenge/Machine Vision/Machine Vision"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/insper/catkin_ws/src/REDOX-RoboCup-RMRC-Challenge/Machine Vision/Machine Vision/build"

# Include any dependencies generated for this target.
include CMakeFiles/Redox.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Redox.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Redox.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Redox.dir/flags.make

CMakeFiles/Redox.dir/REDOX_INTERFACE.cpp.o: CMakeFiles/Redox.dir/flags.make
CMakeFiles/Redox.dir/REDOX_INTERFACE.cpp.o: ../REDOX_INTERFACE.cpp
CMakeFiles/Redox.dir/REDOX_INTERFACE.cpp.o: CMakeFiles/Redox.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/insper/catkin_ws/src/REDOX-RoboCup-RMRC-Challenge/Machine Vision/Machine Vision/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Redox.dir/REDOX_INTERFACE.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Redox.dir/REDOX_INTERFACE.cpp.o -MF CMakeFiles/Redox.dir/REDOX_INTERFACE.cpp.o.d -o CMakeFiles/Redox.dir/REDOX_INTERFACE.cpp.o -c "/home/insper/catkin_ws/src/REDOX-RoboCup-RMRC-Challenge/Machine Vision/Machine Vision/REDOX_INTERFACE.cpp"

CMakeFiles/Redox.dir/REDOX_INTERFACE.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Redox.dir/REDOX_INTERFACE.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/insper/catkin_ws/src/REDOX-RoboCup-RMRC-Challenge/Machine Vision/Machine Vision/REDOX_INTERFACE.cpp" > CMakeFiles/Redox.dir/REDOX_INTERFACE.cpp.i

CMakeFiles/Redox.dir/REDOX_INTERFACE.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Redox.dir/REDOX_INTERFACE.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/insper/catkin_ws/src/REDOX-RoboCup-RMRC-Challenge/Machine Vision/Machine Vision/REDOX_INTERFACE.cpp" -o CMakeFiles/Redox.dir/REDOX_INTERFACE.cpp.s

# Object files for target Redox
Redox_OBJECTS = \
"CMakeFiles/Redox.dir/REDOX_INTERFACE.cpp.o"

# External object files for target Redox
Redox_EXTERNAL_OBJECTS =

Redox: CMakeFiles/Redox.dir/REDOX_INTERFACE.cpp.o
Redox: CMakeFiles/Redox.dir/build.make
Redox: /usr/lib/aarch64-linux-gnu/libopencv_dnn.so.4.1.1
Redox: /usr/lib/aarch64-linux-gnu/libopencv_gapi.so.4.1.1
Redox: /usr/lib/aarch64-linux-gnu/libopencv_highgui.so.4.1.1
Redox: /usr/lib/aarch64-linux-gnu/libopencv_ml.so.4.1.1
Redox: /usr/lib/aarch64-linux-gnu/libopencv_objdetect.so.4.1.1
Redox: /usr/lib/aarch64-linux-gnu/libopencv_photo.so.4.1.1
Redox: /usr/lib/aarch64-linux-gnu/libopencv_stitching.so.4.1.1
Redox: /usr/lib/aarch64-linux-gnu/libopencv_video.so.4.1.1
Redox: /usr/lib/aarch64-linux-gnu/libopencv_videoio.so.4.1.1
Redox: /opt/ros/melodic/lib/librealsense2.so.2.50.0
Redox: /usr/local/lib/libSDL2.so
Redox: /opt/ros/melodic/lib/libtf.so
Redox: /opt/ros/melodic/lib/libtf2_ros.so
Redox: /opt/ros/melodic/lib/libactionlib.so
Redox: /opt/ros/melodic/lib/libtf2.so
Redox: /opt/ros/melodic/lib/libcv_bridge.so
Redox: /usr/lib/aarch64-linux-gnu/libopencv_core.so.3.2.0
Redox: /usr/lib/aarch64-linux-gnu/libopencv_imgproc.so.3.2.0
Redox: /usr/lib/aarch64-linux-gnu/libopencv_imgcodecs.so.3.2.0
Redox: /opt/ros/melodic/lib/libimage_transport.so
Redox: /opt/ros/melodic/lib/libmessage_filters.so
Redox: /opt/ros/melodic/lib/libclass_loader.so
Redox: /usr/lib/libPocoFoundation.so
Redox: /usr/lib/aarch64-linux-gnu/libdl.so
Redox: /opt/ros/melodic/lib/libroscpp.so
Redox: /opt/ros/melodic/lib/librosconsole.so
Redox: /opt/ros/melodic/lib/librosconsole_log4cxx.so
Redox: /opt/ros/melodic/lib/librosconsole_backend_interface.so
Redox: /usr/lib/aarch64-linux-gnu/liblog4cxx.so
Redox: /usr/lib/aarch64-linux-gnu/libboost_regex.so
Redox: /opt/ros/melodic/lib/libxmlrpcpp.so
Redox: /opt/ros/melodic/lib/libroslib.so
Redox: /opt/ros/melodic/lib/librospack.so
Redox: /usr/lib/aarch64-linux-gnu/libpython2.7.so
Redox: /usr/lib/aarch64-linux-gnu/libboost_filesystem.so
Redox: /usr/lib/aarch64-linux-gnu/libboost_program_options.so
Redox: /usr/lib/aarch64-linux-gnu/libtinyxml2.so
Redox: /opt/ros/melodic/lib/libroscpp_serialization.so
Redox: /opt/ros/melodic/lib/librostime.so
Redox: /opt/ros/melodic/lib/libcpp_common.so
Redox: /usr/lib/aarch64-linux-gnu/libboost_system.so
Redox: /usr/lib/aarch64-linux-gnu/libboost_thread.so
Redox: /usr/lib/aarch64-linux-gnu/libboost_chrono.so
Redox: /usr/lib/aarch64-linux-gnu/libboost_date_time.so
Redox: /usr/lib/aarch64-linux-gnu/libboost_atomic.so
Redox: /usr/lib/aarch64-linux-gnu/libpthread.so
Redox: /usr/lib/aarch64-linux-gnu/libconsole_bridge.so.0.4
Redox: /usr/lib/aarch64-linux-gnu/libopencv_imgcodecs.so.4.1.1
Redox: /usr/lib/aarch64-linux-gnu/libopencv_calib3d.so.4.1.1
Redox: /usr/lib/aarch64-linux-gnu/libopencv_features2d.so.4.1.1
Redox: /usr/lib/aarch64-linux-gnu/libopencv_flann.so.4.1.1
Redox: /usr/lib/aarch64-linux-gnu/libopencv_imgproc.so.4.1.1
Redox: /usr/lib/aarch64-linux-gnu/libopencv_core.so.4.1.1
Redox: CMakeFiles/Redox.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/insper/catkin_ws/src/REDOX-RoboCup-RMRC-Challenge/Machine Vision/Machine Vision/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Redox"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Redox.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Redox.dir/build: Redox
.PHONY : CMakeFiles/Redox.dir/build

CMakeFiles/Redox.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Redox.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Redox.dir/clean

CMakeFiles/Redox.dir/depend:
	cd "/home/insper/catkin_ws/src/REDOX-RoboCup-RMRC-Challenge/Machine Vision/Machine Vision/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/insper/catkin_ws/src/REDOX-RoboCup-RMRC-Challenge/Machine Vision/Machine Vision" "/home/insper/catkin_ws/src/REDOX-RoboCup-RMRC-Challenge/Machine Vision/Machine Vision" "/home/insper/catkin_ws/src/REDOX-RoboCup-RMRC-Challenge/Machine Vision/Machine Vision/build" "/home/insper/catkin_ws/src/REDOX-RoboCup-RMRC-Challenge/Machine Vision/Machine Vision/build" "/home/insper/catkin_ws/src/REDOX-RoboCup-RMRC-Challenge/Machine Vision/Machine Vision/build/CMakeFiles/Redox.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Redox.dir/depend

