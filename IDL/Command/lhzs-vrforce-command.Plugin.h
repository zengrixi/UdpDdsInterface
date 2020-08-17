
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from lhzs-vrforce-command..idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef lhzs_vrforce_command_Plugin_2046466877_h
#define lhzs_vrforce_command_Plugin_2046466877_h

#include "lhzs-vrforce-command..h"



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

namespace VRFORCE_COMMAND{


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

/* The type used to store keys for instances of type struct
 * POS_DATA.
 *
 * By default, this type is struct POS_DATA
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct POS_DATA)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct POS_DATA, the
 * following restriction applies: the key of struct
 * POS_DATA must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct POS_DATA.
*/
typedef  class POS_DATA POS_DATAKeyHolder;


#define POS_DATAPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define POS_DATAPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define POS_DATAPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define POS_DATAPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define POS_DATAPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define POS_DATAPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define POS_DATAPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern POS_DATA*
POS_DATAPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern POS_DATA*
POS_DATAPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern POS_DATA*
POS_DATAPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
POS_DATAPluginSupport_copy_data(
    POS_DATA *out,
    const POS_DATA *in);

NDDSUSERDllExport extern void 
POS_DATAPluginSupport_destroy_data_w_params(
    POS_DATA *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
POS_DATAPluginSupport_destroy_data_ex(
    POS_DATA *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
POS_DATAPluginSupport_destroy_data(
    POS_DATA *sample);

NDDSUSERDllExport extern void 
POS_DATAPluginSupport_print_data(
    const POS_DATA *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern POS_DATA*
POS_DATAPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern POS_DATA*
POS_DATAPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
POS_DATAPluginSupport_destroy_key_ex(
    POS_DATAKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
POS_DATAPluginSupport_destroy_key(
    POS_DATAKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
POS_DATAPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
POS_DATAPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
POS_DATAPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
POS_DATAPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
POS_DATAPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    POS_DATA *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
POS_DATAPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    POS_DATA *out,
    const POS_DATA *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
POS_DATAPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const POS_DATA *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
POS_DATAPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    POS_DATA *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
POS_DATAPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    POS_DATA **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
POS_DATAPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
POS_DATAPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
POS_DATAPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
POS_DATAPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const POS_DATA * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
POS_DATAPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
POS_DATAPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
POS_DATAPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const POS_DATA *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
POS_DATAPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    POS_DATA * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
POS_DATAPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    POS_DATA ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
POS_DATAPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    POS_DATA *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
POS_DATAPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    POS_DATAKeyHolder *key, 
    const POS_DATA *instance);

NDDSUSERDllExport extern RTIBool 
POS_DATAPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    POS_DATA *instance, 
    const POS_DATAKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
POS_DATAPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const POS_DATA *instance);

NDDSUSERDllExport extern RTIBool 
POS_DATAPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
POS_DATAPlugin_new(void);

NDDSUSERDllExport extern void
POS_DATAPlugin_delete(struct PRESTypePlugin *);


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

/* The type used to store keys for instances of type struct
 * MISSLE_REQ.
 *
 * By default, this type is struct MISSLE_REQ
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct MISSLE_REQ)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct MISSLE_REQ, the
 * following restriction applies: the key of struct
 * MISSLE_REQ must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct MISSLE_REQ.
*/
typedef  class MISSLE_REQ MISSLE_REQKeyHolder;


#define MISSLE_REQPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define MISSLE_REQPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MISSLE_REQPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define MISSLE_REQPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define MISSLE_REQPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define MISSLE_REQPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MISSLE_REQPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MISSLE_REQ*
MISSLE_REQPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern MISSLE_REQ*
MISSLE_REQPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MISSLE_REQ*
MISSLE_REQPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MISSLE_REQPluginSupport_copy_data(
    MISSLE_REQ *out,
    const MISSLE_REQ *in);

NDDSUSERDllExport extern void 
MISSLE_REQPluginSupport_destroy_data_w_params(
    MISSLE_REQ *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MISSLE_REQPluginSupport_destroy_data_ex(
    MISSLE_REQ *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MISSLE_REQPluginSupport_destroy_data(
    MISSLE_REQ *sample);

NDDSUSERDllExport extern void 
MISSLE_REQPluginSupport_print_data(
    const MISSLE_REQ *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern MISSLE_REQ*
MISSLE_REQPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MISSLE_REQ*
MISSLE_REQPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
MISSLE_REQPluginSupport_destroy_key_ex(
    MISSLE_REQKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MISSLE_REQPluginSupport_destroy_key(
    MISSLE_REQKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
MISSLE_REQPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
MISSLE_REQPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
MISSLE_REQPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
MISSLE_REQPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
MISSLE_REQPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    MISSLE_REQ *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
MISSLE_REQPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MISSLE_REQ *out,
    const MISSLE_REQ *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
MISSLE_REQPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const MISSLE_REQ *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MISSLE_REQPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    MISSLE_REQ *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MISSLE_REQPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MISSLE_REQ **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
MISSLE_REQPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
MISSLE_REQPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MISSLE_REQPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
MISSLE_REQPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const MISSLE_REQ * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
MISSLE_REQPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MISSLE_REQPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MISSLE_REQPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const MISSLE_REQ *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
MISSLE_REQPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    MISSLE_REQ * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MISSLE_REQPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MISSLE_REQ ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
MISSLE_REQPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MISSLE_REQ *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
MISSLE_REQPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    MISSLE_REQKeyHolder *key, 
    const MISSLE_REQ *instance);

NDDSUSERDllExport extern RTIBool 
MISSLE_REQPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    MISSLE_REQ *instance, 
    const MISSLE_REQKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
MISSLE_REQPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const MISSLE_REQ *instance);

NDDSUSERDllExport extern RTIBool 
MISSLE_REQPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
MISSLE_REQPlugin_new(void);

NDDSUSERDllExport extern void
MISSLE_REQPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * PATH_CHANGE_REQ.
 *
 * By default, this type is struct PATH_CHANGE_REQ
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct PATH_CHANGE_REQ)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct PATH_CHANGE_REQ, the
 * following restriction applies: the key of struct
 * PATH_CHANGE_REQ must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct PATH_CHANGE_REQ.
*/
typedef  class PATH_CHANGE_REQ PATH_CHANGE_REQKeyHolder;


#define PATH_CHANGE_REQPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define PATH_CHANGE_REQPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PATH_CHANGE_REQPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define PATH_CHANGE_REQPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define PATH_CHANGE_REQPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define PATH_CHANGE_REQPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define PATH_CHANGE_REQPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PATH_CHANGE_REQ*
PATH_CHANGE_REQPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern PATH_CHANGE_REQ*
PATH_CHANGE_REQPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PATH_CHANGE_REQ*
PATH_CHANGE_REQPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
PATH_CHANGE_REQPluginSupport_copy_data(
    PATH_CHANGE_REQ *out,
    const PATH_CHANGE_REQ *in);

NDDSUSERDllExport extern void 
PATH_CHANGE_REQPluginSupport_destroy_data_w_params(
    PATH_CHANGE_REQ *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
PATH_CHANGE_REQPluginSupport_destroy_data_ex(
    PATH_CHANGE_REQ *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PATH_CHANGE_REQPluginSupport_destroy_data(
    PATH_CHANGE_REQ *sample);

NDDSUSERDllExport extern void 
PATH_CHANGE_REQPluginSupport_print_data(
    const PATH_CHANGE_REQ *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern PATH_CHANGE_REQ*
PATH_CHANGE_REQPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PATH_CHANGE_REQ*
PATH_CHANGE_REQPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
PATH_CHANGE_REQPluginSupport_destroy_key_ex(
    PATH_CHANGE_REQKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PATH_CHANGE_REQPluginSupport_destroy_key(
    PATH_CHANGE_REQKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
PATH_CHANGE_REQPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
PATH_CHANGE_REQPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
PATH_CHANGE_REQPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
PATH_CHANGE_REQPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
PATH_CHANGE_REQPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    PATH_CHANGE_REQ *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
PATH_CHANGE_REQPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    PATH_CHANGE_REQ *out,
    const PATH_CHANGE_REQ *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
PATH_CHANGE_REQPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const PATH_CHANGE_REQ *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PATH_CHANGE_REQPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    PATH_CHANGE_REQ *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PATH_CHANGE_REQPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    PATH_CHANGE_REQ **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
PATH_CHANGE_REQPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
PATH_CHANGE_REQPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PATH_CHANGE_REQPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PATH_CHANGE_REQPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const PATH_CHANGE_REQ * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
PATH_CHANGE_REQPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
PATH_CHANGE_REQPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PATH_CHANGE_REQPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const PATH_CHANGE_REQ *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PATH_CHANGE_REQPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    PATH_CHANGE_REQ * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PATH_CHANGE_REQPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    PATH_CHANGE_REQ ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
PATH_CHANGE_REQPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PATH_CHANGE_REQ *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PATH_CHANGE_REQPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PATH_CHANGE_REQKeyHolder *key, 
    const PATH_CHANGE_REQ *instance);

NDDSUSERDllExport extern RTIBool 
PATH_CHANGE_REQPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    PATH_CHANGE_REQ *instance, 
    const PATH_CHANGE_REQKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
PATH_CHANGE_REQPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const PATH_CHANGE_REQ *instance);

NDDSUSERDllExport extern RTIBool 
PATH_CHANGE_REQPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
PATH_CHANGE_REQPlugin_new(void);

NDDSUSERDllExport extern void
PATH_CHANGE_REQPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * CMD_ACK.
 *
 * By default, this type is struct CMD_ACK
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct CMD_ACK)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct CMD_ACK, the
 * following restriction applies: the key of struct
 * CMD_ACK must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct CMD_ACK.
*/
typedef  class CMD_ACK CMD_ACKKeyHolder;


#define CMD_ACKPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define CMD_ACKPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CMD_ACKPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define CMD_ACKPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define CMD_ACKPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define CMD_ACKPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CMD_ACKPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CMD_ACK*
CMD_ACKPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern CMD_ACK*
CMD_ACKPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CMD_ACK*
CMD_ACKPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CMD_ACKPluginSupport_copy_data(
    CMD_ACK *out,
    const CMD_ACK *in);

NDDSUSERDllExport extern void 
CMD_ACKPluginSupport_destroy_data_w_params(
    CMD_ACK *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CMD_ACKPluginSupport_destroy_data_ex(
    CMD_ACK *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CMD_ACKPluginSupport_destroy_data(
    CMD_ACK *sample);

NDDSUSERDllExport extern void 
CMD_ACKPluginSupport_print_data(
    const CMD_ACK *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern CMD_ACK*
CMD_ACKPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CMD_ACK*
CMD_ACKPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
CMD_ACKPluginSupport_destroy_key_ex(
    CMD_ACKKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CMD_ACKPluginSupport_destroy_key(
    CMD_ACKKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CMD_ACKPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CMD_ACKPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
CMD_ACKPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CMD_ACKPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
CMD_ACKPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    CMD_ACK *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
CMD_ACKPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CMD_ACK *out,
    const CMD_ACK *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
CMD_ACKPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const CMD_ACK *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CMD_ACKPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    CMD_ACK *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CMD_ACKPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CMD_ACK **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
CMD_ACKPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
CMD_ACKPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CMD_ACKPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
CMD_ACKPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const CMD_ACK * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
CMD_ACKPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CMD_ACKPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CMD_ACKPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const CMD_ACK *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CMD_ACKPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    CMD_ACK * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CMD_ACKPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CMD_ACK ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
CMD_ACKPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CMD_ACK *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CMD_ACKPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CMD_ACKKeyHolder *key, 
    const CMD_ACK *instance);

NDDSUSERDllExport extern RTIBool 
CMD_ACKPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    CMD_ACK *instance, 
    const CMD_ACKKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
CMD_ACKPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const CMD_ACK *instance);

NDDSUSERDllExport extern RTIBool 
CMD_ACKPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CMD_ACKPlugin_new(void);

NDDSUSERDllExport extern void
CMD_ACKPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * DELETE_ENTITY_REQ.
 *
 * By default, this type is struct DELETE_ENTITY_REQ
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct DELETE_ENTITY_REQ)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct DELETE_ENTITY_REQ, the
 * following restriction applies: the key of struct
 * DELETE_ENTITY_REQ must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct DELETE_ENTITY_REQ.
*/
typedef  class DELETE_ENTITY_REQ DELETE_ENTITY_REQKeyHolder;


#define DELETE_ENTITY_REQPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define DELETE_ENTITY_REQPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define DELETE_ENTITY_REQPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define DELETE_ENTITY_REQPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define DELETE_ENTITY_REQPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define DELETE_ENTITY_REQPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define DELETE_ENTITY_REQPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern DELETE_ENTITY_REQ*
DELETE_ENTITY_REQPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern DELETE_ENTITY_REQ*
DELETE_ENTITY_REQPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DELETE_ENTITY_REQ*
DELETE_ENTITY_REQPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
DELETE_ENTITY_REQPluginSupport_copy_data(
    DELETE_ENTITY_REQ *out,
    const DELETE_ENTITY_REQ *in);

NDDSUSERDllExport extern void 
DELETE_ENTITY_REQPluginSupport_destroy_data_w_params(
    DELETE_ENTITY_REQ *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
DELETE_ENTITY_REQPluginSupport_destroy_data_ex(
    DELETE_ENTITY_REQ *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DELETE_ENTITY_REQPluginSupport_destroy_data(
    DELETE_ENTITY_REQ *sample);

NDDSUSERDllExport extern void 
DELETE_ENTITY_REQPluginSupport_print_data(
    const DELETE_ENTITY_REQ *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern DELETE_ENTITY_REQ*
DELETE_ENTITY_REQPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern DELETE_ENTITY_REQ*
DELETE_ENTITY_REQPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
DELETE_ENTITY_REQPluginSupport_destroy_key_ex(
    DELETE_ENTITY_REQKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
DELETE_ENTITY_REQPluginSupport_destroy_key(
    DELETE_ENTITY_REQKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
DELETE_ENTITY_REQPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
DELETE_ENTITY_REQPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
DELETE_ENTITY_REQPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
DELETE_ENTITY_REQPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
DELETE_ENTITY_REQPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    DELETE_ENTITY_REQ *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
DELETE_ENTITY_REQPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DELETE_ENTITY_REQ *out,
    const DELETE_ENTITY_REQ *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
DELETE_ENTITY_REQPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DELETE_ENTITY_REQ *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DELETE_ENTITY_REQPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DELETE_ENTITY_REQ *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DELETE_ENTITY_REQPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    DELETE_ENTITY_REQ **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
DELETE_ENTITY_REQPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
DELETE_ENTITY_REQPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
DELETE_ENTITY_REQPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
DELETE_ENTITY_REQPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DELETE_ENTITY_REQ * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
DELETE_ENTITY_REQPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
DELETE_ENTITY_REQPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
DELETE_ENTITY_REQPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DELETE_ENTITY_REQ *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
DELETE_ENTITY_REQPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DELETE_ENTITY_REQ * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DELETE_ENTITY_REQPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    DELETE_ENTITY_REQ ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
DELETE_ENTITY_REQPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DELETE_ENTITY_REQ *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
DELETE_ENTITY_REQPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DELETE_ENTITY_REQKeyHolder *key, 
    const DELETE_ENTITY_REQ *instance);

NDDSUSERDllExport extern RTIBool 
DELETE_ENTITY_REQPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    DELETE_ENTITY_REQ *instance, 
    const DELETE_ENTITY_REQKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
DELETE_ENTITY_REQPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const DELETE_ENTITY_REQ *instance);

NDDSUSERDllExport extern RTIBool 
DELETE_ENTITY_REQPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
DELETE_ENTITY_REQPlugin_new(void);

NDDSUSERDllExport extern void
DELETE_ENTITY_REQPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * CHANGE_SENSORS_REQ.
 *
 * By default, this type is struct CHANGE_SENSORS_REQ
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct CHANGE_SENSORS_REQ)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct CHANGE_SENSORS_REQ, the
 * following restriction applies: the key of struct
 * CHANGE_SENSORS_REQ must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct CHANGE_SENSORS_REQ.
*/
typedef  class CHANGE_SENSORS_REQ CHANGE_SENSORS_REQKeyHolder;


#define CHANGE_SENSORS_REQPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define CHANGE_SENSORS_REQPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define CHANGE_SENSORS_REQPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define CHANGE_SENSORS_REQPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define CHANGE_SENSORS_REQPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define CHANGE_SENSORS_REQPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define CHANGE_SENSORS_REQPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern CHANGE_SENSORS_REQ*
CHANGE_SENSORS_REQPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern CHANGE_SENSORS_REQ*
CHANGE_SENSORS_REQPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CHANGE_SENSORS_REQ*
CHANGE_SENSORS_REQPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
CHANGE_SENSORS_REQPluginSupport_copy_data(
    CHANGE_SENSORS_REQ *out,
    const CHANGE_SENSORS_REQ *in);

NDDSUSERDllExport extern void 
CHANGE_SENSORS_REQPluginSupport_destroy_data_w_params(
    CHANGE_SENSORS_REQ *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
CHANGE_SENSORS_REQPluginSupport_destroy_data_ex(
    CHANGE_SENSORS_REQ *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CHANGE_SENSORS_REQPluginSupport_destroy_data(
    CHANGE_SENSORS_REQ *sample);

NDDSUSERDllExport extern void 
CHANGE_SENSORS_REQPluginSupport_print_data(
    const CHANGE_SENSORS_REQ *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern CHANGE_SENSORS_REQ*
CHANGE_SENSORS_REQPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern CHANGE_SENSORS_REQ*
CHANGE_SENSORS_REQPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
CHANGE_SENSORS_REQPluginSupport_destroy_key_ex(
    CHANGE_SENSORS_REQKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
CHANGE_SENSORS_REQPluginSupport_destroy_key(
    CHANGE_SENSORS_REQKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
CHANGE_SENSORS_REQPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
CHANGE_SENSORS_REQPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
CHANGE_SENSORS_REQPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
CHANGE_SENSORS_REQPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
CHANGE_SENSORS_REQPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    CHANGE_SENSORS_REQ *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
CHANGE_SENSORS_REQPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    CHANGE_SENSORS_REQ *out,
    const CHANGE_SENSORS_REQ *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
CHANGE_SENSORS_REQPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const CHANGE_SENSORS_REQ *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CHANGE_SENSORS_REQPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    CHANGE_SENSORS_REQ *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CHANGE_SENSORS_REQPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    CHANGE_SENSORS_REQ **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
CHANGE_SENSORS_REQPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
CHANGE_SENSORS_REQPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
CHANGE_SENSORS_REQPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
CHANGE_SENSORS_REQPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const CHANGE_SENSORS_REQ * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
CHANGE_SENSORS_REQPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
CHANGE_SENSORS_REQPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
CHANGE_SENSORS_REQPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const CHANGE_SENSORS_REQ *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
CHANGE_SENSORS_REQPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    CHANGE_SENSORS_REQ * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CHANGE_SENSORS_REQPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    CHANGE_SENSORS_REQ ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
CHANGE_SENSORS_REQPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CHANGE_SENSORS_REQ *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
CHANGE_SENSORS_REQPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    CHANGE_SENSORS_REQKeyHolder *key, 
    const CHANGE_SENSORS_REQ *instance);

NDDSUSERDllExport extern RTIBool 
CHANGE_SENSORS_REQPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    CHANGE_SENSORS_REQ *instance, 
    const CHANGE_SENSORS_REQKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
CHANGE_SENSORS_REQPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const CHANGE_SENSORS_REQ *instance);

NDDSUSERDllExport extern RTIBool 
CHANGE_SENSORS_REQPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
CHANGE_SENSORS_REQPlugin_new(void);

NDDSUSERDllExport extern void
CHANGE_SENSORS_REQPlugin_delete(struct PRESTypePlugin *);

} /* namespace VRFORCE_COMMAND */

} /* namespace LHZS */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* lhzs_vrforce_command_Plugin_2046466877_h */
