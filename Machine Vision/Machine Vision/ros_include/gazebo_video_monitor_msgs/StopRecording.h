// Generated by gencpp from file gazebo_video_monitor_msgs/StopRecording.msg
// DO NOT EDIT!


#ifndef GAZEBO_VIDEO_MONITOR_MSGS_MESSAGE_STOPRECORDING_H
#define GAZEBO_VIDEO_MONITOR_MSGS_MESSAGE_STOPRECORDING_H

#include <ros/service_traits.h>


#include <gazebo_video_monitor_msgs/StopRecordingRequest.h>
#include <gazebo_video_monitor_msgs/StopRecordingResponse.h>


namespace gazebo_video_monitor_msgs
{

struct StopRecording
{

typedef StopRecordingRequest Request;
typedef StopRecordingResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StopRecording
} // namespace gazebo_video_monitor_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::gazebo_video_monitor_msgs::StopRecording > {
  static const char* value()
  {
    return "12af5eb2981292046a496c1fb4ba5e7a";
  }

  static const char* value(const ::gazebo_video_monitor_msgs::StopRecording&) { return value(); }
};

template<>
struct DataType< ::gazebo_video_monitor_msgs::StopRecording > {
  static const char* value()
  {
    return "gazebo_video_monitor_msgs/StopRecording";
  }

  static const char* value(const ::gazebo_video_monitor_msgs::StopRecording&) { return value(); }
};


// service_traits::MD5Sum< ::gazebo_video_monitor_msgs::StopRecordingRequest> should match
// service_traits::MD5Sum< ::gazebo_video_monitor_msgs::StopRecording >
template<>
struct MD5Sum< ::gazebo_video_monitor_msgs::StopRecordingRequest>
{
  static const char* value()
  {
    return MD5Sum< ::gazebo_video_monitor_msgs::StopRecording >::value();
  }
  static const char* value(const ::gazebo_video_monitor_msgs::StopRecordingRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::gazebo_video_monitor_msgs::StopRecordingRequest> should match
// service_traits::DataType< ::gazebo_video_monitor_msgs::StopRecording >
template<>
struct DataType< ::gazebo_video_monitor_msgs::StopRecordingRequest>
{
  static const char* value()
  {
    return DataType< ::gazebo_video_monitor_msgs::StopRecording >::value();
  }
  static const char* value(const ::gazebo_video_monitor_msgs::StopRecordingRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::gazebo_video_monitor_msgs::StopRecordingResponse> should match
// service_traits::MD5Sum< ::gazebo_video_monitor_msgs::StopRecording >
template<>
struct MD5Sum< ::gazebo_video_monitor_msgs::StopRecordingResponse>
{
  static const char* value()
  {
    return MD5Sum< ::gazebo_video_monitor_msgs::StopRecording >::value();
  }
  static const char* value(const ::gazebo_video_monitor_msgs::StopRecordingResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::gazebo_video_monitor_msgs::StopRecordingResponse> should match
// service_traits::DataType< ::gazebo_video_monitor_msgs::StopRecording >
template<>
struct DataType< ::gazebo_video_monitor_msgs::StopRecordingResponse>
{
  static const char* value()
  {
    return DataType< ::gazebo_video_monitor_msgs::StopRecording >::value();
  }
  static const char* value(const ::gazebo_video_monitor_msgs::StopRecordingResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GAZEBO_VIDEO_MONITOR_MSGS_MESSAGE_STOPRECORDING_H
