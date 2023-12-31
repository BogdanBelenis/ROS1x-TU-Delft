// Generated by gencpp from file hrwros_week1_assignment/BoxHeightInformation.msg
// DO NOT EDIT!


#ifndef HRWROS_WEEK1_ASSIGNMENT_MESSAGE_BOXHEIGHTINFORMATION_H
#define HRWROS_WEEK1_ASSIGNMENT_MESSAGE_BOXHEIGHTINFORMATION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hrwros_week1_assignment
{
template <class ContainerAllocator>
struct BoxHeightInformation_
{
  typedef BoxHeightInformation_<ContainerAllocator> Type;

  BoxHeightInformation_()
    : box_height(0.0)  {
    }
  BoxHeightInformation_(const ContainerAllocator& _alloc)
    : box_height(0.0)  {
  (void)_alloc;
    }



   typedef double _box_height_type;
  _box_height_type box_height;





  typedef boost::shared_ptr< ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator> const> ConstPtr;

}; // struct BoxHeightInformation_

typedef ::hrwros_week1_assignment::BoxHeightInformation_<std::allocator<void> > BoxHeightInformation;

typedef boost::shared_ptr< ::hrwros_week1_assignment::BoxHeightInformation > BoxHeightInformationPtr;
typedef boost::shared_ptr< ::hrwros_week1_assignment::BoxHeightInformation const> BoxHeightInformationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator1> & lhs, const ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator2> & rhs)
{
  return lhs.box_height == rhs.box_height;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator1> & lhs, const ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hrwros_week1_assignment

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "709f751d567a4f5ed90345621271840c";
  }

  static const char* value(const ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x709f751d567a4f5eULL;
  static const uint64_t static_value2 = 0xd90345621271840cULL;
};

template<class ContainerAllocator>
struct DataType< ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hrwros_week1_assignment/BoxHeightInformation";
  }

  static const char* value(const ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 box_height      # Add your code for part 2 here\n"
;
  }

  static const char* value(const ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.box_height);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BoxHeightInformation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hrwros_week1_assignment::BoxHeightInformation_<ContainerAllocator>& v)
  {
    s << indent << "box_height: ";
    Printer<double>::stream(s, indent + "  ", v.box_height);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HRWROS_WEEK1_ASSIGNMENT_MESSAGE_BOXHEIGHTINFORMATION_H
