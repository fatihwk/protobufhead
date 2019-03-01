// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: addressbook.proto

#ifndef PROTOBUF_addressbook_2eproto__INCLUDED
#define PROTOBUF_addressbook_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace tutorial {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_addressbook_2eproto();
void protobuf_AssignDesc_addressbook_2eproto();
void protobuf_ShutdownFile_addressbook_2eproto();

class AddressBook;
class MessageHead;
class Person;
class Person_PhoneNumber;

enum Person_PhoneType {
  Person_PhoneType_MOBILE = 0,
  Person_PhoneType_HOME = 1,
  Person_PhoneType_WORK = 2,
  Person_PhoneType_Person_PhoneType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Person_PhoneType_Person_PhoneType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Person_PhoneType_IsValid(int value);
const Person_PhoneType Person_PhoneType_PhoneType_MIN = Person_PhoneType_MOBILE;
const Person_PhoneType Person_PhoneType_PhoneType_MAX = Person_PhoneType_WORK;
const int Person_PhoneType_PhoneType_ARRAYSIZE = Person_PhoneType_PhoneType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Person_PhoneType_descriptor();
inline const ::std::string& Person_PhoneType_Name(Person_PhoneType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Person_PhoneType_descriptor(), value);
}
inline bool Person_PhoneType_Parse(
    const ::std::string& name, Person_PhoneType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Person_PhoneType>(
    Person_PhoneType_descriptor(), name, value);
}
// ===================================================================

class MessageHead : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.MessageHead) */ {
 public:
  MessageHead();
  virtual ~MessageHead();

  MessageHead(const MessageHead& from);

  inline MessageHead& operator=(const MessageHead& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MessageHead& default_instance();

  void Swap(MessageHead* other);

  // implements Message ----------------------------------------------

  inline MessageHead* New() const { return New(NULL); }

  MessageHead* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MessageHead& from);
  void MergeFrom(const MessageHead& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MessageHead* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // @@protoc_insertion_point(class_scope:tutorial.MessageHead)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_addressbook_2eproto();
  friend void protobuf_AssignDesc_addressbook_2eproto();
  friend void protobuf_ShutdownFile_addressbook_2eproto();

  void InitAsDefaultInstance();
  static MessageHead* default_instance_;
};
// -------------------------------------------------------------------

class Person_PhoneNumber : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.Person.PhoneNumber) */ {
 public:
  Person_PhoneNumber();
  virtual ~Person_PhoneNumber();

  Person_PhoneNumber(const Person_PhoneNumber& from);

  inline Person_PhoneNumber& operator=(const Person_PhoneNumber& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Person_PhoneNumber& default_instance();

  void Swap(Person_PhoneNumber* other);

  // implements Message ----------------------------------------------

  inline Person_PhoneNumber* New() const { return New(NULL); }

  Person_PhoneNumber* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Person_PhoneNumber& from);
  void MergeFrom(const Person_PhoneNumber& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Person_PhoneNumber* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string number = 1;
  void clear_number();
  static const int kNumberFieldNumber = 1;
  const ::std::string& number() const;
  void set_number(const ::std::string& value);
  void set_number(const char* value);
  void set_number(const char* value, size_t size);
  ::std::string* mutable_number();
  ::std::string* release_number();
  void set_allocated_number(::std::string* number);

  // optional .tutorial.Person.PhoneType type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::tutorial::Person_PhoneType type() const;
  void set_type(::tutorial::Person_PhoneType value);

  // @@protoc_insertion_point(class_scope:tutorial.Person.PhoneNumber)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr number_;
  int type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_addressbook_2eproto();
  friend void protobuf_AssignDesc_addressbook_2eproto();
  friend void protobuf_ShutdownFile_addressbook_2eproto();

  void InitAsDefaultInstance();
  static Person_PhoneNumber* default_instance_;
};
// -------------------------------------------------------------------

class Person : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.Person) */ {
 public:
  Person();
  virtual ~Person();

  Person(const Person& from);

  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Person& default_instance();

  void Swap(Person* other);

  // implements Message ----------------------------------------------

  inline Person* New() const { return New(NULL); }

  Person* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Person& from);
  void MergeFrom(const Person& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Person* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Person_PhoneNumber PhoneNumber;

  typedef Person_PhoneType PhoneType;
  static const PhoneType MOBILE =
    Person_PhoneType_MOBILE;
  static const PhoneType HOME =
    Person_PhoneType_HOME;
  static const PhoneType WORK =
    Person_PhoneType_WORK;
  static inline bool PhoneType_IsValid(int value) {
    return Person_PhoneType_IsValid(value);
  }
  static const PhoneType PhoneType_MIN =
    Person_PhoneType_PhoneType_MIN;
  static const PhoneType PhoneType_MAX =
    Person_PhoneType_PhoneType_MAX;
  static const int PhoneType_ARRAYSIZE =
    Person_PhoneType_PhoneType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  PhoneType_descriptor() {
    return Person_PhoneType_descriptor();
  }
  static inline const ::std::string& PhoneType_Name(PhoneType value) {
    return Person_PhoneType_Name(value);
  }
  static inline bool PhoneType_Parse(const ::std::string& name,
      PhoneType* value) {
    return Person_PhoneType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .tutorial.MessageHead head = 1;
  bool has_head() const;
  void clear_head();
  static const int kHeadFieldNumber = 1;
  const ::tutorial::MessageHead& head() const;
  ::tutorial::MessageHead* mutable_head();
  ::tutorial::MessageHead* release_head();
  void set_allocated_head(::tutorial::MessageHead* head);

  // optional string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional int32 id = 3;
  void clear_id();
  static const int kIdFieldNumber = 3;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // optional string email = 4;
  void clear_email();
  static const int kEmailFieldNumber = 4;
  const ::std::string& email() const;
  void set_email(const ::std::string& value);
  void set_email(const char* value);
  void set_email(const char* value, size_t size);
  ::std::string* mutable_email();
  ::std::string* release_email();
  void set_allocated_email(::std::string* email);

  // repeated .tutorial.Person.PhoneNumber phone = 5;
  int phone_size() const;
  void clear_phone();
  static const int kPhoneFieldNumber = 5;
  const ::tutorial::Person_PhoneNumber& phone(int index) const;
  ::tutorial::Person_PhoneNumber* mutable_phone(int index);
  ::tutorial::Person_PhoneNumber* add_phone();
  ::google::protobuf::RepeatedPtrField< ::tutorial::Person_PhoneNumber >*
      mutable_phone();
  const ::google::protobuf::RepeatedPtrField< ::tutorial::Person_PhoneNumber >&
      phone() const;

  // @@protoc_insertion_point(class_scope:tutorial.Person)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::tutorial::MessageHead* head_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr email_;
  ::google::protobuf::RepeatedPtrField< ::tutorial::Person_PhoneNumber > phone_;
  ::google::protobuf::int32 id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_addressbook_2eproto();
  friend void protobuf_AssignDesc_addressbook_2eproto();
  friend void protobuf_ShutdownFile_addressbook_2eproto();

  void InitAsDefaultInstance();
  static Person* default_instance_;
};
// -------------------------------------------------------------------

class AddressBook : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.AddressBook) */ {
 public:
  AddressBook();
  virtual ~AddressBook();

  AddressBook(const AddressBook& from);

  inline AddressBook& operator=(const AddressBook& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AddressBook& default_instance();

  void Swap(AddressBook* other);

  // implements Message ----------------------------------------------

  inline AddressBook* New() const { return New(NULL); }

  AddressBook* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AddressBook& from);
  void MergeFrom(const AddressBook& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(AddressBook* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .tutorial.MessageHead head = 1;
  bool has_head() const;
  void clear_head();
  static const int kHeadFieldNumber = 1;
  const ::tutorial::MessageHead& head() const;
  ::tutorial::MessageHead* mutable_head();
  ::tutorial::MessageHead* release_head();
  void set_allocated_head(::tutorial::MessageHead* head);

  // optional string address = 2;
  void clear_address();
  static const int kAddressFieldNumber = 2;
  const ::std::string& address() const;
  void set_address(const ::std::string& value);
  void set_address(const char* value);
  void set_address(const char* value, size_t size);
  ::std::string* mutable_address();
  ::std::string* release_address();
  void set_allocated_address(::std::string* address);

  // optional int32 number = 3;
  void clear_number();
  static const int kNumberFieldNumber = 3;
  ::google::protobuf::int32 number() const;
  void set_number(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:tutorial.AddressBook)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::tutorial::MessageHead* head_;
  ::google::protobuf::internal::ArenaStringPtr address_;
  ::google::protobuf::int32 number_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_addressbook_2eproto();
  friend void protobuf_AssignDesc_addressbook_2eproto();
  friend void protobuf_ShutdownFile_addressbook_2eproto();

  void InitAsDefaultInstance();
  static AddressBook* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageHead

// optional string type = 1;
inline void MessageHead::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MessageHead::type() const {
  // @@protoc_insertion_point(field_get:tutorial.MessageHead.type)
  return type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageHead::set_type(const ::std::string& value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.MessageHead.type)
}
inline void MessageHead::set_type(const char* value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.MessageHead.type)
}
inline void MessageHead::set_type(const char* value, size_t size) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.MessageHead.type)
}
inline ::std::string* MessageHead::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.MessageHead.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MessageHead::release_type() {
  // @@protoc_insertion_point(field_release:tutorial.MessageHead.type)
  
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageHead::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:tutorial.MessageHead.type)
}

// -------------------------------------------------------------------

// Person_PhoneNumber

// optional string number = 1;
inline void Person_PhoneNumber::clear_number() {
  number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Person_PhoneNumber::number() const {
  // @@protoc_insertion_point(field_get:tutorial.Person.PhoneNumber.number)
  return number_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person_PhoneNumber::set_number(const ::std::string& value) {
  
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.Person.PhoneNumber.number)
}
inline void Person_PhoneNumber::set_number(const char* value) {
  
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.Person.PhoneNumber.number)
}
inline void Person_PhoneNumber::set_number(const char* value, size_t size) {
  
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.Person.PhoneNumber.number)
}
inline ::std::string* Person_PhoneNumber::mutable_number() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.Person.PhoneNumber.number)
  return number_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person_PhoneNumber::release_number() {
  // @@protoc_insertion_point(field_release:tutorial.Person.PhoneNumber.number)
  
  return number_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person_PhoneNumber::set_allocated_number(::std::string* number) {
  if (number != NULL) {
    
  } else {
    
  }
  number_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), number);
  // @@protoc_insertion_point(field_set_allocated:tutorial.Person.PhoneNumber.number)
}

// optional .tutorial.Person.PhoneType type = 2;
inline void Person_PhoneNumber::clear_type() {
  type_ = 0;
}
inline ::tutorial::Person_PhoneType Person_PhoneNumber::type() const {
  // @@protoc_insertion_point(field_get:tutorial.Person.PhoneNumber.type)
  return static_cast< ::tutorial::Person_PhoneType >(type_);
}
inline void Person_PhoneNumber::set_type(::tutorial::Person_PhoneType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:tutorial.Person.PhoneNumber.type)
}

// -------------------------------------------------------------------

// Person

// optional .tutorial.MessageHead head = 1;
inline bool Person::has_head() const {
  return !_is_default_instance_ && head_ != NULL;
}
inline void Person::clear_head() {
  if (GetArenaNoVirtual() == NULL && head_ != NULL) delete head_;
  head_ = NULL;
}
inline const ::tutorial::MessageHead& Person::head() const {
  // @@protoc_insertion_point(field_get:tutorial.Person.head)
  return head_ != NULL ? *head_ : *default_instance_->head_;
}
inline ::tutorial::MessageHead* Person::mutable_head() {
  
  if (head_ == NULL) {
    head_ = new ::tutorial::MessageHead;
  }
  // @@protoc_insertion_point(field_mutable:tutorial.Person.head)
  return head_;
}
inline ::tutorial::MessageHead* Person::release_head() {
  // @@protoc_insertion_point(field_release:tutorial.Person.head)
  
  ::tutorial::MessageHead* temp = head_;
  head_ = NULL;
  return temp;
}
inline void Person::set_allocated_head(::tutorial::MessageHead* head) {
  delete head_;
  head_ = head;
  if (head) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tutorial.Person.head)
}

// optional string name = 2;
inline void Person::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Person::name() const {
  // @@protoc_insertion_point(field_get:tutorial.Person.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.Person.name)
}
inline void Person::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.Person.name)
}
inline void Person::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.Person.name)
}
inline ::std::string* Person::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.Person.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person::release_name() {
  // @@protoc_insertion_point(field_release:tutorial.Person.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:tutorial.Person.name)
}

// optional int32 id = 3;
inline void Person::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 Person::id() const {
  // @@protoc_insertion_point(field_get:tutorial.Person.id)
  return id_;
}
inline void Person::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:tutorial.Person.id)
}

// optional string email = 4;
inline void Person::clear_email() {
  email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Person::email() const {
  // @@protoc_insertion_point(field_get:tutorial.Person.email)
  return email_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_email(const ::std::string& value) {
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.Person.email)
}
inline void Person::set_email(const char* value) {
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.Person.email)
}
inline void Person::set_email(const char* value, size_t size) {
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.Person.email)
}
inline ::std::string* Person::mutable_email() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.Person.email)
  return email_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person::release_email() {
  // @@protoc_insertion_point(field_release:tutorial.Person.email)
  
  return email_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_allocated_email(::std::string* email) {
  if (email != NULL) {
    
  } else {
    
  }
  email_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), email);
  // @@protoc_insertion_point(field_set_allocated:tutorial.Person.email)
}

// repeated .tutorial.Person.PhoneNumber phone = 5;
inline int Person::phone_size() const {
  return phone_.size();
}
inline void Person::clear_phone() {
  phone_.Clear();
}
inline const ::tutorial::Person_PhoneNumber& Person::phone(int index) const {
  // @@protoc_insertion_point(field_get:tutorial.Person.phone)
  return phone_.Get(index);
}
inline ::tutorial::Person_PhoneNumber* Person::mutable_phone(int index) {
  // @@protoc_insertion_point(field_mutable:tutorial.Person.phone)
  return phone_.Mutable(index);
}
inline ::tutorial::Person_PhoneNumber* Person::add_phone() {
  // @@protoc_insertion_point(field_add:tutorial.Person.phone)
  return phone_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tutorial::Person_PhoneNumber >*
Person::mutable_phone() {
  // @@protoc_insertion_point(field_mutable_list:tutorial.Person.phone)
  return &phone_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tutorial::Person_PhoneNumber >&
Person::phone() const {
  // @@protoc_insertion_point(field_list:tutorial.Person.phone)
  return phone_;
}

// -------------------------------------------------------------------

// AddressBook

// optional .tutorial.MessageHead head = 1;
inline bool AddressBook::has_head() const {
  return !_is_default_instance_ && head_ != NULL;
}
inline void AddressBook::clear_head() {
  if (GetArenaNoVirtual() == NULL && head_ != NULL) delete head_;
  head_ = NULL;
}
inline const ::tutorial::MessageHead& AddressBook::head() const {
  // @@protoc_insertion_point(field_get:tutorial.AddressBook.head)
  return head_ != NULL ? *head_ : *default_instance_->head_;
}
inline ::tutorial::MessageHead* AddressBook::mutable_head() {
  
  if (head_ == NULL) {
    head_ = new ::tutorial::MessageHead;
  }
  // @@protoc_insertion_point(field_mutable:tutorial.AddressBook.head)
  return head_;
}
inline ::tutorial::MessageHead* AddressBook::release_head() {
  // @@protoc_insertion_point(field_release:tutorial.AddressBook.head)
  
  ::tutorial::MessageHead* temp = head_;
  head_ = NULL;
  return temp;
}
inline void AddressBook::set_allocated_head(::tutorial::MessageHead* head) {
  delete head_;
  head_ = head;
  if (head) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tutorial.AddressBook.head)
}

// optional string address = 2;
inline void AddressBook::clear_address() {
  address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AddressBook::address() const {
  // @@protoc_insertion_point(field_get:tutorial.AddressBook.address)
  return address_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AddressBook::set_address(const ::std::string& value) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.AddressBook.address)
}
inline void AddressBook::set_address(const char* value) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.AddressBook.address)
}
inline void AddressBook::set_address(const char* value, size_t size) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.AddressBook.address)
}
inline ::std::string* AddressBook::mutable_address() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.AddressBook.address)
  return address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AddressBook::release_address() {
  // @@protoc_insertion_point(field_release:tutorial.AddressBook.address)
  
  return address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AddressBook::set_allocated_address(::std::string* address) {
  if (address != NULL) {
    
  } else {
    
  }
  address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), address);
  // @@protoc_insertion_point(field_set_allocated:tutorial.AddressBook.address)
}

// optional int32 number = 3;
inline void AddressBook::clear_number() {
  number_ = 0;
}
inline ::google::protobuf::int32 AddressBook::number() const {
  // @@protoc_insertion_point(field_get:tutorial.AddressBook.number)
  return number_;
}
inline void AddressBook::set_number(::google::protobuf::int32 value) {
  
  number_ = value;
  // @@protoc_insertion_point(field_set:tutorial.AddressBook.number)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::tutorial::Person_PhoneType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::tutorial::Person_PhoneType>() {
  return ::tutorial::Person_PhoneType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_addressbook_2eproto__INCLUDED
