// Generated by gencpp from file webots_ros/skin_set_bone_positionRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_ROS_MESSAGE_SKIN_SET_BONE_POSITIONREQUEST_H
#define WEBOTS_ROS_MESSAGE_SKIN_SET_BONE_POSITIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>

namespace webots_ros
{
template <class ContainerAllocator>
struct skin_set_bone_positionRequest_
{
  typedef skin_set_bone_positionRequest_<ContainerAllocator> Type;

  skin_set_bone_positionRequest_()
    : index(0)
    , position()
    , absolute(false)  {
    }
  skin_set_bone_positionRequest_(const ContainerAllocator& _alloc)
    : index(0)
    , position(_alloc)
    , absolute(false)  {
  (void)_alloc;
    }



   typedef int32_t _index_type;
  _index_type index;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef uint8_t _absolute_type;
  _absolute_type absolute;





  typedef boost::shared_ptr< ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct skin_set_bone_positionRequest_

typedef ::webots_ros::skin_set_bone_positionRequest_<std::allocator<void> > skin_set_bone_positionRequest;

typedef boost::shared_ptr< ::webots_ros::skin_set_bone_positionRequest > skin_set_bone_positionRequestPtr;
typedef boost::shared_ptr< ::webots_ros::skin_set_bone_positionRequest const> skin_set_bone_positionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator1> & lhs, const ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.index == rhs.index &&
    lhs.position == rhs.position &&
    lhs.absolute == rhs.absolute;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator1> & lhs, const ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cb669e109e7c039fe81dcf06f935d3ba";
  }

  static const char* value(const ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcb669e109e7c039fULL;
  static const uint64_t static_value2 = 0xe81dcf06f935d3baULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/skin_set_bone_positionRequest";
  }

  static const char* value(const ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 index\n"
"geometry_msgs/Vector3 position\n"
"bool absolute\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.index);
      stream.next(m.position);
      stream.next(m.absolute);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct skin_set_bone_positionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::skin_set_bone_positionRequest_<ContainerAllocator>& v)
  {
    s << indent << "index: ";
    Printer<int32_t>::stream(s, indent + "  ", v.index);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "absolute: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.absolute);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SKIN_SET_BONE_POSITIONREQUEST_H
