// Generated by gencpp from file object_recognition_msgs/ObjectRecognitionActionGoal.msg
// DO NOT EDIT!


#ifndef OBJECT_RECOGNITION_MSGS_MESSAGE_OBJECTRECOGNITIONACTIONGOAL_H
#define OBJECT_RECOGNITION_MSGS_MESSAGE_OBJECTRECOGNITIONACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <object_recognition_msgs/ObjectRecognitionGoal.h>

namespace object_recognition_msgs
{
template <class ContainerAllocator>
struct ObjectRecognitionActionGoal_
{
  typedef ObjectRecognitionActionGoal_<ContainerAllocator> Type;

  ObjectRecognitionActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  ObjectRecognitionActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::object_recognition_msgs::ObjectRecognitionGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectRecognitionActionGoal_

typedef ::object_recognition_msgs::ObjectRecognitionActionGoal_<std::allocator<void> > ObjectRecognitionActionGoal;

typedef boost::shared_ptr< ::object_recognition_msgs::ObjectRecognitionActionGoal > ObjectRecognitionActionGoalPtr;
typedef boost::shared_ptr< ::object_recognition_msgs::ObjectRecognitionActionGoal const> ObjectRecognitionActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator1> & lhs, const ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator1> & lhs, const ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace object_recognition_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "195eff91387a5f42dbd13be53431366b";
  }

  static const char* value(const ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x195eff91387a5f42ULL;
  static const uint64_t static_value2 = 0xdbd13be53431366bULL;
};

template<class ContainerAllocator>
struct DataType< ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "object_recognition_msgs/ObjectRecognitionActionGoal";
  }

  static const char* value(const ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"ObjectRecognitionGoal goal\n"
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
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: object_recognition_msgs/ObjectRecognitionGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Optional ROI to use for the object detection\n"
"bool use_roi\n"
"float32[] filter_limits\n"
;
  }

  static const char* value(const ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObjectRecognitionActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::object_recognition_msgs::ObjectRecognitionActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::object_recognition_msgs::ObjectRecognitionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OBJECT_RECOGNITION_MSGS_MESSAGE_OBJECTRECOGNITIONACTIONGOAL_H