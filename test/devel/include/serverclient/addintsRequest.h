// Generated by gencpp from file serverclient/addintsRequest.msg
// DO NOT EDIT!


#ifndef SERVERCLIENT_MESSAGE_ADDINTSREQUEST_H
#define SERVERCLIENT_MESSAGE_ADDINTSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace serverclient
{
template <class ContainerAllocator>
struct addintsRequest_
{
  typedef addintsRequest_<ContainerAllocator> Type;

  addintsRequest_()
    : num1(0)
    , num2(0)  {
    }
  addintsRequest_(const ContainerAllocator& _alloc)
    : num1(0)
    , num2(0)  {
  (void)_alloc;
    }



   typedef int32_t _num1_type;
  _num1_type num1;

   typedef int32_t _num2_type;
  _num2_type num2;





  typedef boost::shared_ptr< ::serverclient::addintsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::serverclient::addintsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct addintsRequest_

typedef ::serverclient::addintsRequest_<std::allocator<void> > addintsRequest;

typedef boost::shared_ptr< ::serverclient::addintsRequest > addintsRequestPtr;
typedef boost::shared_ptr< ::serverclient::addintsRequest const> addintsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::serverclient::addintsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::serverclient::addintsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::serverclient::addintsRequest_<ContainerAllocator1> & lhs, const ::serverclient::addintsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.num1 == rhs.num1 &&
    lhs.num2 == rhs.num2;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::serverclient::addintsRequest_<ContainerAllocator1> & lhs, const ::serverclient::addintsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace serverclient

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::serverclient::addintsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::serverclient::addintsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::serverclient::addintsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::serverclient::addintsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serverclient::addintsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serverclient::addintsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::serverclient::addintsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c68f3979e1a90aac7d1c75a1096d1e60";
  }

  static const char* value(const ::serverclient::addintsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc68f3979e1a90aacULL;
  static const uint64_t static_value2 = 0x7d1c75a1096d1e60ULL;
};

template<class ContainerAllocator>
struct DataType< ::serverclient::addintsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "serverclient/addintsRequest";
  }

  static const char* value(const ::serverclient::addintsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::serverclient::addintsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 num1\n"
"int32 num2\n"
"\n"
;
  }

  static const char* value(const ::serverclient::addintsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::serverclient::addintsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.num1);
      stream.next(m.num2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct addintsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::serverclient::addintsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::serverclient::addintsRequest_<ContainerAllocator>& v)
  {
    s << indent << "num1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num1);
    s << indent << "num2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERVERCLIENT_MESSAGE_ADDINTSREQUEST_H
