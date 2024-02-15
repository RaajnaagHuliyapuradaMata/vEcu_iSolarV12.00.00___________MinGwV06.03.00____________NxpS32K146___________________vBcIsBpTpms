/**
 * \file
 *
 * \brief AUTOSAR SCrc
 *
 * This file contains the implementation of the AUTOSAR
 * module SCrc.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2013 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*
 * Misra-C:2004 Deviations:
 *
 * MISRA-1) Deviated Rule: 19.6 (required)
 * #undef shall not be used
 *
 * Reason:
 * The macro names used for memory mapping are different between
 * AUTOSAR 3.x and AUTOSAR 4.x. For sake of compatibility between
 * these worlds, both macros are defined.
 * Since only one of them will be undefined within the MemMap.h file,
 * all macros are undefined after the memory section ends.
 * This avoids possible redundant macro definitions.
 */

/*==================[inclusions]============================================*/

#include <SCrc.h>              /* Module public API      */
#include <SCrc_CRC8.h>         /* public API for CRC8 calculation     */
#include <SCrc_CRC8H2F.h>         /* public API for CRC8H2F calculation     */

/*==================[macros]================================================*/

#if (defined SCRC_CRC8_INITIALVALUE) /* to prevent double declaration */
#error SCRC_CRC8_INITIALVALUE is already defined
#endif /* #if (defined SCRC_CRC8_INITIALVALUE) */

/** \brief Initial value used for Crc calculation with polynomial 0x11D (SAE-J1850) */
#define SCRC_CRC8_INITIALVALUE 0xFFU

#if (defined SCRC_CRC8_XORVALUE) /* to prevent double declaration */
#error SCRC_CRC8_XORVALUE is already defined
#endif /* #if (defined SCRC_CRC8_XORVALUE) */

/** \brief Xor-value for Crc calculation with polynomial 0x11D */
#define SCRC_CRC8_XORVALUE 0xFFU

#if (defined SCRC_CRC8H2F_INITIALVALUE) /* to prevent double declaration */
#error SCRC_CRC8H2F_INITIALVALUE is already defined
#endif /* #if (defined SCRC_CRC8H2F_INITIALVALUE) */

/** \brief Initial value used for Crc calculation with polynomial 0x12F */
#define SCRC_CRC8H2F_INITIALVALUE 0xFFU

#if (defined SCRC_CRC8H2F_XORVALUE) /* to prevent double declaration */
#error SCRC_CRC8H2F_XORVALUE is already defined
#endif /* #if (defined SCRC_CRC8H2F_XORVALUE) */

/** \brief Xor-value for Crc calculation with polynomial 0x12F */
#define SCRC_CRC8H2F_XORVALUE 0xFFU


/*==================[type definitions]======================================*/

#if !((SCRC_FUNCENABLED_SCRC_CRC8 == STD_ON) || \
     (SCRC_FUNCENABLED_SCRC_CRC8H2F == STD_ON))

/** \brief Dummy type definition in case SCrc.c contains no source code */
typedef void SCrcPreventEmptyTranslationUnit;

#endif /* !((SCRC_FUNCENABLED_SCRC_CRC8 == STD_ON) || \
     (SCRC_FUNCENABLED_SCRC_CRC8H2F == STD_ON)) */

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

#if ((SCRC_FUNCENABLED_SCRC_CRC8 == STD_ON) || \
     (SCRC_FUNCENABLED_SCRC_CRC8H2F == STD_ON))

#define SCRC_START_SEC_CONST_8BIT
#define SCRC_START_SEC_CONST_8
#include <MemMap.h>

#endif /* ((SCRC_FUNCENABLED_SCRC_CRC8 == STD_ON) || \
     (SCRC_FUNCENABLED_SCRC_CRC8H2F == STD_ON)) */

#if (SCRC_FUNCENABLED_SCRC_CRC8 == STD_ON)

/* Table of pre-computed values for CRC8 */
static CONST(uint8, SCRC_CONST) SCrc_Table8[256] =
{
    0x00U, 0x1DU, 0x3AU, 0x27U, 0x74U, 0x69U, 0x4EU, 0x53U, 0xE8U, 0xF5U, 0xD2U,
    0xCFU, 0x9CU, 0x81U, 0xA6U, 0xBBU,
    0xCDU, 0xD0U, 0xF7U, 0xEAU, 0xB9U, 0xA4U, 0x83U, 0x9EU, 0x25U, 0x38U, 0x1FU,
    0x02U, 0x51U, 0x4CU, 0x6BU, 0x76U, 0x87U, 0x9AU, 0xBDU, 0xA0U, 0xF3U, 0xEEU,
    0xC9U, 0xD4U, 0x6FU, 0x72U, 0x55U, 0x48U, 0x1BU, 0x06U, 0x21U, 0x3CU, 0x4AU,
    0x57U, 0x70U, 0x6DU, 0x3EU, 0x23U, 0x04U, 0x19U, 0xA2U, 0xBFU, 0x98U, 0x85U,
    0xD6U, 0xCBU, 0xECU, 0xF1U, 0x13U, 0x0EU, 0x29U, 0x34U, 0x67U, 0x7AU, 0x5DU,
    0x40U, 0xFBU, 0xE6U, 0xC1U, 0xDCU, 0x8FU, 0x92U, 0xB5U, 0xA8U, 0xDEU, 0xC3U,
    0xE4U, 0xF9U, 0xAAU, 0xB7U, 0x90U, 0x8DU, 0x36U, 0x2BU, 0x0CU, 0x11U, 0x42U,
    0x5FU, 0x78U, 0x65U, 0x94U, 0x89U, 0xAEU, 0xB3U, 0xE0U, 0xFDU, 0xDAU, 0xC7U,
    0x7CU, 0x61U, 0x46U, 0x5BU, 0x08U, 0x15U, 0x32U, 0x2FU, 0x59U, 0x44U, 0x63U,
    0x7EU, 0x2DU, 0x30U, 0x17U, 0x0AU, 0xB1U, 0xACU, 0x8BU, 0x96U, 0xC5U, 0xD8U,
    0xFFU, 0xE2U, 0x26U, 0x3BU, 0x1CU, 0x01U, 0x52U, 0x4FU, 0x68U, 0x75U, 0xCEU,
    0xD3U, 0xF4U, 0xE9U, 0xBAU, 0xA7U, 0x80U, 0x9DU, 0xEBU, 0xF6U, 0xD1U, 0xCCU,
    0x9FU, 0x82U, 0xA5U, 0xB8U, 0x03U, 0x1EU, 0x39U, 0x24U, 0x77U, 0x6AU, 0x4DU,
    0x50U, 0xA1U, 0xBCU, 0x9BU, 0x86U, 0xD5U, 0xC8U, 0xEFU, 0xF2U, 0x49U, 0x54U,
    0x73U, 0x6EU, 0x3DU, 0x20U, 0x07U, 0x1AU, 0x6CU, 0x71U, 0x56U, 0x4BU, 0x18U,
    0x05U, 0x22U, 0x3FU, 0x84U, 0x99U, 0xBEU, 0xA3U, 0xF0U, 0xEDU, 0xCAU, 0xD7U,
    0x35U, 0x28U, 0x0FU, 0x12U, 0x41U, 0x5CU, 0x7BU, 0x66U, 0xDDU, 0xC0U, 0xE7U,
    0xFAU, 0xA9U, 0xB4U, 0x93U, 0x8EU, 0xF8U, 0xE5U, 0xC2U, 0xDFU, 0x8CU, 0x91U,
    0xB6U, 0xABU, 0x10U, 0x0DU, 0x2AU, 0x37U, 0x64U, 0x79U, 0x5EU, 0x43U, 0xB2U,
    0xAFU, 0x88U, 0x95U, 0xC6U, 0xDBU, 0xFCU, 0xE1U, 0x5AU, 0x47U, 0x60U, 0x7DU,
    0x2EU, 0x33U, 0x14U, 0x09U, 0x7FU, 0x62U, 0x45U, 0x58U, 0x0BU, 0x16U, 0x31U,
    0x2CU, 0x97U, 0x8AU, 0xADU, 0xB0U, 0xE3U, 0xFEU, 0xD9U, 0xC4U
};

#endif /* SCRC_FUNCENABLED_SCRC_CRC8 == STD_ON */

#if (SCRC_FUNCENABLED_SCRC_CRC8H2F == STD_ON)

/* Table of pre-computed values for CRC8H2F */
static CONST(uint8, SCRC_CONST) SCrc_Table8H2F[256] =
{
    0x00U, 0x2FU, 0x5EU, 0x71U, 0xBCU, 0x93U, 0xE2U, 0xCDU, 0x57U, 0x78U, 0x09U,
    0x26U, 0xEBU, 0xC4U, 0xB5U, 0x9AU,
    0xAEU, 0x81U, 0xF0U, 0xDFU, 0x12U, 0x3DU, 0x4CU, 0x63U, 0xF9U, 0xD6U, 0xA7U,
    0x88U, 0x45U, 0x6AU, 0x1BU, 0x34U, 0x73U, 0x5CU, 0x2DU, 0x02U, 0xCFU, 0xE0U,
    0x91U, 0xBEU, 0x24U, 0x0BU, 0x7AU, 0x55U, 0x98U, 0xB7U, 0xC6U, 0xE9U, 0xDDU,
    0xF2U, 0x83U, 0xACU, 0x61U, 0x4EU, 0x3FU, 0x10U, 0x8AU, 0xA5U, 0xD4U, 0xFBU,
    0x36U, 0x19U, 0x68U, 0x47U, 0xE6U, 0xC9U, 0xB8U, 0x97U, 0x5AU, 0x75U, 0x04U,
    0x2BU, 0xB1U, 0x9EU, 0xEFU, 0xC0U, 0x0DU, 0x22U, 0x53U, 0x7CU, 0x48U, 0x67U,
    0x16U, 0x39U, 0xF4U, 0xDBU, 0xAAU, 0x85U, 0x1FU, 0x30U, 0x41U, 0x6EU, 0xA3U,
    0x8CU, 0xFDU, 0xD2U, 0x95U, 0xBAU, 0xCBU, 0xE4U, 0x29U, 0x06U, 0x77U, 0x58U,
    0xC2U, 0xEDU, 0x9CU, 0xB3U, 0x7EU, 0x51U, 0x20U, 0x0FU, 0x3BU, 0x14U, 0x65U,
    0x4AU, 0x87U, 0xA8U, 0xD9U, 0xF6U, 0x6CU, 0x43U, 0x32U, 0x1DU, 0xD0U, 0xFFU,
    0x8EU, 0xA1U, 0xE3U, 0xCCU, 0xBDU, 0x92U, 0x5FU, 0x70U, 0x01U, 0x2EU, 0xB4U,
    0x9BU, 0xEAU, 0xC5U, 0x08U, 0x27U, 0x56U, 0x79U, 0x4DU, 0x62U, 0x13U, 0x3CU,
    0xF1U, 0xDEU, 0xAFU, 0x80U, 0x1AU, 0x35U, 0x44U, 0x6BU, 0xA6U, 0x89U, 0xF8U,
    0xD7U, 0x90U, 0xBFU, 0xCEU, 0xE1U, 0x2CU, 0x03U, 0x72U, 0x5DU, 0xC7U, 0xE8U,
    0x99U, 0xB6U, 0x7BU, 0x54U, 0x25U, 0x0AU, 0x3EU, 0x11U, 0x60U, 0x4FU, 0x82U,
    0xADU, 0xDCU, 0xF3U, 0x69U, 0x46U, 0x37U, 0x18U, 0xD5U, 0xFAU, 0x8BU, 0xA4U,
    0x05U, 0x2AU, 0x5BU, 0x74U, 0xB9U, 0x96U, 0xE7U, 0xC8U, 0x52U, 0x7DU, 0x0CU,
    0x23U, 0xEEU, 0xC1U, 0xB0U, 0x9FU, 0xABU, 0x84U, 0xF5U, 0xDAU, 0x17U, 0x38U,
    0x49U, 0x66U, 0xFCU, 0xD3U, 0xA2U, 0x8DU, 0x40U, 0x6FU, 0x1EU, 0x31U, 0x76U,
    0x59U, 0x28U, 0x07U, 0xCAU, 0xE5U, 0x94U, 0xBBU, 0x21U, 0x0EU, 0x7FU, 0x50U,
    0x9DU, 0xB2U, 0xC3U, 0xECU, 0xD8U, 0xF7U, 0x86U, 0xA9U, 0x64U, 0x4BU, 0x3AU,
    0x15U, 0x8FU, 0xA0U, 0xD1U, 0xFEU, 0x33U, 0x1CU, 0x6DU, 0x42U,
};

#endif /* SCRC_FUNCENABLED_SCRC_CRC8H2F == STD_ON */

#if ((SCRC_FUNCENABLED_SCRC_CRC8 == STD_ON) || \
     (SCRC_FUNCENABLED_SCRC_CRC8H2F == STD_ON))

#define SCRC_STOP_SEC_CONST_8BIT
#define SCRC_STOP_SEC_CONST_8
#include <MemMap.h>
/* Deviation MISRA-1 <+4> */
#undef SCRC_START_SEC_CONST_8BIT
#undef SCRC_START_SEC_CONST_8
#undef SCRC_STOP_SEC_CONST_8BIT
#undef SCRC_STOP_SEC_CONST_8

#endif /* #if ((SCRC_FUNCENABLED_SCRC_CRC8 == STD_ON) || \
     (SCRC_FUNCENABLED_SCRC_CRC8H2F == STD_ON)) */

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

#if ((SCRC_FUNCENABLED_SCRC_CRC8 == STD_ON) || \
     (SCRC_FUNCENABLED_SCRC_CRC8H2F == STD_ON))

#define SCRC_START_SEC_CODE
#include <MemMap.h>

#endif /* #if ((SCRC_FUNCENABLED_SCRC_CRC8 == STD_ON) || \
     (SCRC_FUNCENABLED_SCRC_CRC8H2F == STD_ON)) */

#if (SCRC_FUNCENABLED_SCRC_CRC8 == STD_ON)

FUNC(uint8, SCRC_CODE) SCrc_CalculateCRC8
(
    P2CONST(uint8, AUTOMATIC, SCRC_APPL_DATA) SCrc_DataPtr,
    uint32                                    SCrc_Length,
    uint8                                     SCrc_StartValue8,
    boolean                                   SCrc_IsFirstCall
)
{
    uint32 i;

    /* Check if this is the first call in a sequence or individual CRC calculation.
     * If so, then use the defined initial value. Otherwise, the start value
     * is interpreted as the return value of the previous function call.
     */
    if (FALSE == SCrc_IsFirstCall)
    {
        SCrc_StartValue8 = (uint8)(SCrc_StartValue8 ^ SCRC_CRC8_XORVALUE);
    } else {
        SCrc_StartValue8 = SCRC_CRC8_INITIALVALUE;
    }

    /* Process all data (byte wise) */
    for (i=0U; i<SCrc_Length; ++i)
    {
        SCrc_StartValue8 = SCrc_Table8[(uint8)(SCrc_StartValue8 ^ SCrc_DataPtr[i])];
    }

    /* Apply xor-value of 0xFF as specified in ASR R4.0 CRC SWS. */
    return (uint8)(SCrc_StartValue8 ^ SCRC_CRC8_XORVALUE);
}

#endif /* (SCRC_FUNCENABLED_SCRC_CRC8 == STD_ON) */

#if (SCRC_FUNCENABLED_SCRC_CRC8H2F == STD_ON)

FUNC(uint8, SCRC_CODE) SCrc_CalculateCRC8H2F
(
    P2CONST(uint8, AUTOMATIC, SCRC_APPL_DATA) SCrc_DataPtr,
    uint32                                    SCrc_Length,
    uint8                                     SCrc_StartValue8H2F,
    boolean                                   SCrc_IsFirstCall
)
{
    uint32 i;

    /* Check if this is the first call in a sequence or individual CRC calculation.
     * If so, then use the defined initial value. Otherwise, the start value
     * is interpreted as the return value of the previous function call.
     */
    if (FALSE == SCrc_IsFirstCall)
    {
        SCrc_StartValue8H2F = (uint8)(SCrc_StartValue8H2F ^ SCRC_CRC8H2F_XORVALUE);
    } else {
        SCrc_StartValue8H2F = SCRC_CRC8H2F_INITIALVALUE;
    }

    /* Process all data (byte wise) */
    for (i=0U; i<SCrc_Length; ++i)
    {
        SCrc_StartValue8H2F = SCrc_Table8H2F[(uint8)(SCrc_StartValue8H2F ^ SCrc_DataPtr[i])];
    }

    /* Apply xor-value of 0xFF as specified in ASR R4.0 CRC SWS. */
    return (uint8)(SCrc_StartValue8H2F ^ SCRC_CRC8H2F_XORVALUE);
}

#endif /* (SCRC_FUNCENABLED_SCRC_CRC8H2F == STD_ON) */

#if ((SCRC_FUNCENABLED_SCRC_CRC8 == STD_ON) || \
     (SCRC_FUNCENABLED_SCRC_CRC8H2F == STD_ON))

#define SCRC_STOP_SEC_CODE
#include <MemMap.h>

#endif /* #if ((SCRC_FUNCENABLED_SCRC_CRC8 == STD_ON) || \
     (SCRC_FUNCENABLED_SCRC_CRC8H2F == STD_ON)) */

/*==================[internal function definitions]=========================*/

/*==================[end of file]===========================================*/
