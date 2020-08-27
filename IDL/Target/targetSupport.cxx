
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from target.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#include "targetSupport.h"
#include "targetPlugin.h"



#ifdef __cplusplus  
    #ifndef dds_c_log_impl_h              
         #include "dds_c/dds_c_log_impl.h"                                
    #endif        
#endif        


namespace LHZS{



/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'GEOGRAPHIC_POSITION' support classes.

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
#define TTYPENAME   GEOGRAPHIC_POSITIONTYPENAME

/* Defines */
#define TDataWriter GEOGRAPHIC_POSITIONDataWriter
#define TData       ::LHZS::GEOGRAPHIC_POSITION


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
#define TTYPENAME   GEOGRAPHIC_POSITIONTYPENAME

/* Defines */
#define TDataReader GEOGRAPHIC_POSITIONDataReader
#define TDataSeq    GEOGRAPHIC_POSITIONSeq
#define TData       ::LHZS::GEOGRAPHIC_POSITION


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
#define TTYPENAME    GEOGRAPHIC_POSITIONTYPENAME
#define TPlugin_new  ::LHZS::GEOGRAPHIC_POSITIONPlugin_new
#define TPlugin_delete  ::LHZS::GEOGRAPHIC_POSITIONPlugin_delete

/* Defines */
#define TTypeSupport GEOGRAPHIC_POSITIONTypeSupport
#define TData        ::LHZS::GEOGRAPHIC_POSITION
#define TDataReader  GEOGRAPHIC_POSITIONDataReader
#define TDataWriter  GEOGRAPHIC_POSITIONDataWriter
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

   Configure and implement 'PLATFORM_VELOCITY' support classes.

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
#define TTYPENAME   PLATFORM_VELOCITYTYPENAME

/* Defines */
#define TDataWriter PLATFORM_VELOCITYDataWriter
#define TData       ::LHZS::PLATFORM_VELOCITY


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
#define TTYPENAME   PLATFORM_VELOCITYTYPENAME

/* Defines */
#define TDataReader PLATFORM_VELOCITYDataReader
#define TDataSeq    PLATFORM_VELOCITYSeq
#define TData       ::LHZS::PLATFORM_VELOCITY


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
#define TTYPENAME    PLATFORM_VELOCITYTYPENAME
#define TPlugin_new  ::LHZS::PLATFORM_VELOCITYPlugin_new
#define TPlugin_delete  ::LHZS::PLATFORM_VELOCITYPlugin_delete

/* Defines */
#define TTypeSupport PLATFORM_VELOCITYTypeSupport
#define TData        ::LHZS::PLATFORM_VELOCITY
#define TDataReader  PLATFORM_VELOCITYDataReader
#define TDataWriter  PLATFORM_VELOCITYDataWriter
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

   Configure and implement 'TARGET_ATTRIBUTE_DATA' support classes.

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
#define TTYPENAME   TARGET_ATTRIBUTE_DATATYPENAME

/* Defines */
#define TDataWriter TARGET_ATTRIBUTE_DATADataWriter
#define TData       ::LHZS::TARGET_ATTRIBUTE_DATA


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
#define TTYPENAME   TARGET_ATTRIBUTE_DATATYPENAME

/* Defines */
#define TDataReader TARGET_ATTRIBUTE_DATADataReader
#define TDataSeq    TARGET_ATTRIBUTE_DATASeq
#define TData       ::LHZS::TARGET_ATTRIBUTE_DATA


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
#define TTYPENAME    TARGET_ATTRIBUTE_DATATYPENAME
#define TPlugin_new  ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_new
#define TPlugin_delete  ::LHZS::TARGET_ATTRIBUTE_DATAPlugin_delete

/* Defines */
#define TTypeSupport TARGET_ATTRIBUTE_DATATypeSupport
#define TData        ::LHZS::TARGET_ATTRIBUTE_DATA
#define TDataReader  TARGET_ATTRIBUTE_DATADataReader
#define TDataWriter  TARGET_ATTRIBUTE_DATADataWriter
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

   Configure and implement 'SDI_TRACK_REPORT' support classes.

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
#define TTYPENAME   SDI_TRACK_REPORTTYPENAME

/* Defines */
#define TDataWriter SDI_TRACK_REPORTDataWriter
#define TData       ::LHZS::SDI_TRACK_REPORT


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
#define TTYPENAME   SDI_TRACK_REPORTTYPENAME

/* Defines */
#define TDataReader SDI_TRACK_REPORTDataReader
#define TDataSeq    SDI_TRACK_REPORTSeq
#define TData       ::LHZS::SDI_TRACK_REPORT


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
#define TTYPENAME    SDI_TRACK_REPORTTYPENAME
#define TPlugin_new  ::LHZS::SDI_TRACK_REPORTPlugin_new
#define TPlugin_delete  ::LHZS::SDI_TRACK_REPORTPlugin_delete

/* Defines */
#define TTypeSupport SDI_TRACK_REPORTTypeSupport
#define TData        ::LHZS::SDI_TRACK_REPORT
#define TDataReader  SDI_TRACK_REPORTDataReader
#define TDataWriter  SDI_TRACK_REPORTDataWriter
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



} /* namespace LHZS */
