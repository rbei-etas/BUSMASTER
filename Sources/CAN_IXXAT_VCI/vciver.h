// generated by NAnt buildscript
    

#ifndef _VCIVER_H_
#define _VCIVER_H_

  // macro to convert version number to text
  #define VCI_VERSION_ASTEXT2(x)     #x
  #define VCI_VERSION_ASTEXT(x) VCI_VERSION_ASTEXT2(x)

/*****************************************************************************
 * VCI version number
 ****************************************************************************/
   // Major version number
  #define VCI_A_VERSION      3
  #define VCI_A_VERSION_STR  VCI_VERSION_ASTEXT(VCI_A_VERSION)

  // Minor version number
  #define VCI_B_VERSION      5
  #define VCI_B_VERSION_STR  VCI_VERSION_ASTEXT(VCI_B_VERSION)

  // Revision number
  #define VCI_C_VERSION      1
  #define VCI_C_VERSION_STR  VCI_VERSION_ASTEXT(VCI_C_VERSION)
  
  // Build number
  #define VCI_D_VERSION      3826
  #define VCI_D_VERSION_STR  VCI_VERSION_ASTEXT(VCI_D_VERSION)
  
  // debug/release
  //
  #ifdef _DEBUG
    #define VCI_VI_BUILDTYPE_STR   "debug"
  #else
    #define VCI_VI_BUILDTYPE_STR   "release"
  #endif

/*****************************************************************************
 * VCI version information
 ****************************************************************************/
  #define VCI_VI_COPYRIGHT_STR     "Copyright 2005-2012 IXXAT Automation GmbH, all rights reserved"  
  #define VCI_VI_COMPANY_NAME_STR  "IXXAT Automation GmbH"
  #define VCI_VI_PRODUCT_NAME_STR  "VCI 3"     
  #define VCI_VI_SPECIALBUILD_STR  ""  

  #define VCI_VI_PRODUCT_VERS      VCI_A_VERSION, VCI_B_VERSION, VCI_C_VERSION, VCI_D_VERSION
  #define VCI_VI_PRODUCT_VERS_STR  VCI_VERSION_ASTEXT(VCI_VI_PRODUCT_VERS)
  #define VCI_VI_FILE_VERS_EXT     VCI_C_VERSION, VCI_D_VERSION
#endif
    
