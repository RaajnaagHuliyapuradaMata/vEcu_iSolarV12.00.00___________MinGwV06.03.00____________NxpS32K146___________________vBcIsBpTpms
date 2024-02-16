/* -----------------------------------------------------------------------------
  Filename:    ComStack_Types.h
  Description: Toolversion: 19.00.32.01.50.01.22.00.00.00
               
               Serial Number: CBD1500122
               Customer Info: Huf Electronics Bretten GmbH
                              Package: MSR Daimler SLP10
                              Micro: R7F7010133AFP
                              Compiler: Green Hills 6.1.4
               
               
               Generator Fwk   : GENy 
               Generator Module: GenTool_GenyComStackTypes
               
               Configuration   : C:\_TSS\DAG\MFA2\Target\Config\ECUC\HufTPMS_G6_F1L.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Rh850Cpu
                       Compiler:     GreenHills
                       Derivates:    F1L
               
               Channel "HMI":
                       Databasefile: 
                       Bussystem:    CAN
                       Manufacturer: DaimlerChrysler
                       Node:         CanStateManagerConfiguration

 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2015 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(__COMSTACK_TYPES_H__)
#define __COMSTACK_TYPES_H__

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

# include "Std_Types.h"
 
/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* ##V_CFG_MANAGEMENT ##CQProject : CommonAsr__Common CQComponent : Impl_ComStackTypes */
# define COMMONASR__COMMON_IMPL_COMSTACKTYPES_VERSION 0x0305
# define COMMONASR__COMMON_IMPL_COMSTACKTYPES_RELEASE_VERSION 0x01
 
/* AUTOSAR Software Specification Version Information */
/* AUTOSAR Document version 2.2.1 part of release 3.0.0 */
#  define COMSTACKTYPE_AR_MAJOR_VERSION       (2u)
#  define COMSTACKTYPE_AR_MINOR_VERSION       (2u)
#  define COMSTACKTYPE_AR_PATCH_VERSION       (1u)

/* Component Version Information */
# define COMSTACKTYPE_SW_MAJOR_VERSION       (3u)
# define COMSTACKTYPE_SW_MINOR_VERSION       (5u)
# define COMSTACKTYPE_SW_PATCH_VERSION       (1u)

# define COMSTACKTYPE_VENDOR_ID              (30u)

/*General return codes for NotifResultType*/
 
# define NTFRSLT_OK                        0x00  /*Action has been successfully finished:
                                                          - message sent out (in case of confirmation),
                                                          - message received (in case of indication) */
# define NTFRSLT_E_NOT_OK                  0x01  /*Error notification:
                                                          - message not successfully sent out (in case of confirmation),
                                                          - message not successfully received (in case of indication) */
# define NTFRSLT_E_TIMEOUT_A               0x02  /*Error notification:
                                                          - timer N_Ar/N_As (according to ISO specification [ISONM]) has passed its time-out value N_Asmax/N_Armax.
                                                       This value can be issued to service user on both the sender and receiver side. */
# define NTFRSLT_E_TIMEOUT_BS              0x03  /*Error notification:
                                                          - timer N_Bs has passed its time-out value N_Bsmax (according to ISO specification [ISONM]).
                                                       This value can be issued to the service user on the sender side only. */
# define NTFRSLT_E_TIMEOUT_CR              0x04  /*Error notification:
                                                          - timer N_Cr has passed its time-out value N_Crmax.
                                                       This value can be issued to the service user on the receiver side only. */
# define NTFRSLT_E_WRONG_SN                0x05  /*Error notification:
                                                          - unexpected sequence number (PCI.SN) value received.
                                                       This value can be issued to the service user on the receiver side only. */
# define NTFRSLT_E_INVALID_FS              0x06  /*Error notification:
                                                          - invalid or unknown FlowStatus value has been received in a flow control (FC) N_PDU.
                                                       This value can be issued to the service user on the sender side only. */
# define NTFRSLT_E_UNEXP_PDU               0x07  /*Error notification:
                                                          - unexpected protocol data unit received.
                                                       This value can be issued to the service user on both the sender and receiver side. */
# define NTFRSLT_E_WFT_OVRN                0x08  /*Error notification:
                                                          - flow control WAIT frame that exceeds the maximum counter N_WFTmax received.
                                                       This value can be issued to the service user on the receiver side. */
#  define NTFRSLT_E_NO_BUFFER              0x09  /*Error notification:
                                                          - flow control (FC) N_PDU with FlowStatus = OVFLW received. 
                                                            It indicates that the buffer on the receiver side of a segmented message transmission
                                                            cannot store the number of bytes specified by the FirstFrame DataLength (FF_DL) parameter
                                                            in the FirstFrame and therefore the transmission of the 19 of 23 AUTOSAR_SWS_ComStackTypes
                                                            segmented message was aborted.
                                                          - no buffer within the TP available to transmit the segmented I-PDU.
                                                        This value can be issued to the service user on both the sender and receiver side. */
#  define NTFRSLT_E_CANCELATION_OK         0x0A  /*Action has been successfully finished:
                                                          - Requested cancellation has been executed.*/
#  define NTFRSLT_E_CANCELATION_NOT_OK     0x0B  /*Error notification:
                                                          - Due to an internal error the requested cancelation has not been executed. This will happen e.g., if the to be canceled transmission has been executed already.*/

/* extension of R4.0 R1 */
# define NTFRSLT_PARAMETER_OK              0x0D     /* The parameter change request has been successfully executed */
# define NTFRSLT_E_PARAMETER_NOT_OK        0x0E     /* The request for the change of the parameter did not complete successfully */
# define NTFRSLT_E_RX_ON                   0x0F     /* The parameter change request not executed successfully due to an ongoing reception */
# define NTFRSLT_E_VALUE_NOT_OK            0x10     /* The parameter change request not executed successfully due to a wrong value */

/* 0x11-0x1E Reserved values for future usage. */


/*General return codes for BusTrcvErrorType*/
# define BUSTRCV_OK         0x00
/*BUSTRCV_E_OK needed by FrTrcv specification inconcistency between ComStackTypes and FrTrcv*/
# define BUSTRCV_E_OK       0x00
# define BUSTRCV_E_ERROR    0x01

 
/* ISO15765-2 conform items */
/* range 100-150            */
# define TPPARAMTYPE_CANTP_STMIN                100u
# define TPPARAMTYPE_CANTP_BS                   101u

/* ISO10681-2 conform items */
/* range 150-200            */
# define TPPARAMTYPE_FRTP_BC                    150u
# define TPPARAMTYPE_FRTP_BFS                   151u
# define TPPARAMTYPE_FRTP_MAX_WFT               152u
# define TPPARAMTYPE_FRTP_MAX_RETRIES           153u

/* Vector extensions */
# define TPPARAMTYPE_FRTP_TA                    160u
# define TPPARAMTYPE_FRTP_SA                    161u
# define TPPARAMTYPE_FRTP_NUM_TX_PDUS_TO_USE    162u
# define TPPARAMTYPE_FRTP_BW_LIMITATION         163u
# define TPPARAMTYPE_FRTP_MAX_TX_PDU_LEN        164u


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
/* -----------------------------------------------------------------------------
    &&&~ GLOBAL DATA TYPES AND STRUCTURES
 ----------------------------------------------------------------------------- */

typedef uint16 PduIdType; /* The size of this global type depends on the maximum number of PDUs used within one software module. */
typedef uint16 PduLengthType; /* The size of this global type depends on the maximum length of PDUs to be sent by an ECU. */


typedef  P2VAR(uint8, TYPEDEF, AUTOSAR_COMSTACKDATA) SduDataPtrType;
typedef struct
{
  SduDataPtrType SduDataPtr;
  PduLengthType SduLength;
} PduInfoType;

typedef enum                          
{
  BUFREQ_OK,           /*Buffer request accomplished successful.*/
  BUFREQ_E_NOT_OK,     /*Buffer request not successful. Buffer cannot be accessed.*/
  BUFREQ_E_BUSY,       /*Temporarily no buffer available. It's up the requestor to retry request for a certain time.*/
  BUFREQ_E_OVFL        /*No Buffer of the required length can be provided.*/
} BufReq_ReturnType;

typedef uint8        NotifResultType;
 
typedef uint8        BusTrcvErrorType;

typedef uint8        NetworkHandleType;

typedef uint8        PNCHandleType; /* Neccessary for partial network */

typedef enum                          
{
  TP_DATACONF,         /* TP_DATACONF  indicates  that  all  data,  that  have been  copied  so  far,  are  confirmed  and  can  be 
                          removed  from  the  TP  buffer.  Data  copied  by  this API call are excluded and will be confirmed later. */
  TP_DATARETRY,        /* TP_DATARETRY  indicates  that  this  API  call  shall copy already copied data in order to recover from 
                          an  error.  In  this  case  TxTpDataCnt  specifies  the offset of the first byte to be copied by the API call.  */
  TP_CONFPENDING,      /* TP_CONFPENDING  indicates  that  the  previously copied data must remain in the TP  */
  TP_NORETRY           /* TP_NORETRY indicates that the retry feature is not supported */
} TpDataStateType;

typedef struct
{
  TpDataStateType TpDataState;
  PduLengthType TxTpDataCnt;
} RetryInfoType;


/* ISO15765-2 conform items */
typedef uint8        TPParameterType;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 268053767
      #error "The magic number of the generated file <C:\_TSS\DAG\MFA2\Target\Appl\GenData\ComStack_Types.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 268053767
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __COMSTACK_TYPES_H__ */