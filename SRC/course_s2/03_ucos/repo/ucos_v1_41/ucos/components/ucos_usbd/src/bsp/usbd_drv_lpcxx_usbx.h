/*
*********************************************************************************************************
*                                            uC/USB-Device
*                                       The Embedded USB Stack
*
*                         (c) Copyright 2004-2014; Micrium, Inc.; Weston, FL
*
*                  All rights reserved.  Protected by international copyright laws.
*
*                  uC/USB-Device is provided in source form to registered licensees ONLY.  It is
*                  illegal to distribute this source code to any third party unless you receive
*                  written permission by an authorized Micrium representative.  Knowledge of
*                  the source code may NOT be used to develop a similar product.
*
*                  Please help us continue to provide the Embedded community with the finest
*                  software available.  Your honesty is greatly appreciated.
*
*                  You can find our product's user manual, API reference, release notes and
*                  more information at: https://doc.micrium.com
*
*                  You can contact us at: http://www.micrium.com
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                          USB DEVICE DRIVER
*
*                                     NXP LPC313X/LPC18XX/LPC43XX
*
* File          : usbd_drv_lpcxx_usbx.h
* Version       : V4.04.01.01
* Programmer(s) : FF
*                 OD
*********************************************************************************************************
* Note(s)       : (1) You can find specific information about this driver at:
*                     https://doc.micrium.com/display/USBDDRV/LPCxx_USBx
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                               MODULE
*
* Note(s) : (1) This USB device driver function header file is protected from multiple pre-processor
*               inclusion through use of the USB device driver module present pre-processor macro
*               definition.
*********************************************************************************************************
*/

#ifndef  USBD_DRV_LPCXX_USBX_MODULE_PRESENT                        /* See Note #1.                                         */
#define  USBD_DRV_LPCXX_USBX_MODULE_PRESENT


/*
*********************************************************************************************************
*                                          USB DEVICE DRIVER
*********************************************************************************************************
*/

extern  USBD_DRV_API  USBD_DrvAPI_LPCXX_USBX;
extern  USBD_DRV_API  USBD_DrvAPI_Zynq;

/*
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*/

#endif
