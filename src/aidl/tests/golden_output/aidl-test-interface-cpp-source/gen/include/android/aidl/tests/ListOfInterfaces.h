#pragma once

#include <android/aidl/tests/ListOfInterfaces.h>
#include <android/binder_to_string.h>
#include <array>
#include <binder/Enums.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cassert>
#include <cstdint>
#include <optional>
#include <string>
#include <tuple>
#include <type_traits>
#include <utility>
#include <utils/String16.h>
#include <utils/StrongPointer.h>
#include <variant>
#include <vector>

#ifndef __BIONIC__
#define __assert2(a,b,c,d) ((void)0)
#endif

namespace android {
namespace aidl {
namespace tests {
class ListOfInterfaces : public ::android::Parcelable {
public:
  class IEmptyInterfaceDelegator;

  class IEmptyInterface : public ::android::IInterface {
  public:
    typedef IEmptyInterfaceDelegator DefaultDelegator;
    DECLARE_META_INTERFACE(EmptyInterface)
  };  // class IEmptyInterface

  class IEmptyInterfaceDefault : public IEmptyInterface {
  public:
    ::android::IBinder* onAsBinder() override {
      return nullptr;
    }
  };  // class IEmptyInterfaceDefault
  class BpEmptyInterface : public ::android::BpInterface<IEmptyInterface> {
  public:
    explicit BpEmptyInterface(const ::android::sp<::android::IBinder>& _aidl_impl);
    virtual ~BpEmptyInterface() = default;
  };  // class BpEmptyInterface
  class BnEmptyInterface : public ::android::BnInterface<IEmptyInterface> {
  public:
    explicit BnEmptyInterface();
    ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  };  // class BnEmptyInterface

  class IEmptyInterfaceDelegator : public BnEmptyInterface {
  public:
    explicit IEmptyInterfaceDelegator(const ::android::sp<IEmptyInterface> &impl) : _aidl_delegate(impl) {}

  private:
    ::android::sp<IEmptyInterface> _aidl_delegate;
  };  // class IEmptyInterfaceDelegator
  class IMyInterfaceDelegator;

  class IMyInterface : public ::android::IInterface {
  public:
    typedef IMyInterfaceDelegator DefaultDelegator;
    DECLARE_META_INTERFACE(MyInterface)
    virtual ::android::binder::Status methodWithInterfaces(const ::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>& iface, const ::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>& nullable_iface, const ::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>& iface_list_in, ::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>* iface_list_out, ::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>* iface_list_inout, const ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>& nullable_iface_list_in, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>* nullable_iface_list_out, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>* nullable_iface_list_inout, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>* _aidl_return) = 0;
  };  // class IMyInterface

  class IMyInterfaceDefault : public IMyInterface {
  public:
    ::android::IBinder* onAsBinder() override {
      return nullptr;
    }
    ::android::binder::Status methodWithInterfaces(const ::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>& /*iface*/, const ::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>& /*nullable_iface*/, const ::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>& /*iface_list_in*/, ::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>* /*iface_list_out*/, ::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>* /*iface_list_inout*/, const ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>& /*nullable_iface_list_in*/, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>* /*nullable_iface_list_out*/, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>* /*nullable_iface_list_inout*/, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>* /*_aidl_return*/) override {
      return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
    }
  };  // class IMyInterfaceDefault
  class BpMyInterface : public ::android::BpInterface<IMyInterface> {
  public:
    explicit BpMyInterface(const ::android::sp<::android::IBinder>& _aidl_impl);
    virtual ~BpMyInterface() = default;
    ::android::binder::Status methodWithInterfaces(const ::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>& iface, const ::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>& nullable_iface, const ::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>& iface_list_in, ::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>* iface_list_out, ::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>* iface_list_inout, const ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>& nullable_iface_list_in, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>* nullable_iface_list_out, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>* nullable_iface_list_inout, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>* _aidl_return) override;
  };  // class BpMyInterface
  class BnMyInterface : public ::android::BnInterface<IMyInterface> {
  public:
    static constexpr uint32_t TRANSACTION_methodWithInterfaces = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
    explicit BnMyInterface();
    ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  };  // class BnMyInterface

  class IMyInterfaceDelegator : public BnMyInterface {
  public:
    explicit IMyInterfaceDelegator(const ::android::sp<IMyInterface> &impl) : _aidl_delegate(impl) {}

    ::android::binder::Status methodWithInterfaces(const ::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>& iface, const ::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>& nullable_iface, const ::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>& iface_list_in, ::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>* iface_list_out, ::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>* iface_list_inout, const ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>& nullable_iface_list_in, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>* nullable_iface_list_out, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>* nullable_iface_list_inout, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>* _aidl_return) override {
      return _aidl_delegate->methodWithInterfaces(iface, nullable_iface, iface_list_in, iface_list_out, iface_list_inout, nullable_iface_list_in, nullable_iface_list_out, nullable_iface_list_inout, _aidl_return);
    }
  private:
    ::android::sp<IMyInterface> _aidl_delegate;
  };  // class IMyInterfaceDelegator
  class MyParcelable : public ::android::Parcelable {
  public:
    ::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface> iface;
    ::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface> nullable_iface;
    ::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>> iface_list;
    ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>> nullable_iface_list;
    inline bool operator!=(const MyParcelable& rhs) const {
      return std::tie(iface, nullable_iface, iface_list, nullable_iface_list) != std::tie(rhs.iface, rhs.nullable_iface, rhs.iface_list, rhs.nullable_iface_list);
    }
    inline bool operator<(const MyParcelable& rhs) const {
      return std::tie(iface, nullable_iface, iface_list, nullable_iface_list) < std::tie(rhs.iface, rhs.nullable_iface, rhs.iface_list, rhs.nullable_iface_list);
    }
    inline bool operator<=(const MyParcelable& rhs) const {
      return std::tie(iface, nullable_iface, iface_list, nullable_iface_list) <= std::tie(rhs.iface, rhs.nullable_iface, rhs.iface_list, rhs.nullable_iface_list);
    }
    inline bool operator==(const MyParcelable& rhs) const {
      return std::tie(iface, nullable_iface, iface_list, nullable_iface_list) == std::tie(rhs.iface, rhs.nullable_iface, rhs.iface_list, rhs.nullable_iface_list);
    }
    inline bool operator>(const MyParcelable& rhs) const {
      return std::tie(iface, nullable_iface, iface_list, nullable_iface_list) > std::tie(rhs.iface, rhs.nullable_iface, rhs.iface_list, rhs.nullable_iface_list);
    }
    inline bool operator>=(const MyParcelable& rhs) const {
      return std::tie(iface, nullable_iface, iface_list, nullable_iface_list) >= std::tie(rhs.iface, rhs.nullable_iface, rhs.iface_list, rhs.nullable_iface_list);
    }

    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCIPTOR (u"android.aidl.tests.ListOfInterfaces.MyParcelable");
      return DESCIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream os;
      os << "MyParcelable{";
      os << "iface: " << ::android::internal::ToString(iface);
      os << ", nullable_iface: " << ::android::internal::ToString(nullable_iface);
      os << ", iface_list: " << ::android::internal::ToString(iface_list);
      os << ", nullable_iface_list: " << ::android::internal::ToString(nullable_iface_list);
      os << "}";
      return os.str();
    }
  };  // class MyParcelable
  class MyUnion : public ::android::Parcelable {
  public:
    enum class Tag : int32_t {
      iface = 0,
      nullable_iface = 1,
      iface_list = 2,
      nullable_iface_list = 3,
    };
    // Expose tag symbols for legacy code
    static const inline Tag iface = Tag::iface;
    static const inline Tag nullable_iface = Tag::nullable_iface;
    static const inline Tag iface_list = Tag::iface_list;
    static const inline Tag nullable_iface_list = Tag::nullable_iface_list;

    template<typename _Tp>
    static constexpr bool _not_self = !std::is_same_v<std::remove_cv_t<std::remove_reference_t<_Tp>>, MyUnion>;

    MyUnion() : _value(std::in_place_index<static_cast<size_t>(iface)>, ::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>()) { }

    template <typename _Tp, typename = std::enable_if_t<_not_self<_Tp>>>
    // NOLINTNEXTLINE(google-explicit-constructor)
    constexpr MyUnion(_Tp&& _arg)
        : _value(std::forward<_Tp>(_arg)) {}

    template <size_t _Np, typename... _Tp>
    constexpr explicit MyUnion(std::in_place_index_t<_Np>, _Tp&&... _args)
        : _value(std::in_place_index<_Np>, std::forward<_Tp>(_args)...) {}

    template <Tag _tag, typename... _Tp>
    static MyUnion make(_Tp&&... _args) {
      return MyUnion(std::in_place_index<static_cast<size_t>(_tag)>, std::forward<_Tp>(_args)...);
    }

    template <Tag _tag, typename _Tp, typename... _Up>
    static MyUnion make(std::initializer_list<_Tp> _il, _Up&&... _args) {
      return MyUnion(std::in_place_index<static_cast<size_t>(_tag)>, std::move(_il), std::forward<_Up>(_args)...);
    }

    Tag getTag() const {
      return static_cast<Tag>(_value.index());
    }

    template <Tag _tag>
    const auto& get() const {
      if (getTag() != _tag) { __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "bad access: a wrong tag"); }
      return std::get<static_cast<size_t>(_tag)>(_value);
    }

    template <Tag _tag>
    auto& get() {
      if (getTag() != _tag) { __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "bad access: a wrong tag"); }
      return std::get<static_cast<size_t>(_tag)>(_value);
    }

    template <Tag _tag, typename... _Tp>
    void set(_Tp&&... _args) {
      _value.emplace<static_cast<size_t>(_tag)>(std::forward<_Tp>(_args)...);
    }

    inline bool operator!=(const MyUnion& rhs) const {
      return _value != rhs._value;
    }
    inline bool operator<(const MyUnion& rhs) const {
      return _value < rhs._value;
    }
    inline bool operator<=(const MyUnion& rhs) const {
      return _value <= rhs._value;
    }
    inline bool operator==(const MyUnion& rhs) const {
      return _value == rhs._value;
    }
    inline bool operator>(const MyUnion& rhs) const {
      return _value > rhs._value;
    }
    inline bool operator>=(const MyUnion& rhs) const {
      return _value >= rhs._value;
    }

    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCIPTOR (u"android.aidl.tests.ListOfInterfaces.MyUnion");
      return DESCIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream os;
      os << "MyUnion{";
      switch (getTag()) {
      case iface: os << "iface: " << ::android::internal::ToString(get<iface>()); break;
      case nullable_iface: os << "nullable_iface: " << ::android::internal::ToString(get<nullable_iface>()); break;
      case iface_list: os << "iface_list: " << ::android::internal::ToString(get<iface_list>()); break;
      case nullable_iface_list: os << "nullable_iface_list: " << ::android::internal::ToString(get<nullable_iface_list>()); break;
      }
      os << "}";
      return os.str();
    }
  private:
    std::variant<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>, ::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>, ::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>, ::std::optional<::std::vector<::android::sp<::android::aidl::tests::ListOfInterfaces::IEmptyInterface>>>> _value;
  };  // class MyUnion
  inline bool operator!=(const ListOfInterfaces&) const {
    return std::tie() != std::tie();
  }
  inline bool operator<(const ListOfInterfaces&) const {
    return std::tie() < std::tie();
  }
  inline bool operator<=(const ListOfInterfaces&) const {
    return std::tie() <= std::tie();
  }
  inline bool operator==(const ListOfInterfaces&) const {
    return std::tie() == std::tie();
  }
  inline bool operator>(const ListOfInterfaces&) const {
    return std::tie() > std::tie();
  }
  inline bool operator>=(const ListOfInterfaces&) const {
    return std::tie() >= std::tie();
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCIPTOR (u"android.aidl.tests.ListOfInterfaces");
    return DESCIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream os;
    os << "ListOfInterfaces{";
    os << "}";
    return os.str();
  }
};  // class ListOfInterfaces
}  // namespace tests
}  // namespace aidl
}  // namespace android
namespace android {
namespace aidl {
namespace tests {
[[nodiscard]] static inline std::string toString(ListOfInterfaces::MyUnion::Tag val) {
  switch(val) {
  case ListOfInterfaces::MyUnion::Tag::iface:
    return "iface";
  case ListOfInterfaces::MyUnion::Tag::nullable_iface:
    return "nullable_iface";
  case ListOfInterfaces::MyUnion::Tag::iface_list:
    return "iface_list";
  case ListOfInterfaces::MyUnion::Tag::nullable_iface_list:
    return "nullable_iface_list";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace tests
}  // namespace aidl
}  // namespace android
namespace android {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<::android::aidl::tests::ListOfInterfaces::MyUnion::Tag, 4> enum_values<::android::aidl::tests::ListOfInterfaces::MyUnion::Tag> = {
  ::android::aidl::tests::ListOfInterfaces::MyUnion::Tag::iface,
  ::android::aidl::tests::ListOfInterfaces::MyUnion::Tag::nullable_iface,
  ::android::aidl::tests::ListOfInterfaces::MyUnion::Tag::iface_list,
  ::android::aidl::tests::ListOfInterfaces::MyUnion::Tag::nullable_iface_list,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
