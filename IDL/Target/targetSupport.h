
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from target.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef targetSupport_485479119_h
#define targetSupport_485479119_h

/* Uses */
#include "target.h"



#ifdef __cplusplus
#ifndef ndds_cpp_h
  #include "ndds/ndds_cpp.h"
#endif
#else
#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
#endif
#endif


namespace LHZS{
        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(GEOGRAPHIC_POSITIONTypeSupport, GEOGRAPHIC_POSITION);

DDS_DATAWRITER_CPP(GEOGRAPHIC_POSITIONDataWriter, GEOGRAPHIC_POSITION);
DDS_DATAREADER_CPP(GEOGRAPHIC_POSITIONDataReader, GEOGRAPHIC_POSITIONSeq, GEOGRAPHIC_POSITION);


#else

DDS_TYPESUPPORT_C(GEOGRAPHIC_POSITIONTypeSupport, GEOGRAPHIC_POSITION);
DDS_DATAWRITER_C(GEOGRAPHIC_POSITIONDataWriter, GEOGRAPHIC_POSITION);
DDS_DATAREADER_C(GEOGRAPHIC_POSITIONDataReader, GEOGRAPHIC_POSITIONSeq, GEOGRAPHIC_POSITION);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(PLATFORM_VELOCITYTypeSupport, PLATFORM_VELOCITY);

DDS_DATAWRITER_CPP(PLATFORM_VELOCITYDataWriter, PLATFORM_VELOCITY);
DDS_DATAREADER_CPP(PLATFORM_VELOCITYDataReader, PLATFORM_VELOCITYSeq, PLATFORM_VELOCITY);


#else

DDS_TYPESUPPORT_C(PLATFORM_VELOCITYTypeSupport, PLATFORM_VELOCITY);
DDS_DATAWRITER_C(PLATFORM_VELOCITYDataWriter, PLATFORM_VELOCITY);
DDS_DATAREADER_C(PLATFORM_VELOCITYDataReader, PLATFORM_VELOCITYSeq, PLATFORM_VELOCITY);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(TARGET_ATTRIBUTE_DATATypeSupport, TARGET_ATTRIBUTE_DATA);

DDS_DATAWRITER_CPP(TARGET_ATTRIBUTE_DATADataWriter, TARGET_ATTRIBUTE_DATA);
DDS_DATAREADER_CPP(TARGET_ATTRIBUTE_DATADataReader, TARGET_ATTRIBUTE_DATASeq, TARGET_ATTRIBUTE_DATA);


#else

DDS_TYPESUPPORT_C(TARGET_ATTRIBUTE_DATATypeSupport, TARGET_ATTRIBUTE_DATA);
DDS_DATAWRITER_C(TARGET_ATTRIBUTE_DATADataWriter, TARGET_ATTRIBUTE_DATA);
DDS_DATAREADER_C(TARGET_ATTRIBUTE_DATADataReader, TARGET_ATTRIBUTE_DATASeq, TARGET_ATTRIBUTE_DATA);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus

DDS_TYPESUPPORT_CPP(SDI_TRACK_REPORTTypeSupport, SDI_TRACK_REPORT);

DDS_DATAWRITER_CPP(SDI_TRACK_REPORTDataWriter, SDI_TRACK_REPORT);
DDS_DATAREADER_CPP(SDI_TRACK_REPORTDataReader, SDI_TRACK_REPORTSeq, SDI_TRACK_REPORT);


#else

DDS_TYPESUPPORT_C(SDI_TRACK_REPORTTypeSupport, SDI_TRACK_REPORT);
DDS_DATAWRITER_C(SDI_TRACK_REPORTDataWriter, SDI_TRACK_REPORT);
DDS_DATAREADER_C(SDI_TRACK_REPORTDataReader, SDI_TRACK_REPORTSeq, SDI_TRACK_REPORT);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace LHZS */


#endif  /* targetSupport_485479119_h */
