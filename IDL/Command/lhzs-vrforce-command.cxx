
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from lhzs-vrforce-command.idl using "rtiddsgen".
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



#include "lhzs-vrforce-command.h"


namespace LHZS{

namespace VRFORCE_COMMAND{
/* ========================================================================= */
const char *DATE_OF_DATATYPENAME = "LHZS::VRFORCE_COMMAND::DATE_OF_DATA";

DDS_TypeCode* DATE_OF_DATA_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member DATE_OF_DATA_g_tc_members[3]=
    {
        {
            (char *)"year_uh",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"month_uh",/* Member name */
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
            (char *)"day_uh",/* Member name */
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

    static DDS_TypeCode DATE_OF_DATA_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::DATE_OF_DATA", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        DATE_OF_DATA_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DATE_OF_DATA*/

    if (is_initialized) {
        return &DATE_OF_DATA_g_tc;
    }


    DATE_OF_DATA_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    DATE_OF_DATA_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    DATE_OF_DATA_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

    is_initialized = RTI_TRUE;

    return &DATE_OF_DATA_g_tc;
}


RTIBool DATE_OF_DATA_initialize(
    DATE_OF_DATA* sample) {
  return ::LHZS::VRFORCE_COMMAND::DATE_OF_DATA_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool DATE_OF_DATA_initialize_ex(
    DATE_OF_DATA* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::DATE_OF_DATA_initialize_w_params(
        sample,&allocParams);
}

RTIBool DATE_OF_DATA_initialize_w_params(
        DATE_OF_DATA* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initUnsignedShort(&sample->year_uh)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->month_uh)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->day_uh)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void DATE_OF_DATA_finalize(
    DATE_OF_DATA* sample)
{
    ::LHZS::VRFORCE_COMMAND::DATE_OF_DATA_finalize_ex(sample,RTI_TRUE);
}
        
void DATE_OF_DATA_finalize_ex(
    DATE_OF_DATA* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::DATE_OF_DATA_finalize_w_params(
        sample,&deallocParams);
}

void DATE_OF_DATA_finalize_w_params(
        DATE_OF_DATA* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





}

void DATE_OF_DATA_finalize_optional_members(
    DATE_OF_DATA* sample, RTIBool deletePointers)
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

RTIBool DATE_OF_DATA_copy(
    DATE_OF_DATA* dst,
    const DATE_OF_DATA* src)
{

    if (!RTICdrType_copyUnsignedShort(
        &dst->year_uh, &src->year_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->month_uh, &src->month_uh)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->day_uh, &src->day_uh)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'DATE_OF_DATA' sequence class.
 */
#define T DATE_OF_DATA
#define TSeq DATE_OF_DATASeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::DATE_OF_DATA_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::DATE_OF_DATA_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::DATE_OF_DATA_copy

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
const char *POS_DATATYPENAME = "LHZS::VRFORCE_COMMAND::POS_DATA";

DDS_TypeCode* POS_DATA_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member POS_DATA_g_tc_members[4]=
    {
        {
            (char *)"posId",/* Member name */
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
            (char *)"lon_f",/* Member name */
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
            (char *)"lat_f",/* Member name */
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
            (char *)"alt_f",/* Member name */
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
        }
    };

    static DDS_TypeCode POS_DATA_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::POS_DATA", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        POS_DATA_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for POS_DATA*/

    if (is_initialized) {
        return &POS_DATA_g_tc;
    }


    POS_DATA_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    POS_DATA_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    POS_DATA_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    POS_DATA_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &POS_DATA_g_tc;
}


RTIBool POS_DATA_initialize(
    POS_DATA* sample) {
  return ::LHZS::VRFORCE_COMMAND::POS_DATA_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool POS_DATA_initialize_ex(
    POS_DATA* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::POS_DATA_initialize_w_params(
        sample,&allocParams);
}

RTIBool POS_DATA_initialize_w_params(
        POS_DATA* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initUnsignedShort(&sample->posId)) {
        return RTI_FALSE;
    }                
            

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

void POS_DATA_finalize(
    POS_DATA* sample)
{
    ::LHZS::VRFORCE_COMMAND::POS_DATA_finalize_ex(sample,RTI_TRUE);
}
        
void POS_DATA_finalize_ex(
    POS_DATA* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::POS_DATA_finalize_w_params(
        sample,&deallocParams);
}

void POS_DATA_finalize_w_params(
        POS_DATA* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */






}

void POS_DATA_finalize_optional_members(
    POS_DATA* sample, RTIBool deletePointers)
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

RTIBool POS_DATA_copy(
    POS_DATA* dst,
    const POS_DATA* src)
{

    if (!RTICdrType_copyUnsignedShort(
        &dst->posId, &src->posId)) {
        return RTI_FALSE;
    }
            

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
 * Configure and implement 'POS_DATA' sequence class.
 */
#define T POS_DATA
#define TSeq POS_DATASeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::POS_DATA_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::POS_DATA_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::POS_DATA_copy

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
const char *RADAR_PARAMETERSTYPENAME = "LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS";

DDS_TypeCode* RADAR_PARAMETERS_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RADAR_PARAMETERS_g_tc_Platform_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,32,NULL,NULL);
    static DDS_TypeCode RADAR_PARAMETERS_g_tc_RadarName_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,32,NULL,NULL);

    static DDS_TypeCode_Member RADAR_PARAMETERS_g_tc_members[28]=
    {
        {
            (char *)"Platform",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"RadarName",/* Member name */
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
            (char *)"Model",/* Member name */
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
            (char *)"Status",/* Member name */
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
            (char *)"RCSValue",/* Member name */
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
            (char *)"Frequency",/* Member name */
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
            (char *)"MaxPower",/* Member name */
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
            (char *)"PulseWidth",/* Member name */
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
            (char *)"PulseRepFre",/* Member name */
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
            (char *)"MaxDectDis",/* Member name */
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
            (char *)"ScanMode",/* Member name */
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
            (char *)"ScanDirection",/* Member name */
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
            (char *)"GazeTime",/* Member name */
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
            (char *)"BandWidth",/* Member name */
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
            (char *)"SystemNoiseTem",/* Member name */
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
            (char *)"ReceNoiseFigure",/* Member name */
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
            (char *)"BandWidth1",/* Member name */
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
            (char *)"ReceFeederLoss",/* Member name */
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
            (char *)"SNRThreshold",/* Member name */
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
            (char *)"FalseAlarmProb",/* Member name */
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
            (char *)"PulseNum",/* Member name */
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
            (char *)"AtnEleBeamWidth",/* Member name */
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
            (char *)"AtnAziBeamWidth",/* Member name */
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
            (char *)"EleRangeMin",/* Member name */
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
            (char *)"EleRangeMax",/* Member name */
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
        },
        {
            (char *)"AziRangeMin",/* Member name */
            {
                25,/* Representation ID */
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
            (char *)"AziRangeMax",/* Member name */
            {
                26,/* Representation ID */
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
            (char *)"AntennaGain",/* Member name */
            {
                27,/* Representation ID */
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

    static DDS_TypeCode RADAR_PARAMETERS_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        28, /* Number of members */
        RADAR_PARAMETERS_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for RADAR_PARAMETERS*/

    if (is_initialized) {
        return &RADAR_PARAMETERS_g_tc;
    }

    RADAR_PARAMETERS_g_tc_Platform_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    RADAR_PARAMETERS_g_tc_RadarName_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;

    RADAR_PARAMETERS_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&RADAR_PARAMETERS_g_tc_Platform_array;
    RADAR_PARAMETERS_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&RADAR_PARAMETERS_g_tc_RadarName_array;
    RADAR_PARAMETERS_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    RADAR_PARAMETERS_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    RADAR_PARAMETERS_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    RADAR_PARAMETERS_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    RADAR_PARAMETERS_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    RADAR_PARAMETERS_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[23]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[24]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[25]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[26]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    RADAR_PARAMETERS_g_tc_members[27]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &RADAR_PARAMETERS_g_tc;
}


RTIBool RADAR_PARAMETERS_initialize(
    RADAR_PARAMETERS* sample) {
  return ::LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool RADAR_PARAMETERS_initialize_ex(
    RADAR_PARAMETERS* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS_initialize_w_params(
        sample,&allocParams);
}

RTIBool RADAR_PARAMETERS_initialize_w_params(
        RADAR_PARAMETERS* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    
    if (!RTICdrType_initArray(
        sample->Platform, (32), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            
    
    if (!RTICdrType_initArray(
        sample->RadarName, (32), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initUnsignedShort(&sample->Model)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->Status)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->RCSValue)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->Frequency)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->MaxPower)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->PulseWidth)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->PulseRepFre)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->MaxDectDis)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->ScanMode)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->ScanDirection)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->GazeTime)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->BandWidth)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->SystemNoiseTem)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->ReceNoiseFigure)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->BandWidth1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->ReceFeederLoss)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->SNRThreshold)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->FalseAlarmProb)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->PulseNum)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->AtnEleBeamWidth)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->AtnAziBeamWidth)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->EleRangeMin)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->EleRangeMax)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->AziRangeMin)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->AziRangeMax)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->AntennaGain)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void RADAR_PARAMETERS_finalize(
    RADAR_PARAMETERS* sample)
{
    ::LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS_finalize_ex(sample,RTI_TRUE);
}
        
void RADAR_PARAMETERS_finalize_ex(
    RADAR_PARAMETERS* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS_finalize_w_params(
        sample,&deallocParams);
}

void RADAR_PARAMETERS_finalize_w_params(
        RADAR_PARAMETERS* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */






























}

void RADAR_PARAMETERS_finalize_optional_members(
    RADAR_PARAMETERS* sample, RTIBool deletePointers)
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

RTIBool RADAR_PARAMETERS_copy(
    RADAR_PARAMETERS* dst,
    const RADAR_PARAMETERS* src)
{

    if (!RTICdrType_copyArray(
        dst->Platform, src->Platform, (32), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyArray(
        dst->RadarName, src->RadarName, (32), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->Model, &src->Model)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->Status, &src->Status)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->RCSValue, &src->RCSValue)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->Frequency, &src->Frequency)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->MaxPower, &src->MaxPower)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->PulseWidth, &src->PulseWidth)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->PulseRepFre, &src->PulseRepFre)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->MaxDectDis, &src->MaxDectDis)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->ScanMode, &src->ScanMode)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->ScanDirection, &src->ScanDirection)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->GazeTime, &src->GazeTime)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->BandWidth, &src->BandWidth)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->SystemNoiseTem, &src->SystemNoiseTem)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->ReceNoiseFigure, &src->ReceNoiseFigure)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->BandWidth1, &src->BandWidth1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->ReceFeederLoss, &src->ReceFeederLoss)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->SNRThreshold, &src->SNRThreshold)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->FalseAlarmProb, &src->FalseAlarmProb)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->PulseNum, &src->PulseNum)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->AtnEleBeamWidth, &src->AtnEleBeamWidth)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->AtnAziBeamWidth, &src->AtnAziBeamWidth)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->EleRangeMin, &src->EleRangeMin)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->EleRangeMax, &src->EleRangeMax)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->AziRangeMin, &src->AziRangeMin)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->AziRangeMax, &src->AziRangeMax)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->AntennaGain, &src->AntennaGain)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'RADAR_PARAMETERS' sequence class.
 */
#define T RADAR_PARAMETERS
#define TSeq RADAR_PARAMETERSSeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS_copy

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
const char *COMM_PARAMETERSTYPENAME = "LHZS::VRFORCE_COMMAND::COMM_PARAMETERS";

DDS_TypeCode* COMM_PARAMETERS_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode COMM_PARAMETERS_g_tc_Platform_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,32,NULL,NULL);
    static DDS_TypeCode COMM_PARAMETERS_g_tc_CommName_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,32,NULL,NULL);

    static DDS_TypeCode_Member COMM_PARAMETERS_g_tc_members[14]=
    {
        {
            (char *)"Platform",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"CommName",/* Member name */
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
            (char *)"Model",/* Member name */
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
            (char *)"Status",/* Member name */
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
            (char *)"TransPower",/* Member name */
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
            (char *)"Frequency",/* Member name */
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
            (char *)"BandWidth",/* Member name */
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
            (char *)"TransLoss",/* Member name */
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
            (char *)"Frequency1",/* Member name */
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
            (char *)"BandWidth1",/* Member name */
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
            (char *)"RecvLoss",/* Member name */
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
            (char *)"CommuReceNoiseFactor",/* Member name */
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
            (char *)"CommuReceNoisePower",/* Member name */
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
            (char *)"AntennaGain",/* Member name */
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
        }
    };

    static DDS_TypeCode COMM_PARAMETERS_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::COMM_PARAMETERS", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        14, /* Number of members */
        COMM_PARAMETERS_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for COMM_PARAMETERS*/

    if (is_initialized) {
        return &COMM_PARAMETERS_g_tc;
    }

    COMM_PARAMETERS_g_tc_Platform_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    COMM_PARAMETERS_g_tc_CommName_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;

    COMM_PARAMETERS_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&COMM_PARAMETERS_g_tc_Platform_array;
    COMM_PARAMETERS_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&COMM_PARAMETERS_g_tc_CommName_array;
    COMM_PARAMETERS_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    COMM_PARAMETERS_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    COMM_PARAMETERS_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    COMM_PARAMETERS_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    COMM_PARAMETERS_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    COMM_PARAMETERS_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    COMM_PARAMETERS_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    COMM_PARAMETERS_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    COMM_PARAMETERS_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    COMM_PARAMETERS_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    COMM_PARAMETERS_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    COMM_PARAMETERS_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &COMM_PARAMETERS_g_tc;
}


RTIBool COMM_PARAMETERS_initialize(
    COMM_PARAMETERS* sample) {
  return ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool COMM_PARAMETERS_initialize_ex(
    COMM_PARAMETERS* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_initialize_w_params(
        sample,&allocParams);
}

RTIBool COMM_PARAMETERS_initialize_w_params(
        COMM_PARAMETERS* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    
    if (!RTICdrType_initArray(
        sample->Platform, (32), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            
    
    if (!RTICdrType_initArray(
        sample->CommName, (32), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initUnsignedShort(&sample->Model)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->Status)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->TransPower)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->Frequency)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->BandWidth)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->TransLoss)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->Frequency1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->BandWidth1)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->RecvLoss)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->CommuReceNoiseFactor)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->CommuReceNoisePower)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->AntennaGain)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void COMM_PARAMETERS_finalize(
    COMM_PARAMETERS* sample)
{
    ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_finalize_ex(sample,RTI_TRUE);
}
        
void COMM_PARAMETERS_finalize_ex(
    COMM_PARAMETERS* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_finalize_w_params(
        sample,&deallocParams);
}

void COMM_PARAMETERS_finalize_w_params(
        COMM_PARAMETERS* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */
















}

void COMM_PARAMETERS_finalize_optional_members(
    COMM_PARAMETERS* sample, RTIBool deletePointers)
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

RTIBool COMM_PARAMETERS_copy(
    COMM_PARAMETERS* dst,
    const COMM_PARAMETERS* src)
{

    if (!RTICdrType_copyArray(
        dst->Platform, src->Platform, (32), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyArray(
        dst->CommName, src->CommName, (32), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->Model, &src->Model)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->Status, &src->Status)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->TransPower, &src->TransPower)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->Frequency, &src->Frequency)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->BandWidth, &src->BandWidth)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->TransLoss, &src->TransLoss)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->Frequency1, &src->Frequency1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->BandWidth1, &src->BandWidth1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->RecvLoss, &src->RecvLoss)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->CommuReceNoiseFactor, &src->CommuReceNoiseFactor)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->CommuReceNoisePower, &src->CommuReceNoisePower)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->AntennaGain, &src->AntennaGain)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'COMM_PARAMETERS' sequence class.
 */
#define T COMM_PARAMETERS
#define TSeq COMM_PARAMETERSSeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_copy

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
const char *JAM_PARAMETERSTYPENAME = "LHZS::VRFORCE_COMMAND::JAM_PARAMETERS";

DDS_TypeCode* JAM_PARAMETERS_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode JAM_PARAMETERS_g_tc_Platform_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,32,NULL,NULL);
    static DDS_TypeCode JAM_PARAMETERS_g_tc_JamName_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,32,NULL,NULL);

    static DDS_TypeCode_Member JAM_PARAMETERS_g_tc_members[13]=
    {
        {
            (char *)"Platform",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"JamName",/* Member name */
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
            (char *)"Model",/* Member name */
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
            (char *)"Status",/* Member name */
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
            (char *)"JamType",/* Member name */
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
            (char *)"Frequency",/* Member name */
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
            (char *)"BandWidth",/* Member name */
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
            (char *)"TransPower",/* Member name */
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
            (char *)"DurationTime",/* Member name */
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
            (char *)"TransLoss",/* Member name */
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
            (char *)"EcmStyle",/* Member name */
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
            (char *)"AntennaPolarization",/* Member name */
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
            (char *)"AntennaGain",/* Member name */
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
        }
    };

    static DDS_TypeCode JAM_PARAMETERS_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::JAM_PARAMETERS", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        13, /* Number of members */
        JAM_PARAMETERS_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for JAM_PARAMETERS*/

    if (is_initialized) {
        return &JAM_PARAMETERS_g_tc;
    }

    JAM_PARAMETERS_g_tc_Platform_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    JAM_PARAMETERS_g_tc_JamName_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;

    JAM_PARAMETERS_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&JAM_PARAMETERS_g_tc_Platform_array;
    JAM_PARAMETERS_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&JAM_PARAMETERS_g_tc_JamName_array;
    JAM_PARAMETERS_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    JAM_PARAMETERS_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    JAM_PARAMETERS_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    JAM_PARAMETERS_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    JAM_PARAMETERS_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    JAM_PARAMETERS_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    JAM_PARAMETERS_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    JAM_PARAMETERS_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;
    JAM_PARAMETERS_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    JAM_PARAMETERS_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    JAM_PARAMETERS_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &JAM_PARAMETERS_g_tc;
}


RTIBool JAM_PARAMETERS_initialize(
    JAM_PARAMETERS* sample) {
  return ::LHZS::VRFORCE_COMMAND::JAM_PARAMETERS_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool JAM_PARAMETERS_initialize_ex(
    JAM_PARAMETERS* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::JAM_PARAMETERS_initialize_w_params(
        sample,&allocParams);
}

RTIBool JAM_PARAMETERS_initialize_w_params(
        JAM_PARAMETERS* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    
    if (!RTICdrType_initArray(
        sample->Platform, (32), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            
    
    if (!RTICdrType_initArray(
        sample->JamName, (32), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initUnsignedShort(&sample->Model)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->Status)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->JamType)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->Frequency)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->BandWidth)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->TransPower)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->DurationTime)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->TransLoss)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->EcmStyle)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->AntennaPolarization)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initDouble(&sample->AntennaGain)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void JAM_PARAMETERS_finalize(
    JAM_PARAMETERS* sample)
{
    ::LHZS::VRFORCE_COMMAND::JAM_PARAMETERS_finalize_ex(sample,RTI_TRUE);
}
        
void JAM_PARAMETERS_finalize_ex(
    JAM_PARAMETERS* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::JAM_PARAMETERS_finalize_w_params(
        sample,&deallocParams);
}

void JAM_PARAMETERS_finalize_w_params(
        JAM_PARAMETERS* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */















}

void JAM_PARAMETERS_finalize_optional_members(
    JAM_PARAMETERS* sample, RTIBool deletePointers)
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

RTIBool JAM_PARAMETERS_copy(
    JAM_PARAMETERS* dst,
    const JAM_PARAMETERS* src)
{

    if (!RTICdrType_copyArray(
        dst->Platform, src->Platform, (32), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyArray(
        dst->JamName, src->JamName, (32), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->Model, &src->Model)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->Status, &src->Status)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->JamType, &src->JamType)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->Frequency, &src->Frequency)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->BandWidth, &src->BandWidth)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->TransPower, &src->TransPower)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->DurationTime, &src->DurationTime)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->TransLoss, &src->TransLoss)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->EcmStyle, &src->EcmStyle)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->AntennaPolarization, &src->AntennaPolarization)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyDouble(
        &dst->AntennaGain, &src->AntennaGain)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'JAM_PARAMETERS' sequence class.
 */
#define T JAM_PARAMETERS
#define TSeq JAM_PARAMETERSSeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::JAM_PARAMETERS_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::JAM_PARAMETERS_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::JAM_PARAMETERS_copy

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
const char *WAVE_PARAMETER_RWTYPENAME = "LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RW";

DDS_TypeCode* WAVE_PARAMETER_RW_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member WAVE_PARAMETER_RW_g_tc_members[23]=
    {
        {
            (char *)"equipid",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"channel_number",/* Member name */
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
            (char *)"local_addr",/* Member name */
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
            (char *)"work_mode_HF",/* Member name */
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
            (char *)"adaptive_switch",/* Member name */
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
            (char *)"fixed_freq_rate",/* Member name */
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
            (char *)"leap_freq_rate",/* Member name */
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
            (char *)"netid",/* Member name */
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
            (char *)"trans_mode_HF",/* Member name */
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
            (char *)"freq_table_number",/* Member name */
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
            (char *)"station_style",/* Member name */
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
            (char *)"ciphered",/* Member name */
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
            (char *)"business_type",/* Member name */
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
            (char *)"duplex_mode",/* Member name */
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
            (char *)"trans_rate",/* Member name */
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
            (char *)"interwine_mode",/* Member name */
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
            (char *)"trans_mode_413",/* Member name */
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
            (char *)"address",/* Member name */
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
            (char *)"work_freq",/* Member name */
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
            (char *)"link_mode",/* Member name */
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
            (char *)"work_mode_UHF",/* Member name */
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
            (char *)"power_level",/* Member name */
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
            (char *)"RAP",/* Member name */
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
        }
    };

    static DDS_TypeCode WAVE_PARAMETER_RW_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RW", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        23, /* Number of members */
        WAVE_PARAMETER_RW_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for WAVE_PARAMETER_RW*/

    if (is_initialized) {
        return &WAVE_PARAMETER_RW_g_tc;
    }


    WAVE_PARAMETER_RW_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    WAVE_PARAMETER_RW_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    WAVE_PARAMETER_RW_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[14]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[15]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[16]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[17]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    WAVE_PARAMETER_RW_g_tc_members[18]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    WAVE_PARAMETER_RW_g_tc_members[19]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[20]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[21]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    WAVE_PARAMETER_RW_g_tc_members[22]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;

    is_initialized = RTI_TRUE;

    return &WAVE_PARAMETER_RW_g_tc;
}


RTIBool WAVE_PARAMETER_RW_initialize(
    WAVE_PARAMETER_RW* sample) {
  return ::LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RW_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool WAVE_PARAMETER_RW_initialize_ex(
    WAVE_PARAMETER_RW* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RW_initialize_w_params(
        sample,&allocParams);
}

RTIBool WAVE_PARAMETER_RW_initialize_w_params(
        WAVE_PARAMETER_RW* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initUnsignedShort(&sample->equipid)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->channel_number)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->local_addr)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->work_mode_HF)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->adaptive_switch)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->fixed_freq_rate)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->leap_freq_rate)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->netid)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->trans_mode_HF)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->freq_table_number)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->station_style)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->ciphered)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->business_type)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->duplex_mode)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->trans_rate)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->interwine_mode)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->trans_mode_413)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->address)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initLong(&sample->work_freq)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->link_mode)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->work_mode_UHF)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->power_level)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->RAP)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void WAVE_PARAMETER_RW_finalize(
    WAVE_PARAMETER_RW* sample)
{
    ::LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RW_finalize_ex(sample,RTI_TRUE);
}
        
void WAVE_PARAMETER_RW_finalize_ex(
    WAVE_PARAMETER_RW* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RW_finalize_w_params(
        sample,&deallocParams);
}

void WAVE_PARAMETER_RW_finalize_w_params(
        WAVE_PARAMETER_RW* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

























}

void WAVE_PARAMETER_RW_finalize_optional_members(
    WAVE_PARAMETER_RW* sample, RTIBool deletePointers)
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

RTIBool WAVE_PARAMETER_RW_copy(
    WAVE_PARAMETER_RW* dst,
    const WAVE_PARAMETER_RW* src)
{

    if (!RTICdrType_copyUnsignedShort(
        &dst->equipid, &src->equipid)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->channel_number, &src->channel_number)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->local_addr, &src->local_addr)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->work_mode_HF, &src->work_mode_HF)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->adaptive_switch, &src->adaptive_switch)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->fixed_freq_rate, &src->fixed_freq_rate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->leap_freq_rate, &src->leap_freq_rate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->netid, &src->netid)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->trans_mode_HF, &src->trans_mode_HF)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->freq_table_number, &src->freq_table_number)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->station_style, &src->station_style)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->ciphered, &src->ciphered)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->business_type, &src->business_type)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->duplex_mode, &src->duplex_mode)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->trans_rate, &src->trans_rate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->interwine_mode, &src->interwine_mode)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->trans_mode_413, &src->trans_mode_413)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->address, &src->address)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->work_freq, &src->work_freq)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->link_mode, &src->link_mode)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->work_mode_UHF, &src->work_mode_UHF)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->power_level, &src->power_level)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->RAP, &src->RAP)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'WAVE_PARAMETER_RW' sequence class.
 */
#define T WAVE_PARAMETER_RW
#define TSeq WAVE_PARAMETER_RWSeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RW_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RW_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RW_copy

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
const char *COMM_PARAMETERS_RWTYPENAME = "LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW";

DDS_TypeCode* COMM_PARAMETERS_RW_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode COMM_PARAMETERS_RW_g_tc_channelList_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(100,NULL);
    static DDS_TypeCode COMM_PARAMETERS_RW_g_tc_wave_typeList_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(100,NULL);
    static DDS_TypeCode COMM_PARAMETERS_RW_g_tc_wave_parameter_rwList_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(100,NULL);

    static DDS_TypeCode_Member COMM_PARAMETERS_RW_g_tc_members[6]=
    {
        {
            (char *)"BIT_type",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"equipment_status",/* Member name */
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
            (char *)"channelNumber",/* Member name */
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
            (char *)"channelList",/* Member name */
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
            (char *)"wave_typeList",/* Member name */
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
            (char *)"wave_parameter_rwList",/* Member name */
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
        }
    };

    static DDS_TypeCode COMM_PARAMETERS_RW_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        6, /* Number of members */
        COMM_PARAMETERS_RW_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for COMM_PARAMETERS_RW*/

    if (is_initialized) {
        return &COMM_PARAMETERS_RW_g_tc;
    }

    COMM_PARAMETERS_RW_g_tc_channelList_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    COMM_PARAMETERS_RW_g_tc_wave_typeList_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    COMM_PARAMETERS_RW_g_tc_wave_parameter_rwList_sequence._data._typeCode = (RTICdrTypeCode *)LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RW_get_typecode();

    COMM_PARAMETERS_RW_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    COMM_PARAMETERS_RW_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;
    COMM_PARAMETERS_RW_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    COMM_PARAMETERS_RW_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&COMM_PARAMETERS_RW_g_tc_channelList_sequence;
    COMM_PARAMETERS_RW_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&COMM_PARAMETERS_RW_g_tc_wave_typeList_sequence;
    COMM_PARAMETERS_RW_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&COMM_PARAMETERS_RW_g_tc_wave_parameter_rwList_sequence;

    is_initialized = RTI_TRUE;

    return &COMM_PARAMETERS_RW_g_tc;
}


RTIBool COMM_PARAMETERS_RW_initialize(
    COMM_PARAMETERS_RW* sample) {
  return ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool COMM_PARAMETERS_RW_initialize_ex(
    COMM_PARAMETERS_RW* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW_initialize_w_params(
        sample,&allocParams);
}

RTIBool COMM_PARAMETERS_RW_initialize_w_params(
        COMM_PARAMETERS_RW* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initChar(&sample->BIT_type)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initChar(&sample->equipment_status)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->channelNumber)) {
        return RTI_FALSE;
    }                
            

    if (allocParams->allocate_memory) {
        DDS_CharSeq_initialize(&sample->channelList);
        if (!DDS_CharSeq_set_maximum(&sample->channelList,
                (100))) {
            return RTI_FALSE;
        }
    } else {
        DDS_CharSeq_set_length(&sample->channelList, 0); 
    }
            

    if (allocParams->allocate_memory) {
        DDS_CharSeq_initialize(&sample->wave_typeList);
        if (!DDS_CharSeq_set_maximum(&sample->wave_typeList,
                (100))) {
            return RTI_FALSE;
        }
    } else {
        DDS_CharSeq_set_length(&sample->wave_typeList, 0); 
    }
            

    if (allocParams->allocate_memory) {
        LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RWSeq_initialize(&sample->wave_parameter_rwList);
        LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RWSeq_set_element_allocation_params(&sample->wave_parameter_rwList,allocParams);
        if (!LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RWSeq_set_maximum(&sample->wave_parameter_rwList,
                                           (100))) {
            return RTI_FALSE;
        }
    } else {
        LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RWSeq_set_length(&sample->wave_parameter_rwList,0);
    }
            


    return RTI_TRUE;
}

void COMM_PARAMETERS_RW_finalize(
    COMM_PARAMETERS_RW* sample)
{
    ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW_finalize_ex(sample,RTI_TRUE);
}
        
void COMM_PARAMETERS_RW_finalize_ex(
    COMM_PARAMETERS_RW* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW_finalize_w_params(
        sample,&deallocParams);
}

void COMM_PARAMETERS_RW_finalize_w_params(
        COMM_PARAMETERS_RW* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





    DDS_CharSeq_finalize(&sample->channelList);
            

    DDS_CharSeq_finalize(&sample->wave_typeList);
            

    LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RWSeq_set_element_deallocation_params(&sample->wave_parameter_rwList,deallocParams);
    LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RWSeq_finalize(&sample->wave_parameter_rwList);
            

}

void COMM_PARAMETERS_RW_finalize_optional_members(
    COMM_PARAMETERS_RW* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             






    {
        DDS_UnsignedLong i, length;
        length = LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RWSeq_get_length(
            &sample->wave_parameter_rwList);

        for (i = 0; i < length; i++) {
            LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RW_finalize_optional_members(
                LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RWSeq_get_reference(
                    &sample->wave_parameter_rwList, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool COMM_PARAMETERS_RW_copy(
    COMM_PARAMETERS_RW* dst,
    const COMM_PARAMETERS_RW* src)
{

    if (!RTICdrType_copyChar(
        &dst->BIT_type, &src->BIT_type)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyChar(
        &dst->equipment_status, &src->equipment_status)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->channelNumber, &src->channelNumber)) {
        return RTI_FALSE;
    }
            

    if (!DDS_CharSeq_copy(&dst->channelList,
                                          &src->channelList)) {
        return RTI_FALSE;
    }
            

    if (!DDS_CharSeq_copy(&dst->wave_typeList,
                                          &src->wave_typeList)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RWSeq_copy(&dst->wave_parameter_rwList,
                                          &src->wave_parameter_rwList)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'COMM_PARAMETERS_RW' sequence class.
 */
#define T COMM_PARAMETERS_RW
#define TSeq COMM_PARAMETERS_RWSeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW_copy

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
const char *SENSOR_RADARTYPENAME = "LHZS::VRFORCE_COMMAND::SENSOR_RADAR";

DDS_TypeCode* SENSOR_RADAR_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SENSOR_RADAR_g_tc_members[2]=
    {
        {
            (char *)"sensorid",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"radar_parameters",/* Member name */
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
        }
    };

    static DDS_TypeCode SENSOR_RADAR_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::SENSOR_RADAR", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        SENSOR_RADAR_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SENSOR_RADAR*/

    if (is_initialized) {
        return &SENSOR_RADAR_g_tc;
    }


    SENSOR_RADAR_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    SENSOR_RADAR_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS_get_typecode();

    is_initialized = RTI_TRUE;

    return &SENSOR_RADAR_g_tc;
}


RTIBool SENSOR_RADAR_initialize(
    SENSOR_RADAR* sample) {
  return ::LHZS::VRFORCE_COMMAND::SENSOR_RADAR_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SENSOR_RADAR_initialize_ex(
    SENSOR_RADAR* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::SENSOR_RADAR_initialize_w_params(
        sample,&allocParams);
}

RTIBool SENSOR_RADAR_initialize_w_params(
        SENSOR_RADAR* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initUnsignedShort(&sample->sensorid)) {
        return RTI_FALSE;
    }                
            

    if (!LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS_initialize_w_params(&sample->radar_parameters,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void SENSOR_RADAR_finalize(
    SENSOR_RADAR* sample)
{
    ::LHZS::VRFORCE_COMMAND::SENSOR_RADAR_finalize_ex(sample,RTI_TRUE);
}
        
void SENSOR_RADAR_finalize_ex(
    SENSOR_RADAR* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::SENSOR_RADAR_finalize_w_params(
        sample,&deallocParams);
}

void SENSOR_RADAR_finalize_w_params(
        SENSOR_RADAR* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



    LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS_finalize_w_params(&sample->radar_parameters, deallocParams);
            

}

void SENSOR_RADAR_finalize_optional_members(
    SENSOR_RADAR* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             


    LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS_finalize_optional_members(&sample->radar_parameters, deallocParams->delete_pointers);
            

}

RTIBool SENSOR_RADAR_copy(
    SENSOR_RADAR* dst,
    const SENSOR_RADAR* src)
{

    if (!RTICdrType_copyUnsignedShort(
        &dst->sensorid, &src->sensorid)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS_copy(
        &dst->radar_parameters, &src->radar_parameters)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SENSOR_RADAR' sequence class.
 */
#define T SENSOR_RADAR
#define TSeq SENSOR_RADARSeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::SENSOR_RADAR_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::SENSOR_RADAR_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::SENSOR_RADAR_copy

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
const char *SENSOR_COMMTYPENAME = "LHZS::VRFORCE_COMMAND::SENSOR_COMM";

DDS_TypeCode* SENSOR_COMM_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SENSOR_COMM_g_tc_members[3]=
    {
        {
            (char *)"sensorid",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"comm_parameters",/* Member name */
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
            (char *)"comm_parameters_rw",/* Member name */
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

    static DDS_TypeCode SENSOR_COMM_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::SENSOR_COMM", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        SENSOR_COMM_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SENSOR_COMM*/

    if (is_initialized) {
        return &SENSOR_COMM_g_tc;
    }


    SENSOR_COMM_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    SENSOR_COMM_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_get_typecode();
    SENSOR_COMM_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW_get_typecode();

    is_initialized = RTI_TRUE;

    return &SENSOR_COMM_g_tc;
}


RTIBool SENSOR_COMM_initialize(
    SENSOR_COMM* sample) {
  return ::LHZS::VRFORCE_COMMAND::SENSOR_COMM_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SENSOR_COMM_initialize_ex(
    SENSOR_COMM* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::SENSOR_COMM_initialize_w_params(
        sample,&allocParams);
}

RTIBool SENSOR_COMM_initialize_w_params(
        SENSOR_COMM* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initUnsignedShort(&sample->sensorid)) {
        return RTI_FALSE;
    }                
            

    if (!LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_initialize_w_params(&sample->comm_parameters,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW_initialize_w_params(&sample->comm_parameters_rw,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void SENSOR_COMM_finalize(
    SENSOR_COMM* sample)
{
    ::LHZS::VRFORCE_COMMAND::SENSOR_COMM_finalize_ex(sample,RTI_TRUE);
}
        
void SENSOR_COMM_finalize_ex(
    SENSOR_COMM* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::SENSOR_COMM_finalize_w_params(
        sample,&deallocParams);
}

void SENSOR_COMM_finalize_w_params(
        SENSOR_COMM* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



    LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_finalize_w_params(&sample->comm_parameters, deallocParams);
            

    LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW_finalize_w_params(&sample->comm_parameters_rw, deallocParams);
            

}

void SENSOR_COMM_finalize_optional_members(
    SENSOR_COMM* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             


    LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_finalize_optional_members(&sample->comm_parameters, deallocParams->delete_pointers);
            

    LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW_finalize_optional_members(&sample->comm_parameters_rw, deallocParams->delete_pointers);
            

}

RTIBool SENSOR_COMM_copy(
    SENSOR_COMM* dst,
    const SENSOR_COMM* src)
{

    if (!RTICdrType_copyUnsignedShort(
        &dst->sensorid, &src->sensorid)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_copy(
        &dst->comm_parameters, &src->comm_parameters)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW_copy(
        &dst->comm_parameters_rw, &src->comm_parameters_rw)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SENSOR_COMM' sequence class.
 */
#define T SENSOR_COMM
#define TSeq SENSOR_COMMSeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::SENSOR_COMM_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::SENSOR_COMM_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::SENSOR_COMM_copy

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
const char *SENSOR_JAMTYPENAME = "LHZS::VRFORCE_COMMAND::SENSOR_JAM";

DDS_TypeCode* SENSOR_JAM_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member SENSOR_JAM_g_tc_members[2]=
    {
        {
            (char *)"sensorid",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"jam_parameters",/* Member name */
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
        }
    };

    static DDS_TypeCode SENSOR_JAM_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::SENSOR_JAM", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        SENSOR_JAM_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SENSOR_JAM*/

    if (is_initialized) {
        return &SENSOR_JAM_g_tc;
    }


    SENSOR_JAM_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    SENSOR_JAM_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)LHZS::VRFORCE_COMMAND::JAM_PARAMETERS_get_typecode();

    is_initialized = RTI_TRUE;

    return &SENSOR_JAM_g_tc;
}


RTIBool SENSOR_JAM_initialize(
    SENSOR_JAM* sample) {
  return ::LHZS::VRFORCE_COMMAND::SENSOR_JAM_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SENSOR_JAM_initialize_ex(
    SENSOR_JAM* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::SENSOR_JAM_initialize_w_params(
        sample,&allocParams);
}

RTIBool SENSOR_JAM_initialize_w_params(
        SENSOR_JAM* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initUnsignedShort(&sample->sensorid)) {
        return RTI_FALSE;
    }                
            

    if (!LHZS::VRFORCE_COMMAND::JAM_PARAMETERS_initialize_w_params(&sample->jam_parameters,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void SENSOR_JAM_finalize(
    SENSOR_JAM* sample)
{
    ::LHZS::VRFORCE_COMMAND::SENSOR_JAM_finalize_ex(sample,RTI_TRUE);
}
        
void SENSOR_JAM_finalize_ex(
    SENSOR_JAM* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::SENSOR_JAM_finalize_w_params(
        sample,&deallocParams);
}

void SENSOR_JAM_finalize_w_params(
        SENSOR_JAM* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */



    LHZS::VRFORCE_COMMAND::JAM_PARAMETERS_finalize_w_params(&sample->jam_parameters, deallocParams);
            

}

void SENSOR_JAM_finalize_optional_members(
    SENSOR_JAM* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             


    LHZS::VRFORCE_COMMAND::JAM_PARAMETERS_finalize_optional_members(&sample->jam_parameters, deallocParams->delete_pointers);
            

}

RTIBool SENSOR_JAM_copy(
    SENSOR_JAM* dst,
    const SENSOR_JAM* src)
{

    if (!RTICdrType_copyUnsignedShort(
        &dst->sensorid, &src->sensorid)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::JAM_PARAMETERS_copy(
        &dst->jam_parameters, &src->jam_parameters)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SENSOR_JAM' sequence class.
 */
#define T SENSOR_JAM
#define TSeq SENSOR_JAMSeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::SENSOR_JAM_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::SENSOR_JAM_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::SENSOR_JAM_copy

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
const char *SENSOR_INFRAREDTYPENAME = "LHZS::VRFORCE_COMMAND::SENSOR_INFRARED";

DDS_TypeCode* SENSOR_INFRARED_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode SENSOR_INFRARED_g_tc_Name_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,32,NULL,NULL);

    static DDS_TypeCode_Member SENSOR_INFRARED_g_tc_members[2]=
    {
        {
            (char *)"Name",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Model",/* Member name */
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
        }
    };

    static DDS_TypeCode SENSOR_INFRARED_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::SENSOR_INFRARED", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        SENSOR_INFRARED_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SENSOR_INFRARED*/

    if (is_initialized) {
        return &SENSOR_INFRARED_g_tc;
    }

    SENSOR_INFRARED_g_tc_Name_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;

    SENSOR_INFRARED_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&SENSOR_INFRARED_g_tc_Name_array;
    SENSOR_INFRARED_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

    is_initialized = RTI_TRUE;

    return &SENSOR_INFRARED_g_tc;
}


RTIBool SENSOR_INFRARED_initialize(
    SENSOR_INFRARED* sample) {
  return ::LHZS::VRFORCE_COMMAND::SENSOR_INFRARED_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SENSOR_INFRARED_initialize_ex(
    SENSOR_INFRARED* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::SENSOR_INFRARED_initialize_w_params(
        sample,&allocParams);
}

RTIBool SENSOR_INFRARED_initialize_w_params(
        SENSOR_INFRARED* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    
    if (!RTICdrType_initArray(
        sample->Name, (32), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initUnsignedShort(&sample->Model)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void SENSOR_INFRARED_finalize(
    SENSOR_INFRARED* sample)
{
    ::LHZS::VRFORCE_COMMAND::SENSOR_INFRARED_finalize_ex(sample,RTI_TRUE);
}
        
void SENSOR_INFRARED_finalize_ex(
    SENSOR_INFRARED* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::SENSOR_INFRARED_finalize_w_params(
        sample,&deallocParams);
}

void SENSOR_INFRARED_finalize_w_params(
        SENSOR_INFRARED* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */




}

void SENSOR_INFRARED_finalize_optional_members(
    SENSOR_INFRARED* sample, RTIBool deletePointers)
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

RTIBool SENSOR_INFRARED_copy(
    SENSOR_INFRARED* dst,
    const SENSOR_INFRARED* src)
{

    if (!RTICdrType_copyArray(
        dst->Name, src->Name, (32), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->Model, &src->Model)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SENSOR_INFRARED' sequence class.
 */
#define T SENSOR_INFRARED
#define TSeq SENSOR_INFRAREDSeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::SENSOR_INFRARED_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::SENSOR_INFRARED_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::SENSOR_INFRARED_copy

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
const char *SENSOR_ESMTYPENAME = "LHZS::VRFORCE_COMMAND::SENSOR_ESM";

DDS_TypeCode* SENSOR_ESM_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode SENSOR_ESM_g_tc_Name_array = DDS_INITIALIZE_ARRAY_TYPECODE(1,32,NULL,NULL);

    static DDS_TypeCode_Member SENSOR_ESM_g_tc_members[2]=
    {
        {
            (char *)"Name",/* Member name */
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
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PRIVATE_MEMBER,/* Ignored */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"Model",/* Member name */
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
        }
    };

    static DDS_TypeCode SENSOR_ESM_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::SENSOR_ESM", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        2, /* Number of members */
        SENSOR_ESM_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for SENSOR_ESM*/

    if (is_initialized) {
        return &SENSOR_ESM_g_tc;
    }

    SENSOR_ESM_g_tc_Name_array._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;

    SENSOR_ESM_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&SENSOR_ESM_g_tc_Name_array;
    SENSOR_ESM_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

    is_initialized = RTI_TRUE;

    return &SENSOR_ESM_g_tc;
}


RTIBool SENSOR_ESM_initialize(
    SENSOR_ESM* sample) {
  return ::LHZS::VRFORCE_COMMAND::SENSOR_ESM_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool SENSOR_ESM_initialize_ex(
    SENSOR_ESM* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::SENSOR_ESM_initialize_w_params(
        sample,&allocParams);
}

RTIBool SENSOR_ESM_initialize_w_params(
        SENSOR_ESM* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    
    if (!RTICdrType_initArray(
        sample->Name, (32), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initUnsignedShort(&sample->Model)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void SENSOR_ESM_finalize(
    SENSOR_ESM* sample)
{
    ::LHZS::VRFORCE_COMMAND::SENSOR_ESM_finalize_ex(sample,RTI_TRUE);
}
        
void SENSOR_ESM_finalize_ex(
    SENSOR_ESM* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::SENSOR_ESM_finalize_w_params(
        sample,&deallocParams);
}

void SENSOR_ESM_finalize_w_params(
        SENSOR_ESM* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */




}

void SENSOR_ESM_finalize_optional_members(
    SENSOR_ESM* sample, RTIBool deletePointers)
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

RTIBool SENSOR_ESM_copy(
    SENSOR_ESM* dst,
    const SENSOR_ESM* src)
{

    if (!RTICdrType_copyArray(
        dst->Name, src->Name, (32), RTI_CDR_CHAR_SIZE)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->Model, &src->Model)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'SENSOR_ESM' sequence class.
 */
#define T SENSOR_ESM
#define TSeq SENSOR_ESMSeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::SENSOR_ESM_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::SENSOR_ESM_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::SENSOR_ESM_copy

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
const char *MISSLE_REQTYPENAME = "LHZS::VRFORCE_COMMAND::MISSLE_REQ";

DDS_TypeCode* MISSLE_REQ_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member MISSLE_REQ_g_tc_members[5]=
    {
        {
            (char *)"cmdId",/* Member name */
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
            (char *)"sendId",/* Member name */
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
            (char *)"targetId",/* Member name */
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
            (char *)"dateOfUpdate",/* Member name */
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
            (char *)"timeOfUpdate",/* Member name */
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
        }
    };

    static DDS_TypeCode MISSLE_REQ_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::MISSLE_REQ", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        MISSLE_REQ_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for MISSLE_REQ*/

    if (is_initialized) {
        return &MISSLE_REQ_g_tc;
    }


    MISSLE_REQ_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    MISSLE_REQ_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    MISSLE_REQ_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    MISSLE_REQ_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)LHZS::VRFORCE_COMMAND::DATE_OF_DATA_get_typecode();
    MISSLE_REQ_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &MISSLE_REQ_g_tc;
}


RTIBool MISSLE_REQ_initialize(
    MISSLE_REQ* sample) {
  return ::LHZS::VRFORCE_COMMAND::MISSLE_REQ_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool MISSLE_REQ_initialize_ex(
    MISSLE_REQ* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::MISSLE_REQ_initialize_w_params(
        sample,&allocParams);
}

RTIBool MISSLE_REQ_initialize_w_params(
        MISSLE_REQ* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initUnsignedShort(&sample->cmdId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->sendId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->targetId)) {
        return RTI_FALSE;
    }                
            

    if (!LHZS::VRFORCE_COMMAND::DATE_OF_DATA_initialize_w_params(&sample->dateOfUpdate,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->timeOfUpdate)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void MISSLE_REQ_finalize(
    MISSLE_REQ* sample)
{
    ::LHZS::VRFORCE_COMMAND::MISSLE_REQ_finalize_ex(sample,RTI_TRUE);
}
        
void MISSLE_REQ_finalize_ex(
    MISSLE_REQ* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::MISSLE_REQ_finalize_w_params(
        sample,&deallocParams);
}

void MISSLE_REQ_finalize_w_params(
        MISSLE_REQ* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */





    LHZS::VRFORCE_COMMAND::DATE_OF_DATA_finalize_w_params(&sample->dateOfUpdate, deallocParams);
            


}

void MISSLE_REQ_finalize_optional_members(
    MISSLE_REQ* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             




    LHZS::VRFORCE_COMMAND::DATE_OF_DATA_finalize_optional_members(&sample->dateOfUpdate, deallocParams->delete_pointers);
            


}

RTIBool MISSLE_REQ_copy(
    MISSLE_REQ* dst,
    const MISSLE_REQ* src)
{

    if (!RTICdrType_copyUnsignedShort(
        &dst->cmdId, &src->cmdId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->sendId, &src->sendId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->targetId, &src->targetId)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::DATE_OF_DATA_copy(
        &dst->dateOfUpdate, &src->dateOfUpdate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->timeOfUpdate, &src->timeOfUpdate)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'MISSLE_REQ' sequence class.
 */
#define T MISSLE_REQ
#define TSeq MISSLE_REQSeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::MISSLE_REQ_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::MISSLE_REQ_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::MISSLE_REQ_copy

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
const char *PATH_CHANGE_REQTYPENAME = "LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ";

DDS_TypeCode* PATH_CHANGE_REQ_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode PATH_CHANGE_REQ_g_tc_PosList_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(100,NULL);

    static DDS_TypeCode_Member PATH_CHANGE_REQ_g_tc_members[5]=
    {
        {
            (char *)"cmdId",/* Member name */
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
            (char *)"platId",/* Member name */
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
            (char *)"dateOfUpdate",/* Member name */
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
            (char *)"timeOfUpdate",/* Member name */
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
            (char *)"PosList",/* Member name */
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
        }
    };

    static DDS_TypeCode PATH_CHANGE_REQ_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        5, /* Number of members */
        PATH_CHANGE_REQ_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for PATH_CHANGE_REQ*/

    if (is_initialized) {
        return &PATH_CHANGE_REQ_g_tc;
    }

    PATH_CHANGE_REQ_g_tc_PosList_sequence._data._typeCode = (RTICdrTypeCode *)LHZS::VRFORCE_COMMAND::POS_DATA_get_typecode();

    PATH_CHANGE_REQ_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    PATH_CHANGE_REQ_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    PATH_CHANGE_REQ_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)LHZS::VRFORCE_COMMAND::DATE_OF_DATA_get_typecode();
    PATH_CHANGE_REQ_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;
    PATH_CHANGE_REQ_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&PATH_CHANGE_REQ_g_tc_PosList_sequence;

    is_initialized = RTI_TRUE;

    return &PATH_CHANGE_REQ_g_tc;
}


RTIBool PATH_CHANGE_REQ_initialize(
    PATH_CHANGE_REQ* sample) {
  return ::LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool PATH_CHANGE_REQ_initialize_ex(
    PATH_CHANGE_REQ* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ_initialize_w_params(
        sample,&allocParams);
}

RTIBool PATH_CHANGE_REQ_initialize_w_params(
        PATH_CHANGE_REQ* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initUnsignedShort(&sample->cmdId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->platId)) {
        return RTI_FALSE;
    }                
            

    if (!LHZS::VRFORCE_COMMAND::DATE_OF_DATA_initialize_w_params(&sample->dateOfUpdate,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->timeOfUpdate)) {
        return RTI_FALSE;
    }                
            

    if (allocParams->allocate_memory) {
        LHZS::VRFORCE_COMMAND::POS_DATASeq_initialize(&sample->PosList);
        LHZS::VRFORCE_COMMAND::POS_DATASeq_set_element_allocation_params(&sample->PosList,allocParams);
        if (!LHZS::VRFORCE_COMMAND::POS_DATASeq_set_maximum(&sample->PosList,
                                           (100))) {
            return RTI_FALSE;
        }
    } else {
        LHZS::VRFORCE_COMMAND::POS_DATASeq_set_length(&sample->PosList,0);
    }
            


    return RTI_TRUE;
}

void PATH_CHANGE_REQ_finalize(
    PATH_CHANGE_REQ* sample)
{
    ::LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ_finalize_ex(sample,RTI_TRUE);
}
        
void PATH_CHANGE_REQ_finalize_ex(
    PATH_CHANGE_REQ* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ_finalize_w_params(
        sample,&deallocParams);
}

void PATH_CHANGE_REQ_finalize_w_params(
        PATH_CHANGE_REQ* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */




    LHZS::VRFORCE_COMMAND::DATE_OF_DATA_finalize_w_params(&sample->dateOfUpdate, deallocParams);
            


    LHZS::VRFORCE_COMMAND::POS_DATASeq_set_element_deallocation_params(&sample->PosList,deallocParams);
    LHZS::VRFORCE_COMMAND::POS_DATASeq_finalize(&sample->PosList);
            

}

void PATH_CHANGE_REQ_finalize_optional_members(
    PATH_CHANGE_REQ* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             



    LHZS::VRFORCE_COMMAND::DATE_OF_DATA_finalize_optional_members(&sample->dateOfUpdate, deallocParams->delete_pointers);
            


    {
        DDS_UnsignedLong i, length;
        length = LHZS::VRFORCE_COMMAND::POS_DATASeq_get_length(
            &sample->PosList);

        for (i = 0; i < length; i++) {
            LHZS::VRFORCE_COMMAND::POS_DATA_finalize_optional_members(
                LHZS::VRFORCE_COMMAND::POS_DATASeq_get_reference(
                    &sample->PosList, i), deallocParams->delete_pointers);
        }
    }         
            

}

RTIBool PATH_CHANGE_REQ_copy(
    PATH_CHANGE_REQ* dst,
    const PATH_CHANGE_REQ* src)
{

    if (!RTICdrType_copyUnsignedShort(
        &dst->cmdId, &src->cmdId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->platId, &src->platId)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::DATE_OF_DATA_copy(
        &dst->dateOfUpdate, &src->dateOfUpdate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->timeOfUpdate, &src->timeOfUpdate)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::POS_DATASeq_copy(&dst->PosList,
                                          &src->PosList)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'PATH_CHANGE_REQ' sequence class.
 */
#define T PATH_CHANGE_REQ
#define TSeq PATH_CHANGE_REQSeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ_copy

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
const char *CMD_ACKTYPENAME = "LHZS::VRFORCE_COMMAND::CMD_ACK";

DDS_TypeCode* CMD_ACK_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member CMD_ACK_g_tc_members[4]=
    {
        {
            (char *)"cmdId",/* Member name */
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
            (char *)"result",/* Member name */
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
            (char *)"dateOfUpdate",/* Member name */
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
            (char *)"timeOfUpdate",/* Member name */
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
        }
    };

    static DDS_TypeCode CMD_ACK_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::CMD_ACK", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        CMD_ACK_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for CMD_ACK*/

    if (is_initialized) {
        return &CMD_ACK_g_tc;
    }


    CMD_ACK_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    CMD_ACK_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    CMD_ACK_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)LHZS::VRFORCE_COMMAND::DATE_OF_DATA_get_typecode();
    CMD_ACK_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &CMD_ACK_g_tc;
}


RTIBool CMD_ACK_initialize(
    CMD_ACK* sample) {
  return ::LHZS::VRFORCE_COMMAND::CMD_ACK_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool CMD_ACK_initialize_ex(
    CMD_ACK* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::CMD_ACK_initialize_w_params(
        sample,&allocParams);
}

RTIBool CMD_ACK_initialize_w_params(
        CMD_ACK* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initUnsignedShort(&sample->cmdId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->result)) {
        return RTI_FALSE;
    }                
            

    if (!LHZS::VRFORCE_COMMAND::DATE_OF_DATA_initialize_w_params(&sample->dateOfUpdate,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->timeOfUpdate)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void CMD_ACK_finalize(
    CMD_ACK* sample)
{
    ::LHZS::VRFORCE_COMMAND::CMD_ACK_finalize_ex(sample,RTI_TRUE);
}
        
void CMD_ACK_finalize_ex(
    CMD_ACK* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::CMD_ACK_finalize_w_params(
        sample,&deallocParams);
}

void CMD_ACK_finalize_w_params(
        CMD_ACK* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */




    LHZS::VRFORCE_COMMAND::DATE_OF_DATA_finalize_w_params(&sample->dateOfUpdate, deallocParams);
            


}

void CMD_ACK_finalize_optional_members(
    CMD_ACK* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             



    LHZS::VRFORCE_COMMAND::DATE_OF_DATA_finalize_optional_members(&sample->dateOfUpdate, deallocParams->delete_pointers);
            


}

RTIBool CMD_ACK_copy(
    CMD_ACK* dst,
    const CMD_ACK* src)
{

    if (!RTICdrType_copyUnsignedShort(
        &dst->cmdId, &src->cmdId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->result, &src->result)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::DATE_OF_DATA_copy(
        &dst->dateOfUpdate, &src->dateOfUpdate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->timeOfUpdate, &src->timeOfUpdate)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'CMD_ACK' sequence class.
 */
#define T CMD_ACK
#define TSeq CMD_ACKSeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::CMD_ACK_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::CMD_ACK_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::CMD_ACK_copy

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
const char *DELETE_ENTITY_REQTYPENAME = "LHZS::VRFORCE_COMMAND::DELETE_ENTITY_REQ";

DDS_TypeCode* DELETE_ENTITY_REQ_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member DELETE_ENTITY_REQ_g_tc_members[4]=
    {
        {
            (char *)"cmdId",/* Member name */
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
            (char *)"platId",/* Member name */
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
            (char *)"dateOfUpdate",/* Member name */
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
            (char *)"timeOfUpdate",/* Member name */
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
        }
    };

    static DDS_TypeCode DELETE_ENTITY_REQ_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::DELETE_ENTITY_REQ", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        DELETE_ENTITY_REQ_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for DELETE_ENTITY_REQ*/

    if (is_initialized) {
        return &DELETE_ENTITY_REQ_g_tc;
    }


    DELETE_ENTITY_REQ_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    DELETE_ENTITY_REQ_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    DELETE_ENTITY_REQ_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)LHZS::VRFORCE_COMMAND::DATE_OF_DATA_get_typecode();
    DELETE_ENTITY_REQ_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &DELETE_ENTITY_REQ_g_tc;
}


RTIBool DELETE_ENTITY_REQ_initialize(
    DELETE_ENTITY_REQ* sample) {
  return ::LHZS::VRFORCE_COMMAND::DELETE_ENTITY_REQ_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool DELETE_ENTITY_REQ_initialize_ex(
    DELETE_ENTITY_REQ* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::DELETE_ENTITY_REQ_initialize_w_params(
        sample,&allocParams);
}

RTIBool DELETE_ENTITY_REQ_initialize_w_params(
        DELETE_ENTITY_REQ* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initUnsignedShort(&sample->cmdId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->platId)) {
        return RTI_FALSE;
    }                
            

    if (!LHZS::VRFORCE_COMMAND::DATE_OF_DATA_initialize_w_params(&sample->dateOfUpdate,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->timeOfUpdate)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void DELETE_ENTITY_REQ_finalize(
    DELETE_ENTITY_REQ* sample)
{
    ::LHZS::VRFORCE_COMMAND::DELETE_ENTITY_REQ_finalize_ex(sample,RTI_TRUE);
}
        
void DELETE_ENTITY_REQ_finalize_ex(
    DELETE_ENTITY_REQ* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::DELETE_ENTITY_REQ_finalize_w_params(
        sample,&deallocParams);
}

void DELETE_ENTITY_REQ_finalize_w_params(
        DELETE_ENTITY_REQ* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */




    LHZS::VRFORCE_COMMAND::DATE_OF_DATA_finalize_w_params(&sample->dateOfUpdate, deallocParams);
            


}

void DELETE_ENTITY_REQ_finalize_optional_members(
    DELETE_ENTITY_REQ* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             



    LHZS::VRFORCE_COMMAND::DATE_OF_DATA_finalize_optional_members(&sample->dateOfUpdate, deallocParams->delete_pointers);
            


}

RTIBool DELETE_ENTITY_REQ_copy(
    DELETE_ENTITY_REQ* dst,
    const DELETE_ENTITY_REQ* src)
{

    if (!RTICdrType_copyUnsignedShort(
        &dst->cmdId, &src->cmdId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->platId, &src->platId)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::DATE_OF_DATA_copy(
        &dst->dateOfUpdate, &src->dateOfUpdate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->timeOfUpdate, &src->timeOfUpdate)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'DELETE_ENTITY_REQ' sequence class.
 */
#define T DELETE_ENTITY_REQ
#define TSeq DELETE_ENTITY_REQSeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::DELETE_ENTITY_REQ_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::DELETE_ENTITY_REQ_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::DELETE_ENTITY_REQ_copy

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
const char *CHANGE_SENSORS_REQTYPENAME = "LHZS::VRFORCE_COMMAND::CHANGE_SENSORS_REQ";

DDS_TypeCode* CHANGE_SENSORS_REQ_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member CHANGE_SENSORS_REQ_g_tc_members[14]=
    {
        {
            (char *)"cmdId",/* Member name */
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
            (char *)"platId",/* Member name */
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
            (char *)"RadarFlg",/* Member name */
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
            (char *)"CommFlg",/* Member name */
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
            (char *)"JamFlg",/* Member name */
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
            (char *)"InfraredFlg",/* Member name */
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
            (char *)"EsmFlg",/* Member name */
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
            (char *)"sensor_radar",/* Member name */
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
            (char *)"sensor_comm",/* Member name */
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
            (char *)"sensor_jam",/* Member name */
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
            (char *)"sensor_infrared",/* Member name */
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
            (char *)"sensor_esm",/* Member name */
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
            (char *)"dateOfUpdate",/* Member name */
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
            (char *)"timeOfUpdate",/* Member name */
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
        }
    };

    static DDS_TypeCode CHANGE_SENSORS_REQ_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"LHZS::VRFORCE_COMMAND::CHANGE_SENSORS_REQ", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        14, /* Number of members */
        CHANGE_SENSORS_REQ_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for CHANGE_SENSORS_REQ*/

    if (is_initialized) {
        return &CHANGE_SENSORS_REQ_g_tc;
    }


    CHANGE_SENSORS_REQ_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    CHANGE_SENSORS_REQ_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;
    CHANGE_SENSORS_REQ_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    CHANGE_SENSORS_REQ_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    CHANGE_SENSORS_REQ_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    CHANGE_SENSORS_REQ_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    CHANGE_SENSORS_REQ_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;
    CHANGE_SENSORS_REQ_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)LHZS::VRFORCE_COMMAND::SENSOR_RADAR_get_typecode();
    CHANGE_SENSORS_REQ_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)LHZS::VRFORCE_COMMAND::SENSOR_COMM_get_typecode();
    CHANGE_SENSORS_REQ_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)LHZS::VRFORCE_COMMAND::SENSOR_JAM_get_typecode();
    CHANGE_SENSORS_REQ_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)LHZS::VRFORCE_COMMAND::SENSOR_INFRARED_get_typecode();
    CHANGE_SENSORS_REQ_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)LHZS::VRFORCE_COMMAND::SENSOR_ESM_get_typecode();
    CHANGE_SENSORS_REQ_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)LHZS::VRFORCE_COMMAND::DATE_OF_DATA_get_typecode();
    CHANGE_SENSORS_REQ_g_tc_members[13]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &CHANGE_SENSORS_REQ_g_tc;
}


RTIBool CHANGE_SENSORS_REQ_initialize(
    CHANGE_SENSORS_REQ* sample) {
  return ::LHZS::VRFORCE_COMMAND::CHANGE_SENSORS_REQ_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool CHANGE_SENSORS_REQ_initialize_ex(
    CHANGE_SENSORS_REQ* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::LHZS::VRFORCE_COMMAND::CHANGE_SENSORS_REQ_initialize_w_params(
        sample,&allocParams);
}

RTIBool CHANGE_SENSORS_REQ_initialize_w_params(
        CHANGE_SENSORS_REQ* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        

    if (!RTICdrType_initUnsignedShort(&sample->cmdId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initUnsignedShort(&sample->platId)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->RadarFlg)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->CommFlg)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->JamFlg)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->InfraredFlg)) {
        return RTI_FALSE;
    }                
            

    if (!RTICdrType_initBoolean(&sample->EsmFlg)) {
        return RTI_FALSE;
    }                
            

    if (!LHZS::VRFORCE_COMMAND::SENSOR_RADAR_initialize_w_params(&sample->sensor_radar,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::SENSOR_COMM_initialize_w_params(&sample->sensor_comm,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::SENSOR_JAM_initialize_w_params(&sample->sensor_jam,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::SENSOR_INFRARED_initialize_w_params(&sample->sensor_infrared,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::SENSOR_ESM_initialize_w_params(&sample->sensor_esm,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::DATE_OF_DATA_initialize_w_params(&sample->dateOfUpdate,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_initLong(&sample->timeOfUpdate)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void CHANGE_SENSORS_REQ_finalize(
    CHANGE_SENSORS_REQ* sample)
{
    ::LHZS::VRFORCE_COMMAND::CHANGE_SENSORS_REQ_finalize_ex(sample,RTI_TRUE);
}
        
void CHANGE_SENSORS_REQ_finalize_ex(
    CHANGE_SENSORS_REQ* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::LHZS::VRFORCE_COMMAND::CHANGE_SENSORS_REQ_finalize_w_params(
        sample,&deallocParams);
}

void CHANGE_SENSORS_REQ_finalize_w_params(
        CHANGE_SENSORS_REQ* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */









    LHZS::VRFORCE_COMMAND::SENSOR_RADAR_finalize_w_params(&sample->sensor_radar, deallocParams);
            

    LHZS::VRFORCE_COMMAND::SENSOR_COMM_finalize_w_params(&sample->sensor_comm, deallocParams);
            

    LHZS::VRFORCE_COMMAND::SENSOR_JAM_finalize_w_params(&sample->sensor_jam, deallocParams);
            

    LHZS::VRFORCE_COMMAND::SENSOR_INFRARED_finalize_w_params(&sample->sensor_infrared, deallocParams);
            

    LHZS::VRFORCE_COMMAND::SENSOR_ESM_finalize_w_params(&sample->sensor_esm, deallocParams);
            

    LHZS::VRFORCE_COMMAND::DATE_OF_DATA_finalize_w_params(&sample->dateOfUpdate, deallocParams);
            


}

void CHANGE_SENSORS_REQ_finalize_optional_members(
    CHANGE_SENSORS_REQ* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             








    LHZS::VRFORCE_COMMAND::SENSOR_RADAR_finalize_optional_members(&sample->sensor_radar, deallocParams->delete_pointers);
            

    LHZS::VRFORCE_COMMAND::SENSOR_COMM_finalize_optional_members(&sample->sensor_comm, deallocParams->delete_pointers);
            

    LHZS::VRFORCE_COMMAND::SENSOR_JAM_finalize_optional_members(&sample->sensor_jam, deallocParams->delete_pointers);
            

    LHZS::VRFORCE_COMMAND::SENSOR_INFRARED_finalize_optional_members(&sample->sensor_infrared, deallocParams->delete_pointers);
            

    LHZS::VRFORCE_COMMAND::SENSOR_ESM_finalize_optional_members(&sample->sensor_esm, deallocParams->delete_pointers);
            

    LHZS::VRFORCE_COMMAND::DATE_OF_DATA_finalize_optional_members(&sample->dateOfUpdate, deallocParams->delete_pointers);
            


}

RTIBool CHANGE_SENSORS_REQ_copy(
    CHANGE_SENSORS_REQ* dst,
    const CHANGE_SENSORS_REQ* src)
{

    if (!RTICdrType_copyUnsignedShort(
        &dst->cmdId, &src->cmdId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyUnsignedShort(
        &dst->platId, &src->platId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->RadarFlg, &src->RadarFlg)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->CommFlg, &src->CommFlg)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->JamFlg, &src->JamFlg)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->InfraredFlg, &src->InfraredFlg)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyBoolean(
        &dst->EsmFlg, &src->EsmFlg)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::SENSOR_RADAR_copy(
        &dst->sensor_radar, &src->sensor_radar)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::SENSOR_COMM_copy(
        &dst->sensor_comm, &src->sensor_comm)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::SENSOR_JAM_copy(
        &dst->sensor_jam, &src->sensor_jam)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::SENSOR_INFRARED_copy(
        &dst->sensor_infrared, &src->sensor_infrared)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::SENSOR_ESM_copy(
        &dst->sensor_esm, &src->sensor_esm)) {
        return RTI_FALSE;
    }
            

    if (!LHZS::VRFORCE_COMMAND::DATE_OF_DATA_copy(
        &dst->dateOfUpdate, &src->dateOfUpdate)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->timeOfUpdate, &src->timeOfUpdate)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'CHANGE_SENSORS_REQ' sequence class.
 */
#define T CHANGE_SENSORS_REQ
#define TSeq CHANGE_SENSORS_REQSeq
#define T_initialize_w_params ::LHZS::VRFORCE_COMMAND::CHANGE_SENSORS_REQ_initialize_w_params
#define T_finalize_w_params   ::LHZS::VRFORCE_COMMAND::CHANGE_SENSORS_REQ_finalize_w_params
#define T_copy       ::LHZS::VRFORCE_COMMAND::CHANGE_SENSORS_REQ_copy

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


} /* namespace VRFORCE_COMMAND */

} /* namespace LHZS */
