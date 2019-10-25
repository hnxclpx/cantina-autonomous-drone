// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: spheregeom.proto

#ifndef PROTOBUF_spheregeom_2eproto__INCLUDED
#define PROTOBUF_spheregeom_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void GZ_MSGS_VISIBLE protobuf_AddDesc_spheregeom_2eproto();
void protobuf_AssignDesc_spheregeom_2eproto();
void protobuf_ShutdownFile_spheregeom_2eproto();

class SphereGeom;

// ===================================================================

class GZ_MSGS_VISIBLE SphereGeom : public ::google::protobuf::Message {
 public:
  SphereGeom();
  virtual ~SphereGeom();

  SphereGeom(const SphereGeom& from);

  inline SphereGeom& operator=(const SphereGeom& from) {
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
  static const SphereGeom& default_instance();

  void Swap(SphereGeom* other);

  // implements Message ----------------------------------------------

  SphereGeom* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SphereGeom& from);
  void MergeFrom(const SphereGeom& from);
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

  // accessors -------------------------------------------------------

  // required double radius = 1;
  inline bool has_radius() const;
  inline void clear_radius();
  static const int kRadiusFieldNumber = 1;
  inline double radius() const;
  inline void set_radius(double value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.SphereGeom)
 private:
  inline void set_has_radius();
  inline void clear_has_radius();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double radius_;
  friend void GZ_MSGS_VISIBLE protobuf_AddDesc_spheregeom_2eproto();
  friend void protobuf_AssignDesc_spheregeom_2eproto();
  friend void protobuf_ShutdownFile_spheregeom_2eproto();

  void InitAsDefaultInstance();
  static SphereGeom* default_instance_;
};
// ===================================================================


// ===================================================================

// SphereGeom

// required double radius = 1;
inline bool SphereGeom::has_radius() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SphereGeom::set_has_radius() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SphereGeom::clear_has_radius() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SphereGeom::clear_radius() {
  radius_ = 0;
  clear_has_radius();
}
inline double SphereGeom::radius() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.SphereGeom.radius)
  return radius_;
}
inline void SphereGeom::set_radius(double value) {
  set_has_radius();
  radius_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.SphereGeom.radius)
}


typedef boost::shared_ptr<gazebo::msgs::SphereGeom> SphereGeomPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::SphereGeom const> ConstSphereGeomPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_spheregeom_2eproto__INCLUDED
