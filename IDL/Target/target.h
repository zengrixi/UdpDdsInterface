
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from target.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef target_485479119_h
#define target_485479119_h

#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
#else
    #include "ndds_standalone_type.h"
#endif


namespace LHZS{

#define LHZS_GEOGRAPHIC_POSITION_LAST_MEMBER_ID 2
        
extern const char *GEOGRAPHIC_POSITIONTYPENAME;
        


#ifdef __cplusplus
    struct GEOGRAPHIC_POSITIONSeq;

#ifndef NDDS_STANDALONE_TYPE
    class GEOGRAPHIC_POSITIONTypeSupport;
    class GEOGRAPHIC_POSITIONDataWriter;
    class GEOGRAPHIC_POSITIONDataReader;
#endif

#endif

            
    
class GEOGRAPHIC_POSITION                                        
{
public:            
#ifdef __cplusplus
    typedef struct GEOGRAPHIC_POSITIONSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef GEOGRAPHIC_POSITIONTypeSupport TypeSupport;
    typedef GEOGRAPHIC_POSITIONDataWriter DataWriter;
    typedef GEOGRAPHIC_POSITIONDataReader DataReader;
#endif

#endif
    
    DDS_Double  lon_f;

    DDS_Double  lat_f;

    DDS_Double  alt_f;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* GEOGRAPHIC_POSITION_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(GEOGRAPHIC_POSITIONSeq, GEOGRAPHIC_POSITION);
        
NDDSUSERDllExport
RTIBool GEOGRAPHIC_POSITION_initialize(
        GEOGRAPHIC_POSITION* self);
        
NDDSUSERDllExport
RTIBool GEOGRAPHIC_POSITION_initialize_ex(
        GEOGRAPHIC_POSITION* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool GEOGRAPHIC_POSITION_initialize_w_params(
        GEOGRAPHIC_POSITION* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void GEOGRAPHIC_POSITION_finalize(
        GEOGRAPHIC_POSITION* self);
                        
NDDSUSERDllExport
void GEOGRAPHIC_POSITION_finalize_ex(
        GEOGRAPHIC_POSITION* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void GEOGRAPHIC_POSITION_finalize_w_params(
        GEOGRAPHIC_POSITION* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void GEOGRAPHIC_POSITION_finalize_optional_members(
        GEOGRAPHIC_POSITION* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool GEOGRAPHIC_POSITION_copy(
        GEOGRAPHIC_POSITION* dst,
        const GEOGRAPHIC_POSITION* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define LHZS_PLATFORM_VELOCITY_LAST_MEMBER_ID 2
        
extern const char *PLATFORM_VELOCITYTYPENAME;
        


#ifdef __cplusplus
    struct PLATFORM_VELOCITYSeq;

#ifndef NDDS_STANDALONE_TYPE
    class PLATFORM_VELOCITYTypeSupport;
    class PLATFORM_VELOCITYDataWriter;
    class PLATFORM_VELOCITYDataReader;
#endif

#endif

            
    
class PLATFORM_VELOCITY                                        
{
public:            
#ifdef __cplusplus
    typedef struct PLATFORM_VELOCITYSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef PLATFORM_VELOCITYTypeSupport TypeSupport;
    typedef PLATFORM_VELOCITYDataWriter DataWriter;
    typedef PLATFORM_VELOCITYDataReader DataReader;
#endif

#endif
    
    DDS_Double  platform_vx_f;

    DDS_Double  platform_vy_f;

    DDS_Double  platform_vz_f;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* PLATFORM_VELOCITY_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(PLATFORM_VELOCITYSeq, PLATFORM_VELOCITY);
        
NDDSUSERDllExport
RTIBool PLATFORM_VELOCITY_initialize(
        PLATFORM_VELOCITY* self);
        
NDDSUSERDllExport
RTIBool PLATFORM_VELOCITY_initialize_ex(
        PLATFORM_VELOCITY* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool PLATFORM_VELOCITY_initialize_w_params(
        PLATFORM_VELOCITY* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void PLATFORM_VELOCITY_finalize(
        PLATFORM_VELOCITY* self);
                        
NDDSUSERDllExport
void PLATFORM_VELOCITY_finalize_ex(
        PLATFORM_VELOCITY* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void PLATFORM_VELOCITY_finalize_w_params(
        PLATFORM_VELOCITY* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void PLATFORM_VELOCITY_finalize_optional_members(
        PLATFORM_VELOCITY* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool PLATFORM_VELOCITY_copy(
        PLATFORM_VELOCITY* dst,
        const PLATFORM_VELOCITY* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define LHZS_TARGET_ATTRIBUTE_DATA_LAST_MEMBER_ID 14
        
extern const char *TARGET_ATTRIBUTE_DATATYPENAME;
        


#ifdef __cplusplus
    struct TARGET_ATTRIBUTE_DATASeq;

#ifndef NDDS_STANDALONE_TYPE
    class TARGET_ATTRIBUTE_DATATypeSupport;
    class TARGET_ATTRIBUTE_DATADataWriter;
    class TARGET_ATTRIBUTE_DATADataReader;
#endif

#endif

            
    
class TARGET_ATTRIBUTE_DATA                                        
{
public:            
#ifdef __cplusplus
    typedef struct TARGET_ATTRIBUTE_DATASeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef TARGET_ATTRIBUTE_DATATypeSupport TypeSupport;
    typedef TARGET_ATTRIBUTE_DATADataWriter DataWriter;
    typedef TARGET_ATTRIBUTE_DATADataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  conflict_flag_uh[4];

    DDS_UnsignedShort  target_type_e;

    DDS_UnsignedShort  JEM_type_e;

    DDS_UnsignedShort  identification_e;

    DDS_Double  ident_confidence_f;

    DDS_UnsignedShort  civil_military_e;

    DDS_Double  civil_military_conf_f;

    DDS_UnsignedShort  target_class_e;

    DDS_Double  class_confidence_f;

    DDS_UnsignedShort  target_model_e;

    DDS_Double  model_confidence_f;

    DDS_UnsignedShort  target_nation_e;

    DDS_Double  nation_confidence_f;

    DDS_UnsignedShort  target_rcs_e;

    DDS_Double  rcs_confidence_f;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* TARGET_ATTRIBUTE_DATA_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(TARGET_ATTRIBUTE_DATASeq, TARGET_ATTRIBUTE_DATA);
        
NDDSUSERDllExport
RTIBool TARGET_ATTRIBUTE_DATA_initialize(
        TARGET_ATTRIBUTE_DATA* self);
        
NDDSUSERDllExport
RTIBool TARGET_ATTRIBUTE_DATA_initialize_ex(
        TARGET_ATTRIBUTE_DATA* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool TARGET_ATTRIBUTE_DATA_initialize_w_params(
        TARGET_ATTRIBUTE_DATA* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void TARGET_ATTRIBUTE_DATA_finalize(
        TARGET_ATTRIBUTE_DATA* self);
                        
NDDSUSERDllExport
void TARGET_ATTRIBUTE_DATA_finalize_ex(
        TARGET_ATTRIBUTE_DATA* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void TARGET_ATTRIBUTE_DATA_finalize_w_params(
        TARGET_ATTRIBUTE_DATA* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void TARGET_ATTRIBUTE_DATA_finalize_optional_members(
        TARGET_ATTRIBUTE_DATA* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool TARGET_ATTRIBUTE_DATA_copy(
        TARGET_ATTRIBUTE_DATA* dst,
        const TARGET_ATTRIBUTE_DATA* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define LHZS_SDI_TRACK_REPORT_LAST_MEMBER_ID 24
        
extern const char *SDI_TRACK_REPORTTYPENAME;
        


#ifdef __cplusplus
    struct SDI_TRACK_REPORTSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SDI_TRACK_REPORTTypeSupport;
    class SDI_TRACK_REPORTDataWriter;
    class SDI_TRACK_REPORTDataReader;
#endif

#endif

            
    
class SDI_TRACK_REPORT                                        
{
public:            
#ifdef __cplusplus
    typedef struct SDI_TRACK_REPORTSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SDI_TRACK_REPORTTypeSupport TypeSupport;
    typedef SDI_TRACK_REPORTDataWriter DataWriter;
    typedef SDI_TRACK_REPORTDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedLong  platform_id_ul;

    DDS_UnsignedLong  sdi_track_number_ul;

    DDS_UnsignedShort  radar_track_number_uh;

    DDS_UnsignedShort  ssr_track_number_uh;

    DDS_UnsignedShort  esm_target_number_uh;

    DDS_UnsignedShort  csm_target_number_uh;

    DDS_UnsignedShort  ir_target_number_uh;

    DDS_UnsignedLong  icao_addr_ul;

    DDS_UnsignedLong  ais_mmsi_ul;

    DDS_Char  call_sign_c[16];

    DDS_UnsignedShort  net_obj_addr_uh;

    DDS_UnsignedShort  track_status_e;

    DDS_UnsignedShort  track_quality_uh;

    DDS_UnsignedShort  track_source_e;

    LHZS::GEOGRAPHIC_POSITION  target_geo_position;

    LHZS::PLATFORM_VELOCITY  target_velocity;

    DDS_Double  speed_f;

    DDS_Double  heading_f;

    DDS_UnsignedShort  mission_type_e;

    DDS_UnsignedShort  threat_level_e;

    DDS_UnsignedShort  formation_size_uh;

    DDS_UnsignedShort  maneuver_indicator_e;

    DDS_UnsignedLong  time_of_update_ul;

    LHZS::TARGET_ATTRIBUTE_DATA  target_attribute_data;

    DDS_Char  spare_c[24];

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SDI_TRACK_REPORT_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SDI_TRACK_REPORTSeq, SDI_TRACK_REPORT);
        
NDDSUSERDllExport
RTIBool SDI_TRACK_REPORT_initialize(
        SDI_TRACK_REPORT* self);
        
NDDSUSERDllExport
RTIBool SDI_TRACK_REPORT_initialize_ex(
        SDI_TRACK_REPORT* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SDI_TRACK_REPORT_initialize_w_params(
        SDI_TRACK_REPORT* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SDI_TRACK_REPORT_finalize(
        SDI_TRACK_REPORT* self);
                        
NDDSUSERDllExport
void SDI_TRACK_REPORT_finalize_ex(
        SDI_TRACK_REPORT* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void SDI_TRACK_REPORT_finalize_w_params(
        SDI_TRACK_REPORT* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void SDI_TRACK_REPORT_finalize_optional_members(
        SDI_TRACK_REPORT* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool SDI_TRACK_REPORT_copy(
        SDI_TRACK_REPORT* dst,
        const SDI_TRACK_REPORT* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace LHZS */


#endif /* target_485479119_h */
