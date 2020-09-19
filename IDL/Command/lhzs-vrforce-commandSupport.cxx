
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from lhzs-vrforce-command.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#include "lhzs-vrforce-commandSupport.h"
#include "lhzs-vrforce-commandPlugin.h"



#ifdef __cplusplus  
    #ifndef dds_c_log_impl_h              
         #include "dds_c/dds_c_log_impl.h"                                
    #endif        
#endif        


namespace LHZS{

namespace VRFORCE_COMMAND{



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
#define TData       ::LHZS::VRFORCE_COMMAND::DATE_OF_DATA


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
#define TData       ::LHZS::VRFORCE_COMMAND::DATE_OF_DATA


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
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::DATE_OF_DATAPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::DATE_OF_DATAPlugin_delete

/* Defines */
#define TTypeSupport DATE_OF_DATATypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::DATE_OF_DATA
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

   Configure and implement 'POS_DATA' support classes.

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
#define TTYPENAME   POS_DATATYPENAME

/* Defines */
#define TDataWriter POS_DATADataWriter
#define TData       ::LHZS::VRFORCE_COMMAND::POS_DATA


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
#define TTYPENAME   POS_DATATYPENAME

/* Defines */
#define TDataReader POS_DATADataReader
#define TDataSeq    POS_DATASeq
#define TData       ::LHZS::VRFORCE_COMMAND::POS_DATA


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
#define TTYPENAME    POS_DATATYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::POS_DATAPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::POS_DATAPlugin_delete

/* Defines */
#define TTypeSupport POS_DATATypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::POS_DATA
#define TDataReader  POS_DATADataReader
#define TDataWriter  POS_DATADataWriter
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
#define TData       ::LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS


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
#define TData       ::LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS


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
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::RADAR_PARAMETERSPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::RADAR_PARAMETERSPlugin_delete

/* Defines */
#define TTypeSupport RADAR_PARAMETERSTypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::RADAR_PARAMETERS
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
#define TData       ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS


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
#define TData       ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS


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
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERSPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERSPlugin_delete

/* Defines */
#define TTypeSupport COMM_PARAMETERSTypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS
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
#define TData       ::LHZS::VRFORCE_COMMAND::JAM_PARAMETERS


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
#define TData       ::LHZS::VRFORCE_COMMAND::JAM_PARAMETERS


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
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::JAM_PARAMETERSPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::JAM_PARAMETERSPlugin_delete

/* Defines */
#define TTypeSupport JAM_PARAMETERSTypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::JAM_PARAMETERS
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
#define TData       ::LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RW


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
#define TData       ::LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RW


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
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RWPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RWPlugin_delete

/* Defines */
#define TTypeSupport WAVE_PARAMETER_RWTypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::WAVE_PARAMETER_RW
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
#define TData       ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW


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
#define TData       ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW


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
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RWPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RWPlugin_delete

/* Defines */
#define TTypeSupport COMM_PARAMETERS_RWTypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::COMM_PARAMETERS_RW
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
#define TData       ::LHZS::VRFORCE_COMMAND::SENSOR_RADAR


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
#define TData       ::LHZS::VRFORCE_COMMAND::SENSOR_RADAR


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
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::SENSOR_RADARPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::SENSOR_RADARPlugin_delete

/* Defines */
#define TTypeSupport SENSOR_RADARTypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::SENSOR_RADAR
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
#define TData       ::LHZS::VRFORCE_COMMAND::SENSOR_COMM


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
#define TData       ::LHZS::VRFORCE_COMMAND::SENSOR_COMM


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
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::SENSOR_COMMPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::SENSOR_COMMPlugin_delete

/* Defines */
#define TTypeSupport SENSOR_COMMTypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::SENSOR_COMM
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
#define TData       ::LHZS::VRFORCE_COMMAND::SENSOR_JAM


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
#define TData       ::LHZS::VRFORCE_COMMAND::SENSOR_JAM


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
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::SENSOR_JAMPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::SENSOR_JAMPlugin_delete

/* Defines */
#define TTypeSupport SENSOR_JAMTypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::SENSOR_JAM
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
#define TData       ::LHZS::VRFORCE_COMMAND::SENSOR_INFRARED


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
#define TData       ::LHZS::VRFORCE_COMMAND::SENSOR_INFRARED


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
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::SENSOR_INFRAREDPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::SENSOR_INFRAREDPlugin_delete

/* Defines */
#define TTypeSupport SENSOR_INFRAREDTypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::SENSOR_INFRARED
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
#define TData       ::LHZS::VRFORCE_COMMAND::SENSOR_ESM


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
#define TData       ::LHZS::VRFORCE_COMMAND::SENSOR_ESM


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
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::SENSOR_ESMPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::SENSOR_ESMPlugin_delete

/* Defines */
#define TTypeSupport SENSOR_ESMTypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::SENSOR_ESM
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

   Configure and implement 'MISSLE_REQ' support classes.

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
#define TTYPENAME   MISSLE_REQTYPENAME

/* Defines */
#define TDataWriter MISSLE_REQDataWriter
#define TData       ::LHZS::VRFORCE_COMMAND::MISSLE_REQ


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
#define TTYPENAME   MISSLE_REQTYPENAME

/* Defines */
#define TDataReader MISSLE_REQDataReader
#define TDataSeq    MISSLE_REQSeq
#define TData       ::LHZS::VRFORCE_COMMAND::MISSLE_REQ


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
#define TTYPENAME    MISSLE_REQTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::MISSLE_REQPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::MISSLE_REQPlugin_delete

/* Defines */
#define TTypeSupport MISSLE_REQTypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::MISSLE_REQ
#define TDataReader  MISSLE_REQDataReader
#define TDataWriter  MISSLE_REQDataWriter
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

   Configure and implement 'PATH_CHANGE_REQ' support classes.

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
#define TTYPENAME   PATH_CHANGE_REQTYPENAME

/* Defines */
#define TDataWriter PATH_CHANGE_REQDataWriter
#define TData       ::LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ


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
#define TTYPENAME   PATH_CHANGE_REQTYPENAME

/* Defines */
#define TDataReader PATH_CHANGE_REQDataReader
#define TDataSeq    PATH_CHANGE_REQSeq
#define TData       ::LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ


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
#define TTYPENAME    PATH_CHANGE_REQTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQPlugin_delete

/* Defines */
#define TTypeSupport PATH_CHANGE_REQTypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::PATH_CHANGE_REQ
#define TDataReader  PATH_CHANGE_REQDataReader
#define TDataWriter  PATH_CHANGE_REQDataWriter
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

   Configure and implement 'CMD_ACK' support classes.

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
#define TTYPENAME   CMD_ACKTYPENAME

/* Defines */
#define TDataWriter CMD_ACKDataWriter
#define TData       ::LHZS::VRFORCE_COMMAND::CMD_ACK


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
#define TTYPENAME   CMD_ACKTYPENAME

/* Defines */
#define TDataReader CMD_ACKDataReader
#define TDataSeq    CMD_ACKSeq
#define TData       ::LHZS::VRFORCE_COMMAND::CMD_ACK


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
#define TTYPENAME    CMD_ACKTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::CMD_ACKPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::CMD_ACKPlugin_delete

/* Defines */
#define TTypeSupport CMD_ACKTypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::CMD_ACK
#define TDataReader  CMD_ACKDataReader
#define TDataWriter  CMD_ACKDataWriter
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

   Configure and implement 'DELETE_ENTITY_REQ' support classes.

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
#define TTYPENAME   DELETE_ENTITY_REQTYPENAME

/* Defines */
#define TDataWriter DELETE_ENTITY_REQDataWriter
#define TData       ::LHZS::VRFORCE_COMMAND::DELETE_ENTITY_REQ


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
#define TTYPENAME   DELETE_ENTITY_REQTYPENAME

/* Defines */
#define TDataReader DELETE_ENTITY_REQDataReader
#define TDataSeq    DELETE_ENTITY_REQSeq
#define TData       ::LHZS::VRFORCE_COMMAND::DELETE_ENTITY_REQ


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
#define TTYPENAME    DELETE_ENTITY_REQTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::DELETE_ENTITY_REQPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::DELETE_ENTITY_REQPlugin_delete

/* Defines */
#define TTypeSupport DELETE_ENTITY_REQTypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::DELETE_ENTITY_REQ
#define TDataReader  DELETE_ENTITY_REQDataReader
#define TDataWriter  DELETE_ENTITY_REQDataWriter
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

   Configure and implement 'CHANGE_SENSORS_REQ' support classes.

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
#define TTYPENAME   CHANGE_SENSORS_REQTYPENAME

/* Defines */
#define TDataWriter CHANGE_SENSORS_REQDataWriter
#define TData       ::LHZS::VRFORCE_COMMAND::CHANGE_SENSORS_REQ


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
#define TTYPENAME   CHANGE_SENSORS_REQTYPENAME

/* Defines */
#define TDataReader CHANGE_SENSORS_REQDataReader
#define TDataSeq    CHANGE_SENSORS_REQSeq
#define TData       ::LHZS::VRFORCE_COMMAND::CHANGE_SENSORS_REQ


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
#define TTYPENAME    CHANGE_SENSORS_REQTYPENAME
#define TPlugin_new  ::LHZS::VRFORCE_COMMAND::CHANGE_SENSORS_REQPlugin_new
#define TPlugin_delete  ::LHZS::VRFORCE_COMMAND::CHANGE_SENSORS_REQPlugin_delete

/* Defines */
#define TTypeSupport CHANGE_SENSORS_REQTypeSupport
#define TData        ::LHZS::VRFORCE_COMMAND::CHANGE_SENSORS_REQ
#define TDataReader  CHANGE_SENSORS_REQDataReader
#define TDataWriter  CHANGE_SENSORS_REQDataWriter
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



} /* namespace VRFORCE_COMMAND */

} /* namespace LHZS */
