
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from target.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/


#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
        #ifndef dds_c_log_impl_h              
            #include "dds_c/dds_c_log_impl.h"                                
        #endif        
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
    
    #ifndef cdr_type_h
        #include "cdr/cdr_type.h"
    #endif    

    #ifndef osapi_heap_h
        #include "osapi/osapi_heap.h" 
    #endif
#else
    #include "ndds_standalone_type.h"
#endif



#include "target.h"


namespace LHZS{
/* ========================================================================= */
const char *GEOGRAPHIC_POSITIONTYPENAME = "LHZS::GEOGRAPHIC_POSITION";

DDS_TypeCode* GEOGRAPHIC_POSITION_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member GEOGRAPHIC_POSITION_g_tc_members[3]=
    {
        {
            (char *)"lon_f",/* Member name */
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
            RTI_CDR_KEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"lat_f",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"alt_f",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode GEOGRAPHIC_POSITION_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::GEOGRAPHIC_POSITION", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        GEOGRAPHIC_POSITION_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for GEOGRAPHIC_POSITION*/

    if (is_initialized) {
        return &GEOGRAPHIC_POSITION_g_tc;
    }


    GEOGRAPHIC_POSITION_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    GEOGRAPHIC_POSITION_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    GEOGRAPHIC_POSITION_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &GEOGRAPHIC_POSITION_g_tc;
}


RTIBool GEOGRAPHIC_POSITION_initialize(
    GEOGRAPHIC_POSITION* sample) {
  return ::LHZS::GEOGRAPHIC_POSITION_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool GEOGRAPHIC_POSITION_initialize_ex(
    GEOGRAPHIC_POSITION* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::GEOGRAPHIC_POSITION_initialize_w_params(
        sample,&allocParams);
}

RTIBool GEOGRAPHIC_POSITION_initialize_w_params(
        GEOGRAPHIC_POSITION* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initDouble(&sample->lon_f)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->lat_f)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->alt_f)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void GEOGRAPHIC_POSITION_finalize(
    GEOGRAPHIC_POSITION* sample)
{
    ::LHZS::GEOGRAPHIC_POSITION_finalize_ex(sample,RTI_TRUE);
}
        
void GEOGRAPHIC_POSITION_finalize_ex(
    GEOGRAPHIC_POSITION* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::GEOGRAPHIC_POSITION_finalize_w_params(
        sample,&deallocParams);
}

void GEOGRAPHIC_POSITION_finalize_w_params(
        GEOGRAPHIC_POSITION* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





}

void GEOGRAPHIC_POSITION_finalize_optional_members(
    GEOGRAPHIC_POSITION* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             




}

RTIBool GEOGRAPHIC_POSITION_copy(
    GEOGRAPHIC_POSITION* dst,
    const GEOGRAPHIC_POSITION* src)
{

    if (!RTICdrType_copyDouble(
        &dst->lon_f, &src->lon_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->lat_f, &src->lat_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->alt_f, &src->alt_f)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'GEOGRAPHIC_POSITION' sequence class.
 */
#define T GEOGRAPHIC_POSITION
#define TSeq GEOGRAPHIC_POSITIONSeq
#define T_initialize_w_params ::LHZS::GEOGRAPHIC_POSITION_initialize_w_params
#define T_finalize_w_params   ::LHZS::GEOGRAPHIC_POSITION_finalize_w_params
#define T_copy       ::LHZS::GEOGRAPHIC_POSITION_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *PLATFORM_VELOCITYTYPENAME = "LHZS::PLATFORM_VELOCITY";

DDS_TypeCode* PLATFORM_VELOCITY_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member PLATFORM_VELOCITY_g_tc_members[3]=
    {
        {
            (char *)"platform_vx_f",/* Member name */
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
            RTI_CDR_KEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"platform_vy_f",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"platform_vz_f",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode PLATFORM_VELOCITY_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::PLATFORM_VELOCITY", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        PLATFORM_VELOCITY_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for PLATFORM_VELOCITY*/

    if (is_initialized) {
        return &PLATFORM_VELOCITY_g_tc;
    }


    PLATFORM_VELOCITY_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    PLATFORM_VELOCITY_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    PLATFORM_VELOCITY_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &PLATFORM_VELOCITY_g_tc;
}


RTIBool PLATFORM_VELOCITY_initialize(
    PLATFORM_VELOCITY* sample) {
  return ::LHZS::PLATFORM_VELOCITY_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool PLATFORM_VELOCITY_initialize_ex(
    PLATFORM_VELOCITY* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::PLATFORM_VELOCITY_initialize_w_params(
        sample,&allocParams);
}

RTIBool PLATFORM_VELOCITY_initialize_w_params(
        PLATFORM_VELOCITY* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initDouble(&sample->platform_vx_f)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->platform_vy_f)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->platform_vz_f)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void PLATFORM_VELOCITY_finalize(
    PLATFORM_VELOCITY* sample)
{
    ::LHZS::PLATFORM_VELOCITY_finalize_ex(sample,RTI_TRUE);
}
        
void PLATFORM_VELOCITY_finalize_ex(
    PLATFORM_VELOCITY* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::PLATFORM_VELOCITY_finalize_w_params(
        sample,&deallocParams);
}

void PLATFORM_VELOCITY_finalize_w_params(
        PLATFORM_VELOCITY* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





}

void PLATFORM_VELOCITY_finalize_optional_members(
    PLATFORM_VELOCITY* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             




}

RTIBool PLATFORM_VELOCITY_copy(
    PLATFORM_VELOCITY* dst,
    const PLATFORM_VELOCITY* src)
{

    if (!RTICdrType_copyDouble(
        &dst->platform_vx_f, &src->platform_vx_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->platform_vy_f, &src->platform_vy_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->platform_vz_f, &src->platform_vz_f)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'PLATFORM_VELOCITY' sequence class.
 */
#define T PLATFORM_VELOCITY
#define TSeq PLATFORM_VELOCITYSeq
#define T_initialize_w_params ::LHZS::PLATFORM_VELOCITY_initialize_w_params
#define T_finalize_w_params   ::LHZS::PLATFORM_VELOCITY_finalize_w_params
#define T_copy       ::LHZS::PLATFORM_VELOCITY_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *TARGET_ATTRIBUTE_DATATYPENAME = "LHZS::TARGET_ATTRIBUTE_DATA";

DDS_TypeCode* TARGET_ATTRIBUTE_DATA_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TARGET_ATTRIBUTE_DATA_g_tc_conflict_flag_uh_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,4,NULL,NULL);

    static DDS_TypeCode_Member TARGET_ATTRIBUTE_DATA_g_tc_members[15]=
    {
        {
            (char *)"conflict_flag_uh",/* Member name */
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
            RTI_CDR_KEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"target_type_e",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"JEM_type_e",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"identification_e",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ident_confidence_f",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"civil_military_e",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"civil_military_conf_f",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"target_class_e",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"class_confidence_f",/* Member name */
            {
                8,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"target_model_e",/* Member name */
            {
                9,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"model_confidence_f",/* Member name */
            {
                10,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"target_nation_e",/* Member name */
            {
                11,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"nation_confidence_f",/* Member name */
            {
                12,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"target_rcs_e",/* Member name */
            {
                13,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"rcs_confidence_f",/* Member name */
            {
                14,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode TARGET_ATTRIBUTE_DATA_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::TARGET_ATTRIBUTE_DATA", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        15, /* Number of members */
        TARGET_ATTRIBUTE_DATA_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for TARGET_ATTRIBUTE_DATA*/

    if (is_initialized) {
        return &TARGET_ATTRIBUTE_DATA_g_tc;
    }

    TARGET_ATTRIBUTE_DATA_g_tc_conflict_flag_uh_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

    TARGET_ATTRIBUTE_DATA_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&TARGET_ATTRIBUTE_DATA_g_tc_conflict_flag_uh_array;
    TARGET_ATTRIBUTE_DATA_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    TARGET_ATTRIBUTE_DATA_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    TARGET_ATTRIBUTE_DATA_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    TARGET_ATTRIBUTE_DATA_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TARGET_ATTRIBUTE_DATA_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    TARGET_ATTRIBUTE_DATA_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TARGET_ATTRIBUTE_DATA_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    TARGET_ATTRIBUTE_DATA_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TARGET_ATTRIBUTE_DATA_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    TARGET_ATTRIBUTE_DATA_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TARGET_ATTRIBUTE_DATA_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    TARGET_ATTRIBUTE_DATA_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    TARGET_ATTRIBUTE_DATA_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    TARGET_ATTRIBUTE_DATA_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &TARGET_ATTRIBUTE_DATA_g_tc;
}


RTIBool TARGET_ATTRIBUTE_DATA_initialize(
    TARGET_ATTRIBUTE_DATA* sample) {
  return ::LHZS::TARGET_ATTRIBUTE_DATA_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool TARGET_ATTRIBUTE_DATA_initialize_ex(
    TARGET_ATTRIBUTE_DATA* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::TARGET_ATTRIBUTE_DATA_initialize_w_params(
        sample,&allocParams);
}

RTIBool TARGET_ATTRIBUTE_DATA_initialize_w_params(
        TARGET_ATTRIBUTE_DATA* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    
    if (!RTICdrType_initArray(
        sample->conflict_flag_uh, (4), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initUnsignedShort(&sample->target_type_e)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->JEM_type_e)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->identification_e)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->ident_confidence_f)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->civil_military_e)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->civil_military_conf_f)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->target_class_e)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->class_confidence_f)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->target_model_e)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->model_confidence_f)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->target_nation_e)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->nation_confidence_f)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->target_rcs_e)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->rcs_confidence_f)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void TARGET_ATTRIBUTE_DATA_finalize(
    TARGET_ATTRIBUTE_DATA* sample)
{
    ::LHZS::TARGET_ATTRIBUTE_DATA_finalize_ex(sample,RTI_TRUE);
}
        
void TARGET_ATTRIBUTE_DATA_finalize_ex(
    TARGET_ATTRIBUTE_DATA* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::TARGET_ATTRIBUTE_DATA_finalize_w_params(
        sample,&deallocParams);
}

void TARGET_ATTRIBUTE_DATA_finalize_w_params(
        TARGET_ATTRIBUTE_DATA* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

















}

void TARGET_ATTRIBUTE_DATA_finalize_optional_members(
    TARGET_ATTRIBUTE_DATA* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             
















}

RTIBool TARGET_ATTRIBUTE_DATA_copy(
    TARGET_ATTRIBUTE_DATA* dst,
    const TARGET_ATTRIBUTE_DATA* src)
{

    if (!RTICdrType_copyArray(
        dst->conflict_flag_uh, src->conflict_flag_uh, (4), RTI_CDR_UNSIGNED_SHORT_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->target_type_e, &src->target_type_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->JEM_type_e, &src->JEM_type_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->identification_e, &src->identification_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->ident_confidence_f, &src->ident_confidence_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->civil_military_e, &src->civil_military_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->civil_military_conf_f, &src->civil_military_conf_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->target_class_e, &src->target_class_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->class_confidence_f, &src->class_confidence_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->target_model_e, &src->target_model_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->model_confidence_f, &src->model_confidence_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->target_nation_e, &src->target_nation_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->nation_confidence_f, &src->nation_confidence_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->target_rcs_e, &src->target_rcs_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->rcs_confidence_f, &src->rcs_confidence_f)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'TARGET_ATTRIBUTE_DATA' sequence class.
 */
#define T TARGET_ATTRIBUTE_DATA
#define TSeq TARGET_ATTRIBUTE_DATASeq
#define T_initialize_w_params ::LHZS::TARGET_ATTRIBUTE_DATA_initialize_w_params
#define T_finalize_w_params   ::LHZS::TARGET_ATTRIBUTE_DATA_finalize_w_params
#define T_copy       ::LHZS::TARGET_ATTRIBUTE_DATA_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *SDI_TRACK_REPORTTYPENAME = "LHZS::SDI_TRACK_REPORT";

DDS_TypeCode* SDI_TRACK_REPORT_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode SDI_TRACK_REPORT_g_tc_call_sign_c_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,16,NULL,NULL);
    static DDS_TypeCode SDI_TRACK_REPORT_g_tc_spare_c_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,24,NULL,NULL);

    static DDS_TypeCode_Member SDI_TRACK_REPORT_g_tc_members[25]=
    {
        {
            (char *)"platform_id_ul",/* Member name */
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
            RTI_CDR_KEY_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"sdi_track_number_ul",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"radar_track_number_uh",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ssr_track_number_uh",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"esm_target_number_uh",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"csm_target_number_uh",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ir_target_number_uh",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"icao_addr_ul",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"ais_mmsi_ul",/* Member name */
            {
                8,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"call_sign_c",/* Member name */
            {
                9,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"net_obj_addr_uh",/* Member name */
            {
                10,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"track_status_e",/* Member name */
            {
                11,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"track_quality_uh",/* Member name */
            {
                12,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"track_source_e",/* Member name */
            {
                13,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"target_geo_position",/* Member name */
            {
                14,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"target_velocity",/* Member name */
            {
                15,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"speed_f",/* Member name */
            {
                16,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"heading_f",/* Member name */
            {
                17,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"mission_type_e",/* Member name */
            {
                18,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"threat_level_e",/* Member name */
            {
                19,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"formation_size_uh",/* Member name */
            {
                20,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"maneuver_indicator_e",/* Member name */
            {
                21,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"time_of_update_ul",/* Member name */
            {
                22,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"target_attribute_data",/* Member name */
            {
                23,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"spare_c",/* Member name */
            {
                24,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode SDI_TRACK_REPORT_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::SDI_TRACK_REPORT", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        25, /* Number of members */
        SDI_TRACK_REPORT_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SDI_TRACK_REPORT*/

    if (is_initialized) {
        return &SDI_TRACK_REPORT_g_tc;
    }

    SDI_TRACK_REPORT_g_tc_call_sign_c_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    SDI_TRACK_REPORT_g_tc_spare_c_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;

    SDI_TRACK_REPORT_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    SDI_TRACK_REPORT_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    SDI_TRACK_REPORT_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    SDI_TRACK_REPORT_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    SDI_TRACK_REPORT_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    SDI_TRACK_REPORT_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    SDI_TRACK_REPORT_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    SDI_TRACK_REPORT_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    SDI_TRACK_REPORT_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    SDI_TRACK_REPORT_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&SDI_TRACK_REPORT_g_tc_call_sign_c_array;
    SDI_TRACK_REPORT_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    SDI_TRACK_REPORT_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    SDI_TRACK_REPORT_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    SDI_TRACK_REPORT_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    SDI_TRACK_REPORT_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)LHZS::GEOGRAPHIC_POSITION_get_typecode();
    SDI_TRACK_REPORT_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)LHZS::PLATFORM_VELOCITY_get_typecode();
    SDI_TRACK_REPORT_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    SDI_TRACK_REPORT_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    SDI_TRACK_REPORT_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    SDI_TRACK_REPORT_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    SDI_TRACK_REPORT_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    SDI_TRACK_REPORT_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    SDI_TRACK_REPORT_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
    SDI_TRACK_REPORT_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)LHZS::TARGET_ATTRIBUTE_DATA_get_typecode();
    SDI_TRACK_REPORT_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&SDI_TRACK_REPORT_g_tc_spare_c_array;

    is_initialized = RTI_TRUE;

    return &SDI_TRACK_REPORT_g_tc;
}


RTIBool SDI_TRACK_REPORT_initialize(
    SDI_TRACK_REPORT* sample) {
  return ::LHZS::SDI_TRACK_REPORT_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SDI_TRACK_REPORT_initialize_ex(
    SDI_TRACK_REPORT* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::SDI_TRACK_REPORT_initialize_w_params(
        sample,&allocParams);
}

RTIBool SDI_TRACK_REPORT_initialize_w_params(
        SDI_TRACK_REPORT* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initUnsignedLong(&sample->platform_id_ul)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedLong(&sample->sdi_track_number_ul)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->radar_track_number_uh)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->ssr_track_number_uh)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->esm_target_number_uh)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->csm_target_number_uh)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->ir_target_number_uh)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedLong(&sample->icao_addr_ul)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedLong(&sample->ais_mmsi_ul)) {
        return RTI_FALSE;
    }                
            
    
    if (!RTICdrType_initArray(
        sample->call_sign_c, (16), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initUnsignedShort(&sample->net_obj_addr_uh)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->track_status_e)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->track_quality_uh)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->track_source_e)) {
        return RTI_FALSE;
    }                
            

    if (!LHZS::GEOGRAPHIC_POSITION_initialize_w_params(&sample->target_geo_position,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::PLATFORM_VELOCITY_initialize_w_params(&sample->target_velocity,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initDouble(&sample->speed_f)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->heading_f)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->mission_type_e)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->threat_level_e)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->formation_size_uh)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->maneuver_indicator_e)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedLong(&sample->time_of_update_ul)) {
        return RTI_FALSE;
    }                
            

    if (!LHZS::TARGET_ATTRIBUTE_DATA_initialize_w_params(&sample->target_attribute_data,allocParams)) {
        return RTI_FALSE;
    }
            
    
    if (!RTICdrType_initArray(
        sample->spare_c, (24), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void SDI_TRACK_REPORT_finalize(
    SDI_TRACK_REPORT* sample)
{
    ::LHZS::SDI_TRACK_REPORT_finalize_ex(sample,RTI_TRUE);
}
        
void SDI_TRACK_REPORT_finalize_ex(
    SDI_TRACK_REPORT* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::SDI_TRACK_REPORT_finalize_w_params(
        sample,&deallocParams);
}

void SDI_TRACK_REPORT_finalize_w_params(
        SDI_TRACK_REPORT* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
















    LHZS::GEOGRAPHIC_POSITION_finalize_w_params(&sample->target_geo_position, deallocParams);
            

    LHZS::PLATFORM_VELOCITY_finalize_w_params(&sample->target_velocity, deallocParams);
            








    LHZS::TARGET_ATTRIBUTE_DATA_finalize_w_params(&sample->target_attribute_data, deallocParams);
            


}

void SDI_TRACK_REPORT_finalize_optional_members(
    SDI_TRACK_REPORT* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             















    LHZS::GEOGRAPHIC_POSITION_finalize_optional_members(&sample->target_geo_position, deallocParams->delete_pointers);
            

    LHZS::PLATFORM_VELOCITY_finalize_optional_members(&sample->target_velocity, deallocParams->delete_pointers);
            








    LHZS::TARGET_ATTRIBUTE_DATA_finalize_optional_members(&sample->target_attribute_data, deallocParams->delete_pointers);
            


}

RTIBool SDI_TRACK_REPORT_copy(
    SDI_TRACK_REPORT* dst,
    const SDI_TRACK_REPORT* src)
{

    if (!RTICdrType_copyUnsignedLong(
        &dst->platform_id_ul, &src->platform_id_ul)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLong(
        &dst->sdi_track_number_ul, &src->sdi_track_number_ul)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->radar_track_number_uh, &src->radar_track_number_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->ssr_track_number_uh, &src->ssr_track_number_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->esm_target_number_uh, &src->esm_target_number_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->csm_target_number_uh, &src->csm_target_number_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->ir_target_number_uh, &src->ir_target_number_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLong(
        &dst->icao_addr_ul, &src->icao_addr_ul)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLong(
        &dst->ais_mmsi_ul, &src->ais_mmsi_ul)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyArray(
        dst->call_sign_c, src->call_sign_c, (16), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->net_obj_addr_uh, &src->net_obj_addr_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->track_status_e, &src->track_status_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->track_quality_uh, &src->track_quality_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->track_source_e, &src->track_source_e)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::GEOGRAPHIC_POSITION_copy(
        &dst->target_geo_position, &src->target_geo_position)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::PLATFORM_VELOCITY_copy(
        &dst->target_velocity, &src->target_velocity)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->speed_f, &src->speed_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->heading_f, &src->heading_f)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->mission_type_e, &src->mission_type_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->threat_level_e, &src->threat_level_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->formation_size_uh, &src->formation_size_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->maneuver_indicator_e, &src->maneuver_indicator_e)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedLong(
        &dst->time_of_update_ul, &src->time_of_update_ul)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::TARGET_ATTRIBUTE_DATA_copy(
        &dst->target_attribute_data, &src->target_attribute_data)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyArray(
        dst->spare_c, src->spare_c, (24), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SDI_TRACK_REPORT' sequence class.
 */
#define T SDI_TRACK_REPORT
#define TSeq SDI_TRACK_REPORTSeq
#define T_initialize_w_params ::LHZS::SDI_TRACK_REPORT_initialize_w_params
#define T_finalize_w_params   ::LHZS::SDI_TRACK_REPORT_finalize_w_params
#define T_copy       ::LHZS::SDI_TRACK_REPORT_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T


} /* namespace LHZS */
