/******************************************************************************/
/* File              : infCtrl.hpp                                            */
/* Author            : Nagaraja HULIYAPURADA MATA                             */
/* Copyright (c)2024 : All rights reserved.                                   */
/******************************************************************************/

/******************************************************************************/
/*#includeS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{
   uint16 ui16_V1;
   uint16 ui16_V2;
   uint16 ui16_V3;
   sint8  i8_T0;
   sint8  i8_T1;
   sint8  i8_T2;
   uint16 ui16_HC_MAX;
   uint8  ui8_TempWarnEnable;
}TempWarnParaType;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern TempWarnParaType tDAG_TemPara;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void UpdateWarnOut(const uint8* p2WPs);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
