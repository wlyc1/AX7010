/*
*********************************************************************************************************
*                                             uC/USB-Host
*                                     The Embedded USB Host Stack
*
*                          (c) Copyright 2004-2011; Micrium, Inc.; Weston, FL
*
*               All rights reserved.  Protected by international copyright laws.
*
*               uC/USB is provided in source form to registered licensees ONLY.  It is
*               illegal to distribute this source code to any third party unless you receive
*               written permission by an authorized Micrium representative.  Knowledge of
*               the source code may NOT be used to develop a similar product.
*
*               Please help us continue to provide the Embedded community with the finest
*               software available.  Your honesty is greatly appreciated.
*
*               You can contact us at www.micrium.com.
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                 HUMAN INTERFACE DEVICE CLASS PARSER
*
* File           : usbh_hidparser.h
* Version        : V3.41.03
* Programmer(s)  : JFD
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*/

#ifndef  USBH_HIDPARSER_MODULE_PRESENT
#define  USBH_HIDPARSER_MODULE_PRESENT


/*
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               EXTERNS
*********************************************************************************************************
*/

#ifdef   USBH_HIDPARSER_MODULE
#define  USBH_HIDPARSER_EXT
#else
#define  USBH_HIDPARSER_EXT   extern
#endif


/*
*********************************************************************************************************
*                                               DEFINES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                             DATA TYPES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                          GLOBAL VARIABLES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               MACROS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/

USBH_ERR             USBH_HID_ParserGlobalInit(void);

USBH_ERR             USBH_HID_ItemParser      (USBH_HID_DEV  *p_hid_dev,
                                               CPU_INT08U    *p_report_desc,
                                               CPU_INT32U     desc_len);

USBH_ERR             USBH_HID_CreateReportID  (USBH_HID_DEV  *p_hid_dev);

USBH_HID_REPORT_ID  *USBH_HID_MaxReport       (USBH_HID_DEV  *p_hid_dev,
                                               CPU_INT08U     type);


/*
*********************************************************************************************************
*                                        CONFIGURATION ERRORS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*/

#endif
