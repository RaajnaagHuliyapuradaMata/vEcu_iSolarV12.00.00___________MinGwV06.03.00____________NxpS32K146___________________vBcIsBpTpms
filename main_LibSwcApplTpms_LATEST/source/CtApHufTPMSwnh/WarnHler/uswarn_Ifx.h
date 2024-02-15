/*
(c)  Electronics GmbH     BEE1     11/2015
================================================================================================

file name:     DAG_TVWarn.h

file status:   fine

------------------------------------------------------------------------------------------------

author:        Peter Brand                 Electronics GmbH

intials:       pb

Purpose:
used interfaces all combined in one header - and be aware used means used by warnlogic itself nothing else
THIS IS NOT A PROVIDED INTERFACE - THIS IS NOT A PROVIDED INTERFACE - THIS IS NOT A PROVIDED INTERFACE


*/

#ifndef _uswarn_if_X_H /* [0] */
#define _uswarn_if_X_H



/************************************************************************************************************
 *                                             include
 ************************************************************************************************************/
//#include "tss_stdx.h"         /* TSS specific defines                                                       */

#include "wntypepar.h"
#include "uswarnX.h"



/************************************************************************************************************
 *                                             define
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



/***********************************************************************************************************
 *                                     prototype (private function)
 ***********************************************************************************************************/



/************************************************************************************************************
 *                                     prototype (public function)
 ************************************************************************************************************/



extern void UpdateDAGsOldOff(void);

extern void GetRatValOfId(uint8 uiHistCol, struct SollDat * p2RatVal);

extern const uint8 * GETpui82SysWP(void);

extern void CtFPLTimer(void);

extern uint8 Getui8PrefMinOfId(uint8 histCol);

extern uint8 Getui8AtmosphericP(void);
/************************************************************************************************************
 *                                             macro
 ************************************************************************************************************/



#endif /* #ifndef_uswarn_if_X_H */

