
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from lhzs-vrforce-command.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef lhzs_vrforce_command_1319407593_h
#define lhzs_vrforce_command_1319407593_h

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

namespace VRFORCE_COMMAND{

#define LHZS_VRFORCE_COMMAND_DATE_OF_DATA_LAST_MEMBER_ID 2
        
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


#define LHZS_VRFORCE_COMMAND_POS_DATA_LAST_MEMBER_ID 3
        
extern const char *POS_DATATYPENAME;
        


#ifdef __cplusplus
    struct POS_DATASeq;

#ifndef NDDS_STANDALONE_TYPE
    class POS_DATATypeSupport;
    class POS_DATADataWriter;
    class POS_DATADataReader;
#endif

#endif

            
    
class POS_DATA                                        
{
public:            
#ifdef __cplusplus
    typedef struct POS_DATASeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef POS_DATATypeSupport TypeSupport;
    typedef POS_DATADataWriter DataWriter;
    typedef POS_DATADataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  posId;

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

    
NDDSUSERDllExport DDS_TypeCode* POS_DATA_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(POS_DATASeq, POS_DATA);
        
NDDSUSERDllExport
RTIBool POS_DATA_initialize(
        POS_DATA* self);
        
NDDSUSERDllExport
RTIBool POS_DATA_initialize_ex(
        POS_DATA* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool POS_DATA_initialize_w_params(
        POS_DATA* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void POS_DATA_finalize(
        POS_DATA* self);
                        
NDDSUSERDllExport
void POS_DATA_finalize_ex(
        POS_DATA* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void POS_DATA_finalize_w_params(
        POS_DATA* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void POS_DATA_finalize_optional_members(
        POS_DATA* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool POS_DATA_copy(
        POS_DATA* dst,
        const POS_DATA* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


#define LHZS_VRFORCE_COMMAND_RADAR_PARAMETERS_LAST_MEMBER_ID 27
        
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

    DDS_UnsignedShort  Model;

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


#define LHZS_VRFORCE_COMMAND_COMM_PARAMETERS_LAST_MEMBER_ID 13
        
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

    DDS_UnsignedShort  Model;

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


#define LHZS_VRFORCE_COMMAND_JAM_PARAMETERS_LAST_MEMBER_ID 12
        
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

    DDS_UnsignedShort  Model;

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


#define LHZS_VRFORCE_COMMAND_WAVE_PARAMETER_RW_LAST_MEMBER_ID 22
        
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


#define LHZS_VRFORCE_COMMAND_COMM_PARAMETERS_RW_LAST_MEMBER_ID 5
        
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

     LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RWSeq  wave_parameter_rwList;

            
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


#define LHZS_VRFORCE_COMMAND_SENSOR_RADAR_LAST_MEMBER_ID 1
        
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

    LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS  radar_parameters;

            
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


#define LHZS_VRFORCE_COMMAND_SENSOR_COMM_LAST_MEMBER_ID 2
        
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

    LHZS::VRFORCE_COMMAND::COMM_PARAMETERS  comm_parameters;

    LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW  comm_parameters_rw;

            
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


#define LHZS_VRFORCE_COMMAND_SENSOR_JAM_LAST_MEMBER_ID 1
        
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

    LHZS::VRFORCE_COMMAND::JAM_PARAMETERS  jam_parameters;

            
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


#define LHZS_VRFORCE_COMMAND_SENSOR_INFRARED_LAST_MEMBER_ID 1
        
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
    
    DDS_Char  Name[32];

    DDS_UnsignedShort  Model;

            
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


#define LHZS_VRFORCE_COMMAND_SENSOR_ESM_LAST_MEMBER_ID 1
        
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
    
    DDS_Char  Name[32];

    DDS_UnsignedShort  Model;

            
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

             
static const char * MISSLE_REQ_TOPIC = "LHZS::VRFORCE_COMMAND::MISSLE_REQ";
#define LHZS_VRFORCE_COMMAND_MISSLE_REQ_LAST_MEMBER_ID 4
        
extern const char *MISSLE_REQTYPENAME;
        


#ifdef __cplusplus
    struct MISSLE_REQSeq;

#ifndef NDDS_STANDALONE_TYPE
    class MISSLE_REQTypeSupport;
    class MISSLE_REQDataWriter;
    class MISSLE_REQDataReader;
#endif

#endif

            
    
class MISSLE_REQ                                        
{
public:            
#ifdef __cplusplus
    typedef struct MISSLE_REQSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef MISSLE_REQTypeSupport TypeSupport;
    typedef MISSLE_REQDataWriter DataWriter;
    typedef MISSLE_REQDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  cmdId;

    DDS_UnsignedShort  sendId;

    DDS_UnsignedShort  targetId;

    LHZS::VRFORCE_COMMAND::DATE_OF_DATA  dateOfUpdate;

    DDS_Long  timeOfUpdate;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* MISSLE_REQ_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(MISSLE_REQSeq, MISSLE_REQ);
        
NDDSUSERDllExport
RTIBool MISSLE_REQ_initialize(
        MISSLE_REQ* self);
        
NDDSUSERDllExport
RTIBool MISSLE_REQ_initialize_ex(
        MISSLE_REQ* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool MISSLE_REQ_initialize_w_params(
        MISSLE_REQ* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void MISSLE_REQ_finalize(
        MISSLE_REQ* self);
                        
NDDSUSERDllExport
void MISSLE_REQ_finalize_ex(
        MISSLE_REQ* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void MISSLE_REQ_finalize_w_params(
        MISSLE_REQ* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void MISSLE_REQ_finalize_optional_members(
        MISSLE_REQ* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool MISSLE_REQ_copy(
        MISSLE_REQ* dst,
        const MISSLE_REQ* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

             
static const char * PATH_CHANGE_REQ_TOPIC = "LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ";
#define LHZS_VRFORCE_COMMAND_PATH_CHANGE_REQ_LAST_MEMBER_ID 4
        
extern const char *PATH_CHANGE_REQTYPENAME;
        


#ifdef __cplusplus
    struct PATH_CHANGE_REQSeq;

#ifndef NDDS_STANDALONE_TYPE
    class PATH_CHANGE_REQTypeSupport;
    class PATH_CHANGE_REQDataWriter;
    class PATH_CHANGE_REQDataReader;
#endif

#endif

            
    
class PATH_CHANGE_REQ                                        
{
public:            
#ifdef __cplusplus
    typedef struct PATH_CHANGE_REQSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef PATH_CHANGE_REQTypeSupport TypeSupport;
    typedef PATH_CHANGE_REQDataWriter DataWriter;
    typedef PATH_CHANGE_REQDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  cmdId;

    DDS_UnsignedShort  platId;

    LHZS::VRFORCE_COMMAND::DATE_OF_DATA  dateOfUpdate;

    DDS_Long  timeOfUpdate;

     LHZS::VRFORCE_COMMAND::POS_DATASeq  PosList;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* PATH_CHANGE_REQ_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(PATH_CHANGE_REQSeq, PATH_CHANGE_REQ);
        
NDDSUSERDllExport
RTIBool PATH_CHANGE_REQ_initialize(
        PATH_CHANGE_REQ* self);
        
NDDSUSERDllExport
RTIBool PATH_CHANGE_REQ_initialize_ex(
        PATH_CHANGE_REQ* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool PATH_CHANGE_REQ_initialize_w_params(
        PATH_CHANGE_REQ* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void PATH_CHANGE_REQ_finalize(
        PATH_CHANGE_REQ* self);
                        
NDDSUSERDllExport
void PATH_CHANGE_REQ_finalize_ex(
        PATH_CHANGE_REQ* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void PATH_CHANGE_REQ_finalize_w_params(
        PATH_CHANGE_REQ* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void PATH_CHANGE_REQ_finalize_optional_members(
        PATH_CHANGE_REQ* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool PATH_CHANGE_REQ_copy(
        PATH_CHANGE_REQ* dst,
        const PATH_CHANGE_REQ* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

             
static const char * CMD_ACK_TOPIC = "LHZS::VRFORCE_COMMAND::CMD_ACK";
#define LHZS_VRFORCE_COMMAND_CMD_ACK_LAST_MEMBER_ID 3
        
extern const char *CMD_ACKTYPENAME;
        


#ifdef __cplusplus
    struct CMD_ACKSeq;

#ifndef NDDS_STANDALONE_TYPE
    class CMD_ACKTypeSupport;
    class CMD_ACKDataWriter;
    class CMD_ACKDataReader;
#endif

#endif

            
    
class CMD_ACK                                        
{
public:            
#ifdef __cplusplus
    typedef struct CMD_ACKSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef CMD_ACKTypeSupport TypeSupport;
    typedef CMD_ACKDataWriter DataWriter;
    typedef CMD_ACKDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  cmdId;

    DDS_UnsignedShort  result;

    LHZS::VRFORCE_COMMAND::DATE_OF_DATA  dateOfUpdate;

    DDS_Long  timeOfUpdate;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* CMD_ACK_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(CMD_ACKSeq, CMD_ACK);
        
NDDSUSERDllExport
RTIBool CMD_ACK_initialize(
        CMD_ACK* self);
        
NDDSUSERDllExport
RTIBool CMD_ACK_initialize_ex(
        CMD_ACK* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool CMD_ACK_initialize_w_params(
        CMD_ACK* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void CMD_ACK_finalize(
        CMD_ACK* self);
                        
NDDSUSERDllExport
void CMD_ACK_finalize_ex(
        CMD_ACK* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void CMD_ACK_finalize_w_params(
        CMD_ACK* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void CMD_ACK_finalize_optional_members(
        CMD_ACK* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool CMD_ACK_copy(
        CMD_ACK* dst,
        const CMD_ACK* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

             
static const char * DELETE_ENTITY_REQ_TOPIC = "LHZS::VRFORCE_COMMAND::DELETE_ENTITY_REQ";
#define LHZS_VRFORCE_COMMAND_DELETE_ENTITY_REQ_LAST_MEMBER_ID 3
        
extern const char *DELETE_ENTITY_REQTYPENAME;
        


#ifdef __cplusplus
    struct DELETE_ENTITY_REQSeq;

#ifndef NDDS_STANDALONE_TYPE
    class DELETE_ENTITY_REQTypeSupport;
    class DELETE_ENTITY_REQDataWriter;
    class DELETE_ENTITY_REQDataReader;
#endif

#endif

            
    
class DELETE_ENTITY_REQ                                        
{
public:            
#ifdef __cplusplus
    typedef struct DELETE_ENTITY_REQSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef DELETE_ENTITY_REQTypeSupport TypeSupport;
    typedef DELETE_ENTITY_REQDataWriter DataWriter;
    typedef DELETE_ENTITY_REQDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  cmdId;

    DDS_UnsignedShort  platId;

    LHZS::VRFORCE_COMMAND::DATE_OF_DATA  dateOfUpdate;

    DDS_Long  timeOfUpdate;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* DELETE_ENTITY_REQ_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(DELETE_ENTITY_REQSeq, DELETE_ENTITY_REQ);
        
NDDSUSERDllExport
RTIBool DELETE_ENTITY_REQ_initialize(
        DELETE_ENTITY_REQ* self);
        
NDDSUSERDllExport
RTIBool DELETE_ENTITY_REQ_initialize_ex(
        DELETE_ENTITY_REQ* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool DELETE_ENTITY_REQ_initialize_w_params(
        DELETE_ENTITY_REQ* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void DELETE_ENTITY_REQ_finalize(
        DELETE_ENTITY_REQ* self);
                        
NDDSUSERDllExport
void DELETE_ENTITY_REQ_finalize_ex(
        DELETE_ENTITY_REQ* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void DELETE_ENTITY_REQ_finalize_w_params(
        DELETE_ENTITY_REQ* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void DELETE_ENTITY_REQ_finalize_optional_members(
        DELETE_ENTITY_REQ* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool DELETE_ENTITY_REQ_copy(
        DELETE_ENTITY_REQ* dst,
        const DELETE_ENTITY_REQ* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

             
static const char * CHANGE_SENSORS_REQ_TOPIC = "LHZS::VRFORCE_COMMAND::CHANGE_SENSORS_REQ";
#define LHZS_VRFORCE_COMMAND_CHANGE_SENSORS_REQ_LAST_MEMBER_ID 13
        
extern const char *CHANGE_SENSORS_REQTYPENAME;
        


#ifdef __cplusplus
    struct CHANGE_SENSORS_REQSeq;

#ifndef NDDS_STANDALONE_TYPE
    class CHANGE_SENSORS_REQTypeSupport;
    class CHANGE_SENSORS_REQDataWriter;
    class CHANGE_SENSORS_REQDataReader;
#endif

#endif

            
    
class CHANGE_SENSORS_REQ                                        
{
public:            
#ifdef __cplusplus
    typedef struct CHANGE_SENSORS_REQSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef CHANGE_SENSORS_REQTypeSupport TypeSupport;
    typedef CHANGE_SENSORS_REQDataWriter DataWriter;
    typedef CHANGE_SENSORS_REQDataReader DataReader;
#endif

#endif
    
    DDS_UnsignedShort  cmdId;

    DDS_UnsignedShort  platId;

    DDS_Boolean  RadarFlg;

    DDS_Boolean  CommFlg;

    DDS_Boolean  JamFlg;

    DDS_Boolean  InfraredFlg;

    DDS_Boolean  EsmFlg;

    LHZS::VRFORCE_COMMAND::SENSOR_RADAR  sensor_radar;

    LHZS::VRFORCE_COMMAND::SENSOR_COMM  sensor_comm;

    LHZS::VRFORCE_COMMAND::SENSOR_JAM  sensor_jam;

    LHZS::VRFORCE_COMMAND::SENSOR_INFRARED  sensor_infrared;

    LHZS::VRFORCE_COMMAND::SENSOR_ESM  sensor_esm;

    LHZS::VRFORCE_COMMAND::DATE_OF_DATA  dateOfUpdate;

    DDS_Long  timeOfUpdate;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* CHANGE_SENSORS_REQ_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(CHANGE_SENSORS_REQSeq, CHANGE_SENSORS_REQ);
        
NDDSUSERDllExport
RTIBool CHANGE_SENSORS_REQ_initialize(
        CHANGE_SENSORS_REQ* self);
        
NDDSUSERDllExport
RTIBool CHANGE_SENSORS_REQ_initialize_ex(
        CHANGE_SENSORS_REQ* self,
        RTIBool allocatePointers,RTIBool allocateMemory);
        
NDDSUSERDllExport
RTIBool CHANGE_SENSORS_REQ_initialize_w_params(
        CHANGE_SENSORS_REQ* self,
        const struct DDS_TypeAllocationParams_t * allocParams);

NDDSUSERDllExport
void CHANGE_SENSORS_REQ_finalize(
        CHANGE_SENSORS_REQ* self);
                        
NDDSUSERDllExport
void CHANGE_SENSORS_REQ_finalize_ex(
        CHANGE_SENSORS_REQ* self,RTIBool deletePointers);
       
NDDSUSERDllExport
void CHANGE_SENSORS_REQ_finalize_w_params(
        CHANGE_SENSORS_REQ* self,
        const struct DDS_TypeDeallocationParams_t * deallocParams);
        
NDDSUSERDllExport
void CHANGE_SENSORS_REQ_finalize_optional_members(
        CHANGE_SENSORS_REQ* self, RTIBool deletePointers);        
        
NDDSUSERDllExport
RTIBool CHANGE_SENSORS_REQ_copy(
        CHANGE_SENSORS_REQ* dst,
        const CHANGE_SENSORS_REQ* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace VRFORCE_COMMAND */

} /* namespace LHZS */


#endif /* lhzs_vrforce_command_1319407593_h */
