

#if ! defined __TCB_H__
#define __TCB_H__
#if defined USE_QUOTE_INCLUDES
#include "vrm.h"
#else
#include <vrm.h>
#endif

#define osdVrmGenMajRelNum 1
#define osdVrmGenMinRelNum 1
#if defined USE_QUOTE_INCLUDES
#include "vrm.h"
#else
#include <vrm.h>
#endif

#define osdNumberOfAlarmsOnHiResCounter 0

#define osdUseHighResolutionTimer 0

#define osdHwTimerNeeded_OSTM 1
#define osdHwTimerNeeded_OSTM_HIRES 0

#define osdHardwareTimerNeeded 1
#define osdGetCurrentTimeHighResHybridIdx -1
#define osdGetCurrentTimeHighResMonoIdx -1
#define osdGetCurrentTimeStdIdx -1
#define osdSetTIPAbsMaxGtSemiCountIdx -1
#define osdSetTIPAbsMaxLeSemiCountIdx -1
#define osdSetTIPRelMaxGtSemiCountIdx -1
#define osdSetTIPRelMaxLeSemiCountIdx -1
#define osdClearTIPAbsIdx -1
#define osdClearTIPRelIdx -1
#define osdHandleCounterInterruptHiResIdx -1
#define osdHandleCounterInterruptStdIdx 0
#define osdInsertMinHeapHiResIdx -1
#define osdInsertMinHeapStdIdx 0
#define osdORTIDebug 0
#define osdORTIVersion  not used anymore!
#define osdORTIStdVersion 200
#define osdORTIEnabled 0
#define osdNumberOfScheduleTables 0
#define osdNumberOfHiResSchedTabs 0
#define osdScheduleTableSyncUsed 0
#define osdNumberOfSTExpiryPoints 0
#define osdNumberOfSTSetEvent 0
#define osdNumberOfSTActivateTask 0
#define osdNumberOfSTEntries 0
#define osdRH850_F1L

#define osdExceptionDetails  1

#define osdRH850_FPU   0

#define ADC0_SG1_CAT2_ISR_index  0
#define CanIsrGlobalStatus_index  1
#define CanIsrRxFifo_index  2
#define CanIsrStatus_0_index  3
#define CanIsrTx_0_index  4
#define CanIsrWakeup_0_index  5
#define IsrIntP11_index  6
#define osOstmInterrupt_c0_index  7
#define osdISRHooks            0

#define osdNumberOfPrioLevels  8
#define osdNumberOfInterrupts  288

#define osdSystemLevel         5
#define osdSystemLevelMask     0x000000e0UL
#define osdSystemStackSize     512
#define osdStackCheckPattern   0xaaaaaaaaUL

#define osdOnCore                  0
#define osdNumberOfAvailableCores  1
#define osdTimerCompareRegValCore0 0x00009c3f
#define osdTimerInterruptSourceNumber (76)
#define CC ECC2
#define STATUS_LEVEL EXTENDED_STATUS
#define osdByteSize 8U
#define osdCompiler osdCompilerGHSRH850
#define osdFullPreempt 0
#define osdLib 0
#define osdMixedPreempt 0
#define osdNeedIOCTypes 0
#define osdNonPreempt 1
#define osdNumApplErrorHooks 0
#define osdNumApplShutdownHooks 0
#define osdNumApplStartupHooks 0
#define osdNumberOfAllResources 1
#define osdNumberOfBasicTasks 1
#define osdNumberOfExtendedTasks 7
#define osdNumberOfIOCCommunications 0
#define osdNumberOfInternalResources 0
#define osdNumberOfInterruptResources 0
#define osdNumberOfPriorities 8
#define osdNumberOfQueuedIOCCallbacks 0
#define osdNumberOfQueuedIOCCommunications 0
#define osdNumberOfSemaphores 0
#define osdNumberOfTaskResources 1
#define osdRTSize 1
#define osdReducedStatusChecks 0
#define osdResAccessMaskBits 32
#define osdSC SC1
#define osdSysErrorHook 1
#define osdSysShutdownHook 1
#define osdSysStartupHook 1
#define osdTimingProtectionUsed 0
#define osdUseIOC 0
#define osdNumberOfAllISRs  8
#define osdNumberOfAllTasks 8
#define osdNumberOfCat1ISRs 0
#define osdNumberOfCat2ISRs 8
#define osdNumberOfTrustedFunctions 0
#define osdUseTrustedFunctionStubs 0
#define osdNumberOfAlarms 9
#define osdNumberOfAlarmCallback 0
#define osdNumberOfAlarmSetEvent 9
#define osdNumberOfAlarmActivateTask 0
#define osdNumberOfAlarmIncrementCounter 0
#define osdNumberOfCounters 1
#define osdNumberOfSWCounters 0
#define osdNumberOfSWAndSRCounters 1
#define osdNumberOfApplications 0
#define osdStackCheck 1
#define osdStackUsageMeasurement 0

#define osdTypeHeaderInclude 1

#define osdEnableAssertions 1

#define osdGetServiceIdMacros 1
#define osdParameterAccessMacros 1

#define osdTimingMeasurement 0
#define osdProtectAndMeasureAll 0
#define osdAsSelected 0
#define osdOnlyMeasureAll 0

#define osdProtReactKillTaskIsrAllowed  0
#define osdProtReactKillApplAllowed     0
#define osdProtReactKillApplRestAllowed 0
#define osdErrorHook 1
#define osdPreTaskHook 0
#define osdPostTaskHook 0
#define osdShutdownHook 1
#define osdProtectionHook 0

#if osdProtectionHook

#if(osdTimingProtectionUsed && osdProtReactKillTaskIsrAllowed)
#define osdKillTaskIsrPossible 1
#endif

#if((osdSC == SC4) && (defined osdTimingProtectionUsed) && (osdProtReactKillApplAllowed || osdProtReactKillApplRestAllowed))
#ifndef osdKillTaskIsrPossible
#define osdKillTaskIsrPossible 1
#endif
#define osdKillApplPossible 1
#endif
#endif

#if((osdSC == SC3) || (osdSC == SC4)) && (!defined osdTerminateApplicationNotUsed)
#ifndef osdKillTaskIsrPossible
#define osdKillTaskIsrPossible 1
#endif
#ifndef osdKillApplPossible
#define osdKillApplPossible 1
#endif
#endif

#ifndef osdKillTaskIsrPossible
#define osdKillTaskIsrPossible 0
#endif

#ifndef osdKillApplPossible
#define osdKillApplPossible 0
#endif

#define osdNumberOfProcesses (osdNumberOfAllTasks+osdNumberOfCat2ISRs)
#endif
