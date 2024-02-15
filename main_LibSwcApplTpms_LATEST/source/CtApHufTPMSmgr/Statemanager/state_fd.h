/************************************************************************************************************
 * (c) Huf Huelsbeck und Fuerst GmbH Co. KG   Abteilung PDSTPS    2016
 ************************************************************************************************************/
/************************************************************************************************************
 * Project:       Reifendruckkontrolle TSS (TSS = tyre safety system)
 *
 * $Archive: /BMW/G3kompakt/Sw/SC4/template_can/application/source/tssappl/statemanager/state_fd.h $
 *
 * File Status:   compiled           - (under construction, compiled etc.)
 *
 ************************************************************************************************************/
/************************************************************************************************************
 * Author:
 *
 * Initials     Name                           Company
 * --------     --------------------------     --------------------------------------------------------------
 * as           Andreas Schubert               Huf Huelsbeck und Fuerst GmbH Co. KG
 *
 ************************************************************************************************************/
/************************************************************************************************************
 * Global Description
 * ==================
 *
 *
 *
 *
 *
 ************************************************************************************************************/
/************************************************************************************************************
 * Modul Description
 * =================
 *
 * Purpose:
 *
 *
 *
 ************************************************************************************************************/
/************************************************************************************************************
 * Modul Abbreviation:
 * ===================
 *
 *
 ************************************************************************************************************/
/************************************************************************************************************
 * Glossary
 * ========
 *
 *
 ************************************************************************************************************/
/************************************************************************************************************
 * MISRA-C 2004 Regelverletzungen
 * ==============================
 *
 *
 ************************************************************************************************************/
/************************************************************************************************************
 * Modul Modification
 * ==================
 *
 * changes in 2016
 *
 * $Log: /_TSS/DAG/MFA2/Target/SWC/Source/CtApHufTPMSmgr/Statemanager/state_fd.c $
 * 
 *
 * 1     25.04.16 Schubert
 * creation  "Statemanager"
 *
 ************************************************************************************************************/

#ifndef _state_fd_H /* [0] */
#define _state_fd_H



/************************************************************************************************************
 *                                             include
 ************************************************************************************************************/
#include "tss_stdx.h"         /* TSS specific defines                                                       */
#include "Compiler_Cfg.h"
//#include "statemanager_cfg.h" /* Configuration-Header of statemanager module                                */



/************************************************************************************************************
 *                                             macro
 ************************************************************************************************************/



/************************************************************************************************************
 *                                            typedef
 ************************************************************************************************************/



/************************************************************************************************************
 *                                    data (Modulglobal) - ROM
 ************************************************************************************************************/



/************************************************************************************************************
 *                                    data (Modulglobal) - RAM
 ************************************************************************************************************/



/************************************************************************************************************
 *                                       data (global) - ROM
 ************************************************************************************************************/



/************************************************************************************************************
 *                                       data (global) - RAM
 ************************************************************************************************************/
static uint8 ucFD_Status;							/* 2.1 signal name ucFD_Status (FD) */
static uint8 ucFD_AbortReason;         /* 2.1 signal name ucFDAbortReason (FD=MFD+AFD) */
static uint8 ucFD_PlausiFailure;				/* 2.1 signal name ucFD_PlausiFailure (FD=MFD+AFD) */

static uint8 ucIdCol0New4FD;          /* new ID in ZOM: storage compare pressure*/
static uint8 ucIdCol1New4FD;          /* new ID in ZOM: storage compare pressure*/
static uint8 ucIdCol2New4FD;          /* new ID in ZOM: storage compare pressure*/
static uint8 ucIdCol3New4FD;          /* new ID in ZOM: storage compare pressure*/


/***********************************************************************************************************
 *                                 prototype (local functions - private)
 ***********************************************************************************************************/



/***********************************************************************************************************
 *                                 prototype (local functions - public)
 ***********************************************************************************************************/



/************************************************************************************************************
 *                               prototype (external functions - interface)
 ************************************************************************************************************/



#endif /* #ifndef _state_bz_H [0] */


