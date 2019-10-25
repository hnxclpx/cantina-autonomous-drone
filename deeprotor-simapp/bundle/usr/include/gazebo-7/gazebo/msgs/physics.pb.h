// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: physics.proto

#ifndef PROTOBUF_physics_2eproto__INCLUDED
#define PROTOBUF_physics_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "vector3d.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void GZ_MSGS_VISIBLE protobuf_AddDesc_physics_2eproto();
void protobuf_AssignDesc_physics_2eproto();
void protobuf_ShutdownFile_physics_2eproto();

class Physics;

enum Physics_Type {
  Physics_Type_ODE = 1,
  Physics_Type_BULLET = 2,
  Physics_Type_SIMBODY = 3,
  Physics_Type_DART = 4
};
GZ_MSGS_VISIBLE bool Physics_Type_IsValid(int value);
const Physics_Type Physics_Type_Type_MIN = Physics_Type_ODE;
const Physics_Type Physics_Type_Type_MAX = Physics_Type_DART;
const int Physics_Type_Type_ARRAYSIZE = Physics_Type_Type_MAX + 1;

GZ_MSGS_VISIBLE const ::google::protobuf::EnumDescriptor* Physics_Type_descriptor();
inline const ::std::string& Physics_Type_Name(Physics_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Physics_Type_descriptor(), value);
}
inline bool Physics_Type_Parse(
    const ::std::string& name, Physics_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Physics_Type>(
    Physics_Type_descriptor(), name, value);
}
// ===================================================================

class GZ_MSGS_VISIBLE Physics : public ::google::protobuf::Message {
 public:
  Physics();
  virtual ~Physics();

  Physics(const Physics& from);

  inline Physics& operator=(const Physics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Physics& default_instance();

  void Swap(Physics* other);

  // implements Message ----------------------------------------------

  Physics* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Physics& from);
  void MergeFrom(const Physics& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Physics_Type Type;
  static const Type ODE = Physics_Type_ODE;
  static const Type BULLET = Physics_Type_BULLET;
  static const Type SIMBODY = Physics_Type_SIMBODY;
  static const Type DART = Physics_Type_DART;
  static inline bool Type_IsValid(int value) {
    return Physics_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Physics_Type_Type_MIN;
  static const Type Type_MAX =
    Physics_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Physics_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Physics_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Physics_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Physics_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .gazebo.msgs.Physics.Type type = 1 [default = ODE];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::gazebo::msgs::Physics_Type type() const;
  inline void set_type(::gazebo::msgs::Physics_Type value);

  // optional string solver_type = 2;
  inline bool has_solver_type() const;
  inline void clear_solver_type();
  static const int kSolverTypeFieldNumber = 2;
  inline const ::std::string& solver_type() const;
  inline void set_solver_type(const ::std::string& value);
  inline void set_solver_type(const char* value);
  inline void set_solver_type(const char* value, size_t size);
  inline ::std::string* mutable_solver_type();
  inline ::std::string* release_solver_type();
  inline void set_allocated_solver_type(::std::string* solver_type);

  // optional double min_step_size = 3;
  inline bool has_min_step_size() const;
  inline void clear_min_step_size();
  static const int kMinStepSizeFieldNumber = 3;
  inline double min_step_size() const;
  inline void set_min_step_size(double value);

  // optional int32 precon_iters = 4;
  inline bool has_precon_iters() const;
  inline void clear_precon_iters();
  static const int kPreconItersFieldNumber = 4;
  inline ::google::protobuf::int32 precon_iters() const;
  inline void set_precon_iters(::google::protobuf::int32 value);

  // optional int32 iters = 5;
  inline bool has_iters() const;
  inline void clear_iters();
  static const int kItersFieldNumber = 5;
  inline ::google::protobuf::int32 iters() const;
  inline void set_iters(::google::protobuf::int32 value);

  // optional double sor = 6;
  inline bool has_sor() const;
  inline void clear_sor();
  static const int kSorFieldNumber = 6;
  inline double sor() const;
  inline void set_sor(double value);

  // optional double cfm = 7;
  inline bool has_cfm() const;
  inline void clear_cfm();
  static const int kCfmFieldNumber = 7;
  inline double cfm() const;
  inline void set_cfm(double value);

  // optional double erp = 8;
  inline bool has_erp() const;
  inline void clear_erp();
  static const int kErpFieldNumber = 8;
  inline double erp() const;
  inline void set_erp(double value);

  // optional double contact_max_correcting_vel = 9;
  inline bool has_contact_max_correcting_vel() const;
  inline void clear_contact_max_correcting_vel();
  static const int kContactMaxCorrectingVelFieldNumber = 9;
  inline double contact_max_correcting_vel() const;
  inline void set_contact_max_correcting_vel(double value);

  // optional double contact_surface_layer = 10;
  inline bool has_contact_surface_layer() const;
  inline void clear_contact_surface_layer();
  static const int kContactSurfaceLayerFieldNumber = 10;
  inline double contact_surface_layer() const;
  inline void set_contact_surface_layer(double value);

  // optional .gazebo.msgs.Vector3d gravity = 11;
  inline bool has_gravity() const;
  inline void clear_gravity();
  static const int kGravityFieldNumber = 11;
  inline const ::gazebo::msgs::Vector3d& gravity() const;
  inline ::gazebo::msgs::Vector3d* mutable_gravity();
  inline ::gazebo::msgs::Vector3d* release_gravity();
  inline void set_allocated_gravity(::gazebo::msgs::Vector3d* gravity);

  // optional bool enable_physics = 12;
  inline bool has_enable_physics() const;
  inline void clear_enable_physics();
  static const int kEnablePhysicsFieldNumber = 12;
  inline bool enable_physics() const;
  inline void set_enable_physics(bool value);

  // optional double real_time_factor = 13;
  inline bool has_real_time_factor() const;
  inline void clear_real_time_factor();
  static const int kRealTimeFactorFieldNumber = 13;
  inline double real_time_factor() const;
  inline void set_real_time_factor(double value);

  // optional double real_time_update_rate = 14;
  inline bool has_real_time_update_rate() const;
  inline void clear_real_time_update_rate();
  static const int kRealTimeUpdateRateFieldNumber = 14;
  inline double real_time_update_rate() const;
  inline void set_real_time_update_rate(double value);

  // optional double max_step_size = 15;
  inline bool has_max_step_size() const;
  inline void clear_max_step_size();
  static const int kMaxStepSizeFieldNumber = 15;
  inline double max_step_size() const;
  inline void set_max_step_size(double value);

  // optional string profile_name = 16;
  inline bool has_profile_name() const;
  inline void clear_profile_name();
  static const int kProfileNameFieldNumber = 16;
  inline const ::std::string& profile_name() const;
  inline void set_profile_name(const ::std::string& value);
  inline void set_profile_name(const char* value);
  inline void set_profile_name(const char* value, size_t size);
  inline ::std::string* mutable_profile_name();
  inline ::std::string* release_profile_name();
  inline void set_allocated_profile_name(::std::string* profile_name);

  // optional .gazebo.msgs.Vector3d magnetic_field = 17;
  inline bool has_magnetic_field() const;
  inline void clear_magnetic_field();
  static const int kMagneticFieldFieldNumber = 17;
  inline const ::gazebo::msgs::Vector3d& magnetic_field() const;
  inline ::gazebo::msgs::Vector3d* mutable_magnetic_field();
  inline ::gazebo::msgs::Vector3d* release_magnetic_field();
  inline void set_allocated_magnetic_field(::gazebo::msgs::Vector3d* magnetic_field);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Physics)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_solver_type();
  inline void clear_has_solver_type();
  inline void set_has_min_step_size();
  inline void clear_has_min_step_size();
  inline void set_has_precon_iters();
  inline void clear_has_precon_iters();
  inline void set_has_iters();
  inline void clear_has_iters();
  inline void set_has_sor();
  inline void clear_has_sor();
  inline void set_has_cfm();
  inline void clear_has_cfm();
  inline void set_has_erp();
  inline void clear_has_erp();
  inline void set_has_contact_max_correcting_vel();
  inline void clear_has_contact_max_correcting_vel();
  inline void set_has_contact_surface_layer();
  inline void clear_has_contact_surface_layer();
  inline void set_has_gravity();
  inline void clear_has_gravity();
  inline void set_has_enable_physics();
  inline void clear_has_enable_physics();
  inline void set_has_real_time_factor();
  inline void clear_has_real_time_factor();
  inline void set_has_real_time_update_rate();
  inline void clear_has_real_time_update_rate();
  inline void set_has_max_step_size();
  inline void clear_has_max_step_size();
  inline void set_has_profile_name();
  inline void clear_has_profile_name();
  inline void set_has_magnetic_field();
  inline void clear_has_magnetic_field();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* solver_type_;
  int type_;
  ::google::protobuf::int32 precon_iters_;
  double min_step_size_;
  double sor_;
  double cfm_;
  double erp_;
  ::google::protobuf::int32 iters_;
  bool enable_physics_;
  double contact_max_correcting_vel_;
  double contact_surface_layer_;
  ::gazebo::msgs::Vector3d* gravity_;
  double real_time_factor_;
  double real_time_update_rate_;
  double max_step_size_;
  ::std::string* profile_name_;
  ::gazebo::msgs::Vector3d* magnetic_field_;
  friend void GZ_MSGS_VISIBLE protobuf_AddDesc_physics_2eproto();
  friend void protobuf_AssignDesc_physics_2eproto();
  friend void protobuf_ShutdownFile_physics_2eproto();

  void InitAsDefaultInstance();
  static Physics* default_instance_;
};
// ===================================================================


// ===================================================================

// Physics

// optional .gazebo.msgs.Physics.Type type = 1 [default = ODE];
inline bool Physics::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Physics::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Physics::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Physics::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::gazebo::msgs::Physics_Type Physics::type() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.type)
  return static_cast< ::gazebo::msgs::Physics_Type >(type_);
}
inline void Physics::set_type(::gazebo::msgs::Physics_Type value) {
  assert(::gazebo::msgs::Physics_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Physics.type)
}

// optional string solver_type = 2;
inline bool Physics::has_solver_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Physics::set_has_solver_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Physics::clear_has_solver_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Physics::clear_solver_type() {
  if (solver_type_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    solver_type_->clear();
  }
  clear_has_solver_type();
}
inline const ::std::string& Physics::solver_type() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.solver_type)
  return *solver_type_;
}
inline void Physics::set_solver_type(const ::std::string& value) {
  set_has_solver_type();
  if (solver_type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    solver_type_ = new ::std::string;
  }
  solver_type_->assign(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Physics.solver_type)
}
inline void Physics::set_solver_type(const char* value) {
  set_has_solver_type();
  if (solver_type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    solver_type_ = new ::std::string;
  }
  solver_type_->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Physics.solver_type)
}
inline void Physics::set_solver_type(const char* value, size_t size) {
  set_has_solver_type();
  if (solver_type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    solver_type_ = new ::std::string;
  }
  solver_type_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Physics.solver_type)
}
inline ::std::string* Physics::mutable_solver_type() {
  set_has_solver_type();
  if (solver_type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    solver_type_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Physics.solver_type)
  return solver_type_;
}
inline ::std::string* Physics::release_solver_type() {
  clear_has_solver_type();
  if (solver_type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = solver_type_;
    solver_type_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Physics::set_allocated_solver_type(::std::string* solver_type) {
  if (solver_type_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete solver_type_;
  }
  if (solver_type) {
    set_has_solver_type();
    solver_type_ = solver_type;
  } else {
    clear_has_solver_type();
    solver_type_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Physics.solver_type)
}

// optional double min_step_size = 3;
inline bool Physics::has_min_step_size() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Physics::set_has_min_step_size() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Physics::clear_has_min_step_size() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Physics::clear_min_step_size() {
  min_step_size_ = 0;
  clear_has_min_step_size();
}
inline double Physics::min_step_size() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.min_step_size)
  return min_step_size_;
}
inline void Physics::set_min_step_size(double value) {
  set_has_min_step_size();
  min_step_size_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Physics.min_step_size)
}

// optional int32 precon_iters = 4;
inline bool Physics::has_precon_iters() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Physics::set_has_precon_iters() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Physics::clear_has_precon_iters() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Physics::clear_precon_iters() {
  precon_iters_ = 0;
  clear_has_precon_iters();
}
inline ::google::protobuf::int32 Physics::precon_iters() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.precon_iters)
  return precon_iters_;
}
inline void Physics::set_precon_iters(::google::protobuf::int32 value) {
  set_has_precon_iters();
  precon_iters_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Physics.precon_iters)
}

// optional int32 iters = 5;
inline bool Physics::has_iters() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Physics::set_has_iters() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Physics::clear_has_iters() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Physics::clear_iters() {
  iters_ = 0;
  clear_has_iters();
}
inline ::google::protobuf::int32 Physics::iters() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.iters)
  return iters_;
}
inline void Physics::set_iters(::google::protobuf::int32 value) {
  set_has_iters();
  iters_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Physics.iters)
}

// optional double sor = 6;
inline bool Physics::has_sor() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Physics::set_has_sor() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Physics::clear_has_sor() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Physics::clear_sor() {
  sor_ = 0;
  clear_has_sor();
}
inline double Physics::sor() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.sor)
  return sor_;
}
inline void Physics::set_sor(double value) {
  set_has_sor();
  sor_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Physics.sor)
}

// optional double cfm = 7;
inline bool Physics::has_cfm() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Physics::set_has_cfm() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Physics::clear_has_cfm() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Physics::clear_cfm() {
  cfm_ = 0;
  clear_has_cfm();
}
inline double Physics::cfm() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.cfm)
  return cfm_;
}
inline void Physics::set_cfm(double value) {
  set_has_cfm();
  cfm_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Physics.cfm)
}

// optional double erp = 8;
inline bool Physics::has_erp() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Physics::set_has_erp() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Physics::clear_has_erp() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Physics::clear_erp() {
  erp_ = 0;
  clear_has_erp();
}
inline double Physics::erp() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.erp)
  return erp_;
}
inline void Physics::set_erp(double value) {
  set_has_erp();
  erp_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Physics.erp)
}

// optional double contact_max_correcting_vel = 9;
inline bool Physics::has_contact_max_correcting_vel() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Physics::set_has_contact_max_correcting_vel() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Physics::clear_has_contact_max_correcting_vel() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Physics::clear_contact_max_correcting_vel() {
  contact_max_correcting_vel_ = 0;
  clear_has_contact_max_correcting_vel();
}
inline double Physics::contact_max_correcting_vel() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.contact_max_correcting_vel)
  return contact_max_correcting_vel_;
}
inline void Physics::set_contact_max_correcting_vel(double value) {
  set_has_contact_max_correcting_vel();
  contact_max_correcting_vel_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Physics.contact_max_correcting_vel)
}

// optional double contact_surface_layer = 10;
inline bool Physics::has_contact_surface_layer() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Physics::set_has_contact_surface_layer() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Physics::clear_has_contact_surface_layer() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Physics::clear_contact_surface_layer() {
  contact_surface_layer_ = 0;
  clear_has_contact_surface_layer();
}
inline double Physics::contact_surface_layer() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.contact_surface_layer)
  return contact_surface_layer_;
}
inline void Physics::set_contact_surface_layer(double value) {
  set_has_contact_surface_layer();
  contact_surface_layer_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Physics.contact_surface_layer)
}

// optional .gazebo.msgs.Vector3d gravity = 11;
inline bool Physics::has_gravity() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void Physics::set_has_gravity() {
  _has_bits_[0] |= 0x00000400u;
}
inline void Physics::clear_has_gravity() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void Physics::clear_gravity() {
  if (gravity_ != NULL) gravity_->::gazebo::msgs::Vector3d::Clear();
  clear_has_gravity();
}
inline const ::gazebo::msgs::Vector3d& Physics::gravity() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.gravity)
  return gravity_ != NULL ? *gravity_ : *default_instance_->gravity_;
}
inline ::gazebo::msgs::Vector3d* Physics::mutable_gravity() {
  set_has_gravity();
  if (gravity_ == NULL) gravity_ = new ::gazebo::msgs::Vector3d;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Physics.gravity)
  return gravity_;
}
inline ::gazebo::msgs::Vector3d* Physics::release_gravity() {
  clear_has_gravity();
  ::gazebo::msgs::Vector3d* temp = gravity_;
  gravity_ = NULL;
  return temp;
}
inline void Physics::set_allocated_gravity(::gazebo::msgs::Vector3d* gravity) {
  delete gravity_;
  gravity_ = gravity;
  if (gravity) {
    set_has_gravity();
  } else {
    clear_has_gravity();
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Physics.gravity)
}

// optional bool enable_physics = 12;
inline bool Physics::has_enable_physics() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void Physics::set_has_enable_physics() {
  _has_bits_[0] |= 0x00000800u;
}
inline void Physics::clear_has_enable_physics() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void Physics::clear_enable_physics() {
  enable_physics_ = false;
  clear_has_enable_physics();
}
inline bool Physics::enable_physics() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.enable_physics)
  return enable_physics_;
}
inline void Physics::set_enable_physics(bool value) {
  set_has_enable_physics();
  enable_physics_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Physics.enable_physics)
}

// optional double real_time_factor = 13;
inline bool Physics::has_real_time_factor() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void Physics::set_has_real_time_factor() {
  _has_bits_[0] |= 0x00001000u;
}
inline void Physics::clear_has_real_time_factor() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void Physics::clear_real_time_factor() {
  real_time_factor_ = 0;
  clear_has_real_time_factor();
}
inline double Physics::real_time_factor() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.real_time_factor)
  return real_time_factor_;
}
inline void Physics::set_real_time_factor(double value) {
  set_has_real_time_factor();
  real_time_factor_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Physics.real_time_factor)
}

// optional double real_time_update_rate = 14;
inline bool Physics::has_real_time_update_rate() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void Physics::set_has_real_time_update_rate() {
  _has_bits_[0] |= 0x00002000u;
}
inline void Physics::clear_has_real_time_update_rate() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void Physics::clear_real_time_update_rate() {
  real_time_update_rate_ = 0;
  clear_has_real_time_update_rate();
}
inline double Physics::real_time_update_rate() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.real_time_update_rate)
  return real_time_update_rate_;
}
inline void Physics::set_real_time_update_rate(double value) {
  set_has_real_time_update_rate();
  real_time_update_rate_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Physics.real_time_update_rate)
}

// optional double max_step_size = 15;
inline bool Physics::has_max_step_size() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void Physics::set_has_max_step_size() {
  _has_bits_[0] |= 0x00004000u;
}
inline void Physics::clear_has_max_step_size() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void Physics::clear_max_step_size() {
  max_step_size_ = 0;
  clear_has_max_step_size();
}
inline double Physics::max_step_size() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.max_step_size)
  return max_step_size_;
}
inline void Physics::set_max_step_size(double value) {
  set_has_max_step_size();
  max_step_size_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Physics.max_step_size)
}

// optional string profile_name = 16;
inline bool Physics::has_profile_name() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void Physics::set_has_profile_name() {
  _has_bits_[0] |= 0x00008000u;
}
inline void Physics::clear_has_profile_name() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void Physics::clear_profile_name() {
  if (profile_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    profile_name_->clear();
  }
  clear_has_profile_name();
}
inline const ::std::string& Physics::profile_name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.profile_name)
  return *profile_name_;
}
inline void Physics::set_profile_name(const ::std::string& value) {
  set_has_profile_name();
  if (profile_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    profile_name_ = new ::std::string;
  }
  profile_name_->assign(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Physics.profile_name)
}
inline void Physics::set_profile_name(const char* value) {
  set_has_profile_name();
  if (profile_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    profile_name_ = new ::std::string;
  }
  profile_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Physics.profile_name)
}
inline void Physics::set_profile_name(const char* value, size_t size) {
  set_has_profile_name();
  if (profile_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    profile_name_ = new ::std::string;
  }
  profile_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Physics.profile_name)
}
inline ::std::string* Physics::mutable_profile_name() {
  set_has_profile_name();
  if (profile_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    profile_name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Physics.profile_name)
  return profile_name_;
}
inline ::std::string* Physics::release_profile_name() {
  clear_has_profile_name();
  if (profile_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = profile_name_;
    profile_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Physics::set_allocated_profile_name(::std::string* profile_name) {
  if (profile_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete profile_name_;
  }
  if (profile_name) {
    set_has_profile_name();
    profile_name_ = profile_name;
  } else {
    clear_has_profile_name();
    profile_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Physics.profile_name)
}

// optional .gazebo.msgs.Vector3d magnetic_field = 17;
inline bool Physics::has_magnetic_field() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void Physics::set_has_magnetic_field() {
  _has_bits_[0] |= 0x00010000u;
}
inline void Physics::clear_has_magnetic_field() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void Physics::clear_magnetic_field() {
  if (magnetic_field_ != NULL) magnetic_field_->::gazebo::msgs::Vector3d::Clear();
  clear_has_magnetic_field();
}
inline const ::gazebo::msgs::Vector3d& Physics::magnetic_field() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Physics.magnetic_field)
  return magnetic_field_ != NULL ? *magnetic_field_ : *default_instance_->magnetic_field_;
}
inline ::gazebo::msgs::Vector3d* Physics::mutable_magnetic_field() {
  set_has_magnetic_field();
  if (magnetic_field_ == NULL) magnetic_field_ = new ::gazebo::msgs::Vector3d;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Physics.magnetic_field)
  return magnetic_field_;
}
inline ::gazebo::msgs::Vector3d* Physics::release_magnetic_field() {
  clear_has_magnetic_field();
  ::gazebo::msgs::Vector3d* temp = magnetic_field_;
  magnetic_field_ = NULL;
  return temp;
}
inline void Physics::set_allocated_magnetic_field(::gazebo::msgs::Vector3d* magnetic_field) {
  delete magnetic_field_;
  magnetic_field_ = magnetic_field;
  if (magnetic_field) {
    set_has_magnetic_field();
  } else {
    clear_has_magnetic_field();
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Physics.magnetic_field)
}


typedef boost::shared_ptr<gazebo::msgs::Physics> PhysicsPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::gazebo::msgs::Physics_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gazebo::msgs::Physics_Type>() {
  return ::gazebo::msgs::Physics_Type_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::Physics const> ConstPhysicsPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_physics_2eproto__INCLUDED
