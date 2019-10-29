// Generated by gencpp from file deeprotor_simulation_environment/ResetDroneSrv.msg
// DO NOT EDIT!


#ifndef DEEPROTOR_SIMULATION_ENVIRONMENT_MESSAGE_RESETDRONESRV_H
#define DEEPROTOR_SIMULATION_ENVIRONMENT_MESSAGE_RESETDRONESRV_H

#include <ros/service_traits.h>


#include <deeprotor_simulation_environment/ResetDroneSrvRequest.h>
#include <deeprotor_simulation_environment/ResetDroneSrvResponse.h>


namespace deeprotor_simulation_environment
{

struct ResetDroneSrv
{

typedef ResetDroneSrvRequest Request;
typedef ResetDroneSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ResetDroneSrv
} // namespace deeprotor_simulation_environment


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::deeprotor_simulation_environment::ResetDroneSrv > {
  static const char* value()
  {
    return "51459ac9873b166b6314083bf1771edb";
  }

  static const char* value(const ::deeprotor_simulation_environment::ResetDroneSrv&) { return value(); }
};

template<>
struct DataType< ::deeprotor_simulation_environment::ResetDroneSrv > {
  static const char* value()
  {
    return "deeprotor_simulation_environment/ResetDroneSrv";
  }

  static const char* value(const ::deeprotor_simulation_environment::ResetDroneSrv&) { return value(); }
};


// service_traits::MD5Sum< ::deeprotor_simulation_environment::ResetDroneSrvRequest> should match 
// service_traits::MD5Sum< ::deeprotor_simulation_environment::ResetDroneSrv > 
template<>
struct MD5Sum< ::deeprotor_simulation_environment::ResetDroneSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::deeprotor_simulation_environment::ResetDroneSrv >::value();
  }
  static const char* value(const ::deeprotor_simulation_environment::ResetDroneSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::deeprotor_simulation_environment::ResetDroneSrvRequest> should match 
// service_traits::DataType< ::deeprotor_simulation_environment::ResetDroneSrv > 
template<>
struct DataType< ::deeprotor_simulation_environment::ResetDroneSrvRequest>
{
  static const char* value()
  {
    return DataType< ::deeprotor_simulation_environment::ResetDroneSrv >::value();
  }
  static const char* value(const ::deeprotor_simulation_environment::ResetDroneSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::deeprotor_simulation_environment::ResetDroneSrvResponse> should match 
// service_traits::MD5Sum< ::deeprotor_simulation_environment::ResetDroneSrv > 
template<>
struct MD5Sum< ::deeprotor_simulation_environment::ResetDroneSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::deeprotor_simulation_environment::ResetDroneSrv >::value();
  }
  static const char* value(const ::deeprotor_simulation_environment::ResetDroneSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::deeprotor_simulation_environment::ResetDroneSrvResponse> should match 
// service_traits::DataType< ::deeprotor_simulation_environment::ResetDroneSrv > 
template<>
struct DataType< ::deeprotor_simulation_environment::ResetDroneSrvResponse>
{
  static const char* value()
  {
    return DataType< ::deeprotor_simulation_environment::ResetDroneSrv >::value();
  }
  static const char* value(const ::deeprotor_simulation_environment::ResetDroneSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DEEPROTOR_SIMULATION_ENVIRONMENT_MESSAGE_RESETDRONESRV_H
