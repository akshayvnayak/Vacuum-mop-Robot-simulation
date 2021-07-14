// Generated by gencpp from file webots_ros/get_urdfRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_GET_URDFREQUEST_H
#define WEBOTS_ROS_MESSAGE_GET_URDFREQUEST_H


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
struct get_urdfRequest_
{
  typedef get_urdfRequest_<ContainerAllocator> Type;

  get_urdfRequest_()
    : prefix()  {
    }
  get_urdfRequest_(const ContainerAllocator& _alloc)
    : prefix(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _prefix_type;
  _prefix_type prefix;





  typedef boost::shared_ptr< ::webots_ros::get_urdfRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::get_urdfRequest_<ContainerAllocator> const> ConstPtr;

}; // struct get_urdfRequest_

typedef ::webots_ros::get_urdfRequest_<std::allocator<void> > get_urdfRequest;

typedef boost::shared_ptr< ::webots_ros::get_urdfRequest > get_urdfRequestPtr;
typedef boost::shared_ptr< ::webots_ros::get_urdfRequest const> get_urdfRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::get_urdfRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::get_urdfRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_ros::get_urdfRequest_<ContainerAllocator1> & lhs, const ::webots_ros::get_urdfRequest_<ContainerAllocator2> & rhs)
{
  return lhs.prefix == rhs.prefix;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_ros::get_urdfRequest_<ContainerAllocator1> & lhs, const ::webots_ros::get_urdfRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_ros::get_urdfRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::get_urdfRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::get_urdfRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::get_urdfRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::get_urdfRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::get_urdfRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::get_urdfRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8a471f61d96890d8f43bc26d6b147ee7";
  }

  static const char* value(const ::webots_ros::get_urdfRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8a471f61d96890d8ULL;
  static const uint64_t static_value2 = 0xf43bc26d6b147ee7ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::get_urdfRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/get_urdfRequest";
  }

  static const char* value(const ::webots_ros::get_urdfRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::get_urdfRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string prefix\n"
;
  }

  static const char* value(const ::webots_ros::get_urdfRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::get_urdfRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.prefix);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct get_urdfRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::get_urdfRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::get_urdfRequest_<ContainerAllocator>& v)
  {
    s << indent << "prefix: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.prefix);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_GET_URDFREQUEST_H
