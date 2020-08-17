
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from lhzs-vrforce-entity.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#include "lhzs-vrforce-entitySupport.h"
#include "lhzs-vrforce-entityPlugin.h"



#ifdef __cplusplus  
    #ifndef dds_c_log_impl_h              
         #include "dds_c/dds_c_log_impl.h"                                
    #endif        
#endif        


namespace LHZS{

namespace VRFORCE_ENTITY{



/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'DATE_OF_DATA' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   DATE_OF_DATATYPENAME

/* Defines */
#define TDataWriter DATE_OF_DATADataWriter
#define TData       ::LHZS::VRFORCE_ENTITY::DATE_OF_DATA


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   DATE_OF_DATATYPENAME

/* Defines */
#define TDataReader DATE_OF_DATADataReader
#define TDataSeq    DATE_OF_DATASeq
#define TData       ::LHZS::VRFORCE_ENTITY::DATE_OF_DATA


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    DATE_OF_DATATYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_ENTITY::DATE_OF_DATAPlugin_delete

/* Defines */
#define TTypeSupport DATE_OF_DATATypeSupport
#define TData        ::LHZS::VRFORCE_ENTITY::DATE_OF_DATA
#define TDataReader  DATE_OF_DATADataReader
#define TDataWriter  DATE_OF_DATADataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'RADAR_PARAMETERS' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   RADAR_PARAMETERSTYPENAME

/* Defines */
#define TDataWriter RADAR_PARAMETERSDataWriter
#define TData       ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERS


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   RADAR_PARAMETERSTYPENAME

/* Defines */
#define TDataReader RADAR_PARAMETERSDataReader
#define TDataSeq    RADAR_PARAMETERSSeq
#define TData       ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERS


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    RADAR_PARAMETERSTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERSPlugin_delete

/* Defines */
#define TTypeSupport RADAR_PARAMETERSTypeSupport
#define TData        ::LHZS::VRFORCE_ENTITY::RADAR_PARAMETERS
#define TDataReader  RADAR_PARAMETERSDataReader
#define TDataWriter  RADAR_PARAMETERSDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'COMM_PARAMETERS' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   COMM_PARAMETERSTYPENAME

/* Defines */
#define TDataWriter COMM_PARAMETERSDataWriter
#define TData       ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   COMM_PARAMETERSTYPENAME

/* Defines */
#define TDataReader COMM_PARAMETERSDataReader
#define TDataSeq    COMM_PARAMETERSSeq
#define TData       ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    COMM_PARAMETERSTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERSPlugin_delete

/* Defines */
#define TTypeSupport COMM_PARAMETERSTypeSupport
#define TData        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS
#define TDataReader  COMM_PARAMETERSDataReader
#define TDataWriter  COMM_PARAMETERSDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'JAM_PARAMETERS' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   JAM_PARAMETERSTYPENAME

/* Defines */
#define TDataWriter JAM_PARAMETERSDataWriter
#define TData       ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERS


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   JAM_PARAMETERSTYPENAME

/* Defines */
#define TDataReader JAM_PARAMETERSDataReader
#define TDataSeq    JAM_PARAMETERSSeq
#define TData       ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERS


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    JAM_PARAMETERSTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERSPlugin_delete

/* Defines */
#define TTypeSupport JAM_PARAMETERSTypeSupport
#define TData        ::LHZS::VRFORCE_ENTITY::JAM_PARAMETERS
#define TDataReader  JAM_PARAMETERSDataReader
#define TDataWriter  JAM_PARAMETERSDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'WAVE_PARAMETER_RW' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   WAVE_PARAMETER_RWTYPENAME

/* Defines */
#define TDataWriter WAVE_PARAMETER_RWDataWriter
#define TData       ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RW


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   WAVE_PARAMETER_RWTYPENAME

/* Defines */
#define TDataReader WAVE_PARAMETER_RWDataReader
#define TDataSeq    WAVE_PARAMETER_RWSeq
#define TData       ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RW


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    WAVE_PARAMETER_RWTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RWPlugin_delete

/* Defines */
#define TTypeSupport WAVE_PARAMETER_RWTypeSupport
#define TData        ::LHZS::VRFORCE_ENTITY::WAVE_PARAMETER_RW
#define TDataReader  WAVE_PARAMETER_RWDataReader
#define TDataWriter  WAVE_PARAMETER_RWDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'COMM_PARAMETERS_RW' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   COMM_PARAMETERS_RWTYPENAME

/* Defines */
#define TDataWriter COMM_PARAMETERS_RWDataWriter
#define TData       ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RW


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   COMM_PARAMETERS_RWTYPENAME

/* Defines */
#define TDataReader COMM_PARAMETERS_RWDataReader
#define TDataSeq    COMM_PARAMETERS_RWSeq
#define TData       ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RW


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    COMM_PARAMETERS_RWTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RWPlugin_delete

/* Defines */
#define TTypeSupport COMM_PARAMETERS_RWTypeSupport
#define TData        ::LHZS::VRFORCE_ENTITY::COMM_PARAMETERS_RW
#define TDataReader  COMM_PARAMETERS_RWDataReader
#define TDataWriter  COMM_PARAMETERS_RWDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'SENSOR_RADAR' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   SENSOR_RADARTYPENAME

/* Defines */
#define TDataWriter SENSOR_RADARDataWriter
#define TData       ::LHZS::VRFORCE_ENTITY::SENSOR_RADAR


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   SENSOR_RADARTYPENAME

/* Defines */
#define TDataReader SENSOR_RADARDataReader
#define TDataSeq    SENSOR_RADARSeq
#define TData       ::LHZS::VRFORCE_ENTITY::SENSOR_RADAR


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    SENSOR_RADARTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_ENTITY::SENSOR_RADARPlugin_delete

/* Defines */
#define TTypeSupport SENSOR_RADARTypeSupport
#define TData        ::LHZS::VRFORCE_ENTITY::SENSOR_RADAR
#define TDataReader  SENSOR_RADARDataReader
#define TDataWriter  SENSOR_RADARDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'SENSOR_COMM' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   SENSOR_COMMTYPENAME

/* Defines */
#define TDataWriter SENSOR_COMMDataWriter
#define TData       ::LHZS::VRFORCE_ENTITY::SENSOR_COMM


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   SENSOR_COMMTYPENAME

/* Defines */
#define TDataReader SENSOR_COMMDataReader
#define TDataSeq    SENSOR_COMMSeq
#define TData       ::LHZS::VRFORCE_ENTITY::SENSOR_COMM


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    SENSOR_COMMTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_ENTITY::SENSOR_COMMPlugin_delete

/* Defines */
#define TTypeSupport SENSOR_COMMTypeSupport
#define TData        ::LHZS::VRFORCE_ENTITY::SENSOR_COMM
#define TDataReader  SENSOR_COMMDataReader
#define TDataWriter  SENSOR_COMMDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'SENSOR_JAM' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   SENSOR_JAMTYPENAME

/* Defines */
#define TDataWriter SENSOR_JAMDataWriter
#define TData       ::LHZS::VRFORCE_ENTITY::SENSOR_JAM


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   SENSOR_JAMTYPENAME

/* Defines */
#define TDataReader SENSOR_JAMDataReader
#define TDataSeq    SENSOR_JAMSeq
#define TData       ::LHZS::VRFORCE_ENTITY::SENSOR_JAM


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    SENSOR_JAMTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_ENTITY::SENSOR_JAMPlugin_delete

/* Defines */
#define TTypeSupport SENSOR_JAMTypeSupport
#define TData        ::LHZS::VRFORCE_ENTITY::SENSOR_JAM
#define TDataReader  SENSOR_JAMDataReader
#define TDataWriter  SENSOR_JAMDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'SENSOR_INFRARED' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   SENSOR_INFRAREDTYPENAME

/* Defines */
#define TDataWriter SENSOR_INFRAREDDataWriter
#define TData       ::LHZS::VRFORCE_ENTITY::SENSOR_INFRARED


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   SENSOR_INFRAREDTYPENAME

/* Defines */
#define TDataReader SENSOR_INFRAREDDataReader
#define TDataSeq    SENSOR_INFRAREDSeq
#define TData       ::LHZS::VRFORCE_ENTITY::SENSOR_INFRARED


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    SENSOR_INFRAREDTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_ENTITY::SENSOR_INFRAREDPlugin_delete

/* Defines */
#define TTypeSupport SENSOR_INFRAREDTypeSupport
#define TData        ::LHZS::VRFORCE_ENTITY::SENSOR_INFRARED
#define TDataReader  SENSOR_INFRAREDDataReader
#define TDataWriter  SENSOR_INFRAREDDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'SENSOR_ESM' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   SENSOR_ESMTYPENAME

/* Defines */
#define TDataWriter SENSOR_ESMDataWriter
#define TData       ::LHZS::VRFORCE_ENTITY::SENSOR_ESM


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   SENSOR_ESMTYPENAME

/* Defines */
#define TDataReader SENSOR_ESMDataReader
#define TDataSeq    SENSOR_ESMSeq
#define TData       ::LHZS::VRFORCE_ENTITY::SENSOR_ESM


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    SENSOR_ESMTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_ENTITY::SENSOR_ESMPlugin_delete

/* Defines */
#define TTypeSupport SENSOR_ESMTypeSupport
#define TData        ::LHZS::VRFORCE_ENTITY::SENSOR_ESM
#define TDataReader  SENSOR_ESMDataReader
#define TDataWriter  SENSOR_ESMDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'ENTITYSTATE_REPORT' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   ENTITYSTATE_REPORTTYPENAME

/* Defines */
#define TDataWriter ENTITYSTATE_REPORTDataWriter
#define TData       ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   ENTITYSTATE_REPORTTYPENAME

/* Defines */
#define TDataReader ENTITYSTATE_REPORTDataReader
#define TDataSeq    ENTITYSTATE_REPORTSeq
#define TData       ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    ENTITYSTATE_REPORTTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORTPlugin_delete

/* Defines */
#define TTypeSupport ENTITYSTATE_REPORTTypeSupport
#define TData        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT
#define TDataReader  ENTITYSTATE_REPORTDataReader
#define TDataWriter  ENTITYSTATE_REPORTDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'ENTITYSTATE_REPORT_LIST' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   ENTITYSTATE_REPORT_LISTTYPENAME

/* Defines */
#define TDataWriter ENTITYSTATE_REPORT_LISTDataWriter
#define TData       ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   ENTITYSTATE_REPORT_LISTTYPENAME

/* Defines */
#define TDataReader ENTITYSTATE_REPORT_LISTDataReader
#define TDataSeq    ENTITYSTATE_REPORT_LISTSeq
#define TData       ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    ENTITYSTATE_REPORT_LISTTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LISTPlugin_delete

/* Defines */
#define TTypeSupport ENTITYSTATE_REPORT_LISTTypeSupport
#define TData        ::LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT_LIST
#define TDataReader  ENTITYSTATE_REPORT_LISTDataReader
#define TDataWriter  ENTITYSTATE_REPORT_LISTDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'UAV_ENTITYSTATE_REPORT_LIST' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   UAV_ENTITYSTATE_REPORT_LISTTYPENAME

/* Defines */
#define TDataWriter UAV_ENTITYSTATE_REPORT_LISTDataWriter
#define TData       ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   UAV_ENTITYSTATE_REPORT_LISTTYPENAME

/* Defines */
#define TDataReader UAV_ENTITYSTATE_REPORT_LISTDataReader
#define TDataSeq    UAV_ENTITYSTATE_REPORT_LISTSeq
#define TData       ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    UAV_ENTITYSTATE_REPORT_LISTTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LISTPlugin_delete

/* Defines */
#define TTypeSupport UAV_ENTITYSTATE_REPORT_LISTTypeSupport
#define TData        ::LHZS::VRFORCE_ENTITY::UAV_ENTITYSTATE_REPORT_LIST
#define TDataReader  UAV_ENTITYSTATE_REPORT_LISTDataReader
#define TDataWriter  UAV_ENTITYSTATE_REPORT_LISTDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete



} /* namespace VRFORCE_ENTITY */

} /* namespace LHZS */
