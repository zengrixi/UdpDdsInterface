
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from lhzs-vrforce-entity.idl using "rtiddsgen".
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



#include "lhzs-vrforce-entityPlugin.h"


namespace LHZS{

namespace VRFORCE_ENTITY{

/* --------------------------------------------------------------------------------------
 *  Type DATE_OF_DATA
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

DATE_OF_DATA*
DATE_OF_DATAPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    DATE_OF_DATA *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, DATE_OF_DATA);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::DATE_OF_DATA_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


DATE_OF_DATA *
DATE_OF_DATAPluginSupport_create_data_ex(RTIBool allocate_pointers){
    DATE_OF_DATA *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, DATE_OF_DATA);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::DATE_OF_DATA_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


DATE_OF_DATA *
DATE_OF_DATAPluginSupport_create_data(void)
{
    return ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPluginSupport_create_data_ex(RTI_TRUE);
}


void 
DATE_OF_DATAPluginSupport_destroy_data_w_params(
    DATE_OF_DATA *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::VRFORCE_ENTITY::DATE_OF_DATA_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
DATE_OF_DATAPluginSupport_destroy_data_ex(
    DATE_OF_DATA *sample,RTIBool deallocate_pointers) {

    ::LHZS::VRFORCE_ENTITY::DATE_OF_DATA_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
DATE_OF_DATAPluginSupport_destroy_data(
    DATE_OF_DATA *sample) {

    ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
DATE_OF_DATAPluginSupport_copy_data(
    DATE_OF_DATA *dst,
    const DATE_OF_DATA *src)
{
    return ::LHZS::VRFORCE_ENTITY::DATE_OF_DATA_copy(dst,src);
}


void 
DATE_OF_DATAPluginSupport_print_data(
    const DATE_OF_DATA *sample,
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


    RTICdrType_printUnsignedShort(
        &sample->year_uh, "year_uh", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->month_uh, "month_uh", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->day_uh, "day_uh", indent_level + 1);
            


}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
DATE_OF_DATAPlugin_on_participant_attached(
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
DATE_OF_DATAPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
DATE_OF_DATAPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

   if (top_level_registration) {} /* To avoid warnings */
   if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPluginSupport_destroy_data,
            NULL, NULL);

    if (epd == NULL) {
        return NULL;
    }

    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
DATE_OF_DATAPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
DATE_OF_DATAPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    DATE_OF_DATA *sample,
    void *handle)
{
    
    DATE_OF_DATA_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
DATE_OF_DATAPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    DATE_OF_DATA *dst,
    const DATE_OF_DATA *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
DATE_OF_DATAPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
DATE_OF_DATAPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const DATE_OF_DATA *sample, 
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
    
    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->year_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->month_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->day_uh)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
DATE_OF_DATAPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    DATE_OF_DATA *sample,
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
        ::LHZS::VRFORCE_ENTITY::DATE_OF_DATA_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->year_uh)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->month_uh)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->day_uh)) {
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
DATE_OF_DATAPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    DATE_OF_DATA **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_deserialize_sample( 
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




RTIBool DATE_OF_DATAPlugin_skip(
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

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
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
DATE_OF_DATAPlugin_get_serialized_sample_max_size(
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


    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
DATE_OF_DATAPlugin_get_serialized_sample_min_size(
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


    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
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
DATE_OF_DATAPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const DATE_OF_DATA * sample) 
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


    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
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
DATE_OF_DATAPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
DATE_OF_DATAPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const DATE_OF_DATA *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_serialize(
                endpoint_data,
                sample,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool DATE_OF_DATAPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    DATE_OF_DATA *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_deserialize_sample(
                endpoint_data, sample, stream,
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool DATE_OF_DATAPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    DATE_OF_DATA **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_deserialize_key_sample(
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
DATE_OF_DATAPlugin_get_serialized_key_max_size(
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
        

    current_alignment += ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE, encapsulation_id, current_alignment);
    
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
DATE_OF_DATAPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    DATE_OF_DATA *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

        if (!::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
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




/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *DATE_OF_DATAPlugin_new(void) 
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
        ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        DATE_OF_DATAPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        DATE_OF_DATAPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        DATE_OF_DATAPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        DATE_OF_DATAPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_get_key_kind;

 
    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::VRFORCE_ENTITY::DATE_OF_DATA_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        DATE_OF_DATAPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        DATE_OF_DATAPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = DATE_OF_DATATYPENAME;

    return plugin;
}

void
DATE_OF_DATAPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type RADAR_PARAMETERS
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

RADAR_PARAMETERS*
RADAR_PARAMETERSPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    RADAR_PARAMETERS *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, RADAR_PARAMETERS);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERS_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


RADAR_PARAMETERS *
RADAR_PARAMETERSPluginSupport_create_data_ex(RTIBool allocate_pointers){
    RADAR_PARAMETERS *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, RADAR_PARAMETERS);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERS_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


RADAR_PARAMETERS *
RADAR_PARAMETERSPluginSupport_create_data(void)
{
    return ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPluginSupport_create_data_ex(RTI_TRUE);
}


void 
RADAR_PARAMETERSPluginSupport_destroy_data_w_params(
    RADAR_PARAMETERS *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERS_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
RADAR_PARAMETERSPluginSupport_destroy_data_ex(
    RADAR_PARAMETERS *sample,RTIBool deallocate_pointers) {

    ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERS_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
RADAR_PARAMETERSPluginSupport_destroy_data(
    RADAR_PARAMETERS *sample) {

    ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
RADAR_PARAMETERSPluginSupport_copy_data(
    RADAR_PARAMETERS *dst,
    const RADAR_PARAMETERS *src)
{
    return ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERS_copy(dst,src);
}


void 
RADAR_PARAMETERSPluginSupport_print_data(
    const RADAR_PARAMETERS *sample,
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
        sample->Platform, (32), RTI_CDR_CHAR_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printChar,
        "Platform", indent_level + 1);
            

    RTICdrType_printArray(
        sample->RadarName, (32), RTI_CDR_CHAR_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printChar,
        "RadarName", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->Status, "Status", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->RCSValue, "RCSValue", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->Frequency, "Frequency", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->MaxPower, "MaxPower", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->PulseWidth, "PulseWidth", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->PulseRepFre, "PulseRepFre", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->MaxDectDis, "MaxDectDis", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->ScanMode, "ScanMode", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->ScanDirection, "ScanDirection", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->GazeTime, "GazeTime", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->BandWidth, "BandWidth", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->SystemNoiseTem, "SystemNoiseTem", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->ReceNoiseFigure, "ReceNoiseFigure", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->BandWidth1, "BandWidth1", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->ReceFeederLoss, "ReceFeederLoss", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->SNRThreshold, "SNRThreshold", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->FalseAlarmProb, "FalseAlarmProb", indent_level + 1);
            

    RTICdrType_printLong(
        &sample->PulseNum, "PulseNum", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->AtnEleBeamWidth, "AtnEleBeamWidth", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->AtnAziBeamWidth, "AtnAziBeamWidth", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->EleRangeMin, "EleRangeMin", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->EleRangeMax, "EleRangeMax", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->AziRangeMin, "AziRangeMin", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->AziRangeMax, "AziRangeMax", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->AntennaGain, "AntennaGain", indent_level + 1);
            


}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
RADAR_PARAMETERSPlugin_on_participant_attached(
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
RADAR_PARAMETERSPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
RADAR_PARAMETERSPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

   if (top_level_registration) {} /* To avoid warnings */
   if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPluginSupport_destroy_data,
            NULL, NULL);

    if (epd == NULL) {
        return NULL;
    }

    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
RADAR_PARAMETERSPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
RADAR_PARAMETERSPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RADAR_PARAMETERS *sample,
    void *handle)
{
    
    RADAR_PARAMETERS_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
RADAR_PARAMETERSPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RADAR_PARAMETERS *dst,
    const RADAR_PARAMETERS *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
RADAR_PARAMETERSPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
RADAR_PARAMETERSPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const RADAR_PARAMETERS *sample, 
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
        stream, (void*)sample->Platform, (32), RTI_CDR_CHAR_TYPE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->RadarName, (32), RTI_CDR_CHAR_TYPE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->Status)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->RCSValue)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->Frequency)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->MaxPower)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->PulseWidth)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->PulseRepFre)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->MaxDectDis)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->ScanMode)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->ScanDirection)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->GazeTime)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->BandWidth)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->SystemNoiseTem)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->ReceNoiseFigure)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->BandWidth1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->ReceFeederLoss)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->SNRThreshold)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->FalseAlarmProb)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeLong(
        stream, &sample->PulseNum)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->AtnEleBeamWidth)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->AtnAziBeamWidth)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->EleRangeMin)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->EleRangeMax)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->AziRangeMin)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->AziRangeMax)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->AntennaGain)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
RADAR_PARAMETERSPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    RADAR_PARAMETERS *sample,
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
        ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERS_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->Platform, (32), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->RadarName, (32), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeChar(
        stream, &sample->Status)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->RCSValue)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->Frequency)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->MaxPower)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->PulseWidth)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->PulseRepFre)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->MaxDectDis)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->ScanMode)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->ScanDirection)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->GazeTime)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->BandWidth)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->SystemNoiseTem)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->ReceNoiseFigure)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->BandWidth1)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->ReceFeederLoss)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->SNRThreshold)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->FalseAlarmProb)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeLong(
        stream, &sample->PulseNum)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->AtnEleBeamWidth)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->AtnAziBeamWidth)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->EleRangeMin)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->EleRangeMax)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->AziRangeMin)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->AziRangeMax)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->AntennaGain)) {
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
RADAR_PARAMETERSPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    RADAR_PARAMETERS **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_deserialize_sample( 
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




RTIBool RADAR_PARAMETERSPlugin_skip(
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
        stream, (32), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipPrimitiveArray(
        stream, (32), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipLong(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

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
RADAR_PARAMETERSPlugin_get_serialized_sample_max_size(
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
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

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
RADAR_PARAMETERSPlugin_get_serialized_sample_min_size(
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
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

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
RADAR_PARAMETERSPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const RADAR_PARAMETERS * sample) 
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
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

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
RADAR_PARAMETERSPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
RADAR_PARAMETERSPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const RADAR_PARAMETERS *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_serialize(
                endpoint_data,
                sample,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool RADAR_PARAMETERSPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    RADAR_PARAMETERS *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_deserialize_sample(
                endpoint_data, sample, stream,
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool RADAR_PARAMETERSPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RADAR_PARAMETERS **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_deserialize_key_sample(
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
RADAR_PARAMETERSPlugin_get_serialized_key_max_size(
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
        

    current_alignment += ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE, encapsulation_id, current_alignment);
    
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
RADAR_PARAMETERSPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RADAR_PARAMETERS *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

        if (!::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
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




/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *RADAR_PARAMETERSPlugin_new(void) 
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
        ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        RADAR_PARAMETERSPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        RADAR_PARAMETERSPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        RADAR_PARAMETERSPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        RADAR_PARAMETERSPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_get_key_kind;

 
    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERS_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        RADAR_PARAMETERSPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        RADAR_PARAMETERSPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = RADAR_PARAMETERSTYPENAME;

    return plugin;
}

void
RADAR_PARAMETERSPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type COMM_PARAMETERS
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

COMM_PARAMETERS*
COMM_PARAMETERSPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    COMM_PARAMETERS *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, COMM_PARAMETERS);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


COMM_PARAMETERS *
COMM_PARAMETERSPluginSupport_create_data_ex(RTIBool allocate_pointers){
    COMM_PARAMETERS *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, COMM_PARAMETERS);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


COMM_PARAMETERS *
COMM_PARAMETERSPluginSupport_create_data(void)
{
    return ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPluginSupport_create_data_ex(RTI_TRUE);
}


void 
COMM_PARAMETERSPluginSupport_destroy_data_w_params(
    COMM_PARAMETERS *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
COMM_PARAMETERSPluginSupport_destroy_data_ex(
    COMM_PARAMETERS *sample,RTIBool deallocate_pointers) {

    ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
COMM_PARAMETERSPluginSupport_destroy_data(
    COMM_PARAMETERS *sample) {

    ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
COMM_PARAMETERSPluginSupport_copy_data(
    COMM_PARAMETERS *dst,
    const COMM_PARAMETERS *src)
{
    return ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_copy(dst,src);
}


void 
COMM_PARAMETERSPluginSupport_print_data(
    const COMM_PARAMETERS *sample,
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
        sample->Platform, (32), RTI_CDR_CHAR_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printChar,
        "Platform", indent_level + 1);
            

    RTICdrType_printArray(
        sample->CommName, (32), RTI_CDR_CHAR_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printChar,
        "CommName", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->Status, "Status", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->TransPower, "TransPower", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->Frequency, "Frequency", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->BandWidth, "BandWidth", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->TransLoss, "TransLoss", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->Frequency1, "Frequency1", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->BandWidth1, "BandWidth1", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->RecvLoss, "RecvLoss", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->CommuReceNoiseFactor, "CommuReceNoiseFactor", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->CommuReceNoisePower, "CommuReceNoisePower", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->AntennaGain, "AntennaGain", indent_level + 1);
            


}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
COMM_PARAMETERSPlugin_on_participant_attached(
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
COMM_PARAMETERSPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
COMM_PARAMETERSPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

   if (top_level_registration) {} /* To avoid warnings */
   if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPluginSupport_destroy_data,
            NULL, NULL);

    if (epd == NULL) {
        return NULL;
    }

    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
COMM_PARAMETERSPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
COMM_PARAMETERSPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS *sample,
    void *handle)
{
    
    COMM_PARAMETERS_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
COMM_PARAMETERSPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS *dst,
    const COMM_PARAMETERS *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
COMM_PARAMETERSPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
COMM_PARAMETERSPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const COMM_PARAMETERS *sample, 
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
        stream, (void*)sample->Platform, (32), RTI_CDR_CHAR_TYPE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->CommName, (32), RTI_CDR_CHAR_TYPE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->Status)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->TransPower)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->Frequency)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->BandWidth)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->TransLoss)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->Frequency1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->BandWidth1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->RecvLoss)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->CommuReceNoiseFactor)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->CommuReceNoisePower)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->AntennaGain)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
COMM_PARAMETERSPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS *sample,
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
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->Platform, (32), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->CommName, (32), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeChar(
        stream, &sample->Status)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->TransPower)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->Frequency)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->BandWidth)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->TransLoss)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->Frequency1)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->BandWidth1)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->RecvLoss)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->CommuReceNoiseFactor)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->CommuReceNoisePower)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->AntennaGain)) {
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
COMM_PARAMETERSPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_deserialize_sample( 
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




RTIBool COMM_PARAMETERSPlugin_skip(
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
        stream, (32), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipPrimitiveArray(
        stream, (32), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

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
COMM_PARAMETERSPlugin_get_serialized_sample_max_size(
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
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

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
COMM_PARAMETERSPlugin_get_serialized_sample_min_size(
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
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

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
COMM_PARAMETERSPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const COMM_PARAMETERS * sample) 
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
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

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
COMM_PARAMETERSPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
COMM_PARAMETERSPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const COMM_PARAMETERS *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_serialize(
                endpoint_data,
                sample,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool COMM_PARAMETERSPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_deserialize_sample(
                endpoint_data, sample, stream,
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool COMM_PARAMETERSPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_deserialize_key_sample(
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
COMM_PARAMETERSPlugin_get_serialized_key_max_size(
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
        

    current_alignment += ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE, encapsulation_id, current_alignment);
    
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
COMM_PARAMETERSPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

        if (!::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
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




/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *COMM_PARAMETERSPlugin_new(void) 
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
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        COMM_PARAMETERSPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        COMM_PARAMETERSPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        COMM_PARAMETERSPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        COMM_PARAMETERSPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_get_key_kind;

 
    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        COMM_PARAMETERSPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        COMM_PARAMETERSPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = COMM_PARAMETERSTYPENAME;

    return plugin;
}

void
COMM_PARAMETERSPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type JAM_PARAMETERS
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

JAM_PARAMETERS*
JAM_PARAMETERSPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    JAM_PARAMETERS *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, JAM_PARAMETERS);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::JAM_PARAMETERS_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


JAM_PARAMETERS *
JAM_PARAMETERSPluginSupport_create_data_ex(RTIBool allocate_pointers){
    JAM_PARAMETERS *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, JAM_PARAMETERS);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::JAM_PARAMETERS_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


JAM_PARAMETERS *
JAM_PARAMETERSPluginSupport_create_data(void)
{
    return ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPluginSupport_create_data_ex(RTI_TRUE);
}


void 
JAM_PARAMETERSPluginSupport_destroy_data_w_params(
    JAM_PARAMETERS *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERS_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
JAM_PARAMETERSPluginSupport_destroy_data_ex(
    JAM_PARAMETERS *sample,RTIBool deallocate_pointers) {

    ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERS_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
JAM_PARAMETERSPluginSupport_destroy_data(
    JAM_PARAMETERS *sample) {

    ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
JAM_PARAMETERSPluginSupport_copy_data(
    JAM_PARAMETERS *dst,
    const JAM_PARAMETERS *src)
{
    return ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERS_copy(dst,src);
}


void 
JAM_PARAMETERSPluginSupport_print_data(
    const JAM_PARAMETERS *sample,
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
        sample->Platform, (32), RTI_CDR_CHAR_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printChar,
        "Platform", indent_level + 1);
            

    RTICdrType_printArray(
        sample->JamName, (32), RTI_CDR_CHAR_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printChar,
        "JamName", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->Status, "Status", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->JamType, "JamType", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->Frequency, "Frequency", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->BandWidth, "BandWidth", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->TransPower, "TransPower", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->DurationTime, "DurationTime", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->TransLoss, "TransLoss", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->EcmStyle, "EcmStyle", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->AntennaPolarization, "AntennaPolarization", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->AntennaGain, "AntennaGain", indent_level + 1);
            


}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
JAM_PARAMETERSPlugin_on_participant_attached(
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
JAM_PARAMETERSPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
JAM_PARAMETERSPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

   if (top_level_registration) {} /* To avoid warnings */
   if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPluginSupport_destroy_data,
            NULL, NULL);

    if (epd == NULL) {
        return NULL;
    }

    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
JAM_PARAMETERSPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
JAM_PARAMETERSPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    JAM_PARAMETERS *sample,
    void *handle)
{
    
    JAM_PARAMETERS_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
JAM_PARAMETERSPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    JAM_PARAMETERS *dst,
    const JAM_PARAMETERS *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
JAM_PARAMETERSPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
JAM_PARAMETERSPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const JAM_PARAMETERS *sample, 
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
        stream, (void*)sample->Platform, (32), RTI_CDR_CHAR_TYPE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->JamName, (32), RTI_CDR_CHAR_TYPE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->Status)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->JamType)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->Frequency)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->BandWidth)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->TransPower)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->DurationTime)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->TransLoss)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->EcmStyle)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->AntennaPolarization)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->AntennaGain)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
JAM_PARAMETERSPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    JAM_PARAMETERS *sample,
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
        ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERS_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->Platform, (32), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->JamName, (32), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeChar(
        stream, &sample->Status)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->JamType)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->Frequency)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->BandWidth)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->TransPower)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->DurationTime)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->TransLoss)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->EcmStyle)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->AntennaPolarization)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->AntennaGain)) {
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
JAM_PARAMETERSPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    JAM_PARAMETERS **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_deserialize_sample( 
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




RTIBool JAM_PARAMETERSPlugin_skip(
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
        stream, (32), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipPrimitiveArray(
        stream, (32), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
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
JAM_PARAMETERSPlugin_get_serialized_sample_max_size(
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
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
JAM_PARAMETERSPlugin_get_serialized_sample_min_size(
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
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
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
JAM_PARAMETERSPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const JAM_PARAMETERS * sample) 
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
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
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
JAM_PARAMETERSPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
JAM_PARAMETERSPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const JAM_PARAMETERS *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_serialize(
                endpoint_data,
                sample,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool JAM_PARAMETERSPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    JAM_PARAMETERS *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_deserialize_sample(
                endpoint_data, sample, stream,
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool JAM_PARAMETERSPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    JAM_PARAMETERS **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_deserialize_key_sample(
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
JAM_PARAMETERSPlugin_get_serialized_key_max_size(
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
        

    current_alignment += ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE, encapsulation_id, current_alignment);
    
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
JAM_PARAMETERSPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    JAM_PARAMETERS *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

        if (!::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
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




/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *JAM_PARAMETERSPlugin_new(void) 
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
        ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        JAM_PARAMETERSPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        JAM_PARAMETERSPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        JAM_PARAMETERSPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        JAM_PARAMETERSPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_get_key_kind;

 
    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::VRFORCE_ENTITY::JAM_PARAMETERS_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        JAM_PARAMETERSPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        JAM_PARAMETERSPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = JAM_PARAMETERSTYPENAME;

    return plugin;
}

void
JAM_PARAMETERSPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type WAVE_PARAMETER_RW
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

WAVE_PARAMETER_RW*
WAVE_PARAMETER_RWPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    WAVE_PARAMETER_RW *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, WAVE_PARAMETER_RW);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RW_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


WAVE_PARAMETER_RW *
WAVE_PARAMETER_RWPluginSupport_create_data_ex(RTIBool allocate_pointers){
    WAVE_PARAMETER_RW *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, WAVE_PARAMETER_RW);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RW_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


WAVE_PARAMETER_RW *
WAVE_PARAMETER_RWPluginSupport_create_data(void)
{
    return ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPluginSupport_create_data_ex(RTI_TRUE);
}


void 
WAVE_PARAMETER_RWPluginSupport_destroy_data_w_params(
    WAVE_PARAMETER_RW *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RW_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
WAVE_PARAMETER_RWPluginSupport_destroy_data_ex(
    WAVE_PARAMETER_RW *sample,RTIBool deallocate_pointers) {

    ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RW_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
WAVE_PARAMETER_RWPluginSupport_destroy_data(
    WAVE_PARAMETER_RW *sample) {

    ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
WAVE_PARAMETER_RWPluginSupport_copy_data(
    WAVE_PARAMETER_RW *dst,
    const WAVE_PARAMETER_RW *src)
{
    return ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RW_copy(dst,src);
}


void 
WAVE_PARAMETER_RWPluginSupport_print_data(
    const WAVE_PARAMETER_RW *sample,
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


    RTICdrType_printUnsignedShort(
        &sample->equipid, "equipid", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->channel_number, "channel_number", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->local_addr, "local_addr", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->work_mode_HF, "work_mode_HF", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->adaptive_switch, "adaptive_switch", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->fixed_freq_rate, "fixed_freq_rate", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->leap_freq_rate, "leap_freq_rate", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->netid, "netid", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->trans_mode_HF, "trans_mode_HF", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->freq_table_number, "freq_table_number", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->station_style, "station_style", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->ciphered, "ciphered", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->business_type, "business_type", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->duplex_mode, "duplex_mode", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->trans_rate, "trans_rate", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->interwine_mode, "interwine_mode", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->trans_mode_413, "trans_mode_413", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->address, "address", indent_level + 1);
            

    RTICdrType_printLong(
        &sample->work_freq, "work_freq", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->link_mode, "link_mode", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->work_mode_UHF, "work_mode_UHF", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->power_level, "power_level", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->RAP, "RAP", indent_level + 1);
            


}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
WAVE_PARAMETER_RWPlugin_on_participant_attached(
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
WAVE_PARAMETER_RWPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
WAVE_PARAMETER_RWPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

   if (top_level_registration) {} /* To avoid warnings */
   if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPluginSupport_destroy_data,
            NULL, NULL);

    if (epd == NULL) {
        return NULL;
    }

    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
WAVE_PARAMETER_RWPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
WAVE_PARAMETER_RWPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    WAVE_PARAMETER_RW *sample,
    void *handle)
{
    
    WAVE_PARAMETER_RW_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
WAVE_PARAMETER_RWPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    WAVE_PARAMETER_RW *dst,
    const WAVE_PARAMETER_RW *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
WAVE_PARAMETER_RWPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
WAVE_PARAMETER_RWPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const WAVE_PARAMETER_RW *sample, 
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
    
    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->equipid)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->channel_number)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->local_addr)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->work_mode_HF)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->adaptive_switch)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->fixed_freq_rate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->leap_freq_rate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->netid)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->trans_mode_HF)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->freq_table_number)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->station_style)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->ciphered)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->business_type)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->duplex_mode)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->trans_rate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->interwine_mode)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->trans_mode_413)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->address)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeLong(
        stream, &sample->work_freq)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->link_mode)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->work_mode_UHF)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->power_level)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->RAP)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
WAVE_PARAMETER_RWPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    WAVE_PARAMETER_RW *sample,
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
        ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RW_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->equipid)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->channel_number)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->local_addr)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->work_mode_HF)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->adaptive_switch)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->fixed_freq_rate)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->leap_freq_rate)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->netid)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->trans_mode_HF)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->freq_table_number)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->station_style)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->ciphered)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->business_type)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->duplex_mode)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->trans_rate)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->interwine_mode)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->trans_mode_413)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->address)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeLong(
        stream, &sample->work_freq)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->link_mode)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->work_mode_UHF)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->power_level)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->RAP)) {
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
WAVE_PARAMETER_RWPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    WAVE_PARAMETER_RW **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_deserialize_sample( 
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




RTIBool WAVE_PARAMETER_RWPlugin_skip(
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

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipLong(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
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
WAVE_PARAMETER_RWPlugin_get_serialized_sample_max_size(
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


    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
WAVE_PARAMETER_RWPlugin_get_serialized_sample_min_size(
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


    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
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
WAVE_PARAMETER_RWPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const WAVE_PARAMETER_RW * sample) 
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


    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
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
WAVE_PARAMETER_RWPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
WAVE_PARAMETER_RWPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const WAVE_PARAMETER_RW *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_serialize(
                endpoint_data,
                sample,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool WAVE_PARAMETER_RWPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    WAVE_PARAMETER_RW *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_deserialize_sample(
                endpoint_data, sample, stream,
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool WAVE_PARAMETER_RWPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    WAVE_PARAMETER_RW **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_deserialize_key_sample(
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
WAVE_PARAMETER_RWPlugin_get_serialized_key_max_size(
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
        

    current_alignment += ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE, encapsulation_id, current_alignment);
    
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
WAVE_PARAMETER_RWPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    WAVE_PARAMETER_RW *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

        if (!::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
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




/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *WAVE_PARAMETER_RWPlugin_new(void) 
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
        ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        WAVE_PARAMETER_RWPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        WAVE_PARAMETER_RWPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        WAVE_PARAMETER_RWPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        WAVE_PARAMETER_RWPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_get_key_kind;

 
    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RW_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        WAVE_PARAMETER_RWPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        WAVE_PARAMETER_RWPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = WAVE_PARAMETER_RWTYPENAME;

    return plugin;
}

void
WAVE_PARAMETER_RWPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type COMM_PARAMETERS_RW
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

COMM_PARAMETERS_RW*
COMM_PARAMETERS_RWPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    COMM_PARAMETERS_RW *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, COMM_PARAMETERS_RW);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RW_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


COMM_PARAMETERS_RW *
COMM_PARAMETERS_RWPluginSupport_create_data_ex(RTIBool allocate_pointers){
    COMM_PARAMETERS_RW *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, COMM_PARAMETERS_RW);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RW_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


COMM_PARAMETERS_RW *
COMM_PARAMETERS_RWPluginSupport_create_data(void)
{
    return ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPluginSupport_create_data_ex(RTI_TRUE);
}


void 
COMM_PARAMETERS_RWPluginSupport_destroy_data_w_params(
    COMM_PARAMETERS_RW *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RW_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
COMM_PARAMETERS_RWPluginSupport_destroy_data_ex(
    COMM_PARAMETERS_RW *sample,RTIBool deallocate_pointers) {

    ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RW_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
COMM_PARAMETERS_RWPluginSupport_destroy_data(
    COMM_PARAMETERS_RW *sample) {

    ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
COMM_PARAMETERS_RWPluginSupport_copy_data(
    COMM_PARAMETERS_RW *dst,
    const COMM_PARAMETERS_RW *src)
{
    return ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RW_copy(dst,src);
}


void 
COMM_PARAMETERS_RWPluginSupport_print_data(
    const COMM_PARAMETERS_RW *sample,
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


    RTICdrType_printChar(
        &sample->BIT_type, "BIT_type", indent_level + 1);
            

    RTICdrType_printChar(
        &sample->equipment_status, "equipment_status", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->channelNumber, "channelNumber", indent_level + 1);
            

    if (&sample->channelList == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILog_debug("channelList: NULL\n");    
    } else {
    
        if (DDS_CharSeq_get_contiguous_bufferI(&sample->channelList) != NULL) {
            RTICdrType_printArray(
                DDS_CharSeq_get_contiguous_bufferI(&sample->channelList),
                DDS_CharSeq_get_length(&sample->channelList),
                RTI_CDR_CHAR_SIZE,
                (RTICdrTypePrintFunction)RTICdrType_printChar,
                "channelList", indent_level + 1);
        } else {
            RTICdrType_printPointerArray(
                DDS_CharSeq_get_discontiguous_bufferI(&sample->channelList),
                DDS_CharSeq_get_length(&sample->channelList),
               (RTICdrTypePrintFunction)RTICdrType_printChar,
               "channelList", indent_level + 1);
        }
    
    }
            

    if (&sample->wave_typeList == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILog_debug("wave_typeList: NULL\n");    
    } else {
    
        if (DDS_CharSeq_get_contiguous_bufferI(&sample->wave_typeList) != NULL) {
            RTICdrType_printArray(
                DDS_CharSeq_get_contiguous_bufferI(&sample->wave_typeList),
                DDS_CharSeq_get_length(&sample->wave_typeList),
                RTI_CDR_CHAR_SIZE,
                (RTICdrTypePrintFunction)RTICdrType_printChar,
                "wave_typeList", indent_level + 1);
        } else {
            RTICdrType_printPointerArray(
                DDS_CharSeq_get_discontiguous_bufferI(&sample->wave_typeList),
                DDS_CharSeq_get_length(&sample->wave_typeList),
               (RTICdrTypePrintFunction)RTICdrType_printChar,
               "wave_typeList", indent_level + 1);
        }
    
    }
            

    if (&sample->wave_parameter_rwList == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILog_debug("wave_parameter_rwList: NULL\n");    
    } else {
                
        if (LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_contiguous_bufferI(&sample->wave_parameter_rwList) != NULL) {
            RTICdrType_printArray(
                LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_contiguous_bufferI(&sample->wave_parameter_rwList), 
                LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_length(&sample->wave_parameter_rwList),
                sizeof(LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RW),
                (RTICdrTypePrintFunction)LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPluginSupport_print_data,
                "wave_parameter_rwList", indent_level + 1);
        } else {
            RTICdrType_printPointerArray(
                LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_discontiguous_bufferI(&sample->wave_parameter_rwList), 
                LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_length(&sample->wave_parameter_rwList),
                (RTICdrTypePrintFunction)LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPluginSupport_print_data,
                "wave_parameter_rwList", indent_level + 1);
        }
    
    }
            


}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
COMM_PARAMETERS_RWPlugin_on_participant_attached(
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
COMM_PARAMETERS_RWPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
COMM_PARAMETERS_RWPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

   if (top_level_registration) {} /* To avoid warnings */
   if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPluginSupport_destroy_data,
            NULL, NULL);

    if (epd == NULL) {
        return NULL;
    }

    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
COMM_PARAMETERS_RWPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
COMM_PARAMETERS_RWPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS_RW *sample,
    void *handle)
{
    
    COMM_PARAMETERS_RW_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
COMM_PARAMETERS_RWPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS_RW *dst,
    const COMM_PARAMETERS_RW *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
COMM_PARAMETERS_RWPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
COMM_PARAMETERS_RWPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const COMM_PARAMETERS_RW *sample, 
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
    
    if (!RTICdrStream_serializeChar(
        stream, &sample->BIT_type)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeChar(
        stream, &sample->equipment_status)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->channelNumber)) {
        return RTI_FALSE;
    }
            

    if (DDS_CharSeq_get_contiguous_bufferI(&sample->channelList) != NULL) {
        if (!RTICdrStream_serializePrimitiveSequence(
            stream,
            DDS_CharSeq_get_contiguous_bufferI(&sample->channelList),
            DDS_CharSeq_get_length(&sample->channelList),
            (100),
            RTI_CDR_CHAR_TYPE)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializePrimitivePointerSequence(
            stream,
            (const void **)DDS_CharSeq_get_discontiguous_bufferI(&sample->channelList),
            DDS_CharSeq_get_length(&sample->channelList),
            (100),
            RTI_CDR_CHAR_TYPE)) {
            return RTI_FALSE;
        }
    }
            

    if (DDS_CharSeq_get_contiguous_bufferI(&sample->wave_typeList) != NULL) {
        if (!RTICdrStream_serializePrimitiveSequence(
            stream,
            DDS_CharSeq_get_contiguous_bufferI(&sample->wave_typeList),
            DDS_CharSeq_get_length(&sample->wave_typeList),
            (100),
            RTI_CDR_CHAR_TYPE)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializePrimitivePointerSequence(
            stream,
            (const void **)DDS_CharSeq_get_discontiguous_bufferI(&sample->wave_typeList),
            DDS_CharSeq_get_length(&sample->wave_typeList),
            (100),
            RTI_CDR_CHAR_TYPE)) {
            return RTI_FALSE;
        }
    }
            

    if (LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_contiguous_bufferI(&sample->wave_parameter_rwList) != NULL) {
        if (!RTICdrStream_serializeNonPrimitiveSequence(
            stream,
            LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_contiguous_bufferI(&sample->wave_parameter_rwList),
            LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_length(&sample->wave_parameter_rwList),
            (100),
            sizeof(LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RW),
            (RTICdrStreamSerializeFunction)LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_serialize,
            RTI_FALSE, encapsulation_id,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializeNonPrimitivePointerSequence(
            stream,
            (const void **)LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_discontiguous_bufferI(&sample->wave_parameter_rwList),
            LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_length(&sample->wave_parameter_rwList),
            (100),
            (RTICdrStreamSerializeFunction)LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_serialize,
            RTI_FALSE, encapsulation_id,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
COMM_PARAMETERS_RWPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS_RW *sample,
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
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RW_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializeChar(
        stream, &sample->BIT_type)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeChar(
        stream, &sample->equipment_status)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->channelNumber)) {
        goto fin;
    }

    {
        RTICdrUnsignedLong sequence_length;

        if (DDS_CharSeq_get_contiguous_bufferI(&sample->channelList) != NULL) {
            if (!RTICdrStream_deserializePrimitiveSequence(
                stream,
                DDS_CharSeq_get_contiguous_bufferI(&sample->channelList),
                &sequence_length,
                DDS_CharSeq_get_maximum(&sample->channelList),
                RTI_CDR_CHAR_TYPE)) {
                goto fin;
            }
        } else {
            if (!RTICdrStream_deserializePrimitivePointerSequence(
                stream,
                (void **)DDS_CharSeq_get_discontiguous_bufferI(&sample->channelList),
                &sequence_length,
                DDS_CharSeq_get_maximum(&sample->channelList),
                RTI_CDR_CHAR_TYPE)) {
                goto fin;
            }
        }
        if (!DDS_CharSeq_set_length(&sample->channelList, sequence_length)) {
            return RTI_FALSE;
        }
    }
            

    {
        RTICdrUnsignedLong sequence_length;

        if (DDS_CharSeq_get_contiguous_bufferI(&sample->wave_typeList) != NULL) {
            if (!RTICdrStream_deserializePrimitiveSequence(
                stream,
                DDS_CharSeq_get_contiguous_bufferI(&sample->wave_typeList),
                &sequence_length,
                DDS_CharSeq_get_maximum(&sample->wave_typeList),
                RTI_CDR_CHAR_TYPE)) {
                goto fin;
            }
        } else {
            if (!RTICdrStream_deserializePrimitivePointerSequence(
                stream,
                (void **)DDS_CharSeq_get_discontiguous_bufferI(&sample->wave_typeList),
                &sequence_length,
                DDS_CharSeq_get_maximum(&sample->wave_typeList),
                RTI_CDR_CHAR_TYPE)) {
                goto fin;
            }
        }
        if (!DDS_CharSeq_set_length(&sample->wave_typeList, sequence_length)) {
            return RTI_FALSE;
        }
    }
            

    {
        RTICdrUnsignedLong sequence_length;

        if (LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_contiguous_bufferI(&sample->wave_parameter_rwList) != NULL) {
            if (!RTICdrStream_deserializeNonPrimitiveSequence(
                stream,
                LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_contiguous_bufferI(&sample->wave_parameter_rwList),
                &sequence_length,
                LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_maximum(&sample->wave_parameter_rwList),
                sizeof(LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RW),
                (RTICdrStreamDeserializeFunction)LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_deserialize_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin;
            }
        } else {
            if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                stream,
                (void **)LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_discontiguous_bufferI(&sample->wave_parameter_rwList),
                &sequence_length,
                LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_maximum(&sample->wave_parameter_rwList),
                (RTICdrStreamDeserializeFunction)LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_deserialize_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin;
            }
        }
        if (!LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_set_length(
            &sample->wave_parameter_rwList, sequence_length)) {
            return RTI_FALSE;
        }
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
COMM_PARAMETERS_RWPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS_RW **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_deserialize_sample( 
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




RTIBool COMM_PARAMETERS_RWPlugin_skip(
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

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipChar(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    {
        RTICdrUnsignedLong sequence_length;

        if (!RTICdrStream_skipPrimitiveSequence(
            stream,
            &sequence_length,
            RTI_CDR_CHAR_TYPE)) {
            goto fin;
        }
    }
            

    {
        RTICdrUnsignedLong sequence_length;

        if (!RTICdrStream_skipPrimitiveSequence(
            stream,
            &sequence_length,
            RTI_CDR_CHAR_TYPE)) {
            goto fin;
        }
    }
            

    {
        RTICdrUnsignedLong sequence_length;

        if (!RTICdrStream_skipNonPrimitiveSequence(
            stream,
            &sequence_length,
            sizeof(LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RW),
            (RTICdrStreamSkipFunction)LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_skip,
            RTI_FALSE,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            goto fin;
        }
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
COMM_PARAMETERS_RWPlugin_get_serialized_sample_max_size(
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


    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment, (100), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment, (100), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, (100),
        LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_get_serialized_sample_max_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
COMM_PARAMETERS_RWPlugin_get_serialized_sample_min_size(
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


    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0, RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0, RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0,
        LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_get_serialized_sample_min_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

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
COMM_PARAMETERS_RWPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const COMM_PARAMETERS_RW * sample) 
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


    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getCharMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        current_alignment, 
        DDS_CharSeq_get_length(&sample->channelList),
        RTI_CDR_CHAR_TYPE);
            

    current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
        current_alignment, 
        DDS_CharSeq_get_length(&sample->wave_typeList),
        RTI_CDR_CHAR_TYPE);
            

    if (LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_contiguous_bufferI(&sample->wave_parameter_rwList) != NULL) {
        current_alignment += RTICdrStream_getNonPrimitiveSequenceSerializedSize(
            current_alignment, LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_length(&sample->wave_parameter_rwList),
            sizeof(LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RW),
            (RTICdrTypeGetSerializedSampleSizeFunction)LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_contiguous_bufferI(&sample->wave_parameter_rwList),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerSequenceSerializedSize(
            current_alignment, LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_length(&sample->wave_parameter_rwList),
            sizeof(LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RW),
            (RTICdrTypeGetSerializedSampleSizeFunction)LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq_get_discontiguous_bufferI(&sample->wave_parameter_rwList),
            endpoint_data);
    }
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
COMM_PARAMETERS_RWPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
COMM_PARAMETERS_RWPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const COMM_PARAMETERS_RW *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_serialize(
                endpoint_data,
                sample,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool COMM_PARAMETERS_RWPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS_RW *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_deserialize_sample(
                endpoint_data, sample, stream,
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool COMM_PARAMETERS_RWPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS_RW **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_deserialize_key_sample(
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
COMM_PARAMETERS_RWPlugin_get_serialized_key_max_size(
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
        

    current_alignment += ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE, encapsulation_id, current_alignment);
    
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
COMM_PARAMETERS_RWPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    COMM_PARAMETERS_RW *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

        if (!::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
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




/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *COMM_PARAMETERS_RWPlugin_new(void) 
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
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        COMM_PARAMETERS_RWPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        COMM_PARAMETERS_RWPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        COMM_PARAMETERS_RWPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        COMM_PARAMETERS_RWPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_get_key_kind;

 
    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RW_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        COMM_PARAMETERS_RWPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        COMM_PARAMETERS_RWPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = COMM_PARAMETERS_RWTYPENAME;

    return plugin;
}

void
COMM_PARAMETERS_RWPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type SENSOR_RADAR
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

SENSOR_RADAR*
SENSOR_RADARPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    SENSOR_RADAR *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, SENSOR_RADAR);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::SENSOR_RADAR_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


SENSOR_RADAR *
SENSOR_RADARPluginSupport_create_data_ex(RTIBool allocate_pointers){
    SENSOR_RADAR *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, SENSOR_RADAR);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::SENSOR_RADAR_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


SENSOR_RADAR *
SENSOR_RADARPluginSupport_create_data(void)
{
    return ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPluginSupport_create_data_ex(RTI_TRUE);
}


void 
SENSOR_RADARPluginSupport_destroy_data_w_params(
    SENSOR_RADAR *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::VRFORCE_ENTITY::SENSOR_RADAR_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
SENSOR_RADARPluginSupport_destroy_data_ex(
    SENSOR_RADAR *sample,RTIBool deallocate_pointers) {

    ::LHZS::VRFORCE_ENTITY::SENSOR_RADAR_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
SENSOR_RADARPluginSupport_destroy_data(
    SENSOR_RADAR *sample) {

    ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
SENSOR_RADARPluginSupport_copy_data(
    SENSOR_RADAR *dst,
    const SENSOR_RADAR *src)
{
    return ::LHZS::VRFORCE_ENTITY::SENSOR_RADAR_copy(dst,src);
}


void 
SENSOR_RADARPluginSupport_print_data(
    const SENSOR_RADAR *sample,
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


    RTICdrType_printUnsignedShort(
        &sample->sensorid, "sensorid", indent_level + 1);
            

    LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPluginSupport_print_data(
        &sample->radar_parameters, "radar_parameters", indent_level + 1);
            


}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
SENSOR_RADARPlugin_on_participant_attached(
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
SENSOR_RADARPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
SENSOR_RADARPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

   if (top_level_registration) {} /* To avoid warnings */
   if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPluginSupport_destroy_data,
            NULL, NULL);

    if (epd == NULL) {
        return NULL;
    }

    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
SENSOR_RADARPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
SENSOR_RADARPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_RADAR *sample,
    void *handle)
{
    
    SENSOR_RADAR_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
SENSOR_RADARPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_RADAR *dst,
    const SENSOR_RADAR *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
SENSOR_RADARPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
SENSOR_RADARPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_RADAR *sample, 
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
    
    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->sensorid)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_serialize(
            endpoint_data,
            &sample->radar_parameters, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
SENSOR_RADARPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_RADAR *sample,
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
        ::LHZS::VRFORCE_ENTITY::SENSOR_RADAR_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->sensorid)) {
        goto fin;
    }

    if (!LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_deserialize_sample(
            endpoint_data,
            &sample->radar_parameters,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
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
SENSOR_RADARPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_RADAR **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_deserialize_sample( 
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




RTIBool SENSOR_RADARPlugin_skip(
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

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
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
SENSOR_RADARPlugin_get_serialized_sample_max_size(
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


    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
SENSOR_RADARPlugin_get_serialized_sample_min_size(
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


    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

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
SENSOR_RADARPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SENSOR_RADAR * sample) 
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


    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->radar_parameters);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
SENSOR_RADARPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
SENSOR_RADARPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_RADAR *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_serialize(
                endpoint_data,
                sample,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool SENSOR_RADARPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_RADAR *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_deserialize_sample(
                endpoint_data, sample, stream,
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool SENSOR_RADARPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_RADAR **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_deserialize_key_sample(
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
SENSOR_RADARPlugin_get_serialized_key_max_size(
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
        

    current_alignment += ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE, encapsulation_id, current_alignment);
    
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
SENSOR_RADARPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_RADAR *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

        if (!::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
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




/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *SENSOR_RADARPlugin_new(void) 
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
        ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        SENSOR_RADARPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        SENSOR_RADARPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        SENSOR_RADARPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        SENSOR_RADARPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_get_key_kind;

 
    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::VRFORCE_ENTITY::SENSOR_RADAR_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        SENSOR_RADARPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        SENSOR_RADARPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = SENSOR_RADARTYPENAME;

    return plugin;
}

void
SENSOR_RADARPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type SENSOR_COMM
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

SENSOR_COMM*
SENSOR_COMMPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    SENSOR_COMM *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, SENSOR_COMM);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::SENSOR_COMM_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


SENSOR_COMM *
SENSOR_COMMPluginSupport_create_data_ex(RTIBool allocate_pointers){
    SENSOR_COMM *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, SENSOR_COMM);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::SENSOR_COMM_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


SENSOR_COMM *
SENSOR_COMMPluginSupport_create_data(void)
{
    return ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPluginSupport_create_data_ex(RTI_TRUE);
}


void 
SENSOR_COMMPluginSupport_destroy_data_w_params(
    SENSOR_COMM *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::VRFORCE_ENTITY::SENSOR_COMM_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
SENSOR_COMMPluginSupport_destroy_data_ex(
    SENSOR_COMM *sample,RTIBool deallocate_pointers) {

    ::LHZS::VRFORCE_ENTITY::SENSOR_COMM_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
SENSOR_COMMPluginSupport_destroy_data(
    SENSOR_COMM *sample) {

    ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
SENSOR_COMMPluginSupport_copy_data(
    SENSOR_COMM *dst,
    const SENSOR_COMM *src)
{
    return ::LHZS::VRFORCE_ENTITY::SENSOR_COMM_copy(dst,src);
}


void 
SENSOR_COMMPluginSupport_print_data(
    const SENSOR_COMM *sample,
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


    RTICdrType_printUnsignedShort(
        &sample->sensorid, "sensorid", indent_level + 1);
            

    LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPluginSupport_print_data(
        &sample->comm_parameters, "comm_parameters", indent_level + 1);
            

    LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPluginSupport_print_data(
        &sample->comm_parameters_rw, "comm_parameters_rw", indent_level + 1);
            


}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
SENSOR_COMMPlugin_on_participant_attached(
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
SENSOR_COMMPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
SENSOR_COMMPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

   if (top_level_registration) {} /* To avoid warnings */
   if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPluginSupport_destroy_data,
            NULL, NULL);

    if (epd == NULL) {
        return NULL;
    }

    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
SENSOR_COMMPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
SENSOR_COMMPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_COMM *sample,
    void *handle)
{
    
    SENSOR_COMM_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
SENSOR_COMMPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_COMM *dst,
    const SENSOR_COMM *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
SENSOR_COMMPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
SENSOR_COMMPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_COMM *sample, 
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
    
    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->sensorid)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_serialize(
            endpoint_data,
            &sample->comm_parameters, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_serialize(
            endpoint_data,
            &sample->comm_parameters_rw, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
SENSOR_COMMPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_COMM *sample,
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
        ::LHZS::VRFORCE_ENTITY::SENSOR_COMM_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->sensorid)) {
        goto fin;
    }

    if (!LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_deserialize_sample(
            endpoint_data,
            &sample->comm_parameters,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_deserialize_sample(
            endpoint_data,
            &sample->comm_parameters_rw,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
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
SENSOR_COMMPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_COMM **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_deserialize_sample( 
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




RTIBool SENSOR_COMMPlugin_skip(
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

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
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
SENSOR_COMMPlugin_get_serialized_sample_max_size(
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


    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
SENSOR_COMMPlugin_get_serialized_sample_min_size(
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


    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

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
SENSOR_COMMPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SENSOR_COMM * sample) 
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


    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->comm_parameters);
            

    current_alignment += LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->comm_parameters_rw);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
SENSOR_COMMPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
SENSOR_COMMPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_COMM *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_serialize(
                endpoint_data,
                sample,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool SENSOR_COMMPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_COMM *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_deserialize_sample(
                endpoint_data, sample, stream,
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool SENSOR_COMMPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_COMM **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_deserialize_key_sample(
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
SENSOR_COMMPlugin_get_serialized_key_max_size(
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
        

    current_alignment += ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE, encapsulation_id, current_alignment);
    
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
SENSOR_COMMPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_COMM *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

        if (!::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
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




/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *SENSOR_COMMPlugin_new(void) 
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
        ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        SENSOR_COMMPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        SENSOR_COMMPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        SENSOR_COMMPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        SENSOR_COMMPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_get_key_kind;

 
    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::VRFORCE_ENTITY::SENSOR_COMM_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        SENSOR_COMMPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        SENSOR_COMMPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = SENSOR_COMMTYPENAME;

    return plugin;
}

void
SENSOR_COMMPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type SENSOR_JAM
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

SENSOR_JAM*
SENSOR_JAMPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    SENSOR_JAM *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, SENSOR_JAM);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::SENSOR_JAM_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


SENSOR_JAM *
SENSOR_JAMPluginSupport_create_data_ex(RTIBool allocate_pointers){
    SENSOR_JAM *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, SENSOR_JAM);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::SENSOR_JAM_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


SENSOR_JAM *
SENSOR_JAMPluginSupport_create_data(void)
{
    return ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPluginSupport_create_data_ex(RTI_TRUE);
}


void 
SENSOR_JAMPluginSupport_destroy_data_w_params(
    SENSOR_JAM *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::VRFORCE_ENTITY::SENSOR_JAM_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
SENSOR_JAMPluginSupport_destroy_data_ex(
    SENSOR_JAM *sample,RTIBool deallocate_pointers) {

    ::LHZS::VRFORCE_ENTITY::SENSOR_JAM_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
SENSOR_JAMPluginSupport_destroy_data(
    SENSOR_JAM *sample) {

    ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
SENSOR_JAMPluginSupport_copy_data(
    SENSOR_JAM *dst,
    const SENSOR_JAM *src)
{
    return ::LHZS::VRFORCE_ENTITY::SENSOR_JAM_copy(dst,src);
}


void 
SENSOR_JAMPluginSupport_print_data(
    const SENSOR_JAM *sample,
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


    RTICdrType_printUnsignedShort(
        &sample->sensorid, "sensorid", indent_level + 1);
            

    LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPluginSupport_print_data(
        &sample->jam_parameters, "jam_parameters", indent_level + 1);
            


}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
SENSOR_JAMPlugin_on_participant_attached(
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
SENSOR_JAMPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
SENSOR_JAMPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

   if (top_level_registration) {} /* To avoid warnings */
   if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPluginSupport_destroy_data,
            NULL, NULL);

    if (epd == NULL) {
        return NULL;
    }

    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
SENSOR_JAMPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
SENSOR_JAMPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_JAM *sample,
    void *handle)
{
    
    SENSOR_JAM_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
SENSOR_JAMPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_JAM *dst,
    const SENSOR_JAM *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
SENSOR_JAMPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
SENSOR_JAMPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_JAM *sample, 
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
    
    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->sensorid)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_serialize(
            endpoint_data,
            &sample->jam_parameters, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
SENSOR_JAMPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_JAM *sample,
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
        ::LHZS::VRFORCE_ENTITY::SENSOR_JAM_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->sensorid)) {
        goto fin;
    }

    if (!LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_deserialize_sample(
            endpoint_data,
            &sample->jam_parameters,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
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
SENSOR_JAMPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_JAM **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_deserialize_sample( 
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




RTIBool SENSOR_JAMPlugin_skip(
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

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
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
SENSOR_JAMPlugin_get_serialized_sample_max_size(
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


    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
SENSOR_JAMPlugin_get_serialized_sample_min_size(
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


    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

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
SENSOR_JAMPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SENSOR_JAM * sample) 
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


    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->jam_parameters);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
SENSOR_JAMPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
SENSOR_JAMPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_JAM *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_serialize(
                endpoint_data,
                sample,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool SENSOR_JAMPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_JAM *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_deserialize_sample(
                endpoint_data, sample, stream,
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool SENSOR_JAMPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_JAM **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_deserialize_key_sample(
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
SENSOR_JAMPlugin_get_serialized_key_max_size(
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
        

    current_alignment += ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE, encapsulation_id, current_alignment);
    
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
SENSOR_JAMPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_JAM *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

        if (!::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
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




/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *SENSOR_JAMPlugin_new(void) 
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
        ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        SENSOR_JAMPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        SENSOR_JAMPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        SENSOR_JAMPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        SENSOR_JAMPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_get_key_kind;

 
    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::VRFORCE_ENTITY::SENSOR_JAM_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        SENSOR_JAMPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        SENSOR_JAMPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = SENSOR_JAMTYPENAME;

    return plugin;
}

void
SENSOR_JAMPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type SENSOR_INFRARED
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

SENSOR_INFRARED*
SENSOR_INFRAREDPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    SENSOR_INFRARED *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, SENSOR_INFRARED);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::SENSOR_INFRARED_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


SENSOR_INFRARED *
SENSOR_INFRAREDPluginSupport_create_data_ex(RTIBool allocate_pointers){
    SENSOR_INFRARED *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, SENSOR_INFRARED);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::SENSOR_INFRARED_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


SENSOR_INFRARED *
SENSOR_INFRAREDPluginSupport_create_data(void)
{
    return ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPluginSupport_create_data_ex(RTI_TRUE);
}


void 
SENSOR_INFRAREDPluginSupport_destroy_data_w_params(
    SENSOR_INFRARED *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::VRFORCE_ENTITY::SENSOR_INFRARED_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
SENSOR_INFRAREDPluginSupport_destroy_data_ex(
    SENSOR_INFRARED *sample,RTIBool deallocate_pointers) {

    ::LHZS::VRFORCE_ENTITY::SENSOR_INFRARED_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
SENSOR_INFRAREDPluginSupport_destroy_data(
    SENSOR_INFRARED *sample) {

    ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
SENSOR_INFRAREDPluginSupport_copy_data(
    SENSOR_INFRARED *dst,
    const SENSOR_INFRARED *src)
{
    return ::LHZS::VRFORCE_ENTITY::SENSOR_INFRARED_copy(dst,src);
}


void 
SENSOR_INFRAREDPluginSupport_print_data(
    const SENSOR_INFRARED *sample,
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


    RTICdrType_printUnsignedShort(
        &sample->sensorid, "sensorid", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->distance, "distance", indent_level + 1);
            


}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
SENSOR_INFRAREDPlugin_on_participant_attached(
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
SENSOR_INFRAREDPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
SENSOR_INFRAREDPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

   if (top_level_registration) {} /* To avoid warnings */
   if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPluginSupport_destroy_data,
            NULL, NULL);

    if (epd == NULL) {
        return NULL;
    }

    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
SENSOR_INFRAREDPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
SENSOR_INFRAREDPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_INFRARED *sample,
    void *handle)
{
    
    SENSOR_INFRARED_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
SENSOR_INFRAREDPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_INFRARED *dst,
    const SENSOR_INFRARED *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
SENSOR_INFRAREDPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
SENSOR_INFRAREDPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_INFRARED *sample, 
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
    
    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->sensorid)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->distance)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
SENSOR_INFRAREDPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_INFRARED *sample,
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
        ::LHZS::VRFORCE_ENTITY::SENSOR_INFRARED_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->sensorid)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->distance)) {
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
SENSOR_INFRAREDPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_INFRARED **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_deserialize_sample( 
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




RTIBool SENSOR_INFRAREDPlugin_skip(
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
SENSOR_INFRAREDPlugin_get_serialized_sample_max_size(
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
SENSOR_INFRAREDPlugin_get_serialized_sample_min_size(
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
SENSOR_INFRAREDPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SENSOR_INFRARED * sample) 
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
SENSOR_INFRAREDPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
SENSOR_INFRAREDPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_INFRARED *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_serialize(
                endpoint_data,
                sample,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool SENSOR_INFRAREDPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_INFRARED *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_deserialize_sample(
                endpoint_data, sample, stream,
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool SENSOR_INFRAREDPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_INFRARED **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_deserialize_key_sample(
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
SENSOR_INFRAREDPlugin_get_serialized_key_max_size(
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
        

    current_alignment += ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE, encapsulation_id, current_alignment);
    
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
SENSOR_INFRAREDPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_INFRARED *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

        if (!::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
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




/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *SENSOR_INFRAREDPlugin_new(void) 
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
        ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        SENSOR_INFRAREDPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        SENSOR_INFRAREDPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        SENSOR_INFRAREDPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        SENSOR_INFRAREDPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_get_key_kind;

 
    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::VRFORCE_ENTITY::SENSOR_INFRARED_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        SENSOR_INFRAREDPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        SENSOR_INFRAREDPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = SENSOR_INFRAREDTYPENAME;

    return plugin;
}

void
SENSOR_INFRAREDPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type SENSOR_ESM
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

SENSOR_ESM*
SENSOR_ESMPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    SENSOR_ESM *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, SENSOR_ESM);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::SENSOR_ESM_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


SENSOR_ESM *
SENSOR_ESMPluginSupport_create_data_ex(RTIBool allocate_pointers){
    SENSOR_ESM *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, SENSOR_ESM);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::SENSOR_ESM_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


SENSOR_ESM *
SENSOR_ESMPluginSupport_create_data(void)
{
    return ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPluginSupport_create_data_ex(RTI_TRUE);
}


void 
SENSOR_ESMPluginSupport_destroy_data_w_params(
    SENSOR_ESM *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::VRFORCE_ENTITY::SENSOR_ESM_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
SENSOR_ESMPluginSupport_destroy_data_ex(
    SENSOR_ESM *sample,RTIBool deallocate_pointers) {

    ::LHZS::VRFORCE_ENTITY::SENSOR_ESM_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
SENSOR_ESMPluginSupport_destroy_data(
    SENSOR_ESM *sample) {

    ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
SENSOR_ESMPluginSupport_copy_data(
    SENSOR_ESM *dst,
    const SENSOR_ESM *src)
{
    return ::LHZS::VRFORCE_ENTITY::SENSOR_ESM_copy(dst,src);
}


void 
SENSOR_ESMPluginSupport_print_data(
    const SENSOR_ESM *sample,
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


    RTICdrType_printUnsignedShort(
        &sample->sensorid, "sensorid", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->distance, "distance", indent_level + 1);
            


}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
SENSOR_ESMPlugin_on_participant_attached(
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
SENSOR_ESMPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
SENSOR_ESMPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

   if (top_level_registration) {} /* To avoid warnings */
   if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPluginSupport_destroy_data,
            NULL, NULL);

    if (epd == NULL) {
        return NULL;
    }

    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
SENSOR_ESMPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
SENSOR_ESMPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_ESM *sample,
    void *handle)
{
    
    SENSOR_ESM_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
SENSOR_ESMPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_ESM *dst,
    const SENSOR_ESM *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
SENSOR_ESMPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
SENSOR_ESMPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_ESM *sample, 
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
    
    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->sensorid)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->distance)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
SENSOR_ESMPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_ESM *sample,
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
        ::LHZS::VRFORCE_ENTITY::SENSOR_ESM_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->sensorid)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->distance)) {
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
SENSOR_ESMPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_ESM **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_deserialize_sample( 
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




RTIBool SENSOR_ESMPlugin_skip(
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
SENSOR_ESMPlugin_get_serialized_sample_max_size(
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
SENSOR_ESMPlugin_get_serialized_sample_min_size(
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
SENSOR_ESMPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SENSOR_ESM * sample) 
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
SENSOR_ESMPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
SENSOR_ESMPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SENSOR_ESM *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_serialize(
                endpoint_data,
                sample,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool SENSOR_ESMPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_ESM *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_deserialize_sample(
                endpoint_data, sample, stream,
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool SENSOR_ESMPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_ESM **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_deserialize_key_sample(
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
SENSOR_ESMPlugin_get_serialized_key_max_size(
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
        

    current_alignment += ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE, encapsulation_id, current_alignment);
    
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
SENSOR_ESMPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SENSOR_ESM *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

        if (!::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
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




/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *SENSOR_ESMPlugin_new(void) 
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
        ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        SENSOR_ESMPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        SENSOR_ESMPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        SENSOR_ESMPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        SENSOR_ESMPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_get_key_kind;

 
    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::VRFORCE_ENTITY::SENSOR_ESM_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        SENSOR_ESMPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        SENSOR_ESMPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = SENSOR_ESMTYPENAME;

    return plugin;
}

void
SENSOR_ESMPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type ENTITYSTATE_REPORT
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

ENTITYSTATE_REPORT*
ENTITYSTATE_REPORTPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    ENTITYSTATE_REPORT *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, ENTITYSTATE_REPORT);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


ENTITYSTATE_REPORT *
ENTITYSTATE_REPORTPluginSupport_create_data_ex(RTIBool allocate_pointers){
    ENTITYSTATE_REPORT *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, ENTITYSTATE_REPORT);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


ENTITYSTATE_REPORT *
ENTITYSTATE_REPORTPluginSupport_create_data(void)
{
    return ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPluginSupport_create_data_ex(RTI_TRUE);
}


void 
ENTITYSTATE_REPORTPluginSupport_destroy_data_w_params(
    ENTITYSTATE_REPORT *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
ENTITYSTATE_REPORTPluginSupport_destroy_data_ex(
    ENTITYSTATE_REPORT *sample,RTIBool deallocate_pointers) {

    ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
ENTITYSTATE_REPORTPluginSupport_destroy_data(
    ENTITYSTATE_REPORT *sample) {

    ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
ENTITYSTATE_REPORTPluginSupport_copy_data(
    ENTITYSTATE_REPORT *dst,
    const ENTITYSTATE_REPORT *src)
{
    return ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_copy(dst,src);
}


void 
ENTITYSTATE_REPORTPluginSupport_print_data(
    const ENTITYSTATE_REPORT *sample,
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


    RTICdrType_printUnsignedShort(
        &sample->entityID, "entityID", indent_level + 1);
            

    RTICdrType_printArray(
        sample->entityName, (32), RTI_CDR_CHAR_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printChar,
        "entityName", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->entityIFFCode, "entityIFFCode", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->entityClass, "entityClass", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->entityModel, "entityModel", indent_level + 1);
            

    RTICdrType_printArray(
        sample->entityType, (32), RTI_CDR_CHAR_SIZE,
        (RTICdrTypePrintFunction)RTICdrType_printChar,
        "entityType", indent_level + 1);
            

    LHZS::VRFORCE_ENTITY::DATE_OF_DATAPluginSupport_print_data(
        &sample->dateOfUpdate, "dateOfUpdate", indent_level + 1);
            

    RTICdrType_printLong(
        &sample->timeOfUpdate, "timeOfUpdate", indent_level + 1);
            

    RTICdrType_printLong(
        &sample->damageState, "damageState", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->oil, "oil", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->geodeticLocationLon, "geodeticLocationLon", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->geodeticLocationLat, "geodeticLocationLat", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->geodeticLocationAlt, "geodeticLocationAlt", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->topographicVelocityX, "topographicVelocityX", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->topographicVelocityY, "topographicVelocityY", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->topographicVelocityZ, "topographicVelocityZ", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->topographicAccelerationX, "topographicAccelerationX", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->topographicAccelerationY, "topographicAccelerationY", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->topographicAccelerationZ, "topographicAccelerationZ", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->topographicPsi, "topographicPsi", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->topographicTheta, "topographicTheta", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->topographicPhi, "topographicPhi", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->rotationalVelocityX, "rotationalVelocityX", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->rotationalVelocityY, "rotationalVelocityY", indent_level + 1);
            

    RTICdrType_printDouble(
        &sample->rotationalVelocityZ, "rotationalVelocityZ", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->sizeOfGroup, "sizeOfGroup", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->platId, "platId", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->leaderId, "leaderId", indent_level + 1);
            

    RTICdrType_printUnsignedShort(
        &sample->C2Id, "C2Id", indent_level + 1);
            

    LHZS::VRFORCE_ENTITY::SENSOR_RADARPluginSupport_print_data(
        &sample->sensor_radar, "sensor_radar", indent_level + 1);
            

    LHZS::VRFORCE_ENTITY::SENSOR_COMMPluginSupport_print_data(
        &sample->sensor_comm, "sensor_comm", indent_level + 1);
            

    LHZS::VRFORCE_ENTITY::SENSOR_JAMPluginSupport_print_data(
        &sample->sensor_jam, "sensor_jam", indent_level + 1);
            

    LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPluginSupport_print_data(
        &sample->sensor_infrared, "sensor_infrared", indent_level + 1);
            

    LHZS::VRFORCE_ENTITY::SENSOR_ESMPluginSupport_print_data(
        &sample->sensor_esm, "sensor_esm", indent_level + 1);
            


}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
ENTITYSTATE_REPORTPlugin_on_participant_attached(
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
ENTITYSTATE_REPORTPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
ENTITYSTATE_REPORTPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

   if (top_level_registration) {} /* To avoid warnings */
   if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPluginSupport_destroy_data,
            NULL, NULL);

    if (epd == NULL) {
        return NULL;
    }

    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
ENTITYSTATE_REPORTPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
ENTITYSTATE_REPORTPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT *sample,
    void *handle)
{
    
    ENTITYSTATE_REPORT_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
ENTITYSTATE_REPORTPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT *dst,
    const ENTITYSTATE_REPORT *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
ENTITYSTATE_REPORTPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
ENTITYSTATE_REPORTPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ENTITYSTATE_REPORT *sample, 
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
    
    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->entityID)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->entityName, (32), RTI_CDR_CHAR_TYPE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->entityIFFCode)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->entityClass)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->entityModel)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializePrimitiveArray(
        stream, (void*)sample->entityType, (32), RTI_CDR_CHAR_TYPE)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_serialize(
            endpoint_data,
            &sample->dateOfUpdate, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeLong(
        stream, &sample->timeOfUpdate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeLong(
        stream, &sample->damageState)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->oil)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->geodeticLocationLon)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->geodeticLocationLat)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->geodeticLocationAlt)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->topographicVelocityX)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->topographicVelocityY)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->topographicVelocityZ)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->topographicAccelerationX)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->topographicAccelerationY)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->topographicAccelerationZ)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->topographicPsi)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->topographicTheta)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->topographicPhi)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->rotationalVelocityX)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->rotationalVelocityY)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeDouble(
        stream, &sample->rotationalVelocityZ)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->sizeOfGroup)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->platId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->leaderId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->C2Id)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_serialize(
            endpoint_data,
            &sample->sensor_radar, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_serialize(
            endpoint_data,
            &sample->sensor_comm, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_serialize(
            endpoint_data,
            &sample->sensor_jam, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_serialize(
            endpoint_data,
            &sample->sensor_infrared, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_serialize(
            endpoint_data,
            &sample->sensor_esm, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
ENTITYSTATE_REPORTPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT *sample,
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
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->entityID)) {
        goto fin;
    }

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->entityName, (32), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->entityIFFCode)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->entityClass)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->entityModel)) {
        goto fin;
    }

    if (!RTICdrStream_deserializePrimitiveArray(
        stream, (void*)sample->entityType, (32), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_deserialize_sample(
            endpoint_data,
            &sample->dateOfUpdate,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeLong(
        stream, &sample->timeOfUpdate)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeLong(
        stream, &sample->damageState)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->oil)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->geodeticLocationLon)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->geodeticLocationLat)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->geodeticLocationAlt)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->topographicVelocityX)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->topographicVelocityY)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->topographicVelocityZ)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->topographicAccelerationX)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->topographicAccelerationY)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->topographicAccelerationZ)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->topographicPsi)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->topographicTheta)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->topographicPhi)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->rotationalVelocityX)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->rotationalVelocityY)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeDouble(
        stream, &sample->rotationalVelocityZ)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->sizeOfGroup)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->platId)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->leaderId)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->C2Id)) {
        goto fin;
    }

    if (!LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_deserialize_sample(
            endpoint_data,
            &sample->sensor_radar,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_deserialize_sample(
            endpoint_data,
            &sample->sensor_comm,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_deserialize_sample(
            endpoint_data,
            &sample->sensor_jam,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_deserialize_sample(
            endpoint_data,
            &sample->sensor_infrared,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_deserialize_sample(
            endpoint_data,
            &sample->sensor_esm,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
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
ENTITYSTATE_REPORTPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_deserialize_sample( 
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




RTIBool ENTITYSTATE_REPORTPlugin_skip(
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

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipPrimitiveArray(
        stream, (32), RTI_CDR_CHAR_TYPE)) {
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
            

    if (!RTICdrStream_skipPrimitiveArray(
        stream, (32), RTI_CDR_CHAR_TYPE)) {
        goto fin;
    }
            

    if (!LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipLong(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipLong(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipDouble(stream)) {
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
            

    if (!LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
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
ENTITYSTATE_REPORTPlugin_get_serialized_sample_max_size(
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


    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

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
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
ENTITYSTATE_REPORTPlugin_get_serialized_sample_min_size(
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


    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

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
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

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
ENTITYSTATE_REPORTPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ENTITYSTATE_REPORT * sample) 
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


    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
        current_alignment, (32), RTI_CDR_CHAR_TYPE);
            

    current_alignment += LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->dateOfUpdate);
            

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
        current_alignment);
            

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
            

    current_alignment += LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->sensor_radar);
            

    current_alignment += LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->sensor_comm);
            

    current_alignment += LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->sensor_jam);
            

    current_alignment += LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->sensor_infrared);
            

    current_alignment += LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->sensor_esm);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
ENTITYSTATE_REPORTPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_NO_KEY;
     
}


RTIBool 
ENTITYSTATE_REPORTPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ENTITYSTATE_REPORT *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_serialize(
                endpoint_data,
                sample,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool ENTITYSTATE_REPORTPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT *sample, 
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

        if (!::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_deserialize_sample(
                endpoint_data, sample, stream,
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool ENTITYSTATE_REPORTPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_deserialize_key_sample(
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
ENTITYSTATE_REPORTPlugin_get_serialized_key_max_size(
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
        

    current_alignment += ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE, encapsulation_id, current_alignment);
    
    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
ENTITYSTATE_REPORTPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {

        if (!::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
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




/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *ENTITYSTATE_REPORTPlugin_new(void) 
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
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        ENTITYSTATE_REPORTPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        ENTITYSTATE_REPORTPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        ENTITYSTATE_REPORTPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        ENTITYSTATE_REPORTPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_get_key_kind;

 
    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL;
    plugin->deserializeKeyFnc = NULL;
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        ENTITYSTATE_REPORTPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        ENTITYSTATE_REPORTPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = ENTITYSTATE_REPORTTYPENAME;

    return plugin;
}

void
ENTITYSTATE_REPORTPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type ENTITYSTATE_REPORT_LIST
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

ENTITYSTATE_REPORT_LIST*
ENTITYSTATE_REPORT_LISTPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    ENTITYSTATE_REPORT_LIST *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, ENTITYSTATE_REPORT_LIST);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


ENTITYSTATE_REPORT_LIST *
ENTITYSTATE_REPORT_LISTPluginSupport_create_data_ex(RTIBool allocate_pointers){
    ENTITYSTATE_REPORT_LIST *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, ENTITYSTATE_REPORT_LIST);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


ENTITYSTATE_REPORT_LIST *
ENTITYSTATE_REPORT_LISTPluginSupport_create_data(void)
{
    return ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPluginSupport_create_data_ex(RTI_TRUE);
}


void 
ENTITYSTATE_REPORT_LISTPluginSupport_destroy_data_w_params(
    ENTITYSTATE_REPORT_LIST *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
ENTITYSTATE_REPORT_LISTPluginSupport_destroy_data_ex(
    ENTITYSTATE_REPORT_LIST *sample,RTIBool deallocate_pointers) {

    ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
ENTITYSTATE_REPORT_LISTPluginSupport_destroy_data(
    ENTITYSTATE_REPORT_LIST *sample) {

    ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
ENTITYSTATE_REPORT_LISTPluginSupport_copy_data(
    ENTITYSTATE_REPORT_LIST *dst,
    const ENTITYSTATE_REPORT_LIST *src)
{
    return ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST_copy(dst,src);
}


void 
ENTITYSTATE_REPORT_LISTPluginSupport_print_data(
    const ENTITYSTATE_REPORT_LIST *sample,
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


    RTICdrType_printUnsignedShort(
        &sample->entityNumber, "entityNumber", indent_level + 1);
            

    if (&sample->entityList == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILog_debug("entityList: NULL\n");    
    } else {
                
        if (LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_contiguous_bufferI(&sample->entityList) != NULL) {
            RTICdrType_printArray(
                LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_contiguous_bufferI(&sample->entityList), 
                LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_length(&sample->entityList),
                sizeof(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT),
                (RTICdrTypePrintFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPluginSupport_print_data,
                "entityList", indent_level + 1);
        } else {
            RTICdrType_printPointerArray(
                LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_discontiguous_bufferI(&sample->entityList), 
                LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_length(&sample->entityList),
                (RTICdrTypePrintFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPluginSupport_print_data,
                "entityList", indent_level + 1);
        }
    
    }
            


}

ENTITYSTATE_REPORT_LIST *
ENTITYSTATE_REPORT_LISTPluginSupport_create_key_ex(RTIBool allocate_pointers){
    ENTITYSTATE_REPORT_LIST *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, ENTITYSTATE_REPORT_LISTKeyHolder);

    ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST_initialize_ex(key,allocate_pointers,RTI_TRUE);
    return key;
}


ENTITYSTATE_REPORT_LIST *
ENTITYSTATE_REPORT_LISTPluginSupport_create_key(void)
{
    return  ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPluginSupport_create_key_ex(RTI_TRUE);
}


void 
ENTITYSTATE_REPORT_LISTPluginSupport_destroy_key_ex(
    ENTITYSTATE_REPORT_LISTKeyHolder *key,RTIBool deallocate_pointers)
{
    ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
ENTITYSTATE_REPORT_LISTPluginSupport_destroy_key(
    ENTITYSTATE_REPORT_LISTKeyHolder *key) {

  ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPluginSupport_destroy_key_ex(key,RTI_TRUE);

}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
ENTITYSTATE_REPORT_LISTPlugin_on_participant_attached(
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
ENTITYSTATE_REPORT_LISTPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
ENTITYSTATE_REPORT_LISTPlugin_on_endpoint_attached(
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
            ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }
    
    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
ENTITYSTATE_REPORT_LISTPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
ENTITYSTATE_REPORT_LISTPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LIST *sample,
    void *handle)
{
    
    ENTITYSTATE_REPORT_LIST_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LIST *dst,
    const ENTITYSTATE_REPORT_LIST *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ENTITYSTATE_REPORT_LIST *sample, 
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
    
    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->entityNumber)) {
        return RTI_FALSE;
    }
            

    if (LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_contiguous_bufferI(&sample->entityList) != NULL) {
        if (!RTICdrStream_serializeNonPrimitiveSequence(
            stream,
            LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_contiguous_bufferI(&sample->entityList),
            LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_length(&sample->entityList),
            (1000),
            sizeof(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT),
            (RTICdrStreamSerializeFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_serialize,
            RTI_FALSE, encapsulation_id,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializeNonPrimitivePointerSequence(
            stream,
            (const void **)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_discontiguous_bufferI(&sample->entityList),
            LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_length(&sample->entityList),
            (1000),
            (RTICdrStreamSerializeFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_serialize,
            RTI_FALSE, encapsulation_id,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LIST *sample,
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
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->entityNumber)) {
        goto fin;
    }

    {
        RTICdrUnsignedLong sequence_length;

        if (LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_contiguous_bufferI(&sample->entityList) != NULL) {
            if (!RTICdrStream_deserializeNonPrimitiveSequence(
                stream,
                LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_contiguous_bufferI(&sample->entityList),
                &sequence_length,
                LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_maximum(&sample->entityList),
                sizeof(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT),
                (RTICdrStreamDeserializeFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_deserialize_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin;
            }
        } else {
            if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                stream,
                (void **)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_discontiguous_bufferI(&sample->entityList),
                &sequence_length,
                LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_maximum(&sample->entityList),
                (RTICdrStreamDeserializeFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_deserialize_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin;
            }
        }
        if (!LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_set_length(
            &sample->entityList, sequence_length)) {
            return RTI_FALSE;
        }
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
ENTITYSTATE_REPORT_LISTPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LIST **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_deserialize_sample( 
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




RTIBool ENTITYSTATE_REPORT_LISTPlugin_skip(
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

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    {
        RTICdrUnsignedLong sequence_length;

        if (!RTICdrStream_skipNonPrimitiveSequence(
            stream,
            &sequence_length,
            sizeof(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT),
            (RTICdrStreamSkipFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_skip,
            RTI_FALSE,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            goto fin;
        }
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
ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_max_size(
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


    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, (1000),
        LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_get_serialized_sample_max_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_min_size(
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


    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0,
        LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_get_serialized_sample_min_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

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
ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ENTITYSTATE_REPORT_LIST * sample) 
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


    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    if (LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_contiguous_bufferI(&sample->entityList) != NULL) {
        current_alignment += RTICdrStream_getNonPrimitiveSequenceSerializedSize(
            current_alignment, LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_length(&sample->entityList),
            sizeof(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT),
            (RTICdrTypeGetSerializedSampleSizeFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_contiguous_bufferI(&sample->entityList),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerSequenceSerializedSize(
            current_alignment, LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_length(&sample->entityList),
            sizeof(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT),
            (RTICdrTypeGetSerializedSampleSizeFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_discontiguous_bufferI(&sample->entityList),
            endpoint_data);
    }
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
ENTITYSTATE_REPORT_LISTPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ENTITYSTATE_REPORT_LIST *sample, 
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

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->entityNumber)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool ENTITYSTATE_REPORT_LISTPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LIST *sample, 
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

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->entityNumber)) {
        return RTI_FALSE;
    }

    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool ENTITYSTATE_REPORT_LISTPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LIST **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_deserialize_key_sample(
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
ENTITYSTATE_REPORT_LISTPlugin_get_serialized_key_max_size(
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
        

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LIST *sample,
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

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->entityNumber)) {
        return RTI_FALSE;
    }

    {
        RTICdrUnsignedLong sequence_length;

        if (!RTICdrStream_skipNonPrimitiveSequence(
            stream,
            &sequence_length,
            sizeof(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT),
            (RTICdrStreamSkipFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_skip,
            RTI_FALSE,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            goto fin;
        }
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
ENTITYSTATE_REPORT_LISTPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LISTKeyHolder *dst, 
    const ENTITYSTATE_REPORT_LIST *src)
{  

    if (endpoint_data) {} /* To avoid warnings */

    if (!RTICdrType_copyUnsignedShort(
        &dst->entityNumber, &src->entityNumber)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    ENTITYSTATE_REPORT_LIST *dst, const
    ENTITYSTATE_REPORT_LISTKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */

    if (!RTICdrType_copyUnsignedShort(
        &dst->entityNumber, &src->entityNumber)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
ENTITYSTATE_REPORT_LISTPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const ENTITYSTATE_REPORT_LIST *instance)
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

    if (!::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_serialize_key(
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
ENTITYSTATE_REPORT_LISTPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    ENTITYSTATE_REPORT_LIST * sample = NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (ENTITYSTATE_REPORT_LIST *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }


    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->entityNumber)) {
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


    if (!::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}


/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *ENTITYSTATE_REPORT_LISTPlugin_new(void) 
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
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        ENTITYSTATE_REPORT_LISTPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        ENTITYSTATE_REPORT_LISTPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        ENTITYSTATE_REPORT_LISTPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        ENTITYSTATE_REPORT_LISTPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_deserialize_key_sample;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        ENTITYSTATE_REPORT_LISTPlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        ENTITYSTATE_REPORT_LISTPlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        ENTITYSTATE_REPORT_LISTPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        ENTITYSTATE_REPORT_LISTPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = ENTITYSTATE_REPORT_LISTTYPENAME;

    return plugin;
}

void
ENTITYSTATE_REPORT_LISTPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* --------------------------------------------------------------------------------------
 *  Type UAV_ENTITYSTATE_REPORT_LIST
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

UAV_ENTITYSTATE_REPORT_LIST*
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    UAV_ENTITYSTATE_REPORT_LIST *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, UAV_ENTITYSTATE_REPORT_LIST);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


UAV_ENTITYSTATE_REPORT_LIST *
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_create_data_ex(RTIBool allocate_pointers){
    UAV_ENTITYSTATE_REPORT_LIST *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, UAV_ENTITYSTATE_REPORT_LIST);

    if(sample != NULL) {
        if (!::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


UAV_ENTITYSTATE_REPORT_LIST *
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_create_data(void)
{
    return ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPluginSupport_create_data_ex(RTI_TRUE);
}


void 
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_destroy_data_w_params(
    UAV_ENTITYSTATE_REPORT_LIST *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_destroy_data_ex(
    UAV_ENTITYSTATE_REPORT_LIST *sample,RTIBool deallocate_pointers) {

    ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_destroy_data(
    UAV_ENTITYSTATE_REPORT_LIST *sample) {

    ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_copy_data(
    UAV_ENTITYSTATE_REPORT_LIST *dst,
    const UAV_ENTITYSTATE_REPORT_LIST *src)
{
    return ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST_copy(dst,src);
}


void 
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_print_data(
    const UAV_ENTITYSTATE_REPORT_LIST *sample,
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


    RTICdrType_printUnsignedShort(
        &sample->entityNumber, "entityNumber", indent_level + 1);
            

    if (&sample->entityList == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILog_debug("entityList: NULL\n");    
    } else {
                
        if (LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_contiguous_bufferI(&sample->entityList) != NULL) {
            RTICdrType_printArray(
                LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_contiguous_bufferI(&sample->entityList), 
                LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_length(&sample->entityList),
                sizeof(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT),
                (RTICdrTypePrintFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPluginSupport_print_data,
                "entityList", indent_level + 1);
        } else {
            RTICdrType_printPointerArray(
                LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_discontiguous_bufferI(&sample->entityList), 
                LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_length(&sample->entityList),
                (RTICdrTypePrintFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPluginSupport_print_data,
                "entityList", indent_level + 1);
        }
    
    }
            


}

UAV_ENTITYSTATE_REPORT_LIST *
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_create_key_ex(RTIBool allocate_pointers){
    UAV_ENTITYSTATE_REPORT_LIST *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, UAV_ENTITYSTATE_REPORT_LISTKeyHolder);

    ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST_initialize_ex(key,allocate_pointers,RTI_TRUE);
    return key;
}


UAV_ENTITYSTATE_REPORT_LIST *
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_create_key(void)
{
    return  ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPluginSupport_create_key_ex(RTI_TRUE);
}


void 
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_destroy_key_ex(
    UAV_ENTITYSTATE_REPORT_LISTKeyHolder *key,RTIBool deallocate_pointers)
{
    ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
UAV_ENTITYSTATE_REPORT_LISTPluginSupport_destroy_key(
    UAV_ENTITYSTATE_REPORT_LISTKeyHolder *key) {

  ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPluginSupport_destroy_key_ex(key,RTI_TRUE);

}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
UAV_ENTITYSTATE_REPORT_LISTPlugin_on_participant_attached(
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
UAV_ENTITYSTATE_REPORT_LISTPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
UAV_ENTITYSTATE_REPORT_LISTPlugin_on_endpoint_attached(
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
            ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }
    
    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
UAV_ENTITYSTATE_REPORT_LISTPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
UAV_ENTITYSTATE_REPORT_LISTPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LIST *sample,
    void *handle)
{
    
    UAV_ENTITYSTATE_REPORT_LIST_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LIST *dst,
    const UAV_ENTITYSTATE_REPORT_LIST *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const UAV_ENTITYSTATE_REPORT_LIST *sample, 
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
    
    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->entityNumber)) {
        return RTI_FALSE;
    }
            

    if (LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_contiguous_bufferI(&sample->entityList) != NULL) {
        if (!RTICdrStream_serializeNonPrimitiveSequence(
            stream,
            LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_contiguous_bufferI(&sample->entityList),
            LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_length(&sample->entityList),
            (100),
            sizeof(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT),
            (RTICdrStreamSerializeFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_serialize,
            RTI_FALSE, encapsulation_id,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    } else {
        if (!RTICdrStream_serializeNonPrimitivePointerSequence(
            stream,
            (const void **)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_discontiguous_bufferI(&sample->entityList),
            LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_length(&sample->entityList),
            (100),
            (RTICdrStreamSerializeFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_serialize,
            RTI_FALSE, encapsulation_id,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LIST *sample,
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
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
    
    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->entityNumber)) {
        goto fin;
    }

    {
        RTICdrUnsignedLong sequence_length;

        if (LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_contiguous_bufferI(&sample->entityList) != NULL) {
            if (!RTICdrStream_deserializeNonPrimitiveSequence(
                stream,
                LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_contiguous_bufferI(&sample->entityList),
                &sequence_length,
                LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_maximum(&sample->entityList),
                sizeof(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT),
                (RTICdrStreamDeserializeFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_deserialize_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin;
            }
        } else {
            if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                stream,
                (void **)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_discontiguous_bufferI(&sample->entityList),
                &sequence_length,
                LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_maximum(&sample->entityList),
                (RTICdrStreamDeserializeFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_deserialize_sample,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin;
            }
        }
        if (!LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_set_length(
            &sample->entityList, sequence_length)) {
            return RTI_FALSE;
        }
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
UAV_ENTITYSTATE_REPORT_LISTPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LIST **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_deserialize_sample( 
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




RTIBool UAV_ENTITYSTATE_REPORT_LISTPlugin_skip(
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

    if (!RTICdrStream_skipUnsignedShort(stream)) {
        goto fin;
    }
            

    {
        RTICdrUnsignedLong sequence_length;

        if (!RTICdrStream_skipNonPrimitiveSequence(
            stream,
            &sequence_length,
            sizeof(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT),
            (RTICdrStreamSkipFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_skip,
            RTI_FALSE,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            goto fin;
        }
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
UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_max_size(
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


    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, (100),
        LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_get_serialized_sample_max_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_min_size(
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


    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0,
        LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_get_serialized_sample_min_size,RTI_FALSE,encapsulation_id,endpoint_data);
            

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
UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const UAV_ENTITYSTATE_REPORT_LIST * sample) 
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


    current_alignment += RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    if (LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_contiguous_bufferI(&sample->entityList) != NULL) {
        current_alignment += RTICdrStream_getNonPrimitiveSequenceSerializedSize(
            current_alignment, LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_length(&sample->entityList),
            sizeof(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT),
            (RTICdrTypeGetSerializedSampleSizeFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_contiguous_bufferI(&sample->entityList),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerSequenceSerializedSize(
            current_alignment, LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_length(&sample->entityList),
            sizeof(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT),
            (RTICdrTypeGetSerializedSampleSizeFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq_get_discontiguous_bufferI(&sample->entityList),
            endpoint_data);
    }
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
UAV_ENTITYSTATE_REPORT_LISTPlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const UAV_ENTITYSTATE_REPORT_LIST *sample, 
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

    if (!RTICdrStream_serializeUnsignedShort(
        stream, &sample->entityNumber)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool UAV_ENTITYSTATE_REPORT_LISTPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LIST *sample, 
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

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->entityNumber)) {
        return RTI_FALSE;
    }

    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool UAV_ENTITYSTATE_REPORT_LISTPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LIST **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_deserialize_key_sample(
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
UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_key_max_size(
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
        

    current_alignment +=  RTICdrType_getUnsignedShortMaxSizeSerialized(
        current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LIST *sample,
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

    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->entityNumber)) {
        return RTI_FALSE;
    }

    {
        RTICdrUnsignedLong sequence_length;

        if (!RTICdrStream_skipNonPrimitiveSequence(
            stream,
            &sequence_length,
            sizeof(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT),
            (RTICdrStreamSkipFunction)LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_skip,
            RTI_FALSE,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)) {
            goto fin;
        }
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
UAV_ENTITYSTATE_REPORT_LISTPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LISTKeyHolder *dst, 
    const UAV_ENTITYSTATE_REPORT_LIST *src)
{  

    if (endpoint_data) {} /* To avoid warnings */

    if (!RTICdrType_copyUnsignedShort(
        &dst->entityNumber, &src->entityNumber)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    UAV_ENTITYSTATE_REPORT_LIST *dst, const
    UAV_ENTITYSTATE_REPORT_LISTKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */

    if (!RTICdrType_copyUnsignedShort(
        &dst->entityNumber, &src->entityNumber)) {
        return RTI_FALSE;
    }
            

    return RTI_TRUE;
}


RTIBool 
UAV_ENTITYSTATE_REPORT_LISTPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const UAV_ENTITYSTATE_REPORT_LIST *instance)
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

    if (!::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_serialize_key(
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
UAV_ENTITYSTATE_REPORT_LISTPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    UAV_ENTITYSTATE_REPORT_LIST * sample = NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (UAV_ENTITYSTATE_REPORT_LIST *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }


    if (!RTICdrStream_deserializeUnsignedShort(
        stream, &sample->entityNumber)) {
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


    if (!::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}


/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *UAV_ENTITYSTATE_REPORT_LISTPlugin_new(void) 
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
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        UAV_ENTITYSTATE_REPORT_LISTPlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        UAV_ENTITYSTATE_REPORT_LISTPlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        UAV_ENTITYSTATE_REPORT_LISTPlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        UAV_ENTITYSTATE_REPORT_LISTPlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_deserialize_key_sample;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        UAV_ENTITYSTATE_REPORT_LISTPlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        UAV_ENTITYSTATE_REPORT_LISTPlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        UAV_ENTITYSTATE_REPORT_LISTPlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        UAV_ENTITYSTATE_REPORT_LISTPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = UAV_ENTITYSTATE_REPORT_LISTTYPENAME;

    return plugin;
}

void
UAV_ENTITYSTATE_REPORT_LISTPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

} /* namespace VRFORCE_ENTITY */

} /* namespace LHZS */
