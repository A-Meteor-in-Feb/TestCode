

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from data.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>
#include <cmath>
#include <limits>

#ifndef NDDS_STANDALONE_TYPE
#include "rti/topic/cdr/Serialization.hpp"
#include "dataPlugin.hpp"
#else
#include "rti/topic/cdr/SerializationHelpers.hpp"
#endif

#include "data.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- control_data: 

control_data::control_data() :
    m_tin_ ("") ,
    m_steering_ (0.0f) ,
    m_gear_ (0) ,
    m_acceleration_ (0.0f) ,
    m_brake_ (0.0f) ,
    m_additional_button1_ (0) ,
    m_additional_button2_ (0) ,
    m_additional_button3_ (0)  {

}   

control_data::control_data (const std::string& tin_,float steering_,int32_t gear_,float acceleration_,float brake_,int32_t additional_button1_,int32_t additional_button2_,int32_t additional_button3_):
    m_tin_(tin_), 
    m_steering_(steering_), 
    m_gear_(gear_), 
    m_acceleration_(acceleration_), 
    m_brake_(brake_), 
    m_additional_button1_(additional_button1_), 
    m_additional_button2_(additional_button2_), 
    m_additional_button3_(additional_button3_) {
}

void control_data::swap(control_data& other_)  noexcept 
{
    using std::swap;
    swap(m_tin_, other_.m_tin_);
    swap(m_steering_, other_.m_steering_);
    swap(m_gear_, other_.m_gear_);
    swap(m_acceleration_, other_.m_acceleration_);
    swap(m_brake_, other_.m_brake_);
    swap(m_additional_button1_, other_.m_additional_button1_);
    swap(m_additional_button2_, other_.m_additional_button2_);
    swap(m_additional_button3_, other_.m_additional_button3_);
}  

bool control_data::operator == (const control_data& other_) const {
    if (m_tin_ != other_.m_tin_) {
        return false;
    }
    if (std::fabs(m_steering_ - other_.m_steering_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_steering_ - other_.m_steering_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (m_gear_ != other_.m_gear_) {
        return false;
    }
    if (std::fabs(m_acceleration_ - other_.m_acceleration_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_acceleration_ - other_.m_acceleration_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (std::fabs(m_brake_ - other_.m_brake_) > std::numeric_limits< float>::epsilon()
    && !(std::fabs(m_brake_ - other_.m_brake_) < (std::numeric_limits< float>::min)())) {
        return false;
    }
    if (m_additional_button1_ != other_.m_additional_button1_) {
        return false;
    }
    if (m_additional_button2_ != other_.m_additional_button2_) {
        return false;
    }
    if (m_additional_button3_ != other_.m_additional_button3_) {
        return false;
    }
    return true;
}

bool control_data::operator != (const control_data& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const control_data& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "tin: " << sample.tin ()<<", ";
    o << "steering: " << std::setprecision(9) << sample.steering ()<<", ";
    o << "gear: " << sample.gear ()<<", ";
    o << "acceleration: " << std::setprecision(9) << sample.acceleration ()<<", ";
    o << "brake: " << std::setprecision(9) << sample.brake ()<<", ";
    o << "additional_button1: " << sample.additional_button1 ()<<", ";
    o << "additional_button2: " << sample.additional_button2 ()<<", ";
    o << "additional_button3: " << sample.additional_button3 ();
    o <<"]";
    return o;
}

// ---- status_data: 

status_data::status_data() :
    m_vin_ ("") ,
    m_online_ (0) ,
    m_connected_ (0)  {

}   

status_data::status_data (const std::string& vin_,bool online_,bool connected_):
    m_vin_(vin_), 
    m_online_(online_), 
    m_connected_(connected_) {
}

void status_data::swap(status_data& other_)  noexcept 
{
    using std::swap;
    swap(m_vin_, other_.m_vin_);
    swap(m_online_, other_.m_online_);
    swap(m_connected_, other_.m_connected_);
}  

bool status_data::operator == (const status_data& other_) const {
    if (m_vin_ != other_.m_vin_) {
        return false;
    }
    if (m_online_ != other_.m_online_) {
        return false;
    }
    if (m_connected_ != other_.m_connected_) {
        return false;
    }
    return true;
}

bool status_data::operator != (const status_data& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const status_data& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "vin: " << sample.vin ()<<", ";
    o << "online: " << sample.online ()<<", ";
    o << "connected: " << sample.connected ();
    o <<"]";
    return o;
}

// ---- IMU_data: 

IMU_data::IMU_data() :
    m_vin_ ("")  {

}   

IMU_data::IMU_data (const std::string& vin_,const ::rti::core::bounded_sequence< double, 4L >& quaternion_,const ::rti::core::bounded_sequence< double, 3L >& angular_velocity_,const ::rti::core::bounded_sequence< double, 3L >& linear_acceleration_):
    m_vin_(vin_), 
    m_quaternion_(quaternion_), 
    m_angular_velocity_(angular_velocity_), 
    m_linear_acceleration_(linear_acceleration_) {
}

void IMU_data::swap(IMU_data& other_)  noexcept 
{
    using std::swap;
    swap(m_vin_, other_.m_vin_);
    swap(m_quaternion_, other_.m_quaternion_);
    swap(m_angular_velocity_, other_.m_angular_velocity_);
    swap(m_linear_acceleration_, other_.m_linear_acceleration_);
}  

bool IMU_data::operator == (const IMU_data& other_) const {
    if (m_vin_ != other_.m_vin_) {
        return false;
    }
    if (m_quaternion_ != other_.m_quaternion_) {
        return false;
    }
    if (m_angular_velocity_ != other_.m_angular_velocity_) {
        return false;
    }
    if (m_linear_acceleration_ != other_.m_linear_acceleration_) {
        return false;
    }
    return true;
}

bool IMU_data::operator != (const IMU_data& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const IMU_data& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "vin: " << sample.vin ()<<", ";
    o << "quaternion: " << sample.quaternion ()<<", ";
    o << "angular_velocity: " << sample.angular_velocity ()<<", ";
    o << "linear_acceleration: " << sample.linear_acceleration ();
    o <<"]";
    return o;
}

#ifdef NDDS_STANDALONE_TYPE
namespace rti {
    namespace topic {
    }
}

#else
// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code< ::control_data > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode control_data_g_tc_tin_string;

                static DDS_TypeCode_Member control_data_g_tc_members[8]=
                {

                    {
                        (char *)"tin",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"steering",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"gear",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"acceleration",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"brake",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"additional_button1",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"additional_button2",/* Member name */
                        {
                            6,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"additional_button3",/* Member name */
                        {
                            7,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode control_data_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_data", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        control_data_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for control_data*/

                if (is_initialized) {
                    return &control_data_g_tc;
                }

                is_initialized = RTI_TRUE;

                control_data_g_tc_tin_string = initialize_string_typecode((255L));

                control_data_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                control_data_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&control_data_g_tc_tin_string;
                control_data_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                control_data_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                control_data_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                control_data_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                control_data_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                control_data_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
                control_data_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Initialize the values for member annotations. */
                control_data_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                control_data_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                control_data_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[1]._annotations._defaultValue._u.float_value = 0.0f;
                control_data_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[1]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                control_data_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[1]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                control_data_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
                control_data_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                control_data_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                control_data_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[3]._annotations._defaultValue._u.float_value = 0.0f;
                control_data_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[3]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                control_data_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[3]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                control_data_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[4]._annotations._defaultValue._u.float_value = 0.0f;
                control_data_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[4]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
                control_data_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
                control_data_g_tc_members[4]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;
                control_data_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[5]._annotations._defaultValue._u.long_value = 0;
                control_data_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[5]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                control_data_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[5]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                control_data_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[6]._annotations._defaultValue._u.long_value = 0;
                control_data_g_tc_members[6]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[6]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                control_data_g_tc_members[6]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[6]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;
                control_data_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[7]._annotations._defaultValue._u.long_value = 0;
                control_data_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[7]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
                control_data_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                control_data_g_tc_members[7]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

                control_data_g_tc._data._sampleAccessInfo = sample_access_info();
                control_data_g_tc._data._typePlugin = type_plugin_info();    

                return &control_data_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::control_data *sample;

                static RTIXCdrMemberAccessInfo control_data_g_memberAccessInfos[8] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo control_data_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &control_data_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::control_data);
                if (sample == NULL) {
                    return NULL;
                }

                control_data_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->tin() - (char *)sample);

                control_data_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->steering() - (char *)sample);

                control_data_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->gear() - (char *)sample);

                control_data_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->acceleration() - (char *)sample);

                control_data_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->brake() - (char *)sample);

                control_data_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->additional_button1() - (char *)sample);

                control_data_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->additional_button2() - (char *)sample);

                control_data_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->additional_button3() - (char *)sample);

                control_data_g_sampleAccessInfo.memberAccessInfos = 
                control_data_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::control_data);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        control_data_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        control_data_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                control_data_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                control_data_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::control_data >;

                control_data_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &control_data_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin control_data_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &control_data_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::control_data >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::control_data >::get())));
        }

        template<>
        struct native_type_code< ::status_data > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode status_data_g_tc_vin_string;

                static DDS_TypeCode_Member status_data_g_tc_members[3]=
                {

                    {
                        (char *)"vin",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"online",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"connected",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode status_data_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"status_data", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        status_data_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for status_data*/

                if (is_initialized) {
                    return &status_data_g_tc;
                }

                is_initialized = RTI_TRUE;

                status_data_g_tc_vin_string = initialize_string_typecode((255L));

                status_data_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                status_data_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&status_data_g_tc_vin_string;
                status_data_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                status_data_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();

                /* Initialize the values for member annotations. */
                status_data_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                status_data_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";
                status_data_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                status_data_g_tc_members[1]._annotations._defaultValue._u.boolean_value = 0;
                status_data_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                status_data_g_tc_members[2]._annotations._defaultValue._u.boolean_value = 0;

                status_data_g_tc._data._sampleAccessInfo = sample_access_info();
                status_data_g_tc._data._typePlugin = type_plugin_info();    

                return &status_data_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::status_data *sample;

                static RTIXCdrMemberAccessInfo status_data_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo status_data_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &status_data_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::status_data);
                if (sample == NULL) {
                    return NULL;
                }

                status_data_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vin() - (char *)sample);

                status_data_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->online() - (char *)sample);

                status_data_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->connected() - (char *)sample);

                status_data_g_sampleAccessInfo.memberAccessInfos = 
                status_data_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::status_data);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        status_data_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        status_data_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                status_data_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                status_data_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::status_data >;

                status_data_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &status_data_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin status_data_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &status_data_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::status_data >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::status_data >::get())));
        }

        template<>
        struct native_type_code< ::IMU_data > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode IMU_data_g_tc_vin_string;
                static DDS_TypeCode IMU_data_g_tc_quaternion_sequence;
                static DDS_TypeCode IMU_data_g_tc_angular_velocity_sequence;
                static DDS_TypeCode IMU_data_g_tc_linear_acceleration_sequence;

                static DDS_TypeCode_Member IMU_data_g_tc_members[4]=
                {

                    {
                        (char *)"vin",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"quaternion",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"angular_velocity",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"linear_acceleration",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode IMU_data_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"IMU_data", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        IMU_data_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for IMU_data*/

                if (is_initialized) {
                    return &IMU_data_g_tc;
                }

                is_initialized = RTI_TRUE;

                IMU_data_g_tc_vin_string = initialize_string_typecode((255L));
                IMU_data_g_tc_quaternion_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< double, 4L > >((4L));
                IMU_data_g_tc_angular_velocity_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< double, 3L > >((3L));
                IMU_data_g_tc_linear_acceleration_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< double, 3L > >((3L));

                IMU_data_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                IMU_data_g_tc_quaternion_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                IMU_data_g_tc_angular_velocity_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                IMU_data_g_tc_linear_acceleration_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
                IMU_data_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&IMU_data_g_tc_vin_string;
                IMU_data_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& IMU_data_g_tc_quaternion_sequence;
                IMU_data_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& IMU_data_g_tc_angular_velocity_sequence;
                IMU_data_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& IMU_data_g_tc_linear_acceleration_sequence;

                /* Initialize the values for member annotations. */
                IMU_data_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                IMU_data_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                IMU_data_g_tc._data._sampleAccessInfo = sample_access_info();
                IMU_data_g_tc._data._typePlugin = type_plugin_info();    

                return &IMU_data_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                ::IMU_data *sample;

                static RTIXCdrMemberAccessInfo IMU_data_g_memberAccessInfos[4] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo IMU_data_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &IMU_data_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    ::IMU_data);
                if (sample == NULL) {
                    return NULL;
                }

                IMU_data_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->vin() - (char *)sample);

                IMU_data_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->quaternion() - (char *)sample);

                IMU_data_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->angular_velocity() - (char *)sample);

                IMU_data_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->linear_acceleration() - (char *)sample);

                IMU_data_g_sampleAccessInfo.memberAccessInfos = 
                IMU_data_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(::IMU_data);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        IMU_data_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        IMU_data_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                IMU_data_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                IMU_data_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< ::IMU_data >;

                IMU_data_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &IMU_data_g_sampleAccessInfo;
            }
            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin IMU_data_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &IMU_data_g_typePlugin;
            }
        }; // native_type_code

        const ::dds::core::xtypes::StructType& dynamic_type< ::IMU_data >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< ::IMU_data >::get())));
        }
    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< ::control_data >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::control_dataPlugin_new,
                ::control_dataPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::control_data >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::control_data& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = control_dataPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = control_dataPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::control_data >::from_cdr_buffer(::control_data& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = control_dataPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::control_data from cdr buffer");
        }

        void topic_type_support< ::control_data >::reset_sample(::control_data& sample) 
        {
            sample.tin("");
            sample.steering(0.0f);
            sample.gear(0);
            sample.acceleration(0.0f);
            sample.brake(0.0f);
            sample.additional_button1(0);
            sample.additional_button2(0);
            sample.additional_button3(0);
        }

        void topic_type_support< ::control_data >::allocate_sample(::control_data& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.tin(),  -1, 255L);
        }
        void topic_type_support< ::status_data >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::status_dataPlugin_new,
                ::status_dataPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::status_data >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::status_data& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = status_dataPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = status_dataPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::status_data >::from_cdr_buffer(::status_data& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = status_dataPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::status_data from cdr buffer");
        }

        void topic_type_support< ::status_data >::reset_sample(::status_data& sample) 
        {
            sample.vin("");
            sample.online(0);
            sample.connected(0);
        }

        void topic_type_support< ::status_data >::allocate_sample(::status_data& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.vin(),  -1, 255L);
        }
        void topic_type_support< ::IMU_data >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                ::IMU_dataPlugin_new,
                ::IMU_dataPlugin_delete);
        }

        std::vector<char>& topic_type_support< ::IMU_data >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const ::IMU_data& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = IMU_dataPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = IMU_dataPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< ::IMU_data >::from_cdr_buffer(::IMU_data& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = IMU_dataPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create ::IMU_data from cdr buffer");
        }

        void topic_type_support< ::IMU_data >::reset_sample(::IMU_data& sample) 
        {
            sample.vin("");
            ::rti::topic::reset_sample(sample.quaternion());
            ::rti::topic::reset_sample(sample.angular_velocity());
            ::rti::topic::reset_sample(sample.linear_acceleration());
        }

        void topic_type_support< ::IMU_data >::allocate_sample(::IMU_data& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.vin(),  -1, 255L);
            ::rti::topic::allocate_sample(sample.quaternion(),  4L, -1);
            ::rti::topic::allocate_sample(sample.angular_velocity(),  3L, -1);
            ::rti::topic::allocate_sample(sample.linear_acceleration(),  3L, -1);
        }
    }
}  

#endif // NDDS_STANDALONE_TYPE
