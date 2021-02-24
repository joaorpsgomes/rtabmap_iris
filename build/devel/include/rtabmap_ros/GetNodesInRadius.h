// Generated by gencpp from file rtabmap_ros/GetNodesInRadius.msg
// DO NOT EDIT!


#ifndef RTABMAP_ROS_MESSAGE_GETNODESINRADIUS_H
#define RTABMAP_ROS_MESSAGE_GETNODESINRADIUS_H

#include <ros/service_traits.h>


#include <rtabmap_ros/GetNodesInRadiusRequest.h>
#include <rtabmap_ros/GetNodesInRadiusResponse.h>


namespace rtabmap_ros
{

struct GetNodesInRadius
{

typedef GetNodesInRadiusRequest Request;
typedef GetNodesInRadiusResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetNodesInRadius
} // namespace rtabmap_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rtabmap_ros::GetNodesInRadius > {
  static const char* value()
  {
    return "d9919b4d20cd8ddf742167d34c6d6eca";
  }

  static const char* value(const ::rtabmap_ros::GetNodesInRadius&) { return value(); }
};

template<>
struct DataType< ::rtabmap_ros::GetNodesInRadius > {
  static const char* value()
  {
    return "rtabmap_ros/GetNodesInRadius";
  }

  static const char* value(const ::rtabmap_ros::GetNodesInRadius&) { return value(); }
};


// service_traits::MD5Sum< ::rtabmap_ros::GetNodesInRadiusRequest> should match
// service_traits::MD5Sum< ::rtabmap_ros::GetNodesInRadius >
template<>
struct MD5Sum< ::rtabmap_ros::GetNodesInRadiusRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rtabmap_ros::GetNodesInRadius >::value();
  }
  static const char* value(const ::rtabmap_ros::GetNodesInRadiusRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rtabmap_ros::GetNodesInRadiusRequest> should match
// service_traits::DataType< ::rtabmap_ros::GetNodesInRadius >
template<>
struct DataType< ::rtabmap_ros::GetNodesInRadiusRequest>
{
  static const char* value()
  {
    return DataType< ::rtabmap_ros::GetNodesInRadius >::value();
  }
  static const char* value(const ::rtabmap_ros::GetNodesInRadiusRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rtabmap_ros::GetNodesInRadiusResponse> should match
// service_traits::MD5Sum< ::rtabmap_ros::GetNodesInRadius >
template<>
struct MD5Sum< ::rtabmap_ros::GetNodesInRadiusResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rtabmap_ros::GetNodesInRadius >::value();
  }
  static const char* value(const ::rtabmap_ros::GetNodesInRadiusResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rtabmap_ros::GetNodesInRadiusResponse> should match
// service_traits::DataType< ::rtabmap_ros::GetNodesInRadius >
template<>
struct DataType< ::rtabmap_ros::GetNodesInRadiusResponse>
{
  static const char* value()
  {
    return DataType< ::rtabmap_ros::GetNodesInRadius >::value();
  }
  static const char* value(const ::rtabmap_ros::GetNodesInRadiusResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // RTABMAP_ROS_MESSAGE_GETNODESINRADIUS_H
