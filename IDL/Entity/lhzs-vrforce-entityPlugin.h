
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from lhzs-vrforce-entity.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef lhzs_vrforce_entityPlugin_875776359_h
#define lhzs_vrforce_entityPlugin_875776359_h

#include "lhzs-vrforce-entity.h"



struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif


#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif


namespace LHZS{

namespace VRFORCE_ENTITY{


#define DATE_OF_DATAPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DATE_OF_DATAPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DATE_OF_DATAPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define DATE_OF_DATAPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DATE_OF_DATAPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DATE_OF_DATA*
DATE_OF_DATAPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DATE_OF_DATA*
DATE_OF_DATAPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DATE_OF_DATA*
DATE_OF_DATAPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DATE_OF_DATAPluginSupport_copy_data(
    DATE_OF_DATA *out,
    const DATE_OF_DATA *in);

NDDSUSERDllExport extern void 
DATE_OF_DATAPluginSupport_destroy_data_w_params(
    DATE_OF_DATA *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DATE_OF_DATAPluginSupport_destroy_data_ex(
    DATE_OF_DATA *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DATE_OF_DATAPluginSupport_destroy_data(
    DATE_OF_DATA *sample);

NDDSUSERDllExport extern void 
DATE_OF_DATAPluginSupport_print_data(
    const DATE_OF_DATA *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DATE_OF_DATAPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DATE_OF_DATAPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
DATE_OF_DATAPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DATE_OF_DATAPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
DATE_OF_DATAPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    DATE_OF_DATA *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
DATE_OF_DATAPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DATE_OF_DATA *out,
    const DATE_OF_DATA *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DATE_OF_DATAPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DATE_OF_DATA *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DATE_OF_DATAPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DATE_OF_DATA *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DATE_OF_DATAPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    DATE_OF_DATA **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DATE_OF_DATAPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DATE_OF_DATAPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DATE_OF_DATAPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DATE_OF_DATAPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DATE_OF_DATA * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DATE_OF_DATAPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DATE_OF_DATAPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DATE_OF_DATAPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DATE_OF_DATA *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DATE_OF_DATAPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DATE_OF_DATA * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DATE_OF_DATAPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    DATE_OF_DATA ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
DATE_OF_DATAPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DATE_OF_DATA *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
DATE_OF_DATAPlugin_new(void);

NDDSUSERDllExport extern void
DATE_OF_DATAPlugin_delete(struct PRESTypePlugin *);


#define RADAR_PARAMETERSPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define RADAR_PARAMETERSPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define RADAR_PARAMETERSPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define RADAR_PARAMETERSPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define RADAR_PARAMETERSPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RADAR_PARAMETERS*
RADAR_PARAMETERSPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern RADAR_PARAMETERS*
RADAR_PARAMETERSPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern RADAR_PARAMETERS*
RADAR_PARAMETERSPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
RADAR_PARAMETERSPluginSupport_copy_data(
    RADAR_PARAMETERS *out,
    const RADAR_PARAMETERS *in);

NDDSUSERDllExport extern void 
RADAR_PARAMETERSPluginSupport_destroy_data_w_params(
    RADAR_PARAMETERS *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
RADAR_PARAMETERSPluginSupport_destroy_data_ex(
    RADAR_PARAMETERS *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
RADAR_PARAMETERSPluginSupport_destroy_data(
    RADAR_PARAMETERS *sample);

NDDSUSERDllExport extern void 
RADAR_PARAMETERSPluginSupport_print_data(
    const RADAR_PARAMETERS *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
RADAR_PARAMETERSPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
RADAR_PARAMETERSPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
RADAR_PARAMETERSPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
RADAR_PARAMETERSPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
RADAR_PARAMETERSPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RADAR_PARAMETERS *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
RADAR_PARAMETERSPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RADAR_PARAMETERS *out,
    const RADAR_PARAMETERS *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
RADAR_PARAMETERSPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const RADAR_PARAMETERS *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RADAR_PARAMETERSPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    RADAR_PARAMETERS *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RADAR_PARAMETERSPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RADAR_PARAMETERS **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
RADAR_PARAMETERSPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
RADAR_PARAMETERSPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
RADAR_PARAMETERSPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
RADAR_PARAMETERSPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const RADAR_PARAMETERS * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
RADAR_PARAMETERSPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
RADAR_PARAMETERSPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
RADAR_PARAMETERSPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const RADAR_PARAMETERS *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
RADAR_PARAMETERSPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    RADAR_PARAMETERS * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
RADAR_PARAMETERSPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RADAR_PARAMETERS ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
RADAR_PARAMETERSPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RADAR_PARAMETERS *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
RADAR_PARAMETERSPlugin_new(void);

NDDSUSERDllExport extern void
RADAR_PARAMETERSPlugin_delete(struct PRESTypePlugin *);


#define COMM_PARAMETERSPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define COMM_PARAMETERSPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define COMM_PARAMETERSPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define COMM_PARAMETERSPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define COMM_PARAMETERSPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern COMM_PARAMETERS*
COMM_PARAMETERSPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern COMM_PARAMETERS*
COMM_PARAMETERSPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern COMM_PARAMETERS*
COMM_PARAMETERSPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
COMM_PARAMETERSPluginSupport_copy_data(
    COMM_PARAMETERS *out,
    const COMM_PARAMETERS *in);

NDDSUSERDllExport extern void 
COMM_PARAMETERSPluginSupport_destroy_data_w_params(
    COMM_PARAMETERS *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
COMM_PARAMETERSPluginSupport_destroy_data_ex(
    COMM_PARAMETERS *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
COMM_PARAMETERSPluginSupport_destroy_data(
    COMM_PARAMETERS *sample);

NDDSUSERDllExport extern void 
COMM_PARAMETERSPluginSupport_print_data(
    const COMM_PARAMETERS *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
COMM_PARAMETERSPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
COMM_PARAMETERSPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
COMM_PARAMETERSPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
COMM_PARAMETERSPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
COMM_PARAMETERSPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
COMM_PARAMETERSPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS *out,
    const COMM_PARAMETERS *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
COMM_PARAMETERSPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const COMM_PARAMETERS *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
COMM_PARAMETERSPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
COMM_PARAMETERSPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
COMM_PARAMETERSPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
COMM_PARAMETERSPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
COMM_PARAMETERSPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
COMM_PARAMETERSPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const COMM_PARAMETERS * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
COMM_PARAMETERSPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
COMM_PARAMETERSPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
COMM_PARAMETERSPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const COMM_PARAMETERS *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
COMM_PARAMETERSPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
COMM_PARAMETERSPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
COMM_PARAMETERSPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
COMM_PARAMETERSPlugin_new(void);

NDDSUSERDllExport extern void
COMM_PARAMETERSPlugin_delete(struct PRESTypePlugin *);


#define JAM_PARAMETERSPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define JAM_PARAMETERSPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define JAM_PARAMETERSPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define JAM_PARAMETERSPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define JAM_PARAMETERSPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern JAM_PARAMETERS*
JAM_PARAMETERSPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern JAM_PARAMETERS*
JAM_PARAMETERSPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern JAM_PARAMETERS*
JAM_PARAMETERSPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
JAM_PARAMETERSPluginSupport_copy_data(
    JAM_PARAMETERS *out,
    const JAM_PARAMETERS *in);

NDDSUSERDllExport extern void 
JAM_PARAMETERSPluginSupport_destroy_data_w_params(
    JAM_PARAMETERS *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
JAM_PARAMETERSPluginSupport_destroy_data_ex(
    JAM_PARAMETERS *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
JAM_PARAMETERSPluginSupport_destroy_data(
    JAM_PARAMETERS *sample);

NDDSUSERDllExport extern void 
JAM_PARAMETERSPluginSupport_print_data(
    const JAM_PARAMETERS *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
JAM_PARAMETERSPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
JAM_PARAMETERSPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
JAM_PARAMETERSPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
JAM_PARAMETERSPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
JAM_PARAMETERSPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    JAM_PARAMETERS *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
JAM_PARAMETERSPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    JAM_PARAMETERS *out,
    const JAM_PARAMETERS *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
JAM_PARAMETERSPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const JAM_PARAMETERS *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
JAM_PARAMETERSPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    JAM_PARAMETERS *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
JAM_PARAMETERSPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    JAM_PARAMETERS **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
JAM_PARAMETERSPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
JAM_PARAMETERSPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
JAM_PARAMETERSPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
JAM_PARAMETERSPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const JAM_PARAMETERS * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
JAM_PARAMETERSPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
JAM_PARAMETERSPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
JAM_PARAMETERSPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const JAM_PARAMETERS *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
JAM_PARAMETERSPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    JAM_PARAMETERS * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
JAM_PARAMETERSPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    JAM_PARAMETERS ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
JAM_PARAMETERSPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    JAM_PARAMETERS *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
JAM_PARAMETERSPlugin_new(void);

NDDSUSERDllExport extern void
JAM_PARAMETERSPlugin_delete(struct PRESTypePlugin *);


#define WAVE_PARAMETER_RWPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define WAVE_PARAMETER_RWPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define WAVE_PARAMETER_RWPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define WAVE_PARAMETER_RWPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define WAVE_PARAMETER_RWPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern WAVE_PARAMETER_RW*
WAVE_PARAMETER_RWPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern WAVE_PARAMETER_RW*
WAVE_PARAMETER_RWPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern WAVE_PARAMETER_RW*
WAVE_PARAMETER_RWPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
WAVE_PARAMETER_RWPluginSupport_copy_data(
    WAVE_PARAMETER_RW *out,
    const WAVE_PARAMETER_RW *in);

NDDSUSERDllExport extern void 
WAVE_PARAMETER_RWPluginSupport_destroy_data_w_params(
    WAVE_PARAMETER_RW *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
WAVE_PARAMETER_RWPluginSupport_destroy_data_ex(
    WAVE_PARAMETER_RW *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
WAVE_PARAMETER_RWPluginSupport_destroy_data(
    WAVE_PARAMETER_RW *sample);

NDDSUSERDllExport extern void 
WAVE_PARAMETER_RWPluginSupport_print_data(
    const WAVE_PARAMETER_RW *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
WAVE_PARAMETER_RWPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
WAVE_PARAMETER_RWPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
WAVE_PARAMETER_RWPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
WAVE_PARAMETER_RWPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
WAVE_PARAMETER_RWPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    WAVE_PARAMETER_RW *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
WAVE_PARAMETER_RWPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    WAVE_PARAMETER_RW *out,
    const WAVE_PARAMETER_RW *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
WAVE_PARAMETER_RWPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const WAVE_PARAMETER_RW *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
WAVE_PARAMETER_RWPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    WAVE_PARAMETER_RW *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
WAVE_PARAMETER_RWPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    WAVE_PARAMETER_RW **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
WAVE_PARAMETER_RWPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
WAVE_PARAMETER_RWPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
WAVE_PARAMETER_RWPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
WAVE_PARAMETER_RWPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const WAVE_PARAMETER_RW * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
WAVE_PARAMETER_RWPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
WAVE_PARAMETER_RWPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
WAVE_PARAMETER_RWPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const WAVE_PARAMETER_RW *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
WAVE_PARAMETER_RWPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    WAVE_PARAMETER_RW * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
WAVE_PARAMETER_RWPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    WAVE_PARAMETER_RW ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
WAVE_PARAMETER_RWPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    WAVE_PARAMETER_RW *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
WAVE_PARAMETER_RWPlugin_new(void);

NDDSUSERDllExport extern void
WAVE_PARAMETER_RWPlugin_delete(struct PRESTypePlugin *);


#define COMM_PARAMETERS_RWPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define COMM_PARAMETERS_RWPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define COMM_PARAMETERS_RWPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define COMM_PARAMETERS_RWPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define COMM_PARAMETERS_RWPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern COMM_PARAMETERS_RW*
COMM_PARAMETERS_RWPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern COMM_PARAMETERS_RW*
COMM_PARAMETERS_RWPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern COMM_PARAMETERS_RW*
COMM_PARAMETERS_RWPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
COMM_PARAMETERS_RWPluginSupport_copy_data(
    COMM_PARAMETERS_RW *out,
    const COMM_PARAMETERS_RW *in);

NDDSUSERDllExport extern void 
COMM_PARAMETERS_RWPluginSupport_destroy_data_w_params(
    COMM_PARAMETERS_RW *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
COMM_PARAMETERS_RWPluginSupport_destroy_data_ex(
    COMM_PARAMETERS_RW *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
COMM_PARAMETERS_RWPluginSupport_destroy_data(
    COMM_PARAMETERS_RW *sample);

NDDSUSERDllExport extern void 
COMM_PARAMETERS_RWPluginSupport_print_data(
    const COMM_PARAMETERS_RW *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
COMM_PARAMETERS_RWPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
COMM_PARAMETERS_RWPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
COMM_PARAMETERS_RWPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
COMM_PARAMETERS_RWPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
COMM_PARAMETERS_RWPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS_RW *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
COMM_PARAMETERS_RWPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS_RW *out,
    const COMM_PARAMETERS_RW *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
COMM_PARAMETERS_RWPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const COMM_PARAMETERS_RW *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
COMM_PARAMETERS_RWPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS_RW *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
COMM_PARAMETERS_RWPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS_RW **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
COMM_PARAMETERS_RWPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
COMM_PARAMETERS_RWPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
COMM_PARAMETERS_RWPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
COMM_PARAMETERS_RWPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const COMM_PARAMETERS_RW * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
COMM_PARAMETERS_RWPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
COMM_PARAMETERS_RWPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
COMM_PARAMETERS_RWPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const COMM_PARAMETERS_RW *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
COMM_PARAMETERS_RWPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS_RW * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
COMM_PARAMETERS_RWPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS_RW ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
COMM_PARAMETERS_RWPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS_RW *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
COMM_PARAMETERS_RWPlugin_new(void);

NDDSUSERDllExport extern void
COMM_PARAMETERS_RWPlugin_delete(struct PRESTypePlugin *);


#define SENSOR_RADARPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SENSOR_RADARPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SENSOR_RADARPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define SENSOR_RADARPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SENSOR_RADARPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SENSOR_RADAR*
SENSOR_RADARPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SENSOR_RADAR*
SENSOR_RADARPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SENSOR_RADAR*
SENSOR_RADARPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SENSOR_RADARPluginSupport_copy_data(
    SENSOR_RADAR *out,
    const SENSOR_RADAR *in);

NDDSUSERDllExport extern void 
SENSOR_RADARPluginSupport_destroy_data_w_params(
    SENSOR_RADAR *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SENSOR_RADARPluginSupport_destroy_data_ex(
    SENSOR_RADAR *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SENSOR_RADARPluginSupport_destroy_data(
    SENSOR_RADAR *sample);

NDDSUSERDllExport extern void 
SENSOR_RADARPluginSupport_print_data(
    const SENSOR_RADAR *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SENSOR_RADARPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SENSOR_RADARPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SENSOR_RADARPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SENSOR_RADARPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
SENSOR_RADARPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_RADAR *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
SENSOR_RADARPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_RADAR *out,
    const SENSOR_RADAR *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SENSOR_RADARPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_RADAR *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SENSOR_RADARPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_RADAR *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SENSOR_RADARPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_RADAR **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SENSOR_RADARPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SENSOR_RADARPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SENSOR_RADARPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SENSOR_RADARPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SENSOR_RADAR * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SENSOR_RADARPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SENSOR_RADARPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SENSOR_RADARPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_RADAR *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SENSOR_RADARPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_RADAR * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SENSOR_RADARPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_RADAR ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SENSOR_RADARPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_RADAR *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SENSOR_RADARPlugin_new(void);

NDDSUSERDllExport extern void
SENSOR_RADARPlugin_delete(struct PRESTypePlugin *);


#define SENSOR_COMMPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SENSOR_COMMPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SENSOR_COMMPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define SENSOR_COMMPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SENSOR_COMMPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SENSOR_COMM*
SENSOR_COMMPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SENSOR_COMM*
SENSOR_COMMPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SENSOR_COMM*
SENSOR_COMMPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SENSOR_COMMPluginSupport_copy_data(
    SENSOR_COMM *out,
    const SENSOR_COMM *in);

NDDSUSERDllExport extern void 
SENSOR_COMMPluginSupport_destroy_data_w_params(
    SENSOR_COMM *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SENSOR_COMMPluginSupport_destroy_data_ex(
    SENSOR_COMM *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SENSOR_COMMPluginSupport_destroy_data(
    SENSOR_COMM *sample);

NDDSUSERDllExport extern void 
SENSOR_COMMPluginSupport_print_data(
    const SENSOR_COMM *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SENSOR_COMMPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SENSOR_COMMPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SENSOR_COMMPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SENSOR_COMMPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
SENSOR_COMMPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_COMM *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
SENSOR_COMMPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_COMM *out,
    const SENSOR_COMM *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SENSOR_COMMPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_COMM *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SENSOR_COMMPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_COMM *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SENSOR_COMMPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_COMM **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SENSOR_COMMPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SENSOR_COMMPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SENSOR_COMMPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SENSOR_COMMPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SENSOR_COMM * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SENSOR_COMMPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SENSOR_COMMPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SENSOR_COMMPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_COMM *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SENSOR_COMMPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_COMM * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SENSOR_COMMPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_COMM ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SENSOR_COMMPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_COMM *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SENSOR_COMMPlugin_new(void);

NDDSUSERDllExport extern void
SENSOR_COMMPlugin_delete(struct PRESTypePlugin *);


#define SENSOR_JAMPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SENSOR_JAMPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SENSOR_JAMPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define SENSOR_JAMPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SENSOR_JAMPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SENSOR_JAM*
SENSOR_JAMPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SENSOR_JAM*
SENSOR_JAMPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SENSOR_JAM*
SENSOR_JAMPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SENSOR_JAMPluginSupport_copy_data(
    SENSOR_JAM *out,
    const SENSOR_JAM *in);

NDDSUSERDllExport extern void 
SENSOR_JAMPluginSupport_destroy_data_w_params(
    SENSOR_JAM *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SENSOR_JAMPluginSupport_destroy_data_ex(
    SENSOR_JAM *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SENSOR_JAMPluginSupport_destroy_data(
    SENSOR_JAM *sample);

NDDSUSERDllExport extern void 
SENSOR_JAMPluginSupport_print_data(
    const SENSOR_JAM *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SENSOR_JAMPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SENSOR_JAMPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SENSOR_JAMPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SENSOR_JAMPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
SENSOR_JAMPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_JAM *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
SENSOR_JAMPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_JAM *out,
    const SENSOR_JAM *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SENSOR_JAMPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_JAM *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SENSOR_JAMPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_JAM *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SENSOR_JAMPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_JAM **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SENSOR_JAMPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SENSOR_JAMPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SENSOR_JAMPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SENSOR_JAMPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SENSOR_JAM * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SENSOR_JAMPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SENSOR_JAMPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SENSOR_JAMPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_JAM *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SENSOR_JAMPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_JAM * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SENSOR_JAMPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_JAM ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SENSOR_JAMPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_JAM *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SENSOR_JAMPlugin_new(void);

NDDSUSERDllExport extern void
SENSOR_JAMPlugin_delete(struct PRESTypePlugin *);


#define SENSOR_INFRAREDPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SENSOR_INFRAREDPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SENSOR_INFRAREDPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define SENSOR_INFRAREDPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SENSOR_INFRAREDPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SENSOR_INFRARED*
SENSOR_INFRAREDPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SENSOR_INFRARED*
SENSOR_INFRAREDPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SENSOR_INFRARED*
SENSOR_INFRAREDPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SENSOR_INFRAREDPluginSupport_copy_data(
    SENSOR_INFRARED *out,
    const SENSOR_INFRARED *in);

NDDSUSERDllExport extern void 
SENSOR_INFRAREDPluginSupport_destroy_data_w_params(
    SENSOR_INFRARED *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SENSOR_INFRAREDPluginSupport_destroy_data_ex(
    SENSOR_INFRARED *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SENSOR_INFRAREDPluginSupport_destroy_data(
    SENSOR_INFRARED *sample);

NDDSUSERDllExport extern void 
SENSOR_INFRAREDPluginSupport_print_data(
    const SENSOR_INFRARED *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SENSOR_INFRAREDPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SENSOR_INFRAREDPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SENSOR_INFRAREDPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SENSOR_INFRAREDPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
SENSOR_INFRAREDPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_INFRARED *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
SENSOR_INFRAREDPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_INFRARED *out,
    const SENSOR_INFRARED *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SENSOR_INFRAREDPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_INFRARED *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SENSOR_INFRAREDPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_INFRARED *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SENSOR_INFRAREDPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_INFRARED **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SENSOR_INFRAREDPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SENSOR_INFRAREDPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SENSOR_INFRAREDPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SENSOR_INFRAREDPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SENSOR_INFRARED * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SENSOR_INFRAREDPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SENSOR_INFRAREDPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SENSOR_INFRAREDPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_INFRARED *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SENSOR_INFRAREDPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_INFRARED * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SENSOR_INFRAREDPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_INFRARED ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SENSOR_INFRAREDPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_INFRARED *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SENSOR_INFRAREDPlugin_new(void);

NDDSUSERDllExport extern void
SENSOR_INFRAREDPlugin_delete(struct PRESTypePlugin *);


#define SENSOR_ESMPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SENSOR_ESMPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SENSOR_ESMPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define SENSOR_ESMPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SENSOR_ESMPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SENSOR_ESM*
SENSOR_ESMPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SENSOR_ESM*
SENSOR_ESMPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SENSOR_ESM*
SENSOR_ESMPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SENSOR_ESMPluginSupport_copy_data(
    SENSOR_ESM *out,
    const SENSOR_ESM *in);

NDDSUSERDllExport extern void 
SENSOR_ESMPluginSupport_destroy_data_w_params(
    SENSOR_ESM *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SENSOR_ESMPluginSupport_destroy_data_ex(
    SENSOR_ESM *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SENSOR_ESMPluginSupport_destroy_data(
    SENSOR_ESM *sample);

NDDSUSERDllExport extern void 
SENSOR_ESMPluginSupport_print_data(
    const SENSOR_ESM *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SENSOR_ESMPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SENSOR_ESMPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SENSOR_ESMPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SENSOR_ESMPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
SENSOR_ESMPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_ESM *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
SENSOR_ESMPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_ESM *out,
    const SENSOR_ESM *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SENSOR_ESMPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_ESM *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SENSOR_ESMPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_ESM *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SENSOR_ESMPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_ESM **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SENSOR_ESMPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SENSOR_ESMPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SENSOR_ESMPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SENSOR_ESMPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SENSOR_ESM * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SENSOR_ESMPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SENSOR_ESMPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SENSOR_ESMPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_ESM *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SENSOR_ESMPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_ESM * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SENSOR_ESMPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_ESM ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SENSOR_ESMPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_ESM *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SENSOR_ESMPlugin_new(void);

NDDSUSERDllExport extern void
SENSOR_ESMPlugin_delete(struct PRESTypePlugin *);


#define ENTITYSTATE_REPORTPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ENTITYSTATE_REPORTPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ENTITYSTATE_REPORTPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 
 

#define ENTITYSTATE_REPORTPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ENTITYSTATE_REPORTPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ENTITYSTATE_REPORT*
ENTITYSTATE_REPORTPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ENTITYSTATE_REPORT*
ENTITYSTATE_REPORTPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ENTITYSTATE_REPORT*
ENTITYSTATE_REPORTPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORTPluginSupport_copy_data(
    ENTITYSTATE_REPORT *out,
    const ENTITYSTATE_REPORT *in);

NDDSUSERDllExport extern void 
ENTITYSTATE_REPORTPluginSupport_destroy_data_w_params(
    ENTITYSTATE_REPORT *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ENTITYSTATE_REPORTPluginSupport_destroy_data_ex(
    ENTITYSTATE_REPORT *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ENTITYSTATE_REPORTPluginSupport_destroy_data(
    ENTITYSTATE_REPORT *sample);

NDDSUSERDllExport extern void 
ENTITYSTATE_REPORTPluginSupport_print_data(
    const ENTITYSTATE_REPORT *sample,
    const char *desc,
    unsigned int indent);


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ENTITYSTATE_REPORTPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ENTITYSTATE_REPORTPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ENTITYSTATE_REPORTPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ENTITYSTATE_REPORTPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
ENTITYSTATE_REPORTPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORTPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT *out,
    const ENTITYSTATE_REPORT *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORTPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ENTITYSTATE_REPORT *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORTPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORTPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ENTITYSTATE_REPORTPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ENTITYSTATE_REPORTPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ENTITYSTATE_REPORTPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ENTITYSTATE_REPORTPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ENTITYSTATE_REPORT * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ENTITYSTATE_REPORTPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ENTITYSTATE_REPORTPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORTPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ENTITYSTATE_REPORT *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORTPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORTPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ENTITYSTATE_REPORTPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ENTITYSTATE_REPORTPlugin_new(void);

NDDSUSERDllExport extern void
ENTITYSTATE_REPORTPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * ENTITYSTATE_REPORT_LIST.
 *
 * By default, this type is struct ENTITYSTATE_REPORT_LIST
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct ENTITYSTATE_REPORT_LIST)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct ENTITYSTATE_REPORT_LIST, the
 * following restriction applies: the key of struct
 * ENTITYSTATE_REPORT_LIST must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct ENTITYSTATE_REPORT_LIST.
*/
typedef  class ENTITYSTATE_REPORT_LIST ENTITYSTATE_REPORT_LISTKeyHolder;


#define ENTITYSTATE_REPORT_LISTPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define ENTITYSTATE_REPORT_LISTPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ENTITYSTATE_REPORT_LISTPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define ENTITYSTATE_REPORT_LISTPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define ENTITYSTATE_REPORT_LISTPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define ENTITYSTATE_REPORT_LISTPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ENTITYSTATE_REPORT_LISTPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ENTITYSTATE_REPORT_LIST*
ENTITYSTATE_REPORT_LISTPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ENTITYSTATE_REPORT_LIST*
ENTITYSTATE_REPORT_LISTPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ENTITYSTATE_REPORT_LIST*
ENTITYSTATE_REPORT_LISTPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORT_LISTPluginSupport_copy_data(
    ENTITYSTATE_REPORT_LIST *out,
    const ENTITYSTATE_REPORT_LIST *in);

NDDSUSERDllExport extern void 
ENTITYSTATE_REPORT_LISTPluginSupport_destroy_data_w_params(
    ENTITYSTATE_REPORT_LIST *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ENTITYSTATE_REPORT_LISTPluginSupport_destroy_data_ex(
    ENTITYSTATE_REPORT_LIST *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ENTITYSTATE_REPORT_LISTPluginSupport_destroy_data(
    ENTITYSTATE_REPORT_LIST *sample);

NDDSUSERDllExport extern void 
ENTITYSTATE_REPORT_LISTPluginSupport_print_data(
    const ENTITYSTATE_REPORT_LIST *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern ENTITYSTATE_REPORT_LIST*
ENTITYSTATE_REPORT_LISTPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ENTITYSTATE_REPORT_LIST*
ENTITYSTATE_REPORT_LISTPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
ENTITYSTATE_REPORT_LISTPluginSupport_destroy_key_ex(
    ENTITYSTATE_REPORT_LISTKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ENTITYSTATE_REPORT_LISTPluginSupport_destroy_key(
    ENTITYSTATE_REPORT_LISTKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ENTITYSTATE_REPORT_LISTPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ENTITYSTATE_REPORT_LISTPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
ENTITYSTATE_REPORT_LISTPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ENTITYSTATE_REPORT_LISTPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
ENTITYSTATE_REPORT_LISTPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LIST *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LIST *out,
    const ENTITYSTATE_REPORT_LIST *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ENTITYSTATE_REPORT_LIST *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LIST *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LIST **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
ENTITYSTATE_REPORT_LISTPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ENTITYSTATE_REPORT_LIST * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
ENTITYSTATE_REPORT_LISTPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ENTITYSTATE_REPORT_LISTPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ENTITYSTATE_REPORT_LIST *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LIST * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LIST ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
ENTITYSTATE_REPORT_LISTPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LIST *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LISTKeyHolder *key, 
    const ENTITYSTATE_REPORT_LIST *instance);

NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LIST *instance, 
    const ENTITYSTATE_REPORT_LISTKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const ENTITYSTATE_REPORT_LIST *instance);

NDDSUSERDllExport extern RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ENTITYSTATE_REPORT_LISTPlugin_new(void);

NDDSUSERDllExport extern void
ENTITYSTATE_REPORT_LISTPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * UAV_ENTITYSTATE_REPORT_LIST.
 *
 * By default, this type is struct UAV_ENTITYSTATE_REPORT_LIST
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct UAV_ENTITYSTATE_REPORT_LIST)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct UAV_ENTITYSTATE_REPORT_LIST, the
 * following restriction applies: the key of struct
 * UAV_ENTITYSTATE_REPORT_LIST must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct UAV_ENTITYSTATE_REPORT_LIST.
*/
typedef  class UAV_ENTITYSTATE_REPORT_LIST UAV_ENTITYSTATE_REPORT_LISTKeyHolder;


#define UAV_ENTITYSTATE_REPORT_LISTPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define UAV_ENTITYSTATE_REPORT_LISTPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define UAV_ENTITYSTATE_REPORT_LISTPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define UAV_ENTITYSTATE_REPORT_LISTPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define UAV_ENTITYSTATE_REPORT_LISTPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define UAV_ENTITYSTATE_REPORT_LISTPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define UAV_ENTITYSTATE_REPORT_LISTPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern UAV_ENTITYSTATE_REPORT_LIST*
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern UAV_ENTITYSTATE_REPORT_LIST*
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern UAV_ENTITYSTATE_REPORT_LIST*
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_copy_data(
    UAV_ENTITYSTATE_REPORT_LIST *out,
    const UAV_ENTITYSTATE_REPORT_LIST *in);

NDDSUSERDllExport extern void 
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_destroy_data_w_params(
    UAV_ENTITYSTATE_REPORT_LIST *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_destroy_data_ex(
    UAV_ENTITYSTATE_REPORT_LIST *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_destroy_data(
    UAV_ENTITYSTATE_REPORT_LIST *sample);

NDDSUSERDllExport extern void 
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_print_data(
    const UAV_ENTITYSTATE_REPORT_LIST *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern UAV_ENTITYSTATE_REPORT_LIST*
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern UAV_ENTITYSTATE_REPORT_LIST*
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_destroy_key_ex(
    UAV_ENTITYSTATE_REPORT_LISTKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_destroy_key(
    UAV_ENTITYSTATE_REPORT_LISTKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
UAV_ENTITYSTATE_REPORT_LISTPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
UAV_ENTITYSTATE_REPORT_LISTPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
UAV_ENTITYSTATE_REPORT_LISTPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
UAV_ENTITYSTATE_REPORT_LISTPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
UAV_ENTITYSTATE_REPORT_LISTPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LIST *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LIST *out,
    const UAV_ENTITYSTATE_REPORT_LIST *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const UAV_ENTITYSTATE_REPORT_LIST *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LIST *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LIST **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
UAV_ENTITYSTATE_REPORT_LISTPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const UAV_ENTITYSTATE_REPORT_LIST * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
UAV_ENTITYSTATE_REPORT_LISTPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const UAV_ENTITYSTATE_REPORT_LIST *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LIST * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LIST ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
UAV_ENTITYSTATE_REPORT_LISTPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LIST *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LISTKeyHolder *key, 
    const UAV_ENTITYSTATE_REPORT_LIST *instance);

NDDSUSERDllExport extern RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LIST *instance, 
    const UAV_ENTITYSTATE_REPORT_LISTKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const UAV_ENTITYSTATE_REPORT_LIST *instance);

NDDSUSERDllExport extern RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
UAV_ENTITYSTATE_REPORT_LISTPlugin_new(void);

NDDSUSERDllExport extern void
UAV_ENTITYSTATE_REPORT_LISTPlugin_delete(struct PRESTypePlugin *);

} /* namespace VRFORCE_ENTITY */

} /* namespace LHZS */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* lhzs_vrforce_entityPlugin_875776359_h */
