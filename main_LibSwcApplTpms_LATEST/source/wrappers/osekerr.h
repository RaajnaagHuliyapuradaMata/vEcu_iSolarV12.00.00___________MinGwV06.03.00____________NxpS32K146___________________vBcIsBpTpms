

#ifndef _OSEKERR_H
#define _OSEKERR_H

#if defined USE_QUOTE_INCLUDES
#include "vrm.h"
#else
#include <vrm.h>
#endif

#define osdVrmMajRelNum 1
#define osdVrmMinRelNum 1

#if defined USE_QUOTE_INCLUDES
#include "vrm.h"
#else
#include <vrm.h>
#endif

#define E_OS_ACCESS     1
#define E_OS_CALLEVEL   2
#define E_OS_ID         3
#define E_OS_LIMIT      4
#define E_OS_NOFUNC     5
#define E_OS_RESOURCE   6
#define E_OS_STATE      7
#define E_OS_VALUE      8

#define E_OS_SERVICEID            9
#define E_OS_ILLEGAL_ADDRESS      10
#define E_OS_MISSINGEND           11
#define E_OS_DISABLEDINT          12
#define E_OS_STACKFAULT           13
#define E_OS_PROTECTION_MEMORY    14
#define E_OS_PROTECTION_TIME      15
#define E_OS_PROTECTION_ARRIVAL   16
#define E_OS_PROTECTION_LOCKED    17
#define E_OS_PROTECTION_EXCEPTION 18

#define E_OS_SYS_ASSERTION        20
#define E_OS_SYS_ABORT            21

#define E_OS_SYS_API_ERROR        23
#define E_OS_SYS_ALARM_MANAGEMENT 24
#define E_OS_SYS_WARNING          25

#define osdErrATWrongTaskID           0x1101U
#define osdErrATWrongTaskPrio         0x1102U
#define osdErrATMultipleActivation    0x1103U
#define osdErrATIntAPIDisabled        0x1104U
#define osdErrATAlarmMultipleActivation 0x1105U
#define osdErrATNoAccess              0x1106U
#define osdErrATCallContext           0x1107U
#define osdErrATWrongAppState         0x1108U

#define osdErrTTDisabledInterrupts    0x1201U
#define osdErrTTResourcesOccupied     0x1202U
#define osdErrTTNotActivated          0x1203U
#define osdErrTTOnInterruptLevel      0x1204U
#define osdErrTTNoImmediateTaskSwitch 0x1205U
#define osdErrTTCallContext           0x1206U
#define osdErrTTWrongActiveTaskID     0x1208U

#define osdErrHTInterruptsDisabled    0x1301U
#define osdErrHTResourcesOccupied     0x1302U
#define osdErrHTWrongTaskID           0x1303U
#define osdErrHTNotActivated          0x1304U
#define osdErrHTMultipleActivation    0x1305U
#define osdErrHTOnInterruptLevel      0x1306U
#define osdErrHTNoImmediateTaskSwitch 0x1308U
#define osdErrHTCallContext           0x1309U
#define osdErrHTNoAccess              0x130AU
#define osdErrHTWrongAppState         0x130BU
#define osdErrHTWrongActiveTaskID     0x130DU

#define osdErrSHInterruptsDisabled    0x1401U
#define osdErrSHOnInterruptLevel      0x1402U
#define osdErrSHScheduleNotAllowed    0x1403U
#define osdErrSHResourcesOccupied     0x1405U
#define osdErrSHCallContext           0x1406U
#define osdErrSHNoReadyTaskFound      0x1408U
#define osdErrSHWrongActiveTaskID     0x1409U

#define osdErrGSWrongTaskID           0x1501U
#define osdErrGSIntAPIDisabled        0x1502U
#define osdErrGSIllegalAddr           0x1503U
#define osdErrGSCallContext           0x1504U
#define osdErrGSNoAccess              0x1505U
#define osdErrGSWrongAppState         0x1506U
#define osdErrGSOddInvocation         0x1507U

#define osdErrGIIntAPIDisabled        0x1601U
#define osdErrGIIllegalAddr           0x1602U
#define osdErrGICallContext           0x1603U
#define osdErrGIOddInvocation         0x1604U

#define osdErrMTMissingTerminateTask  0x1701U

#define osdErrEAIntAPIWrongSequence   0x2401U
#define osdErrDAIntAPIDisabled        0x2501U

#define osdErrUEUnhandledException    0x2801U

#define osdErrSDWrongCounter          0x2901U
#define osdErrREWrongCounter          0x2A01U

#define osdErrSGWrongCounter          0x2B01U
#define osdErrRGWrongCounter          0x2C01U

#define osdErrIIIntAPIDisabled        0x2201U
#define osdErrIICallContext           0x2202U

#define osdErrIXResourcesOccupied     0x2301U
#define osdErrIXIntAPIDisabled        0x2302U

#define osdErrGRWrongResourceID       0x3101U
#define osdErrGRPriorityOccupied      0x3102U
#define osdErrGRResourceOccupied      0x3103U
#define osdErrGRNoAccessRights        0x3104U
#define osdErrGRWrongPrio             0x3105U
#define osdErrGRIntAPIDisabled        0x3106U
#define osdErrGRNoAccess              0x3107U
#define osdErrGRCallContext           0x3108U
#define osdErrGRISRNoAccessRights     0x3109U
#define osdErrGRWrongTaskID           0x310BU

#define osdErrRRWrongResourceID       0x3201U
#define osdErrRRCeilingPriorityNotSet 0x3202U
#define osdErrRRWrongTask             0x3203U
#define osdErrRRWrongPrio             0x3204U
#define osdErrRRNotOccupied           0x3206U
#define osdErrRRWrongSequence         0x3207U
#define osdErrRRIntAPIDisabled        0x3208U
#define osdErrRRNoAccess              0x3209U
#define osdErrRRCallContext           0x320AU
#define osdErrRRISRNoAccessRights     0x320BU
#define osdErrRRNoReadyTaskFound      0x320DU
#define osdErrRRWrongTaskID           0x320EU
#define osdErrRRWrongHighRdyPrio      0x320FU

#define osdErrSEWrongTaskID           0x4101U
#define osdErrSENotExtendedTask       0x4102U
#define osdErrSETaskSuspended         0x4103U
#define osdErrSEWrongTaskPrio         0x4104U
#define osdErrSEIntAPIDisabled        0x4105U
#define osdErrSECallContext           0x4106U
#define osdErrSENoAccess              0x4107U
#define osdErrSEWrongAppState         0x4108U

#define osdErrCENotExtendedTask       0x4201U
#define osdErrCEOnInterruptLevel      0x4202U
#define osdErrCEIntAPIDisabled        0x4203U
#define osdErrCECallContext           0x4204U

#define osdErrGEWrongTaskID           0x4301U
#define osdErrGENotExtendedTask       0x4302U
#define osdErrGETaskSuspended         0x4303U
#define osdErrGEIntAPIDisabled        0x4304U
#define osdErrGEIllegalAddr           0x4305U
#define osdErrGECallContext           0x4306U
#define osdErrGENoAccess              0x4307U
#define osdErrGEWrongAppState         0x4308U
#define osdErrGEOddInvocation         0x4309U

#define osdErrWENotExtendedTask       0x4401U
#define osdErrWEResourcesOccupied     0x4402U
#define osdErrWEInterruptsDisabled    0x4403U
#define osdErrWEOnInterruptLevel      0x4404U
#define osdErrWECallContext           0x4405U

#define osdErrGBWrongAlarmID          0x5101U
#define osdErrGBIntAPIDisabled        0x5102U
#define osdErrGBIllegalAddr           0x5103U
#define osdErrGBCallContext           0x5104U
#define osdErrGBNoAccess              0x5105U
#define osdErrGBWrongAppState         0x5106U

#define osdErrGAWrongAlarmID          0x5201U
#define osdErrGANotActive             0x5202U
#define osdErrGAIntAPIDisabled        0x5203U
#define osdErrGAIllegalAddr           0x5204U
#define osdErrGACallContext           0x5205U
#define osdErrGANoAccess              0x5206U
#define osdErrGAWrongAppState         0x5207U

#define osdErrSAWrongAlarmID          0x5301U
#define osdErrSAAlreadyActive         0x5302U
#define osdErrSAWrongCycle            0x5303U
#define osdErrSAWrongDelta            0x5304U
#define osdErrSAIntAPIDisabled        0x5305U
#define osdErrSAZeroIncrement         0x5306U
#define osdErrSACallContext           0x5307U
#define osdErrSANoAccess              0x5308U
#define osdErrSAWrongAppState         0x5309U

#define osdErrSLWrongAlarmID          0x5401U
#define osdErrSLAlreadyActive         0x5402U
#define osdErrSLWrongCycle            0x5403U
#define osdErrSLWrongStart            0x5404U
#define osdErrSLIntAPIDisabled        0x5405U
#define osdErrSLCallContext           0x5406U
#define osdErrSLNoAccess              0x5407U
#define osdErrSLWrongAppState         0x5408U

#define osdErrCAWrongAlarmID          0x5501U
#define osdErrCANotActive             0x5502U
#define osdErrCAIntAPIDisabled        0x5503U
#define osdErrCAAlarmInternal         0x5504U
#define osdErrCACallContext           0x5505U
#define osdErrCANoAccess              0x5506U
#define osdErrCAWrongAppState         0x5507U

#define osdErrWAWrongIDonHeap         0x5601U
#define osdErrWAHeapOverflow          0x5602U
#define osdErrWAUnknownAction         0x5603U
#define osdErrWAWrongCounterID        0x5604U

#define osdErrSOStackOverflow         0x6101U

#define osdErrSUWrongTaskID           0x6301U

#define osdErrCLWrongLibrary          0x6401U

#define osdErrEHInterruptsEnabled     0x6501U

#define osdErrSTMemoryError           0x6601U
#define osdErrSTNoImmediateTaskSwitch 0x6602U
#define osdErrSTWrongAppMode          0x6603U
#define osdErrSTInvalidSTCfg          0x6609U

#define osdErrQIWrongTaskPrio         0x6701U

#define osdErrQRInterruptsEnabled     0x6801U
#define osdErrQRWrongTaskID           0x6802U
#define osdErrQRWrongTaskPrio         0x6803U
#define osdErrQRWrongHighRdyPrio      0x6804U

#define osdErrQSInterruptsEnabled     0x6901U
#define osdErrQSNoReadyTaskFound      0x6902U
#define osdErrQSWrongPriority         0x6903U

#define osdErrQOWrongTaskID           0x6A01U

#define osdErrSRWrongID                0x7101U
#define osdErrSRAlreadyRunningOrNext   0x7102U
#define osdErrSRZeroOffset             0x7103U
#define osdErrSROffsetTooBig           0x7104U
#define osdErrSRIntAPIDisabled         0x7105U
#define osdErrSRCallContext            0x7106U
#define osdErrSRNoAccess               0x7107U
#define osdErrSRImpliciteSync          0x7109U
#define osdErrSRWrongAppState          0x710AU

#define osdErrSSWrongID                0x7201U
#define osdErrSSAlreadyRunningOrNext   0x7202U
#define osdErrSSTickvalueTooBig        0x7203U
#define osdErrSSIntAPIDisabled         0x7204U
#define osdErrSSCallContext            0x7205U
#define osdErrSSNoAccess               0x7206U
#define osdErrSSWrongAppState          0x7207U

#define osdErrSPWrongID                0x7301U
#define osdErrSPNotRunning             0x7302U
#define osdErrSPIntAPIDisabled         0x7303U
#define osdErrSPCallContext            0x7304U
#define osdErrSPNoAccess               0x7305U
#define osdErrSPUnknownCase            0x7306U
#define osdErrSPWrongAppState          0x7307U

#define osdErrSGWrongID                0x7401U
#define osdErrSGIntAPIDisabled         0x7402U
#define osdErrSGCallContext            0x7403U
#define osdErrSGNoAccess               0x7404U
#define osdErrSGIllegalAddr            0x7405U
#define osdErrSGWrongAppState          0x7406U
#define osdErrSGOddInvocation          0x7407U

#define osdErrSNWrongCurrentID         0x7501U
#define osdErrSNWrongNextID            0x7502U
#define osdErrSNNotRunning             0x7503U
#define osdErrSNAlreadyRunningOrNext   0x7504U
#define osdErrSNDifferentCounters      0x7505U
#define osdErrSNIntAPIDisabled         0x7506U
#define osdErrSNCallContext            0x7507U
#define osdErrSNNoAccess               0x7508U
#define osdErrSNWrongAppState          0x7509U
#define osdErrSNSyncStrategyMismatch   0x750AU

#define osdErrWSUnknownAction          0x7601U
#define osdErrWSUnknownReaction        0x7602U
#define osdErrWSWrongID                0x7603U

#define osdErrSYCallContext            0x7701U
#define osdErrSYWrongID                0x7702U
#define osdErrSYNoAccess               0x7703U
#define osdErrSYIntAPIDisabled         0x7704U
#define osdErrSYSTNotRunning           0x7705U
#define osdErrSYGlobalTimeTooBig       0x7706U
#define osdErrSYSyncKindNotExplicit    0x7707U
#define osdErrSYWrongAppState          0x7708U

#define osdErrAYCallContext            0x7801U
#define osdErrAYWrongID                0x7802U
#define osdErrAYNoAccess               0x7803U
#define osdErrAYIntAPIDisabled         0x7804U
#define osdErrAYWrongAppState          0x7805U
#define osdErrAYNotRunning             0x7806U

#define osdErrTSCallContext            0x7C01U
#define osdErrTSWrongID                0x7C02U
#define osdErrTSNoAccess               0x7C03U
#define osdErrTSIntAPIDisabled         0x7C04U
#define osdErrTSSTAlreadyRunning       0x7C05U
#define osdErrTSGlobalTimeTooBig       0x7C06U
#define osdErrTSSyncKindNotExplicit    0x7C08U
#define osdErrTSWrongAppState          0x7C09U

#define osdErrICWrongCounterID        0x8101U
#define osdErrICIntAPIDisabled        0x8102U
#define osdErrICCallContext           0x8103U
#define osdErrICNoAccess              0x8104U
#define osdErrICWrongAppState         0x8105U

#define osdErrGCCallContext           0x8301U
#define osdErrGCIntAPIDisabled        0x8302U
#define osdErrGCWrongID               0x8303U
#define osdErrGCNoAccess              0x8304U
#define osdErrGCIllegalAddr           0x8305U
#define osdErrGCWrongAppState         0x8306U
#define osdErrGCOddInvocation         0x8307U

#define osdErrGVCallContext           0x8401U
#define osdErrGVIntAPIDisabled        0x8402U
#define osdErrGVWrongID               0x8403U
#define osdErrGVNoAccess              0x8404U
#define osdErrGVIllegalAddr           0x8405U
#define osdErrGVWrongAppState         0x8406U
#define osdErrGVIllegalValue          0x8407U
#define osdErrGVIllegalPointers       0x8408U
#define osdErrGVOddInvocation         0x8409U

#define osdErrTMWrongTaskID            0x9001U
#define osdErrTMNoAccess               0x9002U
#define osdErrTMIllegalAddr            0x9003U
#define osdErrTMWrongAppState          0x9004U

#define osdErrBMResAlreadyMeasured     0x9702U
#define osdErrBMInvalidProcessInStart  0x9703U
#define osdErrBMInvalidProcessInStop   0x9704U
#define osdErrBMInvalidResource        0x9705U

#define osdErrTEWrongTaskID            0x9801U
#define osdErrTENoAccess               0x9802U
#define osdErrTEIllegalAddr            0x9803U
#define osdErrTEWrongAppState          0x9804U

#define osdErrIEWrongISRID             0x9901U
#define osdErrIENoAccess               0x9902U
#define osdErrIEIllegalAddr            0x9903U
#define osdErrIEWrongAppState          0x9904U

#define osdErrTBWrongTaskID            0x9A01U
#define osdErrTBWrongBlockType         0x9A02U
#define osdErrTBWrongResourceID        0x9A03U
#define osdErrTBNoAccessToTask         0x9A04U
#define osdErrTBNoAccessToResource     0x9A05U
#define osdErrTBIllegalAddr            0x9A06U
#define osdErrTBWrongAppState          0x9A07U

#define osdErrIBWrongISRID             0x9B01U
#define osdErrIBWrongBlockType         0x9B02U
#define osdErrIBWrongResourceID        0x9B03U
#define osdErrIBNoAccessToISR          0x9B04U
#define osdErrIBNoAccessToResource     0x9B05U
#define osdErrIBIllegalAddr            0x9B06U
#define osdErrIBWrongAppState          0x9B07U

#define osdErrETNoCurrentProcess       0x9D01U

#define osdErrMIWrongISRID             0x9F01U
#define osdErrMINoAccess               0x9F02U
#define osdErrMIIllegalAddr            0x9F03U
#define osdErrMIWrongAppState          0x9F04U

#define osdErrYOSystemStackOverflow       0xA101U
#define osdErrYOTaskStackOverflow         0xA102U
#define osdErrYOISRStackOverflow          0xA103U

#define osdErrSCWrongSysCallParameter     0xA201U

#define osdErrDPStartValidContext         0xA401U
#define osdErrDPResumeInvalidContext      0xA402U
#define osdErrDPInvalidTaskIndex          0xA403U
#define osdErrDPInvalidApplicationID      0xA404U

#define osdErrEXMemoryViolation           0xA501U
#define osdErrEXPrivilegedInstruction     0xA502U

#define osdErrSUInvalidTaskIndex          0xA601U
#define osdErrSUInvalidIsrIndex           0xA602U
#define osdErrSUInvalidIsrPrioLevel       0xA603U

#define osdErrCIInvalidIsrIndex           0xA701U
#define osdErrCIInvalidIsrPrioLevel       0xA702U
#define osdErrCIInvalidApplicationID      0xA703U
#define osdErrCIMissingIntRequest         0xA704U
#define osdErrCIInterruptIsMasked         0xA705U
#define osdErrCIWrongIntPriority          0xA706U

#define osdErrPIGetIMRInvalidIndex        0xA801U
#define osdErrPISetIMRInvalidIndex        0xA802U
#define osdErrPIClearIMRInvalidIndex      0xA803U
#define osdErrPIWriteIMR8InvalidAddr      0xA804U
#define osdErrPIWriteIMR16InvalidAddr     0xA805U
#define osdErrPIWriteIMR32InvalidAddr     0xA806U
#define osdErrPISetICRMaskInvalidAddr     0xA807U
#define osdErrPIClearICRMaskInvalidAddr   0xA808U
#define osdErrPISetICRReqInvalidAddr      0xA809U
#define osdErrPIClearICRReqInvalidAddr    0xA80AU
#define osdErrPIWriteICR8InvalidAddr      0xA80BU
#define osdErrPIWriteICR16InvalidAddr     0xA80CU
#define osdErrPIWriteICRxLoInvalidIndex   0xA80DU
#define osdErrPIWriteICRxHiInvalidIndex   0xA80EU
#define osdErrPIWriteICRx16InvalidIndex   0xA80FU

#define osdErrCRInvalidSettingOSTM        0xA901U
#define osdErrCRInvalidSettingMPU         0xA902U

#define osdErrUEUnhandledCoreException    0xAA01U
#define osdErrUEUnhandledDirectBranch     0xAA02U

#define osdErrASCallContext           0xB101U
#define osdErrASIntAPIDisabled        0xB102U
#define osdErrASWrongAppID            0xB103U
#define osdErrASOddInvocation         0xB104U

#define osdErrAACallContext           0xB201U
#define osdErrAAIntAPIDisabled        0xB202U
#define osdErrAAWrongState            0xB203U

#define osdErrTAWrongRestartOption    0xB401U
#define osdErrTACallContext           0xB402U
#define osdErrTAIntAPIDisabled        0xB403U
#define osdErrTAWrongAppID            0xB404U
#define osdErrTANoAccess              0xB405U
#define osdErrTAWrongAppState         0xB406U
#define osdErrTAInvalidTaskState      0xB407U

#define osdErrGMWrongSemaphoreID      0xC101U
#define osdErrGMOnInterruptLevel      0xC102U
#define osdErrGMNotExtendedTask       0xC103U
#define osdErrGMResourcesOccupied     0xC104U
#define osdErrGMInterruptsDisabled    0xC105U

#define osdErrRSWrongSemaphoreID      0xC201U
#define osdErrRSAlreadyReleased       0xC203U
#define osdErrRSWrongTaskPrio         0xC204U
#define osdErrRSInterruptsDisabled    0xC205U

#define osdErrCTWrongFctIdx           0xE301U
#define osdErrCTCallContext           0xE302U
#define osdErrCTIntAPIDisabled        0xE303U

#if osdParameterAccessMacros && osdErrorHook
#define osSaveActivateTask_TaskID(x)                      (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osTaskType = (x));
#define osSaveChainTask_TaskID(x)                         (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osTaskType = (x));
#define osSaveGetTaskID_TaskID(x)                         (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osTaskRefType = (x));
#define osSaveGetTaskState_TaskID(x)                      (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osTaskType = (x));
#define osSaveGetTaskState_State(y)                       (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTaskStateRefType = (y));
#define osSaveGetResource_ResID(x)                        (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osResourceType = (x));
#define osSaveReleaseResource_ResID(x)                    (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osResourceType = (x));
#define osSaveGetSemaphore_SemaID(x)                      (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osOsSemaphoreType = (x));
#define osSaveReleaseSemaphore_SemaID(x)                  (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osOsSemaphoreType = (x));
#define osSaveSetEvent_TaskID(x)                          (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osTaskType = (x));
#define osSaveSetEvent_Mask(y)                            (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osEventMaskType = (y));
#define osSaveGetEvent_TaskID(x)                          (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osTaskType = (x));
#define osSaveGetEvent_Event(y)                           (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osEventMaskRefType = (y));
#define osSaveClearEvent_Mask(x)                          (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osEventMaskType = (x));
#define osSaveWaitEvent_Mask(x)                           (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osEventMaskType = (x));
#define osSaveGetAlarmBase_AlarmID(x)                     (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osAlarmType = (x));
#define osSaveGetAlarmBase_Info(y)                        (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osAlarmBaseRefType = (y));
#define osSaveSetRelAlarm_AlarmID(x)                      (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osAlarmType = (x)) ;
#define osSaveSetRelAlarm_increment(y)                    (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTickType = (y));
#define osSaveSetRelAlarm_cycle(z)                        (osOwnCcb->LockIsNotNeeded.ossAPIParam3.osTickType = (z));
#define osSaveSetAbsAlarm_AlarmID(x)                      (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osAlarmType = (x));
#define osSaveSetAbsAlarm_start(y)                        (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTickType = (y));
#define osSaveSetAbsAlarm_cycle(z)                        (osOwnCcb->LockIsNotNeeded.ossAPIParam3.osTickType = (z));
#define osSaveCancelAlarm_AlarmID(x)                      (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osAlarmType = (x));
#define osSaveGetAlarm_AlarmID(x)                         (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osAlarmType = (x));
#define osSaveGetAlarm_Tick(y)                            (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTickRefType = (y));
#define osSaveIncrementCounter_CounterID(x)               (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osCounterType = (x));
#define osSaveGetCounterValue_CounterID(x)                (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osCounterType = (x));
#define osSaveGetCounterValue_Value(x)                    (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTickRefType = (x));
#define osSaveGetElapsedValue_CounterID(x)                (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osCounterType = (x));
#define osSaveGetElapsedValue_Value(x)                    (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTickRefType = (x));
#define osSaveGetElapsedValue_ElapsedValue(x)             (osOwnCcb->LockIsNotNeeded.ossAPIParam3.osTickRefType = (x));

#define osSaveStartScheduleTableRel_ScheduleTableID(x)    (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osScheduleTableType = (x));
#define osSaveStartScheduleTableRel_Offset(y)             (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTickType = (y));
#define osSaveStartScheduleTableAbs_ScheduleTableID(x)    (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osScheduleTableType = (x));
#define osSaveStartScheduleTableAbs_Tickvalue(y)          (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTickType = (y));
#define osSaveStopScheduleTable_ScheduleTableID(x)        (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osScheduleTableType = (x));
#define osSaveNextScheduleTable_ScheduleTableID_current(x) (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osScheduleTableType = (x));
#define osSaveNextScheduleTable_ScheduleTableID_next(y)   (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osScheduleTableType = (y));
#define osSaveGetScheduleTableStatus_ScheduleID(x)        (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osScheduleTableType = (x));
#define osSaveGetScheduleTableStatus_ScheduleStatus(y)    (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osScheduleTableStatusRefType = (y));

#if((osdSC == SC3) || (osdSC == SC4))
#define osSaveCallTrustedFunction_FunctionIndex(x)        (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osFunctionIndexType = (x));
#define osSaveCallTrustedFunction_FunctionParams(y)       (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTrustedFunctionParameterRefType = (y));
#define osSaveTerminateApplication_RestartOption(x)       (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osRestartType = (x));
#define osSaveTerminateApplication_Application(x)         (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osApplicationType = (x));
#define osSaveGetApplicationState_Application(x)          (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osApplicationType = (x));
#define osSaveGetApplicationState_Value(x)                (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osApplicationStateRefType = (x));
#endif

#if(osdTimingProtectionUsed != 0)
#define osSaveosGetTaskMaxExecutionTime_TaskID(x)           (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osTaskType     = (x));
#define osSaveosGetTaskMaxExecutionTime_MaxTime(y)          (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTimeRefType  = (y));
#define osSaveosGetISRMaxExecutionTime_ISRID(x)             (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osISRType      = (x));
#define osSaveosGetISRMaxExecutionTime_MaxTime(y)           (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTimeRefType  = (y));
#define osSaveosGetTaskMinInterArrivalTime_TaskID(x)        (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osTaskType     = (x));
#define osSaveosGetTaskMinInterArrivalTime_MinTime(y)       (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osUnionTPTimeStampRefType  = (y));
#define osSaveosGetISRMinInterArrivalTime_ISRID(x)          (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osISRType      = (x));
#define osSaveosGetISRMinInterArrivalTime_MinTime(y)        (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osUnionTPTimeStampRefType  = (y));
#define osSaveosGetTaskMaxBlockingTime_TaskID(x)            (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osTaskType     = (x));
#define osSaveosGetTaskMaxBlockingTime_BlockType(y)         (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osBlockType    = (y));
#define osSaveosGetTaskMaxBlockingTime_ResourceID(z)        (osOwnCcb->LockIsNotNeeded.ossAPIParam3.osResourceType = (z));
#define osSaveosGetTaskMaxBlockingTime_MaxTime(z1)          (osOwnCcb->LockIsNotNeeded.ossAPIParam4                = (z1));
#define osSaveosGetISRMaxBlockingTime_ISRID(x)              (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osISRType      = (x));
#define osSaveosGetISRMaxBlockingTime_BlockType(y)          (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osBlockType    = (y));
#define osSaveosGetISRMaxBlockingTime_ResourceID(z)         (osOwnCcb->LockIsNotNeeded.ossAPIParam3.osResourceType = (z));
#define osSaveosGetISRMaxBlockingTime_MaxTime(z1)           (osOwnCcb->LockIsNotNeeded.ossAPIParam4                = (z1));
#endif
#else

#define osSaveActivateTask_TaskID(x)
#define osSaveChainTask_TaskID(x)
#define osSaveGetTaskID_TaskID(x)
#define osSaveGetTaskState_TaskID(x)
#define osSaveGetTaskState_State(y)
#define osSaveGetResource_ResID(x)
#define osSaveReleaseResource_ResID(x)
#define osSaveGetSemaphore_SemaID(x)
#define osSaveReleaseSemaphore_SemaID(x)
#define osSaveSetEvent_TaskID(x)
#define osSaveSetEvent_Mask(y)
#define osSaveGetEvent_TaskID(x)
#define osSaveGetEvent_Event(y)
#define osSaveClearEvent_Mask(x)
#define osSaveWaitEvent_Mask(x)
#define osSaveGetAlarmBase_AlarmID(x)
#define osSaveGetAlarmBase_Info(y)
#define osSaveSetRelAlarm_AlarmID(x)
#define osSaveSetRelAlarm_increment(y)
#define osSaveSetRelAlarm_cycle(z)
#define osSaveSetAbsAlarm_AlarmID(x)
#define osSaveSetAbsAlarm_start(y)
#define osSaveSetAbsAlarm_cycle(z)
#define osSaveCancelAlarm_AlarmID(x)
#define osSaveGetAlarm_AlarmID(x)
#define osSaveGetAlarm_Tick(y)
#define osSaveIncrementCounter_CounterID(x)
#define osSaveGetCounterValue_CounterID(x)
#define osSaveGetCounterValue_Value(x)
#define osSaveGetElapsedValue_CounterID(x)
#define osSaveGetElapsedValue_Value(x)
#define osSaveGetElapsedValue_ElapsedValue(x)
#define osSaveStartScheduleTableRel_ScheduleTableID(x)
#define osSaveStartScheduleTableRel_Offset(y)
#define osSaveStartScheduleTableAbs_ScheduleTableID(x)
#define osSaveStartScheduleTableAbs_Tickvalue(y)
#define osSaveStopScheduleTable_ScheduleTableID(x)
#define osSaveNextScheduleTable_ScheduleTableID_current(x)
#define osSaveNextScheduleTable_ScheduleTableID_next(y)
#define osSaveGetScheduleTableStatus_ScheduleID(x)
#define osSaveGetScheduleTableStatus_ScheduleStatus(y)

#if((osdSC== SC3) || (osdSC== SC4))
#define osSaveCallTrustedFunction_FunctionIndex(x)
#define osSaveCallTrustedFunction_FunctionParams(y)
#define osSaveTerminateApplication_RestartOption(x)
#define osSaveTerminateApplication_Application(x)
#define osSaveGetApplicationState_Application(x)
#define osSaveGetApplicationState_Value(x)
#endif

#define osSaveosGetTaskMaxExecutionTime_TaskID(x)
#define osSaveosGetTaskMaxExecutionTime_MaxTime(y)
#define osSaveosGetISRMaxExecutionTime_ISRID(x)
#define osSaveosGetISRMaxExecutionTime_MaxTime(y)
#define osSaveosGetTaskMinInterArrivalTime_TaskID(x)
#define osSaveosGetTaskMinInterArrivalTime_MinTime(y)
#define osSaveosGetISRMinInterArrivalTime_ISRID(x)
#define osSaveosGetISRMinInterArrivalTime_MinTime(y)
#define osSaveosGetTaskMaxBlockingTime_TaskID(x)
#define osSaveosGetTaskMaxBlockingTime_BlockType(y)
#define osSaveosGetTaskMaxBlockingTime_ResourceID(z)
#define osSaveosGetTaskMaxBlockingTime_MaxTime(z1)
#define osSaveosGetISRMaxBlockingTime_ISRID(x)
#define osSaveosGetISRMaxBlockingTime_BlockType(y)
#define osSaveosGetISRMaxBlockingTime_ResourceID(z)
#define osSaveosGetISRMaxBlockingTime_MaxTime(z1)
#endif

#if osdErrorHook
#if osdGetServiceIdMacros

#define OSServiceId_ActivateTask          0x1100U
#define OSServiceId_TerminateTask         0x1200U
#define OSServiceId_ChainTask             0x1300U
#define OSServiceId_Schedule              0x1400U
#define OSServiceId_GetTaskState          0x1500U
#define OSServiceId_GetTaskID             0x1600U

#define OSServiceId_EnableAllInterrupts   0x2400U
#define OSServiceId_DisableAllInterrupts  0x2500U
#define OSServiceId_ResumeOSInterrupts    0x2A00U
#define OSServiceId_SuspendOSInterrupts   0x2900U
#define OSServiceId_ResumeAllInterrupts   0x2C00U
#define OSServiceId_SuspendAllInterrupts  0x2B00U
#define OSServiceId_GetISRID              0x2200U

#define OSServiceId_GetResource           0x3100U
#define OSServiceId_ReleaseResource       0x3200U

#define OSServiceId_SetEvent              0x4100U
#define OSServiceId_ClearEvent            0x4200U
#define OSServiceId_GetEvent              0x4300U
#define OSServiceId_WaitEvent             0x4400U

#define OSServiceId_GetAlarmBase          0x5100U
#define OSServiceId_GetAlarm              0x5200U
#define OSServiceId_SetRelAlarm           0x5300U
#define OSServiceId_SetAbsAlarm           0x5400U
#define OSServiceId_CancelAlarm           0x5500U

#define OSServiceId_StartScheduleTableRel      0x7100U
#define OSServiceId_StartScheduleTableAbs      0x7200U
#define OSServiceId_StopScheduleTable          0x7300U
#define OSServiceId_GetScheduleTableStatus     0x7400U
#define OSServiceId_NextScheduleTable          0x7500U
#define OSServiceId_SyncScheduleTable          0x7700U
#define OSServiceId_SetScheduleTableAsync      0x7800U
#define OSServiceId_StartScheduleTableSynchron 0x7C00U

#define OSServiceId_IncrementCounter         0x8100U
#define OSServiceId_GetCounterValue          0x8300U
#define OSServiceId_GetElapsedValue          0x8400U

#define OSServiceId_osGetTaskMinInterArrivalTime 0x9000U
#define OSServiceId_osGetTaskMaxExecutionTime    0x9800U
#define OSServiceId_osGetISRMaxExecutionTime     0x9900U
#define OSServiceId_osGetTaskMaxBlockingTime     0x9A00U
#define OSServiceId_osGetISRMaxBlockingTime      0x9B00U
#define OSServiceId_osGetISRMinInterArrivalTime  0x9F00U

#define OSServiceId_GetApplicationState        0xB100U
#define OSServiceId_AllowAccess                0xB200U
#define OSServiceId_TerminateApplication       0xB400U

#define OSServiceId_GetSemaphore          0xC100U
#define OSServiceId_ReleaseSemaphore      0xC200U

#define OSServiceId_CallTrustedFunction        0xE300U

#define OSErrorGetServiceId()       ((OSServiceIdType) (osOwnCcb->LockIsNotNeeded.ossLastError & 0xFF00U))

#endif

#define OSErrorGetosCANError()      osOwnCcb->LockIsNotNeeded.ossLastError

#if osdParameterAccessMacros

#define OSError_ActivateTask_TaskID()                      (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osTaskType)
#define OSError_ChainTask_TaskID()                         (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osTaskType)
#define OSError_GetTaskID_TaskID()                         (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osTaskRefType)
#define OSError_GetTaskState_TaskID()                      (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osTaskType)
#define OSError_GetTaskState_State()                       (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTaskStateRefType)

#define OSError_GetResource_ResID()                        (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osResourceType)
#define OSError_ReleaseResource_ResID()                    (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osResourceType)
#define OSError_GetSemaphore_SemaID()                      (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osOsSemaphoreType)
#define OSError_ReleaseSemaphore_SemaID()                  (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osOsSemaphoreType)

#define OSError_SetEvent_TaskID()                          (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osTaskType)
#define OSError_SetEvent_Mask()                            (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osEventMaskType)
#define OSError_GetEvent_TaskID()                          (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osTaskType)
#define OSError_GetEvent_Event()                           (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osEventMaskRefType)
#define OSError_ClearEvent_Mask()                          (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osEventMaskType)
#define OSError_WaitEvent_Mask()                           (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osEventMaskType)

#define OSError_GetAlarmBase_AlarmID()                     (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osAlarmType)
#define OSError_GetAlarmBase_Info()                        (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osAlarmBaseRefType)
#define OSError_SetRelAlarm_AlarmID()                      (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osAlarmType)
#define OSError_SetRelAlarm_increment()                    (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTickType)
#define OSError_SetRelAlarm_cycle()                        (osOwnCcb->LockIsNotNeeded.ossAPIParam3.osTickType)
#define OSError_SetAbsAlarm_AlarmID()                      (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osAlarmType)
#define OSError_SetAbsAlarm_start()                        (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTickType)
#define OSError_SetAbsAlarm_cycle()                        (osOwnCcb->LockIsNotNeeded.ossAPIParam3.osTickType)
#define OSError_CancelAlarm_AlarmID()                      (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osAlarmType)
#define OSError_GetAlarm_AlarmID()                         (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osAlarmType)
#define OSError_GetAlarm_Tick()                            (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTickRefType)

#define OSError_StartScheduleTableRel_ScheduleTableID()    (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osScheduleTableType)
#define OSError_StartScheduleTableRel_Offset()             (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTickType)
#define OSError_StartScheduleTableAbs_ScheduleTableID()    (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osScheduleTableType)
#define OSError_StartScheduleTableAbs_Tickvalue()          (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTickType)
#define OSError_StopScheduleTable_ScheduleTableID()        (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osScheduleTableType)
#define OSError_NextScheduleTable_ScheduleTableID_current()(osOwnCcb->LockIsNotNeeded.ossAPIParam1.osScheduleTableType)
#define OSError_NextScheduleTable_ScheduleTableID_next()   (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osScheduleTableType)
#define OSError_IncrementCounter_CounterID()               (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osCounterType)
#define OSError_GetScheduleTableStatus_ScheduleID()        (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osScheduleTableType)
#define OSError_GetScheduleTableStatus_ScheduleStatus()    (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osScheduleTableStatusRefType)

#if((osdSC== SC3) || (osdSC== SC4))
#define OSError_CallTrustedFunction_FunctionIndex()        (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osFunctionIndexType)
#define OSError_CallTrustedFunction_FunctionParams()       (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTrustedFunctionParameterRefType)
#define OSError_TerminateApplication_RestartOption()       (osOwnCcb->LockIsNotNeeded.ossAPIParam1.RestartType)
#endif

#if((osdSC == SC3) || (osdSC == SC4))
#define OSError_GetApplicationState_Application()          (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osApplicationType)
#define OSError_GetApplicationState_Value()                (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osApplicationStateRefType)
#endif

#define OSError_GetCounterValue_CounterID()                 (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osCounterType)
#define OSError_GetCounterValue_Value()                     (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTickRefType)

#define OSError_GetElapsedValue_CounterID()                 (osOwnCcb->LockIsNotNeeded.ossAPIParam1.osCounterType)
#define OSError_GetElapsedValue_Value()                     (osOwnCcb->LockIsNotNeeded.ossAPIParam2.osTickRefType)
#define OSError_GetElapsedValue_ElapsedValue()              (osOwnCcb->LockIsNotNeeded.ossAPIParam3.osTickRefType)

#endif
#endif
#endif

