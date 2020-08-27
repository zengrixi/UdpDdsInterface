
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from target.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef targetPlugin_485479119_h
#define targetPlugin_485479119_h

#include "target.h"



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

/* The type used to store keys for instances of type struct
 * GEOGRAPHIC_POSITION.
 *
 * By default, this type is struct GEOGRAPHIC_POSITION
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct GEOGRAPHIC_POSITION)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct GEOGRAPHIC_POSITION, the
 * following restriction applies: the key of struct
 * GEOGRAPHIC_POSITION must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct GEOGRAPHIC_POSITION.
*/
typedef  class GEOGRAPHIC_POSITION GEOGRAPHIC_POSITIONKeyHolder;


#define GEOGRAPHIC_POSITIONPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define GEOGRAPHIC_POSITIONPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define GEOGRAPHIC_POSITIONPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define GEOGRAPHIC_POSITIONPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define GEOGRAPHIC_POSITIONPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define GEOGRAPHIC_POSITIONPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define GEOGRAPHIC_POSITIONPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern GEOGRAPHIC_POSITION*
GEOGRAPHIC_POSITIONPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern GEOGRAPHIC_POSITION*
GEOGRAPHIC_POSITIONPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GEOGRAPHIC_POSITION*
GEOGRAPHIC_POSITIONPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
GEOGRAPHIC_POSITIONPluginSupport_copy_data(
    GEOGRAPHIC_POSITION *out,
    const GEOGRAPHIC_POSITION *in);

NDDSUSERDllExport extern void 
GEOGRAPHIC_POSITIONPluginSupport_destroy_data_w_params(
    GEOGRAPHIC_POSITION *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
GEOGRAPHIC_POSITIONPluginSupport_destroy_data_ex(
    GEOGRAPHIC_POSITION *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GEOGRAPHIC_POSITIONPluginSupport_destroy_data(
    GEOGRAPHIC_POSITION *sample);

NDDSUSERDllExport extern void 
GEOGRAPHIC_POSITIONPluginSupport_print_data(
    const GEOGRAPHIC_POSITION *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern GEOGRAPHIC_POSITION*
GEOGRAPHIC_POSITIONPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern GEOGRAPHIC_POSITION*
GEOGRAPHIC_POSITIONPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
GEOGRAPHIC_POSITIONPluginSupport_destroy_key_ex(
    GEOGRAPHIC_POSITIONKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
GEOGRAPHIC_POSITIONPluginSupport_destroy_key(
    GEOGRAPHIC_POSITIONKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
GEOGRAPHIC_POSITIONPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
GEOGRAPHIC_POSITIONPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
GEOGRAPHIC_POSITIONPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
GEOGRAPHIC_POSITIONPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
GEOGRAPHIC_POSITIONPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITION *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
GEOGRAPHIC_POSITIONPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITION *out,
    const GEOGRAPHIC_POSITION *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
GEOGRAPHIC_POSITIONPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const GEOGRAPHIC_POSITION *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GEOGRAPHIC_POSITIONPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITION *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GEOGRAPHIC_POSITIONPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITION **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
GEOGRAPHIC_POSITIONPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
GEOGRAPHIC_POSITIONPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
GEOGRAPHIC_POSITIONPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
GEOGRAPHIC_POSITIONPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const GEOGRAPHIC_POSITION * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
GEOGRAPHIC_POSITIONPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
GEOGRAPHIC_POSITIONPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
GEOGRAPHIC_POSITIONPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const GEOGRAPHIC_POSITION *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
GEOGRAPHIC_POSITIONPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITION * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GEOGRAPHIC_POSITIONPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITION ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
GEOGRAPHIC_POSITIONPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITION *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
GEOGRAPHIC_POSITIONPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITIONKeyHolder *key, 
    const GEOGRAPHIC_POSITION *instance);

NDDSUSERDllExport extern RTIBool 
GEOGRAPHIC_POSITIONPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITION *instance, 
    const GEOGRAPHIC_POSITIONKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
GEOGRAPHIC_POSITIONPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const GEOGRAPHIC_POSITION *instance);

NDDSUSERDllExport extern RTIBool 
GEOGRAPHIC_POSITIONPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
GEOGRAPHIC_POSITIONPlugin_new(void);

NDDSUSERDllExport extern void
GEOGRAPHIC_POSITIONPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * PLATFORM_VELOCITY.
 *
 * By default, this type is struct PLATFORM_VELOCITY
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct PLATFORM_VELOCITY)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct PLATFORM_VELOCITY, the
 * following restriction applies: the key of struct
 * PLATFORM_VELOCITY must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct PLATFORM_VELOCITY.
*/
typedef  class PLATFORM_VELOCITY PLATFORM_VELOCITYKeyHolder;


#define PLATFORM_VELOCITYPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define PLATFORM_VELOCITYPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PLATFORM_VELOCITYPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define PLATFORM_VELOCITYPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define PLATFORM_VELOCITYPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define PLATFORM_VELOCITYPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define PLATFORM_VELOCITYPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PLATFORM_VELOCITY*
PLATFORM_VELOCITYPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern PLATFORM_VELOCITY*
PLATFORM_VELOCITYPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PLATFORM_VELOCITY*
PLATFORM_VELOCITYPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
PLATFORM_VELOCITYPluginSupport_copy_data(
    PLATFORM_VELOCITY *out,
    const PLATFORM_VELOCITY *in);

NDDSUSERDllExport extern void 
PLATFORM_VELOCITYPluginSupport_destroy_data_w_params(
    PLATFORM_VELOCITY *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
PLATFORM_VELOCITYPluginSupport_destroy_data_ex(
    PLATFORM_VELOCITY *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PLATFORM_VELOCITYPluginSupport_destroy_data(
    PLATFORM_VELOCITY *sample);

NDDSUSERDllExport extern void 
PLATFORM_VELOCITYPluginSupport_print_data(
    const PLATFORM_VELOCITY *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern PLATFORM_VELOCITY*
PLATFORM_VELOCITYPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PLATFORM_VELOCITY*
PLATFORM_VELOCITYPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
PLATFORM_VELOCITYPluginSupport_destroy_key_ex(
    PLATFORM_VELOCITYKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PLATFORM_VELOCITYPluginSupport_destroy_key(
    PLATFORM_VELOCITYKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
PLATFORM_VELOCITYPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
PLATFORM_VELOCITYPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
PLATFORM_VELOCITYPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
PLATFORM_VELOCITYPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
PLATFORM_VELOCITYPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITY *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
PLATFORM_VELOCITYPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITY *out,
    const PLATFORM_VELOCITY *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
PLATFORM_VELOCITYPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const PLATFORM_VELOCITY *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PLATFORM_VELOCITYPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITY *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PLATFORM_VELOCITYPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITY **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
PLATFORM_VELOCITYPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
PLATFORM_VELOCITYPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PLATFORM_VELOCITYPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PLATFORM_VELOCITYPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const PLATFORM_VELOCITY * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
PLATFORM_VELOCITYPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
PLATFORM_VELOCITYPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PLATFORM_VELOCITYPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const PLATFORM_VELOCITY *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PLATFORM_VELOCITYPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITY * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PLATFORM_VELOCITYPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITY ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
PLATFORM_VELOCITYPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITY *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
PLATFORM_VELOCITYPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITYKeyHolder *key, 
    const PLATFORM_VELOCITY *instance);

NDDSUSERDllExport extern RTIBool 
PLATFORM_VELOCITYPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITY *instance, 
    const PLATFORM_VELOCITYKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
PLATFORM_VELOCITYPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const PLATFORM_VELOCITY *instance);

NDDSUSERDllExport extern RTIBool 
PLATFORM_VELOCITYPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
PLATFORM_VELOCITYPlugin_new(void);

NDDSUSERDllExport extern void
PLATFORM_VELOCITYPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * TARGET_ATTRIBUTE_DATA.
 *
 * By default, this type is struct TARGET_ATTRIBUTE_DATA
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct TARGET_ATTRIBUTE_DATA)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct TARGET_ATTRIBUTE_DATA, the
 * following restriction applies: the key of struct
 * TARGET_ATTRIBUTE_DATA must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct TARGET_ATTRIBUTE_DATA.
*/
typedef  class TARGET_ATTRIBUTE_DATA TARGET_ATTRIBUTE_DATAKeyHolder;


#define TARGET_ATTRIBUTE_DATAPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define TARGET_ATTRIBUTE_DATAPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define TARGET_ATTRIBUTE_DATAPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define TARGET_ATTRIBUTE_DATAPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define TARGET_ATTRIBUTE_DATAPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define TARGET_ATTRIBUTE_DATAPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define TARGET_ATTRIBUTE_DATAPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern TARGET_ATTRIBUTE_DATA*
TARGET_ATTRIBUTE_DATAPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern TARGET_ATTRIBUTE_DATA*
TARGET_ATTRIBUTE_DATAPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TARGET_ATTRIBUTE_DATA*
TARGET_ATTRIBUTE_DATAPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
TARGET_ATTRIBUTE_DATAPluginSupport_copy_data(
    TARGET_ATTRIBUTE_DATA *out,
    const TARGET_ATTRIBUTE_DATA *in);

NDDSUSERDllExport extern void 
TARGET_ATTRIBUTE_DATAPluginSupport_destroy_data_w_params(
    TARGET_ATTRIBUTE_DATA *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
TARGET_ATTRIBUTE_DATAPluginSupport_destroy_data_ex(
    TARGET_ATTRIBUTE_DATA *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TARGET_ATTRIBUTE_DATAPluginSupport_destroy_data(
    TARGET_ATTRIBUTE_DATA *sample);

NDDSUSERDllExport extern void 
TARGET_ATTRIBUTE_DATAPluginSupport_print_data(
    const TARGET_ATTRIBUTE_DATA *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern TARGET_ATTRIBUTE_DATA*
TARGET_ATTRIBUTE_DATAPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern TARGET_ATTRIBUTE_DATA*
TARGET_ATTRIBUTE_DATAPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
TARGET_ATTRIBUTE_DATAPluginSupport_destroy_key_ex(
    TARGET_ATTRIBUTE_DATAKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
TARGET_ATTRIBUTE_DATAPluginSupport_destroy_key(
    TARGET_ATTRIBUTE_DATAKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
TARGET_ATTRIBUTE_DATAPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
TARGET_ATTRIBUTE_DATAPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
TARGET_ATTRIBUTE_DATAPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
TARGET_ATTRIBUTE_DATAPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
TARGET_ATTRIBUTE_DATAPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATA *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATA *out,
    const TARGET_ATTRIBUTE_DATA *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TARGET_ATTRIBUTE_DATA *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATA *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATA **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
TARGET_ATTRIBUTE_DATAPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
TARGET_ATTRIBUTE_DATAPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
TARGET_ATTRIBUTE_DATAPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
TARGET_ATTRIBUTE_DATAPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TARGET_ATTRIBUTE_DATA * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
TARGET_ATTRIBUTE_DATAPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
TARGET_ATTRIBUTE_DATAPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TARGET_ATTRIBUTE_DATA *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATA * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATA ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
TARGET_ATTRIBUTE_DATAPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATA *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATAKeyHolder *key, 
    const TARGET_ATTRIBUTE_DATA *instance);

NDDSUSERDllExport extern RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATA *instance, 
    const TARGET_ATTRIBUTE_DATAKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TARGET_ATTRIBUTE_DATA *instance);

NDDSUSERDllExport extern RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
TARGET_ATTRIBUTE_DATAPlugin_new(void);

NDDSUSERDllExport extern void
TARGET_ATTRIBUTE_DATAPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
 * SDI_TRACK_REPORT.
 *
 * By default, this type is struct SDI_TRACK_REPORT
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct SDI_TRACK_REPORT)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct SDI_TRACK_REPORT, the
 * following restriction applies: the key of struct
 * SDI_TRACK_REPORT must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct SDI_TRACK_REPORT.
*/
typedef  class SDI_TRACK_REPORT SDI_TRACK_REPORTKeyHolder;


#define SDI_TRACK_REPORTPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SDI_TRACK_REPORTPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SDI_TRACK_REPORTPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SDI_TRACK_REPORTPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SDI_TRACK_REPORTPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define SDI_TRACK_REPORTPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SDI_TRACK_REPORTPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SDI_TRACK_REPORT*
SDI_TRACK_REPORTPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SDI_TRACK_REPORT*
SDI_TRACK_REPORTPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SDI_TRACK_REPORT*
SDI_TRACK_REPORTPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SDI_TRACK_REPORTPluginSupport_copy_data(
    SDI_TRACK_REPORT *out,
    const SDI_TRACK_REPORT *in);

NDDSUSERDllExport extern void 
SDI_TRACK_REPORTPluginSupport_destroy_data_w_params(
    SDI_TRACK_REPORT *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SDI_TRACK_REPORTPluginSupport_destroy_data_ex(
    SDI_TRACK_REPORT *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SDI_TRACK_REPORTPluginSupport_destroy_data(
    SDI_TRACK_REPORT *sample);

NDDSUSERDllExport extern void 
SDI_TRACK_REPORTPluginSupport_print_data(
    const SDI_TRACK_REPORT *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern SDI_TRACK_REPORT*
SDI_TRACK_REPORTPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SDI_TRACK_REPORT*
SDI_TRACK_REPORTPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SDI_TRACK_REPORTPluginSupport_destroy_key_ex(
    SDI_TRACK_REPORTKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SDI_TRACK_REPORTPluginSupport_destroy_key(
    SDI_TRACK_REPORTKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SDI_TRACK_REPORTPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SDI_TRACK_REPORTPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SDI_TRACK_REPORTPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SDI_TRACK_REPORTPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
SDI_TRACK_REPORTPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORT *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
SDI_TRACK_REPORTPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORT *out,
    const SDI_TRACK_REPORT *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SDI_TRACK_REPORTPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SDI_TRACK_REPORT *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SDI_TRACK_REPORTPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORT *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SDI_TRACK_REPORTPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORT **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SDI_TRACK_REPORTPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SDI_TRACK_REPORTPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SDI_TRACK_REPORTPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SDI_TRACK_REPORTPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SDI_TRACK_REPORT * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SDI_TRACK_REPORTPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SDI_TRACK_REPORTPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SDI_TRACK_REPORTPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SDI_TRACK_REPORT *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SDI_TRACK_REPORTPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORT * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SDI_TRACK_REPORTPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORT ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SDI_TRACK_REPORTPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORT *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SDI_TRACK_REPORTPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORTKeyHolder *key, 
    const SDI_TRACK_REPORT *instance);

NDDSUSERDllExport extern RTIBool 
SDI_TRACK_REPORTPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORT *instance, 
    const SDI_TRACK_REPORTKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SDI_TRACK_REPORTPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SDI_TRACK_REPORT *instance);

NDDSUSERDllExport extern RTIBool 
SDI_TRACK_REPORTPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SDI_TRACK_REPORTPlugin_new(void);

NDDSUSERDllExport extern void
SDI_TRACK_REPORTPlugin_delete(struct PRESTypePlugin *);

} /* namespace LHZS */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* targetPlugin_485479119_h */
