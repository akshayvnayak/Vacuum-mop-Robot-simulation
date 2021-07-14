// Generated by gencpp from file webots_ros/node_set_velocityResponse.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_NODE_SET_VELOCITYRESPONSE_H
#define WEBOTS_ROS_MESSAGE_NODE_SET_VELOCITYRESPONSE_H


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
struct node_set_velocityResponse_
{
  typedef node_set_velocityResponse_<ContainerAllocator> Type;

  node_set_velocityResponse_()
    : success(0)  {
    }
  node_set_velocityResponse_(const ContainerAllocator& _alloc)
    : success(0)  {
  (void)_alloc;
    }



   typedef int32_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::webots_ros::node_set_velocityResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::node_set_velocityResponse_<ContainerAllocator> const> ConstPtr;

}; // struct node_set_velocityResponse_

typedef ::webots_ros::node_set_velocityResponse_<std::allocator<void> > node_set_velocityResponse;

typedef boost::shared_ptr< ::webots_ros::node_set_velocityResponse > node_set_velocityResponsePtr;
typedef boost::shared_ptr< ::webots_ros::node_set_velocityResponse const> node_set_velocityResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::node_set_velocityResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::node_set_velocityResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_ros::node_set_velocityResponse_<ContainerAllocator1> & lhs, const ::webots_ros::node_set_velocityResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_ros::node_set_velocityResponse_<ContainerAllocator1> & lhs, const ::webots_ros::node_set_velocityResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_ros::node_set_velocityResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::node_set_velocityResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::node_set_velocityResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::node_set_velocityResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::node_set_velocityResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::node_set_velocityResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::node_set_velocityResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3c2bcf2ff0894cb3058b1bf4c8c4175a";
  }

  static const char* value(const ::webots_ros::node_set_velocityResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3c2bcf2ff0894cb3ULL;
  static const uint64_t static_value2 = 0x058b1bf4c8c4175aULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::node_set_velocityResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/node_set_velocityResponse";
  }

  static const char* value(const ::webots_ros::node_set_velocityResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::node_set_velocityResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 success\n"
"\n"
;
  }

  static const char* value(const ::webots_ros::node_set_velocityResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::node_set_velocityResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_set_velocityResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::node_set_velocityResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::node_set_velocityResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<int32_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_SET_VELOCITYRESPONSE_H
