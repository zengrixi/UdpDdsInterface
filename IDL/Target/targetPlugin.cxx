
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from target.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/


#include <string.h>

#ifdef __cplusplus
#ifndef ndds_cpp_h
  #include "ndds/ndds_cpp.h"
#endif
#else
#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
#endif
#endif

#ifndef osapi_type_h
  #include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
  #include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
  #include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
  #include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
  #include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
  #include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
  #include "cdr/cdr_stream.h"
#endif

#ifndef pres_typePlugin_h
  #include "pres/pres_typePlugin.h"
#endif



#include "targetPlugin.h"


namespace LHZS{

/* --------------------------------------------------------------------------------------
 *  Type GEOGRAPHIC_POSITION
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

GEOGRAPHIC_POSITION*
GEOGRAPHIC_POSITIONPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    GEOGRAPHIC_POSITION *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, GEOGRAPHIC_POSITION);

    if(sample != NULL) {
        if (!::LHZS::GEOGRAPHIC_POSITION_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


GEOGRAPHIC_POSITION *
GEOGRAPHIC_POSITIONPluginSupport_create_data_ex(RTIBool allocate_pointers){
    GEOGRAPHIC_POSITION *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, GEOGRAPHIC_POSITION);

    if(sample != NULL) {
        if (!::LHZS::GEOGRAPHIC_POSITION_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


GEOGRAPHIC_POSITION *
GEOGRAPHIC_POSITIONPluginSupport_create_data(void)
{
    return ::LHZS::GEOGRAPHIC_POSITIONPluginSupport_create_data_ex(RTI_TRUE);
}


void 
GEOGRAPHIC_POSITIONPluginSupport_destroy_data_w_params(
    GEOGRAPHIC_POSITION *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::GEOGRAPHIC_POSITION_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
GEOGRAPHIC_POSITIONPluginSupport_destroy_data_ex(
    GEOGRAPHIC_POSITION *sample,RTIBool deallocate_pointers) {

    ::LHZS::GEOGRAPHIC_POSITION_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
GEOGRAPHIC_POSITIONPluginSupport_destroy_data(
    GEOGRAPHIC_POSITION *sample) {

    ::LHZS::GEOGRAPHIC_POSITIONPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
GEOGRAPHIC_POSITIONPluginSupport_copy_data(
    GEOGRAPHIC_POSITION *dst,
    const GEOGRAPHIC_POSITION *src)
{
    return ::LHZS::GEOGRAPHIC_POSITION_copy(dst,src);
}


void 
GEOGRAPHIC_POSITIONPluginSupport_print_data(
    const GEOGRAPHIC_POSITION *sample,
    const char *desc,
    unsigned int indent_level)
{


    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
      RTILog_debug("%s:\n", desc);
    } else {
      RTILog_debug("\n");
    }

    if (sample == NULL) {
      RTILog_debug("NULL\n");
      return;
    }


    RTICdrType_printDouble(
        &sample->lon_f, "lon_f", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->lat_f, "lat_f", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->alt_f, "alt_f", indent_level + 1);
            


}

GEOGRAPHIC_POSITION *
GEOGRAPHIC_POSITIONPluginSupport_create_key_ex(RTIBool allocate_pointers){
    GEOGRAPHIC_POSITION *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, GEOGRAPHIC_POSITIONKeyHolder);

    ::LHZS::GEOGRAPHIC_POSITION_initialize_ex(key,allocate_pointers,RTI_TRUE);
    return key;
}


GEOGRAPHIC_POSITION *
GEOGRAPHIC_POSITIONPluginSupport_create_key(void)
{
    return  ::LHZS::GEOGRAPHIC_POSITIONPluginSupport_create_key_ex(RTI_TRUE);
}


void 
GEOGRAPHIC_POSITIONPluginSupport_destroy_key_ex(
    GEOGRAPHIC_POSITIONKeyHolder *key,RTIBool deallocate_pointers)
{
    ::LHZS::GEOGRAPHIC_POSITION_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
GEOGRAPHIC_POSITIONPluginSupport_destroy_key(
    GEOGRAPHIC_POSITIONKeyHolder *key) {

  ::LHZS::GEOGRAPHIC_POSITIONPluginSupport_destroy_key_ex(key,RTI_TRUE);

}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
GEOGRAPHIC_POSITIONPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{

    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */
    return PRESTypePluginDefaultParticipantData_new(participant_info);

}


void 
GEOGRAPHIC_POSITIONPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
GEOGRAPHIC_POSITIONPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */


    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::LHZS::GEOGRAPHIC_POSITIONPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::GEOGRAPHIC_POSITIONPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            ::LHZS::GEOGRAPHIC_POSITIONPluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            ::LHZS::GEOGRAPHIC_POSITIONPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = ::LHZS::GEOGRAPHIC_POSITIONPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }
    
    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::GEOGRAPHIC_POSITIONPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::GEOGRAPHIC_POSITIONPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::GEOGRAPHIC_POSITIONPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
GEOGRAPHIC_POSITIONPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
GEOGRAPHIC_POSITIONPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITION *sample,
    void *handle)
{
    
    GEOGRAPHIC_POSITION_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
GEOGRAPHIC_POSITIONPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITION *dst,
    const GEOGRAPHIC_POSITION *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::GEOGRAPHIC_POSITIONPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
GEOGRAPHIC_POSITIONPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
GEOGRAPHIC_POSITIONPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const GEOGRAPHIC_POSITION *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(serialize_encapsulation) {
  
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream, encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }


    if(serialize_sample) {
    
    if (!RTICdrStream_serializeDouble(
        stream, &sample->lon_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->lat_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->alt_f)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
GEOGRAPHIC_POSITIONPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITION *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }
    
    
    if(deserialize_sample) {
        ::LHZS::GEOGRAPHIC_POSITION_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializeDouble(
        stream, &sample->lon_f)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->lat_f)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->alt_f)) {
        goto fin;
    }

    }

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}

 
 

RTIBool 
GEOGRAPHIC_POSITIONPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITION **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::GEOGRAPHIC_POSITIONPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
        
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    
    return result;
 
}




RTIBool GEOGRAPHIC_POSITIONPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (skip_sample) {

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            


    }
    

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int 
GEOGRAPHIC_POSITIONPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
GEOGRAPHIC_POSITIONPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


/* Returns the size of the sample in its serialized form (in bytes).
 * It can also be an estimation in excess of the real buffer needed 
 * during a call to the serialize() function.
 * The value reported does not have to include the space for the
 * encapsulation flags.
 */
unsigned int
GEOGRAPHIC_POSITIONPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const GEOGRAPHIC_POSITION * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (sample) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
GEOGRAPHIC_POSITIONPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
GEOGRAPHIC_POSITIONPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const GEOGRAPHIC_POSITION *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(serialize_encapsulation) {
    
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream, encapsulation_id)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if(serialize_key) {

    if (!RTICdrStream_serializeDouble(
        stream, &sample->lon_f)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool GEOGRAPHIC_POSITIONPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITION *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;  
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->lon_f)) {
        return RTI_FALSE;
    }

    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool GEOGRAPHIC_POSITIONPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITION **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::GEOGRAPHIC_POSITIONPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    
    return result;
}



unsigned int
GEOGRAPHIC_POSITIONPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int encapsulation_size = current_alignment;


    unsigned int initial_alignment = current_alignment;


    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {
        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }


        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }
        

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
GEOGRAPHIC_POSITIONPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITION *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->lon_f)) {
        return RTI_FALSE;
    }

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    }


    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}





RTIBool 
GEOGRAPHIC_POSITIONPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITIONKeyHolder *dst, 
    const GEOGRAPHIC_POSITION *src)
{  

    if (endpoint_data) {} /* To avoid warnings */

    if (!RTICdrType_copyDouble(
        &dst->lon_f, &src->lon_f)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
GEOGRAPHIC_POSITIONPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    GEOGRAPHIC_POSITION *dst, const
    GEOGRAPHIC_POSITIONKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */

    if (!RTICdrType_copyDouble(
        &dst->lon_f, &src->lon_f)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
GEOGRAPHIC_POSITIONPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const GEOGRAPHIC_POSITION *instance)
{
    struct RTICdrStream * md5Stream = NULL;

    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(
        RTICdrStream_getBuffer(md5Stream),
        RTICdrStream_getBufferLength(md5Stream));
    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!::LHZS::GEOGRAPHIC_POSITIONPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {
        return RTI_FALSE;
    }
    
    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;
    return RTI_TRUE;
}


RTIBool 
GEOGRAPHIC_POSITIONPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    GEOGRAPHIC_POSITION * sample = NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (GEOGRAPHIC_POSITION *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }


    if (!RTICdrStream_deserializeDouble(
        stream, &sample->lon_f)) {
        return RTI_FALSE;
    }

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    if (!::LHZS::GEOGRAPHIC_POSITIONPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}


/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *GEOGRAPHIC_POSITIONPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
       return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        GEOGRAPHIC_POSITIONPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        GEOGRAPHIC_POSITIONPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        GEOGRAPHIC_POSITIONPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        GEOGRAPHIC_POSITIONPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_deserialize_key_sample;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        GEOGRAPHIC_POSITIONPlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        GEOGRAPHIC_POSITIONPlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::GEOGRAPHIC_POSITION_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        GEOGRAPHIC_POSITIONPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        GEOGRAPHIC_POSITIONPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::GEOGRAPHIC_POSITIONPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = GEOGRAPHIC_POSITIONTYPENAME;

    return plugin;
}

void
GEOGRAPHIC_POSITIONPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type PLATFORM_VELOCITY
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

PLATFORM_VELOCITY*
PLATFORM_VELOCITYPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    PLATFORM_VELOCITY *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, PLATFORM_VELOCITY);

    if(sample != NULL) {
        if (!::LHZS::PLATFORM_VELOCITY_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


PLATFORM_VELOCITY *
PLATFORM_VELOCITYPluginSupport_create_data_ex(RTIBool allocate_pointers){
    PLATFORM_VELOCITY *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, PLATFORM_VELOCITY);

    if(sample != NULL) {
        if (!::LHZS::PLATFORM_VELOCITY_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


PLATFORM_VELOCITY *
PLATFORM_VELOCITYPluginSupport_create_data(void)
{
    return ::LHZS::PLATFORM_VELOCITYPluginSupport_create_data_ex(RTI_TRUE);
}


void 
PLATFORM_VELOCITYPluginSupport_destroy_data_w_params(
    PLATFORM_VELOCITY *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::PLATFORM_VELOCITY_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
PLATFORM_VELOCITYPluginSupport_destroy_data_ex(
    PLATFORM_VELOCITY *sample,RTIBool deallocate_pointers) {

    ::LHZS::PLATFORM_VELOCITY_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
PLATFORM_VELOCITYPluginSupport_destroy_data(
    PLATFORM_VELOCITY *sample) {

    ::LHZS::PLATFORM_VELOCITYPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
PLATFORM_VELOCITYPluginSupport_copy_data(
    PLATFORM_VELOCITY *dst,
    const PLATFORM_VELOCITY *src)
{
    return ::LHZS::PLATFORM_VELOCITY_copy(dst,src);
}


void 
PLATFORM_VELOCITYPluginSupport_print_data(
    const PLATFORM_VELOCITY *sample,
    const char *desc,
    unsigned int indent_level)
{


    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
      RTILog_debug("%s:\n", desc);
    } else {
      RTILog_debug("\n");
    }

    if (sample == NULL) {
      RTILog_debug("NULL\n");
      return;
    }


    RTICdrType_printDouble(
        &sample->platform_vx_f, "platform_vx_f", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->platform_vy_f, "platform_vy_f", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->platform_vz_f, "platform_vz_f", indent_level + 1);
            


}

PLATFORM_VELOCITY *
PLATFORM_VELOCITYPluginSupport_create_key_ex(RTIBool allocate_pointers){
    PLATFORM_VELOCITY *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, PLATFORM_VELOCITYKeyHolder);

    ::LHZS::PLATFORM_VELOCITY_initialize_ex(key,allocate_pointers,RTI_TRUE);
    return key;
}


PLATFORM_VELOCITY *
PLATFORM_VELOCITYPluginSupport_create_key(void)
{
    return  ::LHZS::PLATFORM_VELOCITYPluginSupport_create_key_ex(RTI_TRUE);
}


void 
PLATFORM_VELOCITYPluginSupport_destroy_key_ex(
    PLATFORM_VELOCITYKeyHolder *key,RTIBool deallocate_pointers)
{
    ::LHZS::PLATFORM_VELOCITY_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
PLATFORM_VELOCITYPluginSupport_destroy_key(
    PLATFORM_VELOCITYKeyHolder *key) {

  ::LHZS::PLATFORM_VELOCITYPluginSupport_destroy_key_ex(key,RTI_TRUE);

}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
PLATFORM_VELOCITYPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{

    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */
    return PRESTypePluginDefaultParticipantData_new(participant_info);

}


void 
PLATFORM_VELOCITYPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
PLATFORM_VELOCITYPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */


    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::LHZS::PLATFORM_VELOCITYPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::PLATFORM_VELOCITYPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            ::LHZS::PLATFORM_VELOCITYPluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            ::LHZS::PLATFORM_VELOCITYPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = ::LHZS::PLATFORM_VELOCITYPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }
    
    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::PLATFORM_VELOCITYPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::PLATFORM_VELOCITYPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::PLATFORM_VELOCITYPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
PLATFORM_VELOCITYPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
PLATFORM_VELOCITYPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITY *sample,
    void *handle)
{
    
    PLATFORM_VELOCITY_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
PLATFORM_VELOCITYPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITY *dst,
    const PLATFORM_VELOCITY *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::PLATFORM_VELOCITYPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
PLATFORM_VELOCITYPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
PLATFORM_VELOCITYPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const PLATFORM_VELOCITY *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(serialize_encapsulation) {
  
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream, encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }


    if(serialize_sample) {
    
    if (!RTICdrStream_serializeDouble(
        stream, &sample->platform_vx_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->platform_vy_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->platform_vz_f)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
PLATFORM_VELOCITYPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITY *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }
    
    
    if(deserialize_sample) {
        ::LHZS::PLATFORM_VELOCITY_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializeDouble(
        stream, &sample->platform_vx_f)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->platform_vy_f)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->platform_vz_f)) {
        goto fin;
    }

    }

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}

 
 

RTIBool 
PLATFORM_VELOCITYPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITY **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::PLATFORM_VELOCITYPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
        
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    
    return result;
 
}




RTIBool PLATFORM_VELOCITYPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (skip_sample) {

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            


    }
    

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int 
PLATFORM_VELOCITYPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
PLATFORM_VELOCITYPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


/* Returns the size of the sample in its serialized form (in bytes).
 * It can also be an estimation in excess of the real buffer needed 
 * during a call to the serialize() function.
 * The value reported does not have to include the space for the
 * encapsulation flags.
 */
unsigned int
PLATFORM_VELOCITYPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const PLATFORM_VELOCITY * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (sample) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
PLATFORM_VELOCITYPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
PLATFORM_VELOCITYPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const PLATFORM_VELOCITY *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(serialize_encapsulation) {
    
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream, encapsulation_id)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if(serialize_key) {

    if (!RTICdrStream_serializeDouble(
        stream, &sample->platform_vx_f)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool PLATFORM_VELOCITYPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITY *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;  
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->platform_vx_f)) {
        return RTI_FALSE;
    }

    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool PLATFORM_VELOCITYPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITY **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::PLATFORM_VELOCITYPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    
    return result;
}



unsigned int
PLATFORM_VELOCITYPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int encapsulation_size = current_alignment;


    unsigned int initial_alignment = current_alignment;


    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {
        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }


        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }
        

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
PLATFORM_VELOCITYPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITY *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->platform_vx_f)) {
        return RTI_FALSE;
    }

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    }


    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}





RTIBool 
PLATFORM_VELOCITYPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITYKeyHolder *dst, 
    const PLATFORM_VELOCITY *src)
{  

    if (endpoint_data) {} /* To avoid warnings */

    if (!RTICdrType_copyDouble(
        &dst->platform_vx_f, &src->platform_vx_f)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
PLATFORM_VELOCITYPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    PLATFORM_VELOCITY *dst, const
    PLATFORM_VELOCITYKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */

    if (!RTICdrType_copyDouble(
        &dst->platform_vx_f, &src->platform_vx_f)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
PLATFORM_VELOCITYPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const PLATFORM_VELOCITY *instance)
{
    struct RTICdrStream * md5Stream = NULL;

    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(
        RTICdrStream_getBuffer(md5Stream),
        RTICdrStream_getBufferLength(md5Stream));
    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!::LHZS::PLATFORM_VELOCITYPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {
        return RTI_FALSE;
    }
    
    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;
    return RTI_TRUE;
}


RTIBool 
PLATFORM_VELOCITYPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    PLATFORM_VELOCITY * sample = NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (PLATFORM_VELOCITY *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }


    if (!RTICdrStream_deserializeDouble(
        stream, &sample->platform_vx_f)) {
        return RTI_FALSE;
    }

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    if (!::LHZS::PLATFORM_VELOCITYPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}


/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *PLATFORM_VELOCITYPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
       return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
        ::LHZS::PLATFORM_VELOCITYPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::PLATFORM_VELOCITYPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::PLATFORM_VELOCITYPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::PLATFORM_VELOCITYPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::PLATFORM_VELOCITYPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        PLATFORM_VELOCITYPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        PLATFORM_VELOCITYPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::PLATFORM_VELOCITYPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::PLATFORM_VELOCITYPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::PLATFORM_VELOCITYPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::PLATFORM_VELOCITYPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        PLATFORM_VELOCITYPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        PLATFORM_VELOCITYPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::PLATFORM_VELOCITYPlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        ::LHZS::PLATFORM_VELOCITYPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        ::LHZS::PLATFORM_VELOCITYPlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        ::LHZS::PLATFORM_VELOCITYPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        ::LHZS::PLATFORM_VELOCITYPlugin_deserialize_key_sample;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        ::LHZS::PLATFORM_VELOCITYPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        ::LHZS::PLATFORM_VELOCITYPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        PLATFORM_VELOCITYPlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        PLATFORM_VELOCITYPlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        ::LHZS::PLATFORM_VELOCITYPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        ::LHZS::PLATFORM_VELOCITYPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::PLATFORM_VELOCITY_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        PLATFORM_VELOCITYPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        PLATFORM_VELOCITYPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::PLATFORM_VELOCITYPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = PLATFORM_VELOCITYTYPENAME;

    return plugin;
}

void
PLATFORM_VELOCITYPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type TARGET_ATTRIBUTE_DATA
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

TARGET_ATTRIBUTE_DATA*
TARGET_ATTRIBUTE_DATAPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    TARGET_ATTRIBUTE_DATA *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, TARGET_ATTRIBUTE_DATA);

    if(sample != NULL) {
        if (!::LHZS::TARGET_ATTRIBUTE_DATA_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


TARGET_ATTRIBUTE_DATA *
TARGET_ATTRIBUTE_DATAPluginSupport_create_data_ex(RTIBool allocate_pointers){
    TARGET_ATTRIBUTE_DATA *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, TARGET_ATTRIBUTE_DATA);

    if(sample != NULL) {
        if (!::LHZS::TARGET_ATTRIBUTE_DATA_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


TARGET_ATTRIBUTE_DATA *
TARGET_ATTRIBUTE_DATAPluginSupport_create_data(void)
{
    return ::LHZS::TARGET_ATTRIBUTE_DATAPluginSupport_create_data_ex(RTI_TRUE);
}


void 
TARGET_ATTRIBUTE_DATAPluginSupport_destroy_data_w_params(
    TARGET_ATTRIBUTE_DATA *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::TARGET_ATTRIBUTE_DATA_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
TARGET_ATTRIBUTE_DATAPluginSupport_destroy_data_ex(
    TARGET_ATTRIBUTE_DATA *sample,RTIBool deallocate_pointers) {

    ::LHZS::TARGET_ATTRIBUTE_DATA_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
TARGET_ATTRIBUTE_DATAPluginSupport_destroy_data(
    TARGET_ATTRIBUTE_DATA *sample) {

    ::LHZS::TARGET_ATTRIBUTE_DATAPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
TARGET_ATTRIBUTE_DATAPluginSupport_copy_data(
    TARGET_ATTRIBUTE_DATA *dst,
    const TARGET_ATTRIBUTE_DATA *src)
{
    return ::LHZS::TARGET_ATTRIBUTE_DATA_copy(dst,src);
}


void 
TARGET_ATTRIBUTE_DATAPluginSupport_print_data(
    const TARGET_ATTRIBUTE_DATA *sample,
    const char *desc,
    unsigned int indent_level)
{


    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
      RTILog_debug("%s:\n", desc);
    } else {
      RTILog_debug("\n");
    }

    if (sample == NULL) {
      RTILog_debug("NULL\n");
      return;
    }


    RTICdrType_printArray(
        sample->conflict_flag_uh, (4), RTI_CDR_UNSIGNED_SHORT_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printUnsignedShort,
        "conflict_flag_uh", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->target_type_e, "target_type_e", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->JEM_type_e, "JEM_type_e", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->identification_e, "identification_e", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->ident_confidence_f, "ident_confidence_f", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->civil_military_e, "civil_military_e", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->civil_military_conf_f, "civil_military_conf_f", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->target_class_e, "target_class_e", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->class_confidence_f, "class_confidence_f", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->target_model_e, "target_model_e", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->model_confidence_f, "model_confidence_f", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->target_nation_e, "target_nation_e", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->nation_confidence_f, "nation_confidence_f", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->target_rcs_e, "target_rcs_e", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->rcs_confidence_f, "rcs_confidence_f", indent_level + 1);
            


}

TARGET_ATTRIBUTE_DATA *
TARGET_ATTRIBUTE_DATAPluginSupport_create_key_ex(RTIBool allocate_pointers){
    TARGET_ATTRIBUTE_DATA *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, TARGET_ATTRIBUTE_DATAKeyHolder);

    ::LHZS::TARGET_ATTRIBUTE_DATA_initialize_ex(key,allocate_pointers,RTI_TRUE);
    return key;
}


TARGET_ATTRIBUTE_DATA *
TARGET_ATTRIBUTE_DATAPluginSupport_create_key(void)
{
    return  ::LHZS::TARGET_ATTRIBUTE_DATAPluginSupport_create_key_ex(RTI_TRUE);
}


void 
TARGET_ATTRIBUTE_DATAPluginSupport_destroy_key_ex(
    TARGET_ATTRIBUTE_DATAKeyHolder *key,RTIBool deallocate_pointers)
{
    ::LHZS::TARGET_ATTRIBUTE_DATA_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
TARGET_ATTRIBUTE_DATAPluginSupport_destroy_key(
    TARGET_ATTRIBUTE_DATAKeyHolder *key) {

  ::LHZS::TARGET_ATTRIBUTE_DATAPluginSupport_destroy_key_ex(key,RTI_TRUE);

}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
TARGET_ATTRIBUTE_DATAPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{

    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */
    return PRESTypePluginDefaultParticipantData_new(participant_info);

}


void 
TARGET_ATTRIBUTE_DATAPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
TARGET_ATTRIBUTE_DATAPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */


    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::LHZS::TARGET_ATTRIBUTE_DATAPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::TARGET_ATTRIBUTE_DATAPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            ::LHZS::TARGET_ATTRIBUTE_DATAPluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            ::LHZS::TARGET_ATTRIBUTE_DATAPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }
    
    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
TARGET_ATTRIBUTE_DATAPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
TARGET_ATTRIBUTE_DATAPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATA *sample,
    void *handle)
{
    
    TARGET_ATTRIBUTE_DATA_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATA *dst,
    const TARGET_ATTRIBUTE_DATA *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::TARGET_ATTRIBUTE_DATAPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
TARGET_ATTRIBUTE_DATAPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const TARGET_ATTRIBUTE_DATA *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(serialize_encapsulation) {
  
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream, encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }


    if(serialize_sample) {
    
    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->conflict_flag_uh, (4), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->target_type_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->JEM_type_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->identification_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->ident_confidence_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->civil_military_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->civil_military_conf_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->target_class_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->class_confidence_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->target_model_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->model_confidence_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->target_nation_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->nation_confidence_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->target_rcs_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->rcs_confidence_f)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATA *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }
    
    
    if(deserialize_sample) {
        ::LHZS::TARGET_ATTRIBUTE_DATA_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->conflict_flag_uh, (4), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->target_type_e)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->JEM_type_e)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->identification_e)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->ident_confidence_f)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->civil_military_e)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->civil_military_conf_f)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->target_class_e)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->class_confidence_f)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->target_model_e)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->model_confidence_f)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->target_nation_e)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->nation_confidence_f)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->target_rcs_e)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->rcs_confidence_f)) {
        goto fin;
    }

    }

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}

 
 

RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATA **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
        
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    
    return result;
 
}




RTIBool TARGET_ATTRIBUTE_DATAPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (skip_sample) {

    if (!RTICdrStream_skipPrimitiveArray(
        stream, (4), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            


    }
    

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int 
TARGET_ATTRIBUTE_DATAPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_UNSIGNED_SHORT_TYPE);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
TARGET_ATTRIBUTE_DATAPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_UNSIGNED_SHORT_TYPE);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


/* Returns the size of the sample in its serialized form (in bytes).
 * It can also be an estimation in excess of the real buffer needed 
 * during a call to the serialize() function.
 * The value reported does not have to include the space for the
 * encapsulation flags.
 */
unsigned int
TARGET_ATTRIBUTE_DATAPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const TARGET_ATTRIBUTE_DATA * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (sample) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_UNSIGNED_SHORT_TYPE);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
TARGET_ATTRIBUTE_DATAPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const TARGET_ATTRIBUTE_DATA *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(serialize_encapsulation) {
    
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream, encapsulation_id)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if(serialize_key) {

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->conflict_flag_uh, (4), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool TARGET_ATTRIBUTE_DATAPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATA *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;  
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->conflict_flag_uh, (4), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
        return RTI_FALSE;
    }
            

    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool TARGET_ATTRIBUTE_DATAPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATA **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    
    return result;
}



unsigned int
TARGET_ATTRIBUTE_DATAPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int encapsulation_size = current_alignment;


    unsigned int initial_alignment = current_alignment;


    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {
        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }


        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }
        

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (4), RTI_CDR_UNSIGNED_SHORT_TYPE);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATA *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->conflict_flag_uh, (4), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    }


    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}





RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATAKeyHolder *dst, 
    const TARGET_ATTRIBUTE_DATA *src)
{  

    if (endpoint_data) {} /* To avoid warnings */

    if (!RTICdrType_copyArray(
        dst->conflict_flag_uh, src->conflict_flag_uh, (4), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    TARGET_ATTRIBUTE_DATA *dst, const
    TARGET_ATTRIBUTE_DATAKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */

    if (!RTICdrType_copyArray(
        dst->conflict_flag_uh, src->conflict_flag_uh, (4), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const TARGET_ATTRIBUTE_DATA *instance)
{
    struct RTICdrStream * md5Stream = NULL;

    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(
        RTICdrStream_getBuffer(md5Stream),
        RTICdrStream_getBufferLength(md5Stream));
    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!::LHZS::TARGET_ATTRIBUTE_DATAPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {
        return RTI_FALSE;
    }
    
    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;
    return RTI_TRUE;
}


RTIBool 
TARGET_ATTRIBUTE_DATAPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    TARGET_ATTRIBUTE_DATA * sample = NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (TARGET_ATTRIBUTE_DATA *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }


    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->conflict_flag_uh, (4), RTI_CDR_UNSIGNED_SHORT_TYPE)) {
        return RTI_FALSE;
    }
            

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    if (!::LHZS::TARGET_ATTRIBUTE_DATAPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}


/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *TARGET_ATTRIBUTE_DATAPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
       return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        TARGET_ATTRIBUTE_DATAPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        TARGET_ATTRIBUTE_DATAPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        TARGET_ATTRIBUTE_DATAPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        TARGET_ATTRIBUTE_DATAPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_deserialize_key_sample;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        TARGET_ATTRIBUTE_DATAPlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        TARGET_ATTRIBUTE_DATAPlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::TARGET_ATTRIBUTE_DATA_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        TARGET_ATTRIBUTE_DATAPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        TARGET_ATTRIBUTE_DATAPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = TARGET_ATTRIBUTE_DATATYPENAME;

    return plugin;
}

void
TARGET_ATTRIBUTE_DATAPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type SDI_TRACK_REPORT
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

SDI_TRACK_REPORT*
SDI_TRACK_REPORTPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    SDI_TRACK_REPORT *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, SDI_TRACK_REPORT);

    if(sample != NULL) {
        if (!::LHZS::SDI_TRACK_REPORT_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


SDI_TRACK_REPORT *
SDI_TRACK_REPORTPluginSupport_create_data_ex(RTIBool allocate_pointers){
    SDI_TRACK_REPORT *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, SDI_TRACK_REPORT);

    if(sample != NULL) {
        if (!::LHZS::SDI_TRACK_REPORT_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


SDI_TRACK_REPORT *
SDI_TRACK_REPORTPluginSupport_create_data(void)
{
    return ::LHZS::SDI_TRACK_REPORTPluginSupport_create_data_ex(RTI_TRUE);
}


void 
SDI_TRACK_REPORTPluginSupport_destroy_data_w_params(
    SDI_TRACK_REPORT *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::SDI_TRACK_REPORT_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
SDI_TRACK_REPORTPluginSupport_destroy_data_ex(
    SDI_TRACK_REPORT *sample,RTIBool deallocate_pointers) {

    ::LHZS::SDI_TRACK_REPORT_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
SDI_TRACK_REPORTPluginSupport_destroy_data(
    SDI_TRACK_REPORT *sample) {

    ::LHZS::SDI_TRACK_REPORTPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
SDI_TRACK_REPORTPluginSupport_copy_data(
    SDI_TRACK_REPORT *dst,
    const SDI_TRACK_REPORT *src)
{
    return ::LHZS::SDI_TRACK_REPORT_copy(dst,src);
}


void 
SDI_TRACK_REPORTPluginSupport_print_data(
    const SDI_TRACK_REPORT *sample,
    const char *desc,
    unsigned int indent_level)
{


    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
      RTILog_debug("%s:\n", desc);
    } else {
      RTILog_debug("\n");
    }

    if (sample == NULL) {
      RTILog_debug("NULL\n");
      return;
    }


    RTICdrType_printUnsignedLong(
        &sample->platform_id_ul, "platform_id_ul", indent_level + 1);
            

    RTICdrType_printUnsignedLong(
        &sample->sdi_track_number_ul, "sdi_track_number_ul", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->radar_track_number_uh, "radar_track_number_uh", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->ssr_track_number_uh, "ssr_track_number_uh", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->esm_target_number_uh, "esm_target_number_uh", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->csm_target_number_uh, "csm_target_number_uh", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->ir_target_number_uh, "ir_target_number_uh", indent_level + 1);
            

    RTICdrType_printUnsignedLong(
        &sample->icao_addr_ul, "icao_addr_ul", indent_level + 1);
            

    RTICdrType_printUnsignedLong(
        &sample->ais_mmsi_ul, "ais_mmsi_ul", indent_level + 1);
            

    RTICdrType_printArray(
        sample->call_sign_c, (16), RTI_CDR_CHAR_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printChar,
        "call_sign_c", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->net_obj_addr_uh, "net_obj_addr_uh", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->track_status_e, "track_status_e", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->track_quality_uh, "track_quality_uh", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->track_source_e, "track_source_e", indent_level + 1);
            

    LHZS::GEOGRAPHIC_POSITIONPluginSupport_print_data(
        &sample->target_geo_position, "target_geo_position", indent_level + 1);
            

    LHZS::PLATFORM_VELOCITYPluginSupport_print_data(
        &sample->target_velocity, "target_velocity", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->speed_f, "speed_f", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->heading_f, "heading_f", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->mission_type_e, "mission_type_e", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->threat_level_e, "threat_level_e", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->formation_size_uh, "formation_size_uh", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->maneuver_indicator_e, "maneuver_indicator_e", indent_level + 1);
            

    RTICdrType_printUnsignedLong(
        &sample->time_of_update_ul, "time_of_update_ul", indent_level + 1);
            

    LHZS::TARGET_ATTRIBUTE_DATAPluginSupport_print_data(
        &sample->target_attribute_data, "target_attribute_data", indent_level + 1);
            

    RTICdrType_printArray(
        sample->spare_c, (24), RTI_CDR_CHAR_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printChar,
        "spare_c", indent_level + 1);
            


}

SDI_TRACK_REPORT *
SDI_TRACK_REPORTPluginSupport_create_key_ex(RTIBool allocate_pointers){
    SDI_TRACK_REPORT *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, SDI_TRACK_REPORTKeyHolder);

    ::LHZS::SDI_TRACK_REPORT_initialize_ex(key,allocate_pointers,RTI_TRUE);
    return key;
}


SDI_TRACK_REPORT *
SDI_TRACK_REPORTPluginSupport_create_key(void)
{
    return  ::LHZS::SDI_TRACK_REPORTPluginSupport_create_key_ex(RTI_TRUE);
}


void 
SDI_TRACK_REPORTPluginSupport_destroy_key_ex(
    SDI_TRACK_REPORTKeyHolder *key,RTIBool deallocate_pointers)
{
    ::LHZS::SDI_TRACK_REPORT_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
SDI_TRACK_REPORTPluginSupport_destroy_key(
    SDI_TRACK_REPORTKeyHolder *key) {

  ::LHZS::SDI_TRACK_REPORTPluginSupport_destroy_key_ex(key,RTI_TRUE);

}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
SDI_TRACK_REPORTPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{

    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */
    return PRESTypePluginDefaultParticipantData_new(participant_info);

}


void 
SDI_TRACK_REPORTPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
SDI_TRACK_REPORTPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */


    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::LHZS::SDI_TRACK_REPORTPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::SDI_TRACK_REPORTPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            ::LHZS::SDI_TRACK_REPORTPluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            ::LHZS::SDI_TRACK_REPORTPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = ::LHZS::SDI_TRACK_REPORTPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }
    
    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::SDI_TRACK_REPORTPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::SDI_TRACK_REPORTPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::SDI_TRACK_REPORTPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
SDI_TRACK_REPORTPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
SDI_TRACK_REPORTPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORT *sample,
    void *handle)
{
    
    SDI_TRACK_REPORT_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
SDI_TRACK_REPORTPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORT *dst,
    const SDI_TRACK_REPORT *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::SDI_TRACK_REPORTPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
SDI_TRACK_REPORTPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
SDI_TRACK_REPORTPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SDI_TRACK_REPORT *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(serialize_encapsulation) {
  
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream, encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }


    if(serialize_sample) {
    
    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->platform_id_ul)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->sdi_track_number_ul)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->radar_track_number_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->ssr_track_number_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->esm_target_number_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->csm_target_number_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->ir_target_number_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->icao_addr_ul)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->ais_mmsi_ul)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->call_sign_c, (16), RTI_CDR_CHAR_TYPE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->net_obj_addr_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->track_status_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->track_quality_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->track_source_e)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::GEOGRAPHIC_POSITIONPlugin_serialize(
            endpoint_data,
            &sample->target_geo_position, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::PLATFORM_VELOCITYPlugin_serialize(
            endpoint_data,
            &sample->target_velocity, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->speed_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->heading_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->mission_type_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->threat_level_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->formation_size_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->maneuver_indicator_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->time_of_update_ul)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::TARGET_ATTRIBUTE_DATAPlugin_serialize(
            endpoint_data,
            &sample->target_attribute_data, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->spare_c, (24), RTI_CDR_CHAR_TYPE)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
SDI_TRACK_REPORTPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORT *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }
    
    
    if(deserialize_sample) {
        ::LHZS::SDI_TRACK_REPORT_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->platform_id_ul)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->sdi_track_number_ul)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->radar_track_number_uh)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->ssr_track_number_uh)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->esm_target_number_uh)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->csm_target_number_uh)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->ir_target_number_uh)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->icao_addr_ul)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->ais_mmsi_ul)) {
        goto fin;
    }

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->call_sign_c, (16), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->net_obj_addr_uh)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->track_status_e)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->track_quality_uh)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->track_source_e)) {
        goto fin;
    }

    if (!LHZS::GEOGRAPHIC_POSITIONPlugin_deserialize_sample(
            endpoint_data,
            &sample->target_geo_position,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!LHZS::PLATFORM_VELOCITYPlugin_deserialize_sample(
            endpoint_data,
            &sample->target_velocity,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->speed_f)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->heading_f)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->mission_type_e)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->threat_level_e)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->formation_size_uh)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->maneuver_indicator_e)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->time_of_update_ul)) {
        goto fin;
    }

    if (!LHZS::TARGET_ATTRIBUTE_DATAPlugin_deserialize_sample(
            endpoint_data,
            &sample->target_attribute_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->spare_c, (24), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    }

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}

 
 

RTIBool 
SDI_TRACK_REPORTPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORT **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::SDI_TRACK_REPORTPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
        
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    
    return result;
 
}




RTIBool SDI_TRACK_REPORTPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (skip_sample) {

    if (!RTICdrStream_skipUnsignedLong(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedLong(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedLong(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedLong(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipPrimitiveArray(
        stream, (16), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!LHZS::GEOGRAPHIC_POSITIONPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!LHZS::PLATFORM_VELOCITYPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedLong(stream)) {
        goto fin;
    }
            

    if (!LHZS::TARGET_ATTRIBUTE_DATAPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipPrimitiveArray(
        stream, (24), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            


    }
    

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int 
SDI_TRACK_REPORTPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (16), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  LHZS::GEOGRAPHIC_POSITIONPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  LHZS::PLATFORM_VELOCITYPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  LHZS::TARGET_ATTRIBUTE_DATAPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (24), RTI_CDR_CHAR_TYPE);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
SDI_TRACK_REPORTPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (16), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  LHZS::GEOGRAPHIC_POSITIONPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  LHZS::PLATFORM_VELOCITYPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  LHZS::TARGET_ATTRIBUTE_DATAPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (24), RTI_CDR_CHAR_TYPE);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


/* Returns the size of the sample in its serialized form (in bytes).
 * It can also be an estimation in excess of the real buffer needed 
 * during a call to the serialize() function.
 * The value reported does not have to include the space for the
 * encapsulation flags.
 */
unsigned int
SDI_TRACK_REPORTPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SDI_TRACK_REPORT * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (sample) {} /* To avoid warnings */


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }


    current_alignment += RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (16), RTI_CDR_CHAR_TYPE);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += LHZS::GEOGRAPHIC_POSITIONPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->target_geo_position);
            

    current_alignment += LHZS::PLATFORM_VELOCITYPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->target_velocity);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment += LHZS::TARGET_ATTRIBUTE_DATAPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->target_attribute_data);
            

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (24), RTI_CDR_CHAR_TYPE);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
SDI_TRACK_REPORTPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
SDI_TRACK_REPORTPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SDI_TRACK_REPORT *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(serialize_encapsulation) {
    
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream, encapsulation_id)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if(serialize_key) {

    if (!RTICdrStream_serializeUnsignedLong(
        stream, &sample->platform_id_ul)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool SDI_TRACK_REPORTPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORT *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;  
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->platform_id_ul)) {
        return RTI_FALSE;
    }

    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool SDI_TRACK_REPORTPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORT **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::SDI_TRACK_REPORTPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    
    return result;
}



unsigned int
SDI_TRACK_REPORTPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int encapsulation_size = current_alignment;


    unsigned int initial_alignment = current_alignment;


    if (endpoint_data) {} /* To avoid warnings */


    if (include_encapsulation) {
        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }


        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }
        

    current_alignment +=  RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
SDI_TRACK_REPORTPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORT *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->platform_id_ul)) {
        return RTI_FALSE;
    }

    if (!RTICdrStream_skipUnsignedLong(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedLong(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedLong(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipPrimitiveArray(
        stream, (16), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!LHZS::GEOGRAPHIC_POSITIONPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!LHZS::PLATFORM_VELOCITYPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedLong(stream)) {
        goto fin;
    }
            

    if (!LHZS::TARGET_ATTRIBUTE_DATAPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipPrimitiveArray(
        stream, (24), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    }


    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}





RTIBool 
SDI_TRACK_REPORTPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORTKeyHolder *dst, 
    const SDI_TRACK_REPORT *src)
{  

    if (endpoint_data) {} /* To avoid warnings */

    if (!RTICdrType_copyUnsignedLong(
        &dst->platform_id_ul, &src->platform_id_ul)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
SDI_TRACK_REPORTPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SDI_TRACK_REPORT *dst, const
    SDI_TRACK_REPORTKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */

    if (!RTICdrType_copyUnsignedLong(
        &dst->platform_id_ul, &src->platform_id_ul)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
SDI_TRACK_REPORTPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SDI_TRACK_REPORT *instance)
{
    struct RTICdrStream * md5Stream = NULL;

    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(
        RTICdrStream_getBuffer(md5Stream),
        RTICdrStream_getBufferLength(md5Stream));
    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!::LHZS::SDI_TRACK_REPORTPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {
        return RTI_FALSE;
    }
    
    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;
    return RTI_TRUE;
}


RTIBool 
SDI_TRACK_REPORTPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    SDI_TRACK_REPORT * sample = NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (SDI_TRACK_REPORT *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }


    if (!RTICdrStream_deserializeUnsignedLong(
        stream, &sample->platform_id_ul)) {
        return RTI_FALSE;
    }

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    if (!::LHZS::SDI_TRACK_REPORTPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}


/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *SDI_TRACK_REPORTPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
       return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
        ::LHZS::SDI_TRACK_REPORTPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::SDI_TRACK_REPORTPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::SDI_TRACK_REPORTPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::SDI_TRACK_REPORTPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::SDI_TRACK_REPORTPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        SDI_TRACK_REPORTPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        SDI_TRACK_REPORTPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::SDI_TRACK_REPORTPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::SDI_TRACK_REPORTPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::SDI_TRACK_REPORTPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::SDI_TRACK_REPORTPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        SDI_TRACK_REPORTPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        SDI_TRACK_REPORTPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::SDI_TRACK_REPORTPlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        ::LHZS::SDI_TRACK_REPORTPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        ::LHZS::SDI_TRACK_REPORTPlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        ::LHZS::SDI_TRACK_REPORTPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        ::LHZS::SDI_TRACK_REPORTPlugin_deserialize_key_sample;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        ::LHZS::SDI_TRACK_REPORTPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        ::LHZS::SDI_TRACK_REPORTPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        SDI_TRACK_REPORTPlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        SDI_TRACK_REPORTPlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        ::LHZS::SDI_TRACK_REPORTPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        ::LHZS::SDI_TRACK_REPORTPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::SDI_TRACK_REPORT_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        SDI_TRACK_REPORTPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        SDI_TRACK_REPORTPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::SDI_TRACK_REPORTPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = SDI_TRACK_REPORTTYPENAME;

    return plugin;
}

void
SDI_TRACK_REPORTPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

} /* namespace LHZS */
