/**
 * \file
 *
 * \brief Instance description for EFUSE_MISC_REGS0
 *
 * Copyright (c) 2017 Atmel Corporation, a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

/* file generated from device description version  */
#ifndef _SAMB11_EFUSE_MISC_REGS0_INSTANCE_H_
#define _SAMB11_EFUSE_MISC_REGS0_INSTANCE_H_

/* ========== Register definition for EFUSE_MISC_REGS0 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_EFUSE_MISC_REGS0_EFUSE_GLOBAL_RESET (0x4000A000) /**< (EFUSE_MISC_REGS0) Active Low Global Reset */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_CONTROL (0x4000A004) /**< (EFUSE_MISC_REGS0) EFUSE 1 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_CONTROL (0x4000A008) /**< (EFUSE_MISC_REGS0) EFUSE 2 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_CONTROL (0x4000A00C) /**< (EFUSE_MISC_REGS0) EFUSE 3 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_CONTROL (0x4000A010) /**< (EFUSE_MISC_REGS0) EFUSE 4 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_CONTROL (0x4000A014) /**< (EFUSE_MISC_REGS0) EFUSE 5 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_CONTROL (0x4000A018) /**< (EFUSE_MISC_REGS0) EFUSE 6 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_PROG_0 (0x4000A01C) /**< (EFUSE_MISC_REGS0) EFUSE_1_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_PROG_1 (0x4000A020) /**< (EFUSE_MISC_REGS0) EFUSE_1_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_PROG_2 (0x4000A024) /**< (EFUSE_MISC_REGS0) EFUSE_1_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_PROG_3 (0x4000A028) /**< (EFUSE_MISC_REGS0) EFUSE_1_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_STATUS_0 (0x4000A02C) /**< (EFUSE_MISC_REGS0) EFUSE_1_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_STATUS_1 (0x4000A030) /**< (EFUSE_MISC_REGS0) EFUSE_1_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_STATUS_2 (0x4000A034) /**< (EFUSE_MISC_REGS0) EFUSE_1_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_STATUS_3 (0x4000A038) /**< (EFUSE_MISC_REGS0) EFUSE_1_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_PROG_0 (0x4000A03C) /**< (EFUSE_MISC_REGS0) EFUSE_2_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_PROG_1 (0x4000A040) /**< (EFUSE_MISC_REGS0) EFUSE_2_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_PROG_2 (0x4000A044) /**< (EFUSE_MISC_REGS0) EFUSE_2_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_PROG_3 (0x4000A048) /**< (EFUSE_MISC_REGS0) EFUSE_2_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_STATUS_0 (0x4000A04C) /**< (EFUSE_MISC_REGS0) EFUSE_2_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_STATUS_1 (0x4000A050) /**< (EFUSE_MISC_REGS0) EFUSE_2_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_STATUS_2 (0x4000A054) /**< (EFUSE_MISC_REGS0) EFUSE_2_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_STATUS_3 (0x4000A058) /**< (EFUSE_MISC_REGS0) EFUSE_2_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_PROG_0 (0x4000A05C) /**< (EFUSE_MISC_REGS0) EFUSE_3_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_PROG_1 (0x4000A060) /**< (EFUSE_MISC_REGS0) EFUSE_3_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_PROG_2 (0x4000A064) /**< (EFUSE_MISC_REGS0) EFUSE_3_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_PROG_3 (0x4000A068) /**< (EFUSE_MISC_REGS0) EFUSE_3_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_STATUS_0 (0x4000A06C) /**< (EFUSE_MISC_REGS0) EFUSE_3_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_STATUS_1 (0x4000A070) /**< (EFUSE_MISC_REGS0) EFUSE_3_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_STATUS_2 (0x4000A074) /**< (EFUSE_MISC_REGS0) EFUSE_3_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_STATUS_3 (0x4000A078) /**< (EFUSE_MISC_REGS0) EFUSE_3_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_PROG_0 (0x4000A07C) /**< (EFUSE_MISC_REGS0) EFUSE_4_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_PROG_1 (0x4000A080) /**< (EFUSE_MISC_REGS0) EFUSE_4_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_PROG_2 (0x4000A084) /**< (EFUSE_MISC_REGS0) EFUSE_4_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_PROG_3 (0x4000A088) /**< (EFUSE_MISC_REGS0) EFUSE_4_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_STATUS_0 (0x4000A08C) /**< (EFUSE_MISC_REGS0) EFUSE_4_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_STATUS_1 (0x4000A090) /**< (EFUSE_MISC_REGS0) EFUSE_4_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_STATUS_2 (0x4000A094) /**< (EFUSE_MISC_REGS0) EFUSE_4_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_STATUS_3 (0x4000A098) /**< (EFUSE_MISC_REGS0) EFUSE_4_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_PROG_0 (0x4000A09C) /**< (EFUSE_MISC_REGS0) EFUSE_4_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_PROG_1 (0x4000A0A0) /**< (EFUSE_MISC_REGS0) EFUSE_5_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_PROG_2 (0x4000A0A4) /**< (EFUSE_MISC_REGS0) EFUSE_5_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_PROG_3 (0x4000A0A8) /**< (EFUSE_MISC_REGS0) EFUSE_5_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_STATUS_0 (0x4000A0AC) /**< (EFUSE_MISC_REGS0) EFUSE_5_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_STATUS_1 (0x4000A0B0) /**< (EFUSE_MISC_REGS0) EFUSE_5_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_STATUS_2 (0x4000A0B4) /**< (EFUSE_MISC_REGS0) EFUSE_5_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_STATUS_3 (0x4000A0B8) /**< (EFUSE_MISC_REGS0) EFUSE_5_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_PROG_0 (0x4000A0BC) /**< (EFUSE_MISC_REGS0) EFUSE_6_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_PROG_1 (0x4000A0C0) /**< (EFUSE_MISC_REGS0) EFUSE_6_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_PROG_2 (0x4000A0C4) /**< (EFUSE_MISC_REGS0) EFUSE_6_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_PROG_3 (0x4000A0C8) /**< (EFUSE_MISC_REGS0) EFUSE_6_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_STATUS_0 (0x4000A0CC) /**< (EFUSE_MISC_REGS0) EFUSE_6_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_STATUS_1 (0x4000A0D0) /**< (EFUSE_MISC_REGS0) EFUSE_6_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_STATUS_2 (0x4000A0D4) /**< (EFUSE_MISC_REGS0) EFUSE_6_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_STATUS_3 (0x4000A0D8) /**< (EFUSE_MISC_REGS0) EFUSE_6_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_MISC_CTRL (0x4000A0DC) /**< (EFUSE_MISC_REGS0) EFUSE 6 Control Register */

#else

#define REG_EFUSE_MISC_REGS0_EFUSE_GLOBAL_RESET (*(__IO uint8_t*)0x4000A000U) /**< (EFUSE_MISC_REGS0) Active Low Global Reset */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_CONTROL (*(__IO uint32_t*)0x4000A004U) /**< (EFUSE_MISC_REGS0) EFUSE 1 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_CONTROL (*(__IO uint32_t*)0x4000A008U) /**< (EFUSE_MISC_REGS0) EFUSE 2 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_CONTROL (*(__IO uint32_t*)0x4000A00CU) /**< (EFUSE_MISC_REGS0) EFUSE 3 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_CONTROL (*(__IO uint32_t*)0x4000A010U) /**< (EFUSE_MISC_REGS0) EFUSE 4 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_CONTROL (*(__IO uint32_t*)0x4000A014U) /**< (EFUSE_MISC_REGS0) EFUSE 5 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_CONTROL (*(__IO uint32_t*)0x4000A018U) /**< (EFUSE_MISC_REGS0) EFUSE 6 Control Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_PROG_0 (*(__IO uint32_t*)0x4000A01CU) /**< (EFUSE_MISC_REGS0) EFUSE_1_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_PROG_1 (*(__IO uint32_t*)0x4000A020U) /**< (EFUSE_MISC_REGS0) EFUSE_1_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_PROG_2 (*(__IO uint32_t*)0x4000A024U) /**< (EFUSE_MISC_REGS0) EFUSE_1_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_PROG_3 (*(__IO uint32_t*)0x4000A028U) /**< (EFUSE_MISC_REGS0) EFUSE_1_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_STATUS_0 (*(__I  uint32_t*)0x4000A02CU) /**< (EFUSE_MISC_REGS0) EFUSE_1_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_STATUS_1 (*(__I  uint32_t*)0x4000A030U) /**< (EFUSE_MISC_REGS0) EFUSE_1_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_STATUS_2 (*(__I  uint32_t*)0x4000A034U) /**< (EFUSE_MISC_REGS0) EFUSE_1_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_1_STATUS_3 (*(__I  uint32_t*)0x4000A038U) /**< (EFUSE_MISC_REGS0) EFUSE_1_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_PROG_0 (*(__IO uint32_t*)0x4000A03CU) /**< (EFUSE_MISC_REGS0) EFUSE_2_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_PROG_1 (*(__IO uint32_t*)0x4000A040U) /**< (EFUSE_MISC_REGS0) EFUSE_2_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_PROG_2 (*(__IO uint32_t*)0x4000A044U) /**< (EFUSE_MISC_REGS0) EFUSE_2_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_PROG_3 (*(__IO uint32_t*)0x4000A048U) /**< (EFUSE_MISC_REGS0) EFUSE_2_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_STATUS_0 (*(__I  uint32_t*)0x4000A04CU) /**< (EFUSE_MISC_REGS0) EFUSE_2_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_STATUS_1 (*(__I  uint32_t*)0x4000A050U) /**< (EFUSE_MISC_REGS0) EFUSE_2_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_STATUS_2 (*(__I  uint32_t*)0x4000A054U) /**< (EFUSE_MISC_REGS0) EFUSE_2_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_2_STATUS_3 (*(__I  uint32_t*)0x4000A058U) /**< (EFUSE_MISC_REGS0) EFUSE_2_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_PROG_0 (*(__IO uint32_t*)0x4000A05CU) /**< (EFUSE_MISC_REGS0) EFUSE_3_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_PROG_1 (*(__IO uint32_t*)0x4000A060U) /**< (EFUSE_MISC_REGS0) EFUSE_3_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_PROG_2 (*(__IO uint32_t*)0x4000A064U) /**< (EFUSE_MISC_REGS0) EFUSE_3_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_PROG_3 (*(__IO uint32_t*)0x4000A068U) /**< (EFUSE_MISC_REGS0) EFUSE_3_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_STATUS_0 (*(__I  uint32_t*)0x4000A06CU) /**< (EFUSE_MISC_REGS0) EFUSE_3_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_STATUS_1 (*(__I  uint32_t*)0x4000A070U) /**< (EFUSE_MISC_REGS0) EFUSE_3_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_STATUS_2 (*(__I  uint32_t*)0x4000A074U) /**< (EFUSE_MISC_REGS0) EFUSE_3_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_3_STATUS_3 (*(__I  uint32_t*)0x4000A078U) /**< (EFUSE_MISC_REGS0) EFUSE_3_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_PROG_0 (*(__IO uint32_t*)0x4000A07CU) /**< (EFUSE_MISC_REGS0) EFUSE_4_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_PROG_1 (*(__IO uint32_t*)0x4000A080U) /**< (EFUSE_MISC_REGS0) EFUSE_4_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_PROG_2 (*(__IO uint32_t*)0x4000A084U) /**< (EFUSE_MISC_REGS0) EFUSE_4_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_PROG_3 (*(__IO uint32_t*)0x4000A088U) /**< (EFUSE_MISC_REGS0) EFUSE_4_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_STATUS_0 (*(__I  uint32_t*)0x4000A08CU) /**< (EFUSE_MISC_REGS0) EFUSE_4_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_STATUS_1 (*(__I  uint32_t*)0x4000A090U) /**< (EFUSE_MISC_REGS0) EFUSE_4_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_STATUS_2 (*(__I  uint32_t*)0x4000A094U) /**< (EFUSE_MISC_REGS0) EFUSE_4_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_4_STATUS_3 (*(__I  uint32_t*)0x4000A098U) /**< (EFUSE_MISC_REGS0) EFUSE_4_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_PROG_0 (*(__IO uint32_t*)0x4000A09CU) /**< (EFUSE_MISC_REGS0) EFUSE_4_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_PROG_1 (*(__IO uint32_t*)0x4000A0A0U) /**< (EFUSE_MISC_REGS0) EFUSE_5_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_PROG_2 (*(__IO uint32_t*)0x4000A0A4U) /**< (EFUSE_MISC_REGS0) EFUSE_5_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_PROG_3 (*(__IO uint32_t*)0x4000A0A8U) /**< (EFUSE_MISC_REGS0) EFUSE_5_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_STATUS_0 (*(__I  uint32_t*)0x4000A0ACU) /**< (EFUSE_MISC_REGS0) EFUSE_5_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_STATUS_1 (*(__I  uint32_t*)0x4000A0B0U) /**< (EFUSE_MISC_REGS0) EFUSE_5_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_STATUS_2 (*(__I  uint32_t*)0x4000A0B4U) /**< (EFUSE_MISC_REGS0) EFUSE_5_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_5_STATUS_3 (*(__I  uint32_t*)0x4000A0B8U) /**< (EFUSE_MISC_REGS0) EFUSE_5_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_PROG_0 (*(__IO uint32_t*)0x4000A0BCU) /**< (EFUSE_MISC_REGS0) EFUSE_6_0 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_PROG_1 (*(__IO uint32_t*)0x4000A0C0U) /**< (EFUSE_MISC_REGS0) EFUSE_6_1 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_PROG_2 (*(__IO uint32_t*)0x4000A0C4U) /**< (EFUSE_MISC_REGS0) EFUSE_6_2 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_PROG_3 (*(__IO uint32_t*)0x4000A0C8U) /**< (EFUSE_MISC_REGS0) EFUSE_6_3 Program Register */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_STATUS_0 (*(__I  uint32_t*)0x4000A0CCU) /**< (EFUSE_MISC_REGS0) EFUSE_6_0 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_STATUS_1 (*(__I  uint32_t*)0x4000A0D0U) /**< (EFUSE_MISC_REGS0) EFUSE_6_1 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_STATUS_2 (*(__I  uint32_t*)0x4000A0D4U) /**< (EFUSE_MISC_REGS0) EFUSE_6_2 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_6_STATUS_3 (*(__I  uint32_t*)0x4000A0D8U) /**< (EFUSE_MISC_REGS0) EFUSE_6_3 Status */
#define REG_EFUSE_MISC_REGS0_EFUSE_MISC_CTRL (*(__I  uint8_t*)0x4000A0DCU) /**< (EFUSE_MISC_REGS0) EFUSE 6 Control Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMB11_EFUSE_MISC_REGS0_INSTANCE_ */