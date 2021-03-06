/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Archie
 * @Date: 2020-05-23 09:18:13
 * @LastEditors: Archie
 * @LastEditTime: 2020-05-24 09:20:20
 */ 
/**
*   @file    CanIf_Types.h
*   @version 1.0.1
*
*   @brief   AUTOSAR CanIf - CanIf module interface
*   @details AUTOSAR CanIf module interface.- Stub Version
*   This file contains sample code only. It is not part of the production code deliverables.
*
*   @addtogroup CANIF_MODULE
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.3 MCAL
*   Platform             : ARM
*   Peripheral           : generic
*   Dependencies         : 
*
*   Autosar Version      : 4.3.1
*   Autosar Revision     : ASR_REL_4_3_REV_0001
*   Autosar Conf.Variant :
*   SW Version           : 1.0.1
*   Build Version        : S32K14x_MCAL_1_0_1_RTM_ASR_REL_4_3_REV_0001_20190621
*
*   (c) Copyright 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017-2019 NXP
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/
#ifndef CANIF_TYPES_H
#define CANIF_TYPES_H

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "ComStack_Types.h"
#include "Can_GeneralTypes.h"

/**
* @brief          CanIf_ControllerModeType
* @details        Operating modes of the CAN Controller and CAN Driver
*
*/
typedef enum
{
    CANIF_CS_UNINIT = 0U,    /**< @brief UNINIT mode */
    CANIF_CS_SLEEP,         /**< @brief SLEEP mode */
    CANIF_CS_STARTED,        /**< @brief STARTED mode */
    CANIF_CS_STOPPED        /**< @brief STOPPED mode */
} CanIf_ControllerModeType;

/**
* @brief          CanIf_PduModeType
* @details        PduMode of a channel defines its transmit or receive activety
*
*/
typedef enum
{
    CANIF_OFFLINE = 0U, /*No Communication Mode,Transmit and receive path of the corresponding channel are disabled */
    CANIF_TX_OFFLNE,    /*The receive path is enabled */
    CANIF_TX_OFFLINE_ACTIVE, /*The Transmit path ot the channel is in offline active mode,The receive path is disable */
    CANIF_ONLINE        /*Transmit and receive path of the corresponding channel are enable */
}CanIf_PduModeType;

/**
* @brief          CanIf_NotifStatusType
* @details        return value of CAN L-PDU notifacation status
*
*/
typedef enum
{
    CANIF_NO_NOTIFICATION = 0, /*No transmit or receive event occurred for the requested L-PDU*/
    CANIF_TX_RX_NOTIFICATION  /*The requested Rx/Tx CAN L-PDU was successfully transmitted or received */
}CanIf_NotifStatusType;


#ifdef __cplusplus
}
#endif

#endif 
