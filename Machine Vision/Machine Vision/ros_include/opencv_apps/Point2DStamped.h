// Generated by gencpp from file opencv_apps/Point2DStamped.msg
// DO NOT EDIT!


#ifndef OPENCV_APPS_MESSAGE_POINT2DSTAMPED_H
#define OPENCV_APPS_MESSAGE_POINT2DSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <opencv_apps/Point2D.h>

namespace opencv_apps
{
template <class ContainerAllocator>
struct Point2DStamped_
{
  typedef Point2DStamped_<ContainerAllocator> Type;

  Point2DStamped_()
    : header()
    , point()  {
    }
  Point2DStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , point(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::opencv_apps::Point2D_<ContainerAllocator>  _point_type;
  _point_type point;





  typedef boost::shared_ptr< ::opencv_apps::Point2DStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::opencv_apps::Point2DStamped_<ContainerAllocator> const> ConstPtr;

}; // struct Point2DStamped_

typedef ::opencv_apps::Point2DStamped_<std::allocator<void> > Point2DStamped;

typedef boost::shared_ptr< ::opencv_apps::Point2DStamped > Point2DStampedPtr;
typedef boost::shared_ptr< ::opencv_apps::Point2DStamped const> Point2DStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::opencv_apps::Point2DStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::opencv_apps::Point2DStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::opencv_apps::Point2DStamped_<ContainerAllocator1> & lhs, const ::opencv_apps::Point2DStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.point == rhs.point;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::opencv_apps::Point2DStamped_<ContainerAllocator1> & lhs, const ::opencv_apps::Point2DStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace opencv_apps

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::opencv_apps::Point2DStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::opencv_apps::Point2DStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::opencv_apps::Point2DStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::opencv_apps::Point2DStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::opencv_apps::Point2DStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::opencv_apps::Point2DStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::opencv_apps::Point2DStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9f7db918fde9989a73131d0d083d049d";
  }

  static const char* value(const ::opencv_apps::Point2DStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9f7db918fde9989aULL;
  static const uint64_t static_value2 = 0x73131d0d083d049dULL;
};

template<class ContainerAllocator>
struct DataType< ::opencv_apps::Point2DStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "opencv_apps/Point2DStamped";
  }

  static const char* value(const ::opencv_apps::Point2DStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::opencv_apps::Point2DStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"Point2D point\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: opencv_apps/Point2D\n"
"float64 x\n"
"float64 y\n"
"\n"
;
  }

  static const char* value(const ::opencv_apps::Point2DStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::opencv_apps::Point2DStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.point);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Point2DStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::opencv_apps::Point2DStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::opencv_apps::Point2DStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "point: ";
    s << std::endl;
    Printer< ::opencv_apps::Point2D_<ContainerAllocator> >::stream(s, indent + "  ", v.point);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPENCV_APPS_MESSAGE_POINT2DSTAMPED_H
