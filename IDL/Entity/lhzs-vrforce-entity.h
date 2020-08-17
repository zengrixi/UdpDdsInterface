
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from lhzs-vrforce-entity.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef lhzs_vrforce_entity_875776359_h
#define lhzs_vrforce_entity_875776359_h

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

namespace VRFORCE_ENTITY{

#define LHZS_VRFORCE_ENTITY_DATE_OF_DATA_LAST_MEMBER_ID 2
        
extern const char *DATE_OF_DATATYPENAME;
        


#ifdef __cplusplus
    struct DATE_OF_DATASeq;

#ifndef NDDS_STANDALONE_TYPE
    class DATE_OF_DATATypeSupport;
    class DATE_OF_DATADataWriter;
    class DATE_OF_DATADataReader;
#endif

#endif

            
    
class DATE_OF_DATA                                        
{
public:            
#ifdef __cplusplus
    typedef struct DATE_OF_DATASeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef DATE_OF_DATATypeSupport TypeSupport;
    typedef DATE_OF_DATADataWriter DataWriter;
    typedef DATE_OF_DATADataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  year_uh;

    DDS_UnsignedShort  month_uh;

    DDS_UnsignedShort  day_uh;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DATE_OF_DATA_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(DATE_OF_DATASeq, DATE_OF_DATA);
        
NDDSUSERDllExport
RTIBool DATE_OF_DATA_initialize(
        DATE_OF_DATA* self);
        
NDDSUSERDllExport
RTIBool DATE_OF_DATA_initialize_ex(
        DATE_OF_DATA* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool DATE_OF_DATA_initialize_w_params(
        DATE_OF_DATA* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void DATE_OF_DATA_finalize(
        DATE_OF_DATA* self);
                        
NDDSUSERDllExport
void DATE_OF_DATA_finalize_ex(
        DATE_OF_DATA* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void DATE_OF_DATA_finalize_w_params(
        DATE_OF_DATA* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void DATE_OF_DATA_finalize_optional_members(
        DATE_OF_DATA* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool DATE_OF_DATA_copy(
        DATE_OF_DATA* dst,
        const DATE_OF_DATA* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define LHZS_VRFORCE_ENTITY_RADAR_PARAMETERS_LAST_MEMBER_ID 26
        
extern const char *RADAR_PARAMETERSTYPENAME;
        


#ifdef __cplusplus
    struct RADAR_PARAMETERSSeq;

#ifndef NDDS_STANDALONE_TYPE
    class RADAR_PARAMETERSTypeSupport;
    class RADAR_PARAMETERSDataWriter;
    class RADAR_PARAMETERSDataReader;
#endif

#endif

            
    
class RADAR_PARAMETERS                                        
{
public:            
#ifdef __cplusplus
    typedef struct RADAR_PARAMETERSSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef RADAR_PARAMETERSTypeSupport TypeSupport;
    typedef RADAR_PARAMETERSDataWriter DataWriter;
    typedef RADAR_PARAMETERSDataReader DataReader;
#endif

#endif
    
    DDS_Char  Platform[32];

    DDS_Char  RadarName[32];

    DDS_Char  Status;

    DDS_Double  RCSValue;

    DDS_Double  Frequency;

    DDS_Double  MaxPower;

    DDS_Double  PulseWidth;

    DDS_Double  PulseRepFre;

    DDS_Double  MaxDectDis;

    DDS_Char  ScanMode;

    DDS_Char  ScanDirection;

    DDS_Double  GazeTime;

    DDS_Double  BandWidth;

    DDS_Double  SystemNoiseTem;

    DDS_Double  ReceNoiseFigure;

    DDS_Double  BandWidth1;

    DDS_Double  ReceFeederLoss;

    DDS_Double  SNRThreshold;

    DDS_Double  FalseAlarmProb;

    DDS_Long  PulseNum;

    DDS_Double  AtnEleBeamWidth;

    DDS_Double  AtnAziBeamWidth;

    DDS_Double  EleRangeMin;

    DDS_Double  EleRangeMax;

    DDS_Double  AziRangeMin;

    DDS_Double  AziRangeMax;

    DDS_Double  AntennaGain;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* RADAR_PARAMETERS_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(RADAR_PARAMETERSSeq, RADAR_PARAMETERS);
        
NDDSUSERDllExport
RTIBool RADAR_PARAMETERS_initialize(
        RADAR_PARAMETERS* self);
        
NDDSUSERDllExport
RTIBool RADAR_PARAMETERS_initialize_ex(
        RADAR_PARAMETERS* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool RADAR_PARAMETERS_initialize_w_params(
        RADAR_PARAMETERS* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void RADAR_PARAMETERS_finalize(
        RADAR_PARAMETERS* self);
                        
NDDSUSERDllExport
void RADAR_PARAMETERS_finalize_ex(
        RADAR_PARAMETERS* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void RADAR_PARAMETERS_finalize_w_params(
        RADAR_PARAMETERS* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void RADAR_PARAMETERS_finalize_optional_members(
        RADAR_PARAMETERS* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool RADAR_PARAMETERS_copy(
        RADAR_PARAMETERS* dst,
        const RADAR_PARAMETERS* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define LHZS_VRFORCE_ENTITY_COMM_PARAMETERS_LAST_MEMBER_ID 12
        
extern const char *COMM_PARAMETERSTYPENAME;
        


#ifdef __cplusplus
    struct COMM_PARAMETERSSeq;

#ifndef NDDS_STANDALONE_TYPE
    class COMM_PARAMETERSTypeSupport;
    class COMM_PARAMETERSDataWriter;
    class COMM_PARAMETERSDataReader;
#endif

#endif

            
    
class COMM_PARAMETERS                                        
{
public:            
#ifdef __cplusplus
    typedef struct COMM_PARAMETERSSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef COMM_PARAMETERSTypeSupport TypeSupport;
    typedef COMM_PARAMETERSDataWriter DataWriter;
    typedef COMM_PARAMETERSDataReader DataReader;
#endif

#endif
    
    DDS_Char  Platform[32];

    DDS_Char  CommName[32];

    DDS_Char  Status;

    DDS_Double  TransPower;

    DDS_Double  Frequency;

    DDS_Double  BandWidth;

    DDS_Double  TransLoss;

    DDS_Double  Frequency1;

    DDS_Double  BandWidth1;

    DDS_Double  RecvLoss;

    DDS_Double  CommuReceNoiseFactor;

    DDS_Double  CommuReceNoisePower;

    DDS_Double  AntennaGain;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* COMM_PARAMETERS_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(COMM_PARAMETERSSeq, COMM_PARAMETERS);
        
NDDSUSERDllExport
RTIBool COMM_PARAMETERS_initialize(
        COMM_PARAMETERS* self);
        
NDDSUSERDllExport
RTIBool COMM_PARAMETERS_initialize_ex(
        COMM_PARAMETERS* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool COMM_PARAMETERS_initialize_w_params(
        COMM_PARAMETERS* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void COMM_PARAMETERS_finalize(
        COMM_PARAMETERS* self);
                        
NDDSUSERDllExport
void COMM_PARAMETERS_finalize_ex(
        COMM_PARAMETERS* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void COMM_PARAMETERS_finalize_w_params(
        COMM_PARAMETERS* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void COMM_PARAMETERS_finalize_optional_members(
        COMM_PARAMETERS* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool COMM_PARAMETERS_copy(
        COMM_PARAMETERS* dst,
        const COMM_PARAMETERS* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define LHZS_VRFORCE_ENTITY_JAM_PARAMETERS_LAST_MEMBER_ID 11
        
extern const char *JAM_PARAMETERSTYPENAME;
        


#ifdef __cplusplus
    struct JAM_PARAMETERSSeq;

#ifndef NDDS_STANDALONE_TYPE
    class JAM_PARAMETERSTypeSupport;
    class JAM_PARAMETERSDataWriter;
    class JAM_PARAMETERSDataReader;
#endif

#endif

            
    
class JAM_PARAMETERS                                        
{
public:            
#ifdef __cplusplus
    typedef struct JAM_PARAMETERSSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef JAM_PARAMETERSTypeSupport TypeSupport;
    typedef JAM_PARAMETERSDataWriter DataWriter;
    typedef JAM_PARAMETERSDataReader DataReader;
#endif

#endif
    
    DDS_Char  Platform[32];

    DDS_Char  JamName[32];

    DDS_Char  Status;

    DDS_Char  JamType;

    DDS_Double  Frequency;

    DDS_Double  BandWidth;

    DDS_Double  TransPower;

    DDS_Double  DurationTime;

    DDS_Double  TransLoss;

    DDS_Char  EcmStyle;

    DDS_Char  AntennaPolarization;

    DDS_Double  AntennaGain;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* JAM_PARAMETERS_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(JAM_PARAMETERSSeq, JAM_PARAMETERS);
        
NDDSUSERDllExport
RTIBool JAM_PARAMETERS_initialize(
        JAM_PARAMETERS* self);
        
NDDSUSERDllExport
RTIBool JAM_PARAMETERS_initialize_ex(
        JAM_PARAMETERS* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool JAM_PARAMETERS_initialize_w_params(
        JAM_PARAMETERS* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void JAM_PARAMETERS_finalize(
        JAM_PARAMETERS* self);
                        
NDDSUSERDllExport
void JAM_PARAMETERS_finalize_ex(
        JAM_PARAMETERS* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void JAM_PARAMETERS_finalize_w_params(
        JAM_PARAMETERS* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void JAM_PARAMETERS_finalize_optional_members(
        JAM_PARAMETERS* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool JAM_PARAMETERS_copy(
        JAM_PARAMETERS* dst,
        const JAM_PARAMETERS* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define LHZS_VRFORCE_ENTITY_WAVE_PARAMETER_RW_LAST_MEMBER_ID 22
        
extern const char *WAVE_PARAMETER_RWTYPENAME;
        


#ifdef __cplusplus
    struct WAVE_PARAMETER_RWSeq;

#ifndef NDDS_STANDALONE_TYPE
    class WAVE_PARAMETER_RWTypeSupport;
    class WAVE_PARAMETER_RWDataWriter;
    class WAVE_PARAMETER_RWDataReader;
#endif

#endif

            
    
class WAVE_PARAMETER_RW                                        
{
public:            
#ifdef __cplusplus
    typedef struct WAVE_PARAMETER_RWSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef WAVE_PARAMETER_RWTypeSupport TypeSupport;
    typedef WAVE_PARAMETER_RWDataWriter DataWriter;
    typedef WAVE_PARAMETER_RWDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  equipid;

    DDS_UnsignedShort  channel_number;

    DDS_Char  local_addr;

    DDS_Char  work_mode_HF;

    DDS_Char  adaptive_switch;

    DDS_Char  fixed_freq_rate;

    DDS_Char  leap_freq_rate;

    DDS_Char  netid;

    DDS_Char  trans_mode_HF;

    DDS_Char  freq_table_number;

    DDS_Char  station_style;

    DDS_Char  ciphered;

    DDS_Char  business_type;

    DDS_Char  duplex_mode;

    DDS_Char  trans_rate;

    DDS_Char  interwine_mode;

    DDS_Char  trans_mode_413;

    DDS_UnsignedShort  address;

    DDS_Long  work_freq;

    DDS_Char  link_mode;

    DDS_Char  work_mode_UHF;

    DDS_Char  power_level;

    DDS_Char  RAP;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* WAVE_PARAMETER_RW_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(WAVE_PARAMETER_RWSeq, WAVE_PARAMETER_RW);
        
NDDSUSERDllExport
RTIBool WAVE_PARAMETER_RW_initialize(
        WAVE_PARAMETER_RW* self);
        
NDDSUSERDllExport
RTIBool WAVE_PARAMETER_RW_initialize_ex(
        WAVE_PARAMETER_RW* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool WAVE_PARAMETER_RW_initialize_w_params(
        WAVE_PARAMETER_RW* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void WAVE_PARAMETER_RW_finalize(
        WAVE_PARAMETER_RW* self);
                        
NDDSUSERDllExport
void WAVE_PARAMETER_RW_finalize_ex(
        WAVE_PARAMETER_RW* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void WAVE_PARAMETER_RW_finalize_w_params(
        WAVE_PARAMETER_RW* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void WAVE_PARAMETER_RW_finalize_optional_members(
        WAVE_PARAMETER_RW* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool WAVE_PARAMETER_RW_copy(
        WAVE_PARAMETER_RW* dst,
        const WAVE_PARAMETER_RW* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define LHZS_VRFORCE_ENTITY_COMM_PARAMETERS_RW_LAST_MEMBER_ID 5
        
extern const char *COMM_PARAMETERS_RWTYPENAME;
        


#ifdef __cplusplus
    struct COMM_PARAMETERS_RWSeq;

#ifndef NDDS_STANDALONE_TYPE
    class COMM_PARAMETERS_RWTypeSupport;
    class COMM_PARAMETERS_RWDataWriter;
    class COMM_PARAMETERS_RWDataReader;
#endif

#endif

            
    
class COMM_PARAMETERS_RW                                        
{
public:            
#ifdef __cplusplus
    typedef struct COMM_PARAMETERS_RWSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef COMM_PARAMETERS_RWTypeSupport TypeSupport;
    typedef COMM_PARAMETERS_RWDataWriter DataWriter;
    typedef COMM_PARAMETERS_RWDataReader DataReader;
#endif

#endif
    
    DDS_Char  BIT_type;

    DDS_Char  equipment_status;

    DDS_UnsignedShort  channelNumber;

     DDS_CharSeq  channelList;

     DDS_CharSeq  wave_typeList;

     LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWSeq  wave_parameter_rwList;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* COMM_PARAMETERS_RW_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(COMM_PARAMETERS_RWSeq, COMM_PARAMETERS_RW);
        
NDDSUSERDllExport
RTIBool COMM_PARAMETERS_RW_initialize(
        COMM_PARAMETERS_RW* self);
        
NDDSUSERDllExport
RTIBool COMM_PARAMETERS_RW_initialize_ex(
        COMM_PARAMETERS_RW* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool COMM_PARAMETERS_RW_initialize_w_params(
        COMM_PARAMETERS_RW* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void COMM_PARAMETERS_RW_finalize(
        COMM_PARAMETERS_RW* self);
                        
NDDSUSERDllExport
void COMM_PARAMETERS_RW_finalize_ex(
        COMM_PARAMETERS_RW* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void COMM_PARAMETERS_RW_finalize_w_params(
        COMM_PARAMETERS_RW* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void COMM_PARAMETERS_RW_finalize_optional_members(
        COMM_PARAMETERS_RW* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool COMM_PARAMETERS_RW_copy(
        COMM_PARAMETERS_RW* dst,
        const COMM_PARAMETERS_RW* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define LHZS_VRFORCE_ENTITY_SENSOR_RADAR_LAST_MEMBER_ID 1
        
extern const char *SENSOR_RADARTYPENAME;
        


#ifdef __cplusplus
    struct SENSOR_RADARSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SENSOR_RADARTypeSupport;
    class SENSOR_RADARDataWriter;
    class SENSOR_RADARDataReader;
#endif

#endif

            
    
class SENSOR_RADAR                                        
{
public:            
#ifdef __cplusplus
    typedef struct SENSOR_RADARSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SENSOR_RADARTypeSupport TypeSupport;
    typedef SENSOR_RADARDataWriter DataWriter;
    typedef SENSOR_RADARDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  sensorid;

    LHZS::VRFORCE_ENTITY::RADAR_PARAMETERS  radar_parameters;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SENSOR_RADAR_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SENSOR_RADARSeq, SENSOR_RADAR);
        
NDDSUSERDllExport
RTIBool SENSOR_RADAR_initialize(
        SENSOR_RADAR* self);
        
NDDSUSERDllExport
RTIBool SENSOR_RADAR_initialize_ex(
        SENSOR_RADAR* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SENSOR_RADAR_initialize_w_params(
        SENSOR_RADAR* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SENSOR_RADAR_finalize(
        SENSOR_RADAR* self);
                        
NDDSUSERDllExport
void SENSOR_RADAR_finalize_ex(
        SENSOR_RADAR* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void SENSOR_RADAR_finalize_w_params(
        SENSOR_RADAR* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void SENSOR_RADAR_finalize_optional_members(
        SENSOR_RADAR* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool SENSOR_RADAR_copy(
        SENSOR_RADAR* dst,
        const SENSOR_RADAR* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define LHZS_VRFORCE_ENTITY_SENSOR_COMM_LAST_MEMBER_ID 2
        
extern const char *SENSOR_COMMTYPENAME;
        


#ifdef __cplusplus
    struct SENSOR_COMMSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SENSOR_COMMTypeSupport;
    class SENSOR_COMMDataWriter;
    class SENSOR_COMMDataReader;
#endif

#endif

            
    
class SENSOR_COMM                                        
{
public:            
#ifdef __cplusplus
    typedef struct SENSOR_COMMSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SENSOR_COMMTypeSupport TypeSupport;
    typedef SENSOR_COMMDataWriter DataWriter;
    typedef SENSOR_COMMDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  sensorid;

    LHZS::VRFORCE_ENTITY::COMM_PARAMETERS  comm_parameters;

    LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RW  comm_parameters_rw;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SENSOR_COMM_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SENSOR_COMMSeq, SENSOR_COMM);
        
NDDSUSERDllExport
RTIBool SENSOR_COMM_initialize(
        SENSOR_COMM* self);
        
NDDSUSERDllExport
RTIBool SENSOR_COMM_initialize_ex(
        SENSOR_COMM* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SENSOR_COMM_initialize_w_params(
        SENSOR_COMM* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SENSOR_COMM_finalize(
        SENSOR_COMM* self);
                        
NDDSUSERDllExport
void SENSOR_COMM_finalize_ex(
        SENSOR_COMM* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void SENSOR_COMM_finalize_w_params(
        SENSOR_COMM* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void SENSOR_COMM_finalize_optional_members(
        SENSOR_COMM* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool SENSOR_COMM_copy(
        SENSOR_COMM* dst,
        const SENSOR_COMM* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define LHZS_VRFORCE_ENTITY_SENSOR_JAM_LAST_MEMBER_ID 1
        
extern const char *SENSOR_JAMTYPENAME;
        


#ifdef __cplusplus
    struct SENSOR_JAMSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SENSOR_JAMTypeSupport;
    class SENSOR_JAMDataWriter;
    class SENSOR_JAMDataReader;
#endif

#endif

            
    
class SENSOR_JAM                                        
{
public:            
#ifdef __cplusplus
    typedef struct SENSOR_JAMSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SENSOR_JAMTypeSupport TypeSupport;
    typedef SENSOR_JAMDataWriter DataWriter;
    typedef SENSOR_JAMDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  sensorid;

    LHZS::VRFORCE_ENTITY::JAM_PARAMETERS  jam_parameters;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SENSOR_JAM_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SENSOR_JAMSeq, SENSOR_JAM);
        
NDDSUSERDllExport
RTIBool SENSOR_JAM_initialize(
        SENSOR_JAM* self);
        
NDDSUSERDllExport
RTIBool SENSOR_JAM_initialize_ex(
        SENSOR_JAM* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SENSOR_JAM_initialize_w_params(
        SENSOR_JAM* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SENSOR_JAM_finalize(
        SENSOR_JAM* self);
                        
NDDSUSERDllExport
void SENSOR_JAM_finalize_ex(
        SENSOR_JAM* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void SENSOR_JAM_finalize_w_params(
        SENSOR_JAM* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void SENSOR_JAM_finalize_optional_members(
        SENSOR_JAM* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool SENSOR_JAM_copy(
        SENSOR_JAM* dst,
        const SENSOR_JAM* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define LHZS_VRFORCE_ENTITY_SENSOR_INFRARED_LAST_MEMBER_ID 1
        
extern const char *SENSOR_INFRAREDTYPENAME;
        


#ifdef __cplusplus
    struct SENSOR_INFRAREDSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SENSOR_INFRAREDTypeSupport;
    class SENSOR_INFRAREDDataWriter;
    class SENSOR_INFRAREDDataReader;
#endif

#endif

            
    
class SENSOR_INFRARED                                        
{
public:            
#ifdef __cplusplus
    typedef struct SENSOR_INFRAREDSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SENSOR_INFRAREDTypeSupport TypeSupport;
    typedef SENSOR_INFRAREDDataWriter DataWriter;
    typedef SENSOR_INFRAREDDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  sensorid;

    DDS_Double  distance;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SENSOR_INFRARED_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SENSOR_INFRAREDSeq, SENSOR_INFRARED);
        
NDDSUSERDllExport
RTIBool SENSOR_INFRARED_initialize(
        SENSOR_INFRARED* self);
        
NDDSUSERDllExport
RTIBool SENSOR_INFRARED_initialize_ex(
        SENSOR_INFRARED* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SENSOR_INFRARED_initialize_w_params(
        SENSOR_INFRARED* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SENSOR_INFRARED_finalize(
        SENSOR_INFRARED* self);
                        
NDDSUSERDllExport
void SENSOR_INFRARED_finalize_ex(
        SENSOR_INFRARED* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void SENSOR_INFRARED_finalize_w_params(
        SENSOR_INFRARED* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void SENSOR_INFRARED_finalize_optional_members(
        SENSOR_INFRARED* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool SENSOR_INFRARED_copy(
        SENSOR_INFRARED* dst,
        const SENSOR_INFRARED* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define LHZS_VRFORCE_ENTITY_SENSOR_ESM_LAST_MEMBER_ID 1
        
extern const char *SENSOR_ESMTYPENAME;
        


#ifdef __cplusplus
    struct SENSOR_ESMSeq;

#ifndef NDDS_STANDALONE_TYPE
    class SENSOR_ESMTypeSupport;
    class SENSOR_ESMDataWriter;
    class SENSOR_ESMDataReader;
#endif

#endif

            
    
class SENSOR_ESM                                        
{
public:            
#ifdef __cplusplus
    typedef struct SENSOR_ESMSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef SENSOR_ESMTypeSupport TypeSupport;
    typedef SENSOR_ESMDataWriter DataWriter;
    typedef SENSOR_ESMDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  sensorid;

    DDS_Double  distance;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* SENSOR_ESM_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(SENSOR_ESMSeq, SENSOR_ESM);
        
NDDSUSERDllExport
RTIBool SENSOR_ESM_initialize(
        SENSOR_ESM* self);
        
NDDSUSERDllExport
RTIBool SENSOR_ESM_initialize_ex(
        SENSOR_ESM* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool SENSOR_ESM_initialize_w_params(
        SENSOR_ESM* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void SENSOR_ESM_finalize(
        SENSOR_ESM* self);
                        
NDDSUSERDllExport
void SENSOR_ESM_finalize_ex(
        SENSOR_ESM* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void SENSOR_ESM_finalize_w_params(
        SENSOR_ESM* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void SENSOR_ESM_finalize_optional_members(
        SENSOR_ESM* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool SENSOR_ESM_copy(
        SENSOR_ESM* dst,
        const SENSOR_ESM* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define LHZS_VRFORCE_ENTITY_ENTITYSTATE_REPORT_LAST_MEMBER_ID 33
        
extern const char *ENTITYSTATE_REPORTTYPENAME;
        


#ifdef __cplusplus
    struct ENTITYSTATE_REPORTSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ENTITYSTATE_REPORTTypeSupport;
    class ENTITYSTATE_REPORTDataWriter;
    class ENTITYSTATE_REPORTDataReader;
#endif

#endif

            
    
class ENTITYSTATE_REPORT                                        
{
public:            
#ifdef __cplusplus
    typedef struct ENTITYSTATE_REPORTSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ENTITYSTATE_REPORTTypeSupport TypeSupport;
    typedef ENTITYSTATE_REPORTDataWriter DataWriter;
    typedef ENTITYSTATE_REPORTDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  entityID;

    DDS_Char  entityName[32];

    DDS_UnsignedShort  entityIFFCode;

    DDS_UnsignedShort  entityClass;

    DDS_UnsignedShort  entityModel;

    DDS_Char  entityType[32];

    LHZS::VRFORCE_ENTITY::DATE_OF_DATA  dateOfUpdate;

    DDS_Long  timeOfUpdate;

    DDS_Long  damageState;

    DDS_Double  oil;

    DDS_Double  geodeticLocationLon;

    DDS_Double  geodeticLocationLat;

    DDS_Double  geodeticLocationAlt;

    DDS_Double  topographicVelocityX;

    DDS_Double  topographicVelocityY;

    DDS_Double  topographicVelocityZ;

    DDS_Double  topographicAccelerationX;

    DDS_Double  topographicAccelerationY;

    DDS_Double  topographicAccelerationZ;

    DDS_Double  topographicPsi;

    DDS_Double  topographicTheta;

    DDS_Double  topographicPhi;

    DDS_Double  rotationalVelocityX;

    DDS_Double  rotationalVelocityY;

    DDS_Double  rotationalVelocityZ;

    DDS_UnsignedShort  sizeOfGroup;

    DDS_UnsignedShort  platId;

    DDS_UnsignedShort  leaderId;

    DDS_UnsignedShort  C2Id;

    LHZS::VRFORCE_ENTITY::SENSOR_RADAR  sensor_radar;

    LHZS::VRFORCE_ENTITY::SENSOR_COMM  sensor_comm;

    LHZS::VRFORCE_ENTITY::SENSOR_JAM  sensor_jam;

    LHZS::VRFORCE_ENTITY::SENSOR_INFRARED  sensor_infrared;

    LHZS::VRFORCE_ENTITY::SENSOR_ESM  sensor_esm;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ENTITYSTATE_REPORT_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ENTITYSTATE_REPORTSeq, ENTITYSTATE_REPORT);
        
NDDSUSERDllExport
RTIBool ENTITYSTATE_REPORT_initialize(
        ENTITYSTATE_REPORT* self);
        
NDDSUSERDllExport
RTIBool ENTITYSTATE_REPORT_initialize_ex(
        ENTITYSTATE_REPORT* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ENTITYSTATE_REPORT_initialize_w_params(
        ENTITYSTATE_REPORT* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ENTITYSTATE_REPORT_finalize(
        ENTITYSTATE_REPORT* self);
                        
NDDSUSERDllExport
void ENTITYSTATE_REPORT_finalize_ex(
        ENTITYSTATE_REPORT* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void ENTITYSTATE_REPORT_finalize_w_params(
        ENTITYSTATE_REPORT* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void ENTITYSTATE_REPORT_finalize_optional_members(
        ENTITYSTATE_REPORT* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool ENTITYSTATE_REPORT_copy(
        ENTITYSTATE_REPORT* dst,
        const ENTITYSTATE_REPORT* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

             
static const char * ENTITYSTATE_REPORT_LIST_TOPIC = "LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST";
#define LHZS_VRFORCE_ENTITY_ENTITYSTATE_REPORT_LIST_LAST_MEMBER_ID 1
        
extern const char *ENTITYSTATE_REPORT_LISTTYPENAME;
        


#ifdef __cplusplus
    struct ENTITYSTATE_REPORT_LISTSeq;

#ifndef NDDS_STANDALONE_TYPE
    class ENTITYSTATE_REPORT_LISTTypeSupport;
    class ENTITYSTATE_REPORT_LISTDataWriter;
    class ENTITYSTATE_REPORT_LISTDataReader;
#endif

#endif

            
    
class ENTITYSTATE_REPORT_LIST                                        
{
public:            
#ifdef __cplusplus
    typedef struct ENTITYSTATE_REPORT_LISTSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef ENTITYSTATE_REPORT_LISTTypeSupport TypeSupport;
    typedef ENTITYSTATE_REPORT_LISTDataWriter DataWriter;
    typedef ENTITYSTATE_REPORT_LISTDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  entityNumber;

     LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq  entityList;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* ENTITYSTATE_REPORT_LIST_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(ENTITYSTATE_REPORT_LISTSeq, ENTITYSTATE_REPORT_LIST);
        
NDDSUSERDllExport
RTIBool ENTITYSTATE_REPORT_LIST_initialize(
        ENTITYSTATE_REPORT_LIST* self);
        
NDDSUSERDllExport
RTIBool ENTITYSTATE_REPORT_LIST_initialize_ex(
        ENTITYSTATE_REPORT_LIST* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool ENTITYSTATE_REPORT_LIST_initialize_w_params(
        ENTITYSTATE_REPORT_LIST* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void ENTITYSTATE_REPORT_LIST_finalize(
        ENTITYSTATE_REPORT_LIST* self);
                        
NDDSUSERDllExport
void ENTITYSTATE_REPORT_LIST_finalize_ex(
        ENTITYSTATE_REPORT_LIST* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void ENTITYSTATE_REPORT_LIST_finalize_w_params(
        ENTITYSTATE_REPORT_LIST* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void ENTITYSTATE_REPORT_LIST_finalize_optional_members(
        ENTITYSTATE_REPORT_LIST* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool ENTITYSTATE_REPORT_LIST_copy(
        ENTITYSTATE_REPORT_LIST* dst,
        const ENTITYSTATE_REPORT_LIST* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

             
static const char * UAV_ENTITYSTATE_REPORT_LIST_TOPIC = "LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST";
#define LHZS_VRFORCE_ENTITY_UAV_ENTITYSTATE_REPORT_LIST_LAST_MEMBER_ID 1
        
extern const char *UAV_ENTITYSTATE_REPORT_LISTTYPENAME;
        


#ifdef __cplusplus
    struct UAV_ENTITYSTATE_REPORT_LISTSeq;

#ifndef NDDS_STANDALONE_TYPE
    class UAV_ENTITYSTATE_REPORT_LISTTypeSupport;
    class UAV_ENTITYSTATE_REPORT_LISTDataWriter;
    class UAV_ENTITYSTATE_REPORT_LISTDataReader;
#endif

#endif

            
    
class UAV_ENTITYSTATE_REPORT_LIST                                        
{
public:            
#ifdef __cplusplus
    typedef struct UAV_ENTITYSTATE_REPORT_LISTSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef UAV_ENTITYSTATE_REPORT_LISTTypeSupport TypeSupport;
    typedef UAV_ENTITYSTATE_REPORT_LISTDataWriter DataWriter;
    typedef UAV_ENTITYSTATE_REPORT_LISTDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  entityNumber;

     LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTSeq  entityList;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* UAV_ENTITYSTATE_REPORT_LIST_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(UAV_ENTITYSTATE_REPORT_LISTSeq, UAV_ENTITYSTATE_REPORT_LIST);
        
NDDSUSERDllExport
RTIBool UAV_ENTITYSTATE_REPORT_LIST_initialize(
        UAV_ENTITYSTATE_REPORT_LIST* self);
        
NDDSUSERDllExport
RTIBool UAV_ENTITYSTATE_REPORT_LIST_initialize_ex(
        UAV_ENTITYSTATE_REPORT_LIST* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool UAV_ENTITYSTATE_REPORT_LIST_initialize_w_params(
        UAV_ENTITYSTATE_REPORT_LIST* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void UAV_ENTITYSTATE_REPORT_LIST_finalize(
        UAV_ENTITYSTATE_REPORT_LIST* self);
                        
NDDSUSERDllExport
void UAV_ENTITYSTATE_REPORT_LIST_finalize_ex(
        UAV_ENTITYSTATE_REPORT_LIST* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void UAV_ENTITYSTATE_REPORT_LIST_finalize_w_params(
        UAV_ENTITYSTATE_REPORT_LIST* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void UAV_ENTITYSTATE_REPORT_LIST_finalize_optional_members(
        UAV_ENTITYSTATE_REPORT_LIST* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool UAV_ENTITYSTATE_REPORT_LIST_copy(
        UAV_ENTITYSTATE_REPORT_LIST* dst,
        const UAV_ENTITYSTATE_REPORT_LIST* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace VRFORCE_ENTITY */

} /* namespace LHZS */


#endif /* lhzs_vrforce_entity_875776359_h */
