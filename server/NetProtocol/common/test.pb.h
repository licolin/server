// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef PROTOBUF_test_2eproto__INCLUDED
#define PROTOBUF_test_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_test_2eproto();
void protobuf_AssignDesc_test_2eproto();
void protobuf_ShutdownFile_test_2eproto();

class test;
class Certification;
class MessageBlank;

enum Certification_TYPE {
  Certification_TYPE_eServer = 1,
  Certification_TYPE_eClient = 2
};
bool Certification_TYPE_IsValid(int value);
const Certification_TYPE Certification_TYPE_TYPE_MIN = Certification_TYPE_eServer;
const Certification_TYPE Certification_TYPE_TYPE_MAX = Certification_TYPE_eClient;
const int Certification_TYPE_TYPE_ARRAYSIZE = Certification_TYPE_TYPE_MAX + 1;

const ::google::protobuf::EnumDescriptor* Certification_TYPE_descriptor();
inline const ::std::string& Certification_TYPE_Name(Certification_TYPE value) {
  return ::google::protobuf::internal::NameOfEnum(
    Certification_TYPE_descriptor(), value);
}
inline bool Certification_TYPE_Parse(
    const ::std::string& name, Certification_TYPE* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Certification_TYPE>(
    Certification_TYPE_descriptor(), name, value);
}
// ===================================================================

class test : public ::google::protobuf::Message {
 public:
  test();
  virtual ~test();

  test(const test& from);

  inline test& operator=(const test& from) {
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
  static const test& default_instance();

  void Swap(test* other);

  // implements Message ----------------------------------------------

  test* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const test& from);
  void MergeFrom(const test& from);
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

  // required int32 result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline ::google::protobuf::int32 result() const;
  inline void set_result(::google::protobuf::int32 value);

  // required string str = 2;
  inline bool has_str() const;
  inline void clear_str();
  static const int kStrFieldNumber = 2;
  inline const ::std::string& str() const;
  inline void set_str(const ::std::string& value);
  inline void set_str(const char* value);
  inline void set_str(const char* value, size_t size);
  inline ::std::string* mutable_str();
  inline ::std::string* release_str();
  inline void set_allocated_str(::std::string* str);

  // @@protoc_insertion_point(class_scope:test)
 private:
  inline void set_has_result();
  inline void clear_has_result();
  inline void set_has_str();
  inline void clear_has_str();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* str_;
  ::google::protobuf::int32 result_;
  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static test* default_instance_;
};
// -------------------------------------------------------------------

class Certification : public ::google::protobuf::Message {
 public:
  Certification();
  virtual ~Certification();

  Certification(const Certification& from);

  inline Certification& operator=(const Certification& from) {
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
  static const Certification& default_instance();

  void Swap(Certification* other);

  // implements Message ----------------------------------------------

  Certification* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Certification& from);
  void MergeFrom(const Certification& from);
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

  typedef Certification_TYPE TYPE;
  static const TYPE eServer = Certification_TYPE_eServer;
  static const TYPE eClient = Certification_TYPE_eClient;
  static inline bool TYPE_IsValid(int value) {
    return Certification_TYPE_IsValid(value);
  }
  static const TYPE TYPE_MIN =
    Certification_TYPE_TYPE_MIN;
  static const TYPE TYPE_MAX =
    Certification_TYPE_TYPE_MAX;
  static const int TYPE_ARRAYSIZE =
    Certification_TYPE_TYPE_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  TYPE_descriptor() {
    return Certification_TYPE_descriptor();
  }
  static inline const ::std::string& TYPE_Name(TYPE value) {
    return Certification_TYPE_Name(value);
  }
  static inline bool TYPE_Parse(const ::std::string& name,
      TYPE* value) {
    return Certification_TYPE_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .Certification.TYPE type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::Certification_TYPE type() const;
  inline void set_type(::Certification_TYPE value);

  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required string code = 3;
  inline bool has_code() const;
  inline void clear_code();
  static const int kCodeFieldNumber = 3;
  inline const ::std::string& code() const;
  inline void set_code(const ::std::string& value);
  inline void set_code(const char* value);
  inline void set_code(const char* value, size_t size);
  inline ::std::string* mutable_code();
  inline ::std::string* release_code();
  inline void set_allocated_code(::std::string* code);

  // @@protoc_insertion_point(class_scope:Certification)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_code();
  inline void clear_has_code();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  ::std::string* code_;
  int type_;
  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static Certification* default_instance_;
};
// -------------------------------------------------------------------

class MessageBlank : public ::google::protobuf::Message {
 public:
  MessageBlank();
  virtual ~MessageBlank();

  MessageBlank(const MessageBlank& from);

  inline MessageBlank& operator=(const MessageBlank& from) {
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
  static const MessageBlank& default_instance();

  void Swap(MessageBlank* other);

  // implements Message ----------------------------------------------

  MessageBlank* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MessageBlank& from);
  void MergeFrom(const MessageBlank& from);
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

  // @@protoc_insertion_point(class_scope:MessageBlank)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static MessageBlank* default_instance_;
};
// ===================================================================


// ===================================================================

// test

// required int32 result = 1;
inline bool test::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void test::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void test::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void test::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 test::result() const {
  // @@protoc_insertion_point(field_get:test.result)
  return result_;
}
inline void test::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
  // @@protoc_insertion_point(field_set:test.result)
}

// required string str = 2;
inline bool test::has_str() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void test::set_has_str() {
  _has_bits_[0] |= 0x00000002u;
}
inline void test::clear_has_str() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void test::clear_str() {
  if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    str_->clear();
  }
  clear_has_str();
}
inline const ::std::string& test::str() const {
  // @@protoc_insertion_point(field_get:test.str)
  return *str_;
}
inline void test::set_str(const ::std::string& value) {
  set_has_str();
  if (str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    str_ = new ::std::string;
  }
  str_->assign(value);
  // @@protoc_insertion_point(field_set:test.str)
}
inline void test::set_str(const char* value) {
  set_has_str();
  if (str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    str_ = new ::std::string;
  }
  str_->assign(value);
  // @@protoc_insertion_point(field_set_char:test.str)
}
inline void test::set_str(const char* value, size_t size) {
  set_has_str();
  if (str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    str_ = new ::std::string;
  }
  str_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:test.str)
}
inline ::std::string* test::mutable_str() {
  set_has_str();
  if (str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    str_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:test.str)
  return str_;
}
inline ::std::string* test::release_str() {
  clear_has_str();
  if (str_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = str_;
    str_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void test::set_allocated_str(::std::string* str) {
  if (str_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete str_;
  }
  if (str) {
    set_has_str();
    str_ = str;
  } else {
    clear_has_str();
    str_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:test.str)
}

// -------------------------------------------------------------------

// Certification

// required .Certification.TYPE type = 1;
inline bool Certification::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Certification::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Certification::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Certification::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::Certification_TYPE Certification::type() const {
  // @@protoc_insertion_point(field_get:Certification.type)
  return static_cast< ::Certification_TYPE >(type_);
}
inline void Certification::set_type(::Certification_TYPE value) {
  assert(::Certification_TYPE_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:Certification.type)
}

// required string name = 2;
inline bool Certification::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Certification::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Certification::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Certification::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Certification::name() const {
  // @@protoc_insertion_point(field_get:Certification.name)
  return *name_;
}
inline void Certification::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:Certification.name)
}
inline void Certification::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:Certification.name)
}
inline void Certification::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Certification.name)
}
inline ::std::string* Certification::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Certification.name)
  return name_;
}
inline ::std::string* Certification::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Certification::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Certification.name)
}

// required string code = 3;
inline bool Certification::has_code() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Certification::set_has_code() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Certification::clear_has_code() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Certification::clear_code() {
  if (code_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    code_->clear();
  }
  clear_has_code();
}
inline const ::std::string& Certification::code() const {
  // @@protoc_insertion_point(field_get:Certification.code)
  return *code_;
}
inline void Certification::set_code(const ::std::string& value) {
  set_has_code();
  if (code_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    code_ = new ::std::string;
  }
  code_->assign(value);
  // @@protoc_insertion_point(field_set:Certification.code)
}
inline void Certification::set_code(const char* value) {
  set_has_code();
  if (code_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    code_ = new ::std::string;
  }
  code_->assign(value);
  // @@protoc_insertion_point(field_set_char:Certification.code)
}
inline void Certification::set_code(const char* value, size_t size) {
  set_has_code();
  if (code_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    code_ = new ::std::string;
  }
  code_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Certification.code)
}
inline ::std::string* Certification::mutable_code() {
  set_has_code();
  if (code_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    code_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Certification.code)
  return code_;
}
inline ::std::string* Certification::release_code() {
  clear_has_code();
  if (code_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = code_;
    code_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Certification::set_allocated_code(::std::string* code) {
  if (code_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete code_;
  }
  if (code) {
    set_has_code();
    code_ = code;
  } else {
    clear_has_code();
    code_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Certification.code)
}

// -------------------------------------------------------------------

// MessageBlank


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Certification_TYPE> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Certification_TYPE>() {
  return ::Certification_TYPE_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_test_2eproto__INCLUDED
