// Generated by gencpp from file webots_ros/skin_set_bone_orientationRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_SKIN_SET_BONE_ORIENTATIONREQUEST_H
#define WEBOTS_ROS_MESSAGE_SKIN_SET_BONE_ORIENTATIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Quaternion.h>

namespace webots_ros
{
template <class ContainerAllocator>
struct skin_set_bone_orientationRequest_
{
  typedef skin_set_bone_orientationRequest_<ContainerAllocator> Type;

  skin_set_bone_orientationRequest_()
    : index(0)
    , orientation()
    , absolute(false)  {
    }
  skin_set_bone_orientationRequest_(const ContainerAllocator& _alloc)
    : index(0)
    , orientation(_alloc)
    , absolute(false)  {
  (void)_alloc;
    }



   typedef int32_t _index_type;
  _index_type index;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;

   typedef uint8_t _absolute_type;
  _absolute_type absolute;





  typedef boost::shared_ptr< ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct skin_set_bone_orientationRequest_

typedef ::webots_ros::skin_set_bone_orientationRequest_<std::allocator<void> > skin_set_bone_orientationRequest;

typedef boost::shared_ptr< ::webots_ros::skin_set_bone_orientationRequest > skin_set_bone_orientationRequestPtr;
typedef boost::shared_ptr< ::webots_ros::skin_set_bone_orientationRequest const> skin_set_bone_orientationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator1> & lhs, const ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator2> & rhs)
{
  return lhs.index == rhs.index &&
    lhs.orientation == rhs.orientation &&
    lhs.absolute == rhs.absolute;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator1> & lhs, const ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a6867b70ac9d0b31fe274f3b1674e6a4";
  }

  static const char* value(const ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa6867b70ac9d0b31ULL;
  static const uint64_t static_value2 = 0xfe274f3b1674e6a4ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/skin_set_bone_orientationRequest";
  }

  static const char* value(const ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 index\n"
"geometry_msgs/Quaternion orientation\n"
"bool absolute\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.index);
      stream.next(m.orientation);
      stream.next(m.absolute);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct skin_set_bone_orientationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::skin_set_bone_orientationRequest_<ContainerAllocator>& v)
  {
    s << indent << "index: ";
    Printer<int32_t>::stream(s, indent + "  ", v.index);
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
    s << indent << "absolute: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.absolute);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SKIN_SET_BONE_ORIENTATIONREQUEST_H
