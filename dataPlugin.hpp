

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from data.idl
using RTI Code Generator (rtiddsgen) version 4.3.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef dataPlugin_1787941786_h
#define dataPlugin_1787941786_h

#include "data.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define control_dataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define control_dataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define control_dataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define control_dataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define control_dataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern control_data*
control_dataPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern control_data*
control_dataPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern control_data*
control_dataPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
control_dataPluginSupport_copy_data(
    control_data *out,
    const control_data *in);

NDDSUSERDllExport extern void 
control_dataPluginSupport_destroy_data_w_params(
    control_data *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
control_dataPluginSupport_destroy_data_ex(
    control_data *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
control_dataPluginSupport_destroy_data(
    control_data *sample);

NDDSUSERDllExport extern void 
control_dataPluginSupport_print_data(
    const control_data *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
control_dataPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
control_dataPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
control_dataPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
control_dataPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
control_dataPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    control_data *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
control_dataPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    control_data *out,
    const control_data *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
control_dataPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const control_data *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
control_dataPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    control_data **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
control_dataPlugin_deserialize_from_cdr_buffer(
    control_data *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
control_dataPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
control_dataPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
control_dataPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
control_dataPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
control_dataPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    control_data ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
control_dataPlugin_new(void);

NDDSUSERDllExport extern void
control_dataPlugin_delete(struct PRESTypePlugin *);

#define status_dataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define status_dataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define status_dataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define status_dataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define status_dataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern status_data*
status_dataPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern status_data*
status_dataPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern status_data*
status_dataPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
status_dataPluginSupport_copy_data(
    status_data *out,
    const status_data *in);

NDDSUSERDllExport extern void 
status_dataPluginSupport_destroy_data_w_params(
    status_data *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
status_dataPluginSupport_destroy_data_ex(
    status_data *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
status_dataPluginSupport_destroy_data(
    status_data *sample);

NDDSUSERDllExport extern void 
status_dataPluginSupport_print_data(
    const status_data *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
status_dataPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
status_dataPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
status_dataPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
status_dataPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
status_dataPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    status_data *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
status_dataPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    status_data *out,
    const status_data *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
status_dataPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const status_data *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
status_dataPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    status_data **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
status_dataPlugin_deserialize_from_cdr_buffer(
    status_data *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
status_dataPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
status_dataPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
status_dataPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
status_dataPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
status_dataPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    status_data ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
status_dataPlugin_new(void);

NDDSUSERDllExport extern void
status_dataPlugin_delete(struct PRESTypePlugin *);

#define IMU_dataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define IMU_dataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define IMU_dataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define IMU_dataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define IMU_dataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern IMU_data*
IMU_dataPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern IMU_data*
IMU_dataPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern IMU_data*
IMU_dataPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
IMU_dataPluginSupport_copy_data(
    IMU_data *out,
    const IMU_data *in);

NDDSUSERDllExport extern void 
IMU_dataPluginSupport_destroy_data_w_params(
    IMU_data *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
IMU_dataPluginSupport_destroy_data_ex(
    IMU_data *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
IMU_dataPluginSupport_destroy_data(
    IMU_data *sample);

NDDSUSERDllExport extern void 
IMU_dataPluginSupport_print_data(
    const IMU_data *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
IMU_dataPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
IMU_dataPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
IMU_dataPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
IMU_dataPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
IMU_dataPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    IMU_data *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
IMU_dataPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    IMU_data *out,
    const IMU_data *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
IMU_dataPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const IMU_data *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
IMU_dataPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    IMU_data **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
IMU_dataPlugin_deserialize_from_cdr_buffer(
    IMU_data *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
IMU_dataPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
IMU_dataPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
IMU_dataPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
IMU_dataPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
IMU_dataPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    IMU_data ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *cdrStream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
IMU_dataPlugin_new(void);

NDDSUSERDllExport extern void
IMU_dataPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* dataPlugin_1787941786_h */

