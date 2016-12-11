
/* File generated by gen_cfile.py. Should not be modified. */

#ifndef MTDAPP1CAN1SLAVE_H
#define MTDAPP1CAN1SLAVE_H

#include "data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 MTDApp1CAN1Slave_valueRangeTest (UNS8 typeValue, void * value);
const indextable * MTDApp1CAN1Slave_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks);

/* Master node data struct */
extern CO_Data MTDApp1CAN1Slave_Data;
extern UNS8 can1_DI_MC1[5];		/* Mapped at index 0x2000, subindex 0x01 - 0x05 */
extern UNS8 can1_DI_M;		/* Mapped at index 0x2002, subindex 0x00*/
extern UNS8 can1_DI_MC2[5];		/* Mapped at index 0x2005, subindex 0x01 - 0x05 */
extern UNS8 can1_HMITxProData[8];		/* Mapped at index 0x2006, subindex 0x01 - 0x08 */
extern UNS8 can1_TxMC1ATO_Time[6];		/* Mapped at index 0x2007, subindex 0x01 - 0x06 */
extern UNS8 can1_HMITxDev_Time[7];		/* Mapped at index 0x2008, subindex 0x01 - 0x07 */
extern UNS8 can1_Door_MC1_Odd[8];		/* Mapped at index 0x2009, subindex 0x01 - 0x08 */
extern UNS8 can1_Door_M_Odd[8];		/* Mapped at index 0x200B, subindex 0x01 - 0x08 */
extern UNS8 can1_Door_MC2_Odd[8];		/* Mapped at index 0x200E, subindex 0x01 - 0x08 */
extern UNS8 can1_ACC_MC1[8];		/* Mapped at index 0x200F, subindex 0x01 - 0x08 */
extern UNS8 can1_ACC_M[8];		/* Mapped at index 0x2011, subindex 0x01 - 0x08 */
extern UNS8 can1_ACC_MC2[8];		/* Mapped at index 0x2014, subindex 0x01 - 0x08 */
extern UNS8 can1_BCU_MC1_1[8];		/* Mapped at index 0x2015, subindex 0x01 - 0x08 */
extern UNS8 can1_BCU_MC1_2[8];		/* Mapped at index 0x2016, subindex 0x01 - 0x08 */
extern UNS8 can1_BCU_MC1_3[8];		/* Mapped at index 0x2017, subindex 0x01 - 0x08 */
extern UNS8 can1_BCU_M_1[8];		/* Mapped at index 0x201B, subindex 0x01 - 0x08 */
extern UNS8 can1_BCU_M_2[8];		/* Mapped at index 0x201C, subindex 0x01 - 0x08 */
extern UNS8 can1_BCU_M_3[8];		/* Mapped at index 0x201D, subindex 0x01 - 0x08 */
extern UNS8 can1_BCU_MC2_1[8];		/* Mapped at index 0x2024, subindex 0x01 - 0x08 */
extern UNS8 can1_BCU_MC2_2[8];		/* Mapped at index 0x2025, subindex 0x01 - 0x08 */
extern UNS8 can1_BCU_MC2_3[8];		/* Mapped at index 0x2026, subindex 0x01 - 0x08 */
extern UNS8 can1_ATC_MC1_1[7];		/* Mapped at index 0x2027, subindex 0x01 - 0x07 */
extern UNS8 can1_ATC_MC1_2[8];		/* Mapped at index 0x2028, subindex 0x01 - 0x08 */
extern UNS8 can1_ATC_MC1_3[8];		/* Mapped at index 0x2029, subindex 0x01 - 0x08 */
extern UNS8 can1_ATC_MC1_4[4];		/* Mapped at index 0x202A, subindex 0x01 - 0x04 */
extern UNS8 can1_ATC_MC2_1[7];		/* Mapped at index 0x202B, subindex 0x01 - 0x07 */
extern UNS8 can1_ATC_MC2_2[8];		/* Mapped at index 0x202C, subindex 0x01 - 0x08 */
extern UNS8 can1_ATC_MC2_3[8];		/* Mapped at index 0x202D, subindex 0x01 - 0x08 */
extern UNS8 can1_ATC_MC2_4[4];		/* Mapped at index 0x202E, subindex 0x01 - 0x04 */
extern UNS8 can1_PIS_MC1_1[8];		/* Mapped at index 0x202F, subindex 0x01 - 0x08 */
extern UNS8 can1_PIS_MC1_2[3];		/* Mapped at index 0x2030, subindex 0x01 - 0x03 */
extern UNS8 can1_PIS_MC2_1[8];		/* Mapped at index 0x2031, subindex 0x01 - 0x08 */
extern UNS8 can1_PIS_MC2_2[3];		/* Mapped at index 0x2032, subindex 0x01 - 0x03 */
extern UNS8 can1_VVVF1_MC1_1[8];		/* Mapped at index 0x2033, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF1_MC1_2[6];		/* Mapped at index 0x2034, subindex 0x01 - 0x06 */
extern UNS8 can1_VVVF1_MC1_3[8];		/* Mapped at index 0x2035, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF1_MC1_4[8];		/* Mapped at index 0x2036, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF1_MC1_5[6];		/* Mapped at index 0x2037, subindex 0x01 - 0x06 */
extern UNS8 can1_VVVF2_MC1_1[8];		/* Mapped at index 0x2038, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF2_MC1_2[6];		/* Mapped at index 0x2039, subindex 0x01 - 0x06 */
extern UNS8 can1_VVVF2_MC1_3[8];		/* Mapped at index 0x203A, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF2_MC1_4[8];		/* Mapped at index 0x203B, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF2_MC1_5[6];		/* Mapped at index 0x203C, subindex 0x01 - 0x06 */
extern UNS8 can1_VVVF1_M_1[8];		/* Mapped at index 0x203D, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF1_M_2[6];		/* Mapped at index 0x203E, subindex 0x01 - 0x06 */
extern UNS8 can1_VVVF1_M_3[8];		/* Mapped at index 0x203F, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF1_M_4[8];		/* Mapped at index 0x2040, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF1_M_5[6];		/* Mapped at index 0x2041, subindex 0x01 - 0x06 */
extern UNS8 can1_VVVF2_M_1[8];		/* Mapped at index 0x2042, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF2_M_2[6];		/* Mapped at index 0x2043, subindex 0x01 - 0x06 */
extern UNS8 can1_VVVF2_M_3[8];		/* Mapped at index 0x2044, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF2_M_4[8];		/* Mapped at index 0x2045, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF2_M_5[6];		/* Mapped at index 0x2046, subindex 0x01 - 0x06 */
extern UNS8 can1_VVVF1_MC2_1[8];		/* Mapped at index 0x2047, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF1_MC2_2[6];		/* Mapped at index 0x2048, subindex 0x01 - 0x06 */
extern UNS8 can1_VVVF1_MC2_3[8];		/* Mapped at index 0x2049, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF1_MC2_4[8];		/* Mapped at index 0x204A, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF1_MC2_5[6];		/* Mapped at index 0x204B, subindex 0x01 - 0x06 */
extern UNS8 can1_VVVF2_MC2_1[8];		/* Mapped at index 0x204C, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF2_MC2_2[6];		/* Mapped at index 0x204D, subindex 0x01 - 0x06 */
extern UNS8 can1_VVVF2_MC2_3[8];		/* Mapped at index 0x204E, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF2_MC2_4[8];		/* Mapped at index 0x204F, subindex 0x01 - 0x08 */
extern UNS8 can1_VVVF2_MC2_5[6];		/* Mapped at index 0x2050, subindex 0x01 - 0x06 */
extern UNS8 can1_MC1SubDevFault[2];		/* Mapped at index 0x2057, subindex 0x01 - 0x02 */
extern UNS8 can1_TSubDevFault[2];		/* Mapped at index 0x2058, subindex 0x01 - 0x02 */
extern UNS8 can1_MSubDevFault[2];		/* Mapped at index 0x2059, subindex 0x01 - 0x02 */
extern UNS8 can1_T1SubDevFault[2];		/* Mapped at index 0x205A, subindex 0x01 - 0x02 */
extern UNS8 can1_T2SubDevFault[2];		/* Mapped at index 0x205B, subindex 0x01 - 0x02 */
extern UNS8 can1_MC2SubDevFault[2];		/* Mapped at index 0x205C, subindex 0x01 - 0x02 */
extern UNS8 can1_CCUTxStatu[5];		/* Mapped at index 0x205D, subindex 0x01 - 0x05 */
extern UNS8 can1_HMITxCarNoPar[4];		/* Mapped at index 0x205E, subindex 0x01 - 0x04 */
extern UNS8 can1_HMITxFaultQueryCmd[4];		/* Mapped at index 0x205F, subindex 0x01 - 0x04 */
extern UNS8 can1_HMITxAccTemp[1];		/* Mapped at index 0x2060, subindex 0x01 - 0x01 */
extern UNS8 can1_ACC_MC1_2;		/* Mapped at index 0x2063, subindex 0x00*/
extern UNS8 can1_ACC_M_2;		/* Mapped at index 0x2065, subindex 0x00*/
extern UNS8 can1_ACC_MC2_2;		/* Mapped at index 0x2068, subindex 0x00*/
extern UNS8 can1_HMITxDelRecordCmd[3];		/* Mapped at index 0x206A, subindex 0x01 - 0x03 */
extern UNS8 can1_HMITxInitData[8];		/* Mapped at index 0x206B, subindex 0x01 - 0x08 */
extern UNS8 can1_CCUTxNodeSta[1];		/* Mapped at index 0x206E, subindex 0x01 - 0x01 */
extern UNS8 can1_Door_MC1_Even[8];		/* Mapped at index 0x206F, subindex 0x01 - 0x08 */
extern UNS8 can1_Door_M_Even[8];		/* Mapped at index 0x2071, subindex 0x01 - 0x08 */
extern UNS8 can1_Door_MC2_Even[8];		/* Mapped at index 0x2074, subindex 0x01 - 0x08 */
extern UNS8 can1_TxMC2ATO_Time[6];		/* Mapped at index 0x2075, subindex 0x01 - 0x06 */
extern UNS8 can1_ACP_MC1_1[8];		/* Mapped at index 0x2079, subindex 0x01 - 0x08 */
extern UNS8 can1_ACP_MC1_2[3];		/* Mapped at index 0x207A, subindex 0x01 - 0x03 */
extern UNS8 can1_ACP_MC2_1[8];		/* Mapped at index 0x207B, subindex 0x01 - 0x08 */
extern UNS8 can1_ACP_MC2_2[3];		/* Mapped at index 0x207C, subindex 0x01 - 0x03 */
extern UNS8 can1_HMITxStationInfrom1[2];		/* Mapped at index 0x207D, subindex 0x01 - 0x02 */
extern UNS8 can1_HMITxStationInfrom2[8];		/* Mapped at index 0x207E, subindex 0x01 - 0x08 */
extern UNS8 can1_MC1TxCarNo[2];		/* Mapped at index 0x207F, subindex 0x01 - 0x02 */
extern UNS8 can1_MTxCarNo[2];		/* Mapped at index 0x2081, subindex 0x01 - 0x02 */
extern UNS8 can1_MC2TxCarNo[2];		/* Mapped at index 0x2084, subindex 0x01 - 0x02 */
extern UNS8 can1_TxFaultLog1[7];		/* Mapped at index 0x2086, subindex 0x01 - 0x07 */
extern UNS8 can1_TxFaultLog2[7];		/* Mapped at index 0x2087, subindex 0x01 - 0x07 */
extern UNS8 can1_RxERMFaultRqCmd[2];		/* Mapped at index 0x2089, subindex 0x01 - 0x02 */
extern UNS8 can1_TxMC1ATCSdr[6];		/* Mapped at index 0x208A, subindex 0x01 - 0x06 */
extern UNS8 can1_TxMC2ATCSdr[6];		/* Mapped at index 0x208B, subindex 0x01 - 0x06 */

#endif // MTDAPP1CAN1SLAVE_H