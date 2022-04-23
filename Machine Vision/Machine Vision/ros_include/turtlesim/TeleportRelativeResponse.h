// Generated by gencpp from file turtlesim/TeleportRelativeResponse.msg
// DO NOT EDIT!


#ifndef TURTLESIM_MESSAGE_TELEPORTRELATIVERESPONSE_H
#define TURTLESIM_MESSAGE_TELEPORTRELATIVERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlesim
{
template <class ContainerAllocator>
struct TeleportRelativeResponse_
{
  typedef TeleportRelativeResponse_<ContainerAllocator> Type;

  TeleportRelativeResponse_()
    {
    }
  TeleportRelativeResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::turtlesim::TeleportRelativeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlesim::TeleportRelativeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TeleportRelativeResponse_

typedef ::turtlesim::TeleportRelativeResponse_<std::allocator<void> > TeleportRelativeResponse;

typedef boost::shared_ptr< ::turtlesim::TeleportRelativeResponse > TeleportRelativeResponsePtr;
typedef boost::shared_ptr< ::turtlesim::TeleportRelativeResponse const> TeleportRelativeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlesim::TeleportRelativeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlesim::TeleportRelativeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace turtlesim

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::turtlesim::TeleportRelativeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim::TeleportRelativeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim::TeleportRelativeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim::TeleportRelativeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim::TeleportRelativeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim::TeleportRelativeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlesim::TeleportRelativeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::turtlesim::TeleportRelativeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlesim::TeleportRelativeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlesim/TeleportRelativeResponse";
  }

  static const char* value(const ::turtlesim::TeleportRelativeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlesim::TeleportRelativeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::turtlesim::TeleportRelativeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlesim::TeleportRelativeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TeleportRelativeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlesim::TeleportRelativeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::turtlesim::TeleportRelativeResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // TURTLESIM_MESSAGE_TELEPORTRELATIVERESPONSE_H
