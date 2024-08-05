

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from data.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef data_1787941786_hpp
#define data_1787941786_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/External.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/core/array.hpp"
#include "rti/topic/TopicTraits.hpp"

#include "omg/types/string_view.hpp"

#include "rti/core/BoundedSequence.hpp"
#include "dds/core/Optional.hpp"

#ifndef NDDS_STANDALONE_TYPE
#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

class NDDSUSERDllExport control_data {
  public:

    control_data();

    control_data(const std::string& tin_,float steering_,int32_t gear_,float acceleration_,float brake_,int32_t additional_button1_,int32_t additional_button2_,int32_t additional_button3_);

    std::string& tin() noexcept {
        return m_tin_;
    }

    const std::string& tin() const noexcept {
        return m_tin_;
    }

    void tin(const std::string& value) {

        m_tin_ = value;
    }

    void tin(std::string&& value) {
        m_tin_ = std::move(value);
    }
    float& steering() noexcept {
        return m_steering_;
    }

    const float& steering() const noexcept {
        return m_steering_;
    }

    void steering(float value) {

        m_steering_ = value;
    }

    int32_t& gear() noexcept {
        return m_gear_;
    }

    const int32_t& gear() const noexcept {
        return m_gear_;
    }

    void gear(int32_t value) {

        m_gear_ = value;
    }

    float& acceleration() noexcept {
        return m_acceleration_;
    }

    const float& acceleration() const noexcept {
        return m_acceleration_;
    }

    void acceleration(float value) {

        m_acceleration_ = value;
    }

    float& brake() noexcept {
        return m_brake_;
    }

    const float& brake() const noexcept {
        return m_brake_;
    }

    void brake(float value) {

        m_brake_ = value;
    }

    int32_t& additional_button1() noexcept {
        return m_additional_button1_;
    }

    const int32_t& additional_button1() const noexcept {
        return m_additional_button1_;
    }

    void additional_button1(int32_t value) {

        m_additional_button1_ = value;
    }

    int32_t& additional_button2() noexcept {
        return m_additional_button2_;
    }

    const int32_t& additional_button2() const noexcept {
        return m_additional_button2_;
    }

    void additional_button2(int32_t value) {

        m_additional_button2_ = value;
    }

    int32_t& additional_button3() noexcept {
        return m_additional_button3_;
    }

    const int32_t& additional_button3() const noexcept {
        return m_additional_button3_;
    }

    void additional_button3(int32_t value) {

        m_additional_button3_ = value;
    }

    bool operator == (const control_data& other_) const;
    bool operator != (const control_data& other_) const;

    void swap(control_data& other_) noexcept ;

  private:

    std::string m_tin_;
    float m_steering_;
    int32_t m_gear_;
    float m_acceleration_;
    float m_brake_;
    int32_t m_additional_button1_;
    int32_t m_additional_button2_;
    int32_t m_additional_button3_;

};

inline void swap(control_data& a, control_data& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const control_data& sample);

class NDDSUSERDllExport status_data {
  public:

    status_data();

    status_data(const std::string& vin_,bool online_,bool connected_);

    std::string& vin() noexcept {
        return m_vin_;
    }

    const std::string& vin() const noexcept {
        return m_vin_;
    }

    void vin(const std::string& value) {

        m_vin_ = value;
    }

    void vin(std::string&& value) {
        m_vin_ = std::move(value);
    }
    bool& online() noexcept {
        return m_online_;
    }

    const bool& online() const noexcept {
        return m_online_;
    }

    void online(bool value) {

        m_online_ = value;
    }

    bool& connected() noexcept {
        return m_connected_;
    }

    const bool& connected() const noexcept {
        return m_connected_;
    }

    void connected(bool value) {

        m_connected_ = value;
    }

    bool operator == (const status_data& other_) const;
    bool operator != (const status_data& other_) const;

    void swap(status_data& other_) noexcept ;

  private:

    std::string m_vin_;
    bool m_online_;
    bool m_connected_;

};

inline void swap(status_data& a, status_data& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const status_data& sample);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
// On Windows, dll-export template instantiations of standard types used by
// other dll-exported types
template class NDDSUSERDllExport std::allocator< double >;
template class NDDSUSERDllExport std::vector< double >;
#endif
class NDDSUSERDllExport IMU_data {
  public:

    IMU_data();

    IMU_data(const std::string& vin_,const ::rti::core::bounded_sequence< double, 4L >& quaternion_,const ::rti::core::bounded_sequence< double, 3L >& angular_velocity_,const ::rti::core::bounded_sequence< double, 3L >& linear_acceleration_);

    std::string& vin() noexcept {
        return m_vin_;
    }

    const std::string& vin() const noexcept {
        return m_vin_;
    }

    void vin(const std::string& value) {

        m_vin_ = value;
    }

    void vin(std::string&& value) {
        m_vin_ = std::move(value);
    }
    ::rti::core::bounded_sequence< double, 4L >& quaternion() noexcept {
        return m_quaternion_;
    }

    const ::rti::core::bounded_sequence< double, 4L >& quaternion() const noexcept {
        return m_quaternion_;
    }

    void quaternion(const ::rti::core::bounded_sequence< double, 4L >& value) {

        m_quaternion_ = value;
    }

    void quaternion(::rti::core::bounded_sequence< double, 4L >&& value) {
        m_quaternion_ = std::move(value);
    }
    ::rti::core::bounded_sequence< double, 3L >& angular_velocity() noexcept {
        return m_angular_velocity_;
    }

    const ::rti::core::bounded_sequence< double, 3L >& angular_velocity() const noexcept {
        return m_angular_velocity_;
    }

    void angular_velocity(const ::rti::core::bounded_sequence< double, 3L >& value) {

        m_angular_velocity_ = value;
    }

    void angular_velocity(::rti::core::bounded_sequence< double, 3L >&& value) {
        m_angular_velocity_ = std::move(value);
    }
    ::rti::core::bounded_sequence< double, 3L >& linear_acceleration() noexcept {
        return m_linear_acceleration_;
    }

    const ::rti::core::bounded_sequence< double, 3L >& linear_acceleration() const noexcept {
        return m_linear_acceleration_;
    }

    void linear_acceleration(const ::rti::core::bounded_sequence< double, 3L >& value) {

        m_linear_acceleration_ = value;
    }

    void linear_acceleration(::rti::core::bounded_sequence< double, 3L >&& value) {
        m_linear_acceleration_ = std::move(value);
    }
    bool operator == (const IMU_data& other_) const;
    bool operator != (const IMU_data& other_) const;

    void swap(IMU_data& other_) noexcept ;

  private:

    std::string m_vin_;
    ::rti::core::bounded_sequence< double, 4L > m_quaternion_;
    ::rti::core::bounded_sequence< double, 3L > m_angular_velocity_;
    ::rti::core::bounded_sequence< double, 3L > m_linear_acceleration_;

};

inline void swap(IMU_data& a, IMU_data& b)  noexcept 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const IMU_data& sample);

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
    }
}
#else

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< ::control_data > {
            NDDSUSERDllExport static std::string value() {
                return "control_data";
            }
        };

        template<>
        struct is_topic_type< ::control_data > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::control_data > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::control_data& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::control_data& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::control_data& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::control_data& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::status_data > {
            NDDSUSERDllExport static std::string value() {
                return "status_data";
            }
        };

        template<>
        struct is_topic_type< ::status_data > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::status_data > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::status_data& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::status_data& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::status_data& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::status_data& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::IMU_data > {
            NDDSUSERDllExport static std::string value() {
                return "IMU_data";
            }
        };

        template<>
        struct is_topic_type< ::IMU_data > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::IMU_data > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::IMU_data& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::IMU_data& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::IMU_data& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::IMU_data& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type< ::control_data > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::control_data > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::status_data > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::status_data > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::IMU_data > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::IMU_data > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // data_1787941786_hpp

