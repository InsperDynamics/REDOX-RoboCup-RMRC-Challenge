// Generated by gencpp from file gazebo_video_monitor_msgs/SetCameraRequest.msg
// DO NOT EDIT!


#ifndef GAZEBO_VIDEO_MONITOR_MSGS_MESSAGE_SETCAMERAREQUEST_H
#define GAZEBO_VIDEO_MONITOR_MSGS_MESSAGE_SETCAMERAREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <gazebo_video_monitor_msgs/Pose.h>

namespace gazebo_video_monitor_msgs
{
template <class ContainerAllocator>
struct SetCameraRequest_
{
  typedef SetCameraRequest_<ContainerAllocator> Type;

  SetCameraRequest_()
    : camera_name()
    , model_name()
    , link_name()
    , pose()  {
    }
  SetCameraRequest_(const ContainerAllocator& _alloc)
    : camera_name(_alloc)
    , model_name(_alloc)
    , link_name(_alloc)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _camera_name_type;
  _camera_name_type camera_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _model_name_type;
  _model_name_type model_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _link_name_type;
  _link_name_type link_name;

   typedef  ::gazebo_video_monitor_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetCameraRequest_

typedef ::gazebo_video_monitor_msgs::SetCameraRequest_<std::allocator<void> > SetCameraRequest;

typedef boost::shared_ptr< ::gazebo_video_monitor_msgs::SetCameraRequest > SetCameraRequestPtr;
typedef boost::shared_ptr< ::gazebo_video_monitor_msgs::SetCameraRequest const> SetCameraRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator1> & lhs, const ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator2> & rhs)
{
  return lhs.camera_name == rhs.camera_name &&
    lhs.model_name == rhs.model_name &&
    lhs.link_name == rhs.link_name &&
    lhs.pose == rhs.pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator1> & lhs, const ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gazebo_video_monitor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "98475cecaed8f541fffaaaa7c73e6f40";
  }

  static const char* value(const ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x98475cecaed8f541ULL;
  static const uint64_t static_value2 = 0xfffaaaa7c73e6f40ULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_video_monitor_msgs/SetCameraRequest";
  }

  static const char* value(const ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string camera_name                   # Name of the camera (as given in the SDF description)\n"
"string model_name                    # Name of the model with which to associate the camera. If empty, the camera is attached to the world model (see multicamera bootstrapper)\n"
"string link_name                     # Name of the link to which to attach the camera\n"
"gazebo_video_monitor_msgs/Pose pose  # Pose relative to the parent link\n"
"\n"
"================================================================================\n"
"MSG: gazebo_video_monitor_msgs/Pose\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 roll\n"
"float64 pitch\n"
"float64 yaw\n"
;
  }

  static const char* value(const ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.camera_name);
      stream.next(m.model_name);
      stream.next(m.link_name);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetCameraRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_video_monitor_msgs::SetCameraRequest_<ContainerAllocator>& v)
  {
    s << indent << "camera_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.camera_name);
    s << indent << "model_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.model_name);
    s << indent << "link_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.link_name);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::gazebo_video_monitor_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_VIDEO_MONITOR_MSGS_MESSAGE_SETCAMERAREQUEST_H