// Generated by gencpp from file opencv_apps/ContourArray.msg
// DO NOT EDIT!


#ifndef OPENCV_APPS_MESSAGE_CONTOURARRAY_H
#define OPENCV_APPS_MESSAGE_CONTOURARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <opencv_apps/Contour.h>

namespace opencv_apps
{
template <class ContainerAllocator>
struct ContourArray_
{
  typedef ContourArray_<ContainerAllocator> Type;

  ContourArray_()
    : contours()  {
    }
  ContourArray_(const ContainerAllocator& _alloc)
    : contours(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::opencv_apps::Contour_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::opencv_apps::Contour_<ContainerAllocator> >::other >  _contours_type;
  _contours_type contours;





  typedef boost::shared_ptr< ::opencv_apps::ContourArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::opencv_apps::ContourArray_<ContainerAllocator> const> ConstPtr;

}; // struct ContourArray_

typedef ::opencv_apps::ContourArray_<std::allocator<void> > ContourArray;

typedef boost::shared_ptr< ::opencv_apps::ContourArray > ContourArrayPtr;
typedef boost::shared_ptr< ::opencv_apps::ContourArray const> ContourArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::opencv_apps::ContourArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::opencv_apps::ContourArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::opencv_apps::ContourArray_<ContainerAllocator1> & lhs, const ::opencv_apps::ContourArray_<ContainerAllocator2> & rhs)
{
  return lhs.contours == rhs.contours;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::opencv_apps::ContourArray_<ContainerAllocator1> & lhs, const ::opencv_apps::ContourArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace opencv_apps

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::opencv_apps::ContourArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::opencv_apps::ContourArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::opencv_apps::ContourArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::opencv_apps::ContourArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::opencv_apps::ContourArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::opencv_apps::ContourArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::opencv_apps::ContourArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fc54374f45559dfed248b316ccf9181d";
  }

  static const char* value(const ::opencv_apps::ContourArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfc54374f45559dfeULL;
  static const uint64_t static_value2 = 0xd248b316ccf9181dULL;
};

template<class ContainerAllocator>
struct DataType< ::opencv_apps::ContourArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "opencv_apps/ContourArray";
  }

  static const char* value(const ::opencv_apps::ContourArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::opencv_apps::ContourArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Contour[] contours\n"
"\n"
"================================================================================\n"
"MSG: opencv_apps/Contour\n"
"Point2D[] points\n"
"\n"
"================================================================================\n"
"MSG: opencv_apps/Point2D\n"
"float64 x\n"
"float64 y\n"
"\n"
;
  }

  static const char* value(const ::opencv_apps::ContourArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::opencv_apps::ContourArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.contours);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ContourArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::opencv_apps::ContourArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::opencv_apps::ContourArray_<ContainerAllocator>& v)
  {
    s << indent << "contours[]" << std::endl;
    for (size_t i = 0; i < v.contours.size(); ++i)
    {
      s << indent << "  contours[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::opencv_apps::Contour_<ContainerAllocator> >::stream(s, indent + "    ", v.contours[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPENCV_APPS_MESSAGE_CONTOURARRAY_H
