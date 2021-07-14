// Generated by gencpp from file webots_ros/lidar_get_layer_point_cloudRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_LIDAR_GET_LAYER_POINT_CLOUDREQUEST_H
#define WEBOTS_ROS_MESSAGE_LIDAR_GET_LAYER_POINT_CLOUDREQUEST_H


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
struct lidar_get_layer_point_cloudRequest_
{
  typedef lidar_get_layer_point_cloudRequest_<ContainerAllocator> Type;

  lidar_get_layer_point_cloudRequest_()
    : layer(0)  {
    }
  lidar_get_layer_point_cloudRequest_(const ContainerAllocator& _alloc)
    : layer(0)  {
  (void)_alloc;
    }



   typedef int32_t _layer_type;
  _layer_type layer;





  typedef boost::shared_ptr< ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator> const> ConstPtr;

}; // struct lidar_get_layer_point_cloudRequest_

typedef ::webots_ros::lidar_get_layer_point_cloudRequest_<std::allocator<void> > lidar_get_layer_point_cloudRequest;

typedef boost::shared_ptr< ::webots_ros::lidar_get_layer_point_cloudRequest > lidar_get_layer_point_cloudRequestPtr;
typedef boost::shared_ptr< ::webots_ros::lidar_get_layer_point_cloudRequest const> lidar_get_layer_point_cloudRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator1> & lhs, const ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator2> & rhs)
{
  return lhs.layer == rhs.layer;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator1> & lhs, const ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0d6c1c0236296850b6361a672e8a61c4";
  }

  static const char* value(const ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0d6c1c0236296850ULL;
  static const uint64_t static_value2 = 0xb6361a672e8a61c4ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/lidar_get_layer_point_cloudRequest";
  }

  static const char* value(const ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 layer\n"
;
  }

  static const char* value(const ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.layer);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct lidar_get_layer_point_cloudRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::lidar_get_layer_point_cloudRequest_<ContainerAllocator>& v)
  {
    s << indent << "layer: ";
    Printer<int32_t>::stream(s, indent + "  ", v.layer);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_LIDAR_GET_LAYER_POINT_CLOUDREQUEST_H
