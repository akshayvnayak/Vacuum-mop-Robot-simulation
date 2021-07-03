// Generated by gencpp from file webots_ros/robot_wait_for_user_input_eventRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_ROBOT_WAIT_FOR_USER_INPUT_EVENTREQUEST_H
#define WEBOTS_ROS_MESSAGE_ROBOT_WAIT_FOR_USER_INPUT_EVENTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace webots_ros
{
template <class ContainerAllocator>
struct robot_wait_for_user_input_eventRequest_
{
  typedef robot_wait_for_user_input_eventRequest_<ContainerAllocator> Type;

  robot_wait_for_user_input_eventRequest_()
    : eventType(0)
    , timeout(0)  {
    }
  robot_wait_for_user_input_eventRequest_(const ContainerAllocator& _alloc)
    : eventType(0)
    , timeout(0)  {
  (void)_alloc;
    }



   typedef int32_t _eventType_type;
  _eventType_type eventType;

   typedef int32_t _timeout_type;
  _timeout_type timeout;





  typedef boost::shared_ptr< ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator> const> ConstPtr;

}; // struct robot_wait_for_user_input_eventRequest_

typedef ::webots_ros::robot_wait_for_user_input_eventRequest_<std::allocator<void> > robot_wait_for_user_input_eventRequest;

typedef boost::shared_ptr< ::webots_ros::robot_wait_for_user_input_eventRequest > robot_wait_for_user_input_eventRequestPtr;
typedef boost::shared_ptr< ::webots_ros::robot_wait_for_user_input_eventRequest const> robot_wait_for_user_input_eventRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator1> & lhs, const ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator2> & rhs)
{
  return lhs.eventType == rhs.eventType &&
    lhs.timeout == rhs.timeout;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator1> & lhs, const ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3e70b4ac6cfb42776e6d4bc21b66e815";
  }

  static const char* value(const ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3e70b4ac6cfb4277ULL;
  static const uint64_t static_value2 = 0x6e6d4bc21b66e815ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/robot_wait_for_user_input_eventRequest";
  }

  static const char* value(const ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 eventType\n"
"int32 timeout\n"
;
  }

  static const char* value(const ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.eventType);
      stream.next(m.timeout);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct robot_wait_for_user_input_eventRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::robot_wait_for_user_input_eventRequest_<ContainerAllocator>& v)
  {
    s << indent << "eventType: ";
    Printer<int32_t>::stream(s, indent + "  ", v.eventType);
    s << indent << "timeout: ";
    Printer<int32_t>::stream(s, indent + "  ", v.timeout);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_WAIT_FOR_USER_INPUT_EVENTREQUEST_H
