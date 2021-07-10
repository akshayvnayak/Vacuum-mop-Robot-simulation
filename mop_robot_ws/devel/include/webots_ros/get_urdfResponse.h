// Generated by gencpp from file webots_ros/get_urdfResponse.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_GET_URDFRESPONSE_H
#define WEBOTS_ROS_MESSAGE_GET_URDFRESPONSE_H


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
struct get_urdfResponse_
{
  typedef get_urdfResponse_<ContainerAllocator> Type;

  get_urdfResponse_()
    : value()  {
    }
  get_urdfResponse_(const ContainerAllocator& _alloc)
    : value(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::webots_ros::get_urdfResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::get_urdfResponse_<ContainerAllocator> const> ConstPtr;

}; // struct get_urdfResponse_

typedef ::webots_ros::get_urdfResponse_<std::allocator<void> > get_urdfResponse;

typedef boost::shared_ptr< ::webots_ros::get_urdfResponse > get_urdfResponsePtr;
typedef boost::shared_ptr< ::webots_ros::get_urdfResponse const> get_urdfResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::get_urdfResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::get_urdfResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_ros::get_urdfResponse_<ContainerAllocator1> & lhs, const ::webots_ros::get_urdfResponse_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_ros::get_urdfResponse_<ContainerAllocator1> & lhs, const ::webots_ros::get_urdfResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_ros::get_urdfResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::get_urdfResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::get_urdfResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::get_urdfResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::get_urdfResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::get_urdfResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::get_urdfResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "64e58419496c7248b4ef25731f88b8c3";
  }

  static const char* value(const ::webots_ros::get_urdfResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x64e58419496c7248ULL;
  static const uint64_t static_value2 = 0xb4ef25731f88b8c3ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::get_urdfResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/get_urdfResponse";
  }

  static const char* value(const ::webots_ros::get_urdfResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::get_urdfResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string value\n"
"\n"
;
  }

  static const char* value(const ::webots_ros::get_urdfResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::get_urdfResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct get_urdfResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::get_urdfResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::get_urdfResponse_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_GET_URDFRESPONSE_H
