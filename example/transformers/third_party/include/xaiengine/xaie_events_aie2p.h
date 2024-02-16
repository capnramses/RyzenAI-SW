/******************************************************************************
* Copyright (C) 2021 Xilinx, Inc.  All rights reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/


/*****************************************************************************/
/**
* @file xaie_events_aie2p.h
* @{
*
* Header file containing all events macros for AIE2P.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who      Date     Changes
* ----- ------   -------- -----------------------------------------------------
* 1.0   Tejus    09/27/2021 Initial creation
* </pre>
*
******************************************************************************/
#ifndef XAIE_EVENTS_AIE2P_H
#define XAIE_EVENTS_AIE2P_H

/*
 * Macro of all the Events of AIE2P for all modules: Core, Memory of AIE tile
 * MEM tile and PL tile
 */

/*Declaration of events for core module of aie tile */
#define XAIE2P_EVENTS_CORE_NONE						0U
#define XAIE2P_EVENTS_CORE_TRUE						1U
#define XAIE2P_EVENTS_CORE_GROUP_0					2U
#define XAIE2P_EVENTS_CORE_TIMER_SYNC					3U
#define XAIE2P_EVENTS_CORE_TIMER_VALUE_REACHED				4U
#define XAIE2P_EVENTS_CORE_PERF_CNT_0					5U
#define XAIE2P_EVENTS_CORE_PERF_CNT_1					6U
#define XAIE2P_EVENTS_CORE_PERF_CNT_2					7U
#define XAIE2P_EVENTS_CORE_PERF_CNT_3					8U
#define XAIE2P_EVENTS_CORE_COMBO_EVENT_0				9U
#define XAIE2P_EVENTS_CORE_COMBO_EVENT_1				10U
#define XAIE2P_EVENTS_CORE_COMBO_EVENT_2				11U
#define XAIE2P_EVENTS_CORE_COMBO_EVENT_3				12U
#define XAIE2P_EVENTS_CORE_EDGE_DETECTION_EVENT_0			13U
#define XAIE2P_EVENTS_CORE_EDGE_DETECTION_EVENT_1			14U
#define XAIE2P_EVENTS_CORE_GROUP_PC_EVENT				15U
#define XAIE2P_EVENTS_CORE_PC_0						16U
#define XAIE2P_EVENTS_CORE_PC_1						17U
#define XAIE2P_EVENTS_CORE_PC_2						18U
#define XAIE2P_EVENTS_CORE_PC_3						19U
#define XAIE2P_EVENTS_CORE_PC_RANGE_0_1					20U
#define XAIE2P_EVENTS_CORE_PC_RANGE_2_3					21U
#define XAIE2P_EVENTS_CORE_GROUP_STALL					22U
#define XAIE2P_EVENTS_CORE_MEMORY_STALL					23U
#define XAIE2P_EVENTS_CORE_STREAM_STALL					24U
#define XAIE2P_EVENTS_CORE_CASCADE_STALL				25U
#define XAIE2P_EVENTS_CORE_LOCK_STALL					26U
#define XAIE2P_EVENTS_CORE_DEBUG_HALTED					27U
#define XAIE2P_EVENTS_CORE_ACTIVE					28U
#define XAIE2P_EVENTS_CORE_DISABLED					29U
#define XAIE2P_EVENTS_CORE_ECC_ERROR_STALL				30U
#define XAIE2P_EVENTS_CORE_ECC_SCRUBBING_STALL				31U
#define XAIE2P_EVENTS_CORE_GROUP_PROGRAM_FLOW				32U
#define XAIE2P_EVENTS_CORE_INSTR_EVENT_0				33U
#define XAIE2P_EVENTS_CORE_INSTR_EVENT_1				34U
#define XAIE2P_EVENTS_CORE_INSTR_CALL					35U
#define XAIE2P_EVENTS_CORE_INSTR_RETURN					36U
#define XAIE2P_EVENTS_CORE_INSTR_VECTOR					37U
#define XAIE2P_EVENTS_CORE_INSTR_LOAD					38U
#define XAIE2P_EVENTS_CORE_INSTR_STORE					39U
#define XAIE2P_EVENTS_CORE_INSTR_STREAM_GET				40U
#define XAIE2P_EVENTS_CORE_INSTR_STREAM_PUT				41U
#define XAIE2P_EVENTS_CORE_INSTR_CASCADE_GET				42U
#define XAIE2P_EVENTS_CORE_INSTR_CASCADE_PUT				43U
#define XAIE2P_EVENTS_CORE_INSTR_LOCK_ACQUIRE_REQ			44U
#define XAIE2P_EVENTS_CORE_INSTR_LOCK_RELEASE_REQ			45U
#define XAIE2P_EVENTS_CORE_GROUP_ERRORS_0				46U
#define XAIE2P_EVENTS_CORE_GROUP_ERRORS_1				47U
#define XAIE2P_EVENTS_CORE_SRS_OVERFLOW					48U
#define XAIE2P_EVENTS_CORE_UPS_OVERFLOW					49U
#define XAIE2P_EVENTS_CORE_FP_HUGE					50U
#define XAIE2P_EVENTS_CORE_INT_FP_0					51U
#define XAIE2P_EVENTS_CORE_FP_INVALID					52U
#define XAIE2P_EVENTS_CORE_FP_INF					53U
#define XAIE2P_EVENTS_CORE_PM_REG_ACCESS_FAILURE			55U
#define XAIE2P_EVENTS_CORE_STREAM_PKT_PARITY_ERROR			56U
#define XAIE2P_EVENTS_CORE_CONTROL_PKT_ERROR				57U
#define XAIE2P_EVENTS_CORE_AXI_MM_SLAVE_ERROR				58U
#define XAIE2P_EVENTS_CORE_INSTR_DECOMPRSN_ERROR			59U
#define XAIE2P_EVENTS_CORE_DM_ADDRESS_OUT_OF_RANGE			60U
#define XAIE2P_EVENTS_CORE_PM_ECC_ERROR_SCRUB_CORRECTED			61U
#define XAIE2P_EVENTS_CORE_PM_ECC_ERROR_SCRUB_2BIT			62U
#define XAIE2P_EVENTS_CORE_PM_ECC_ERROR_1BIT				63U
#define XAIE2P_EVENTS_CORE_PM_ECC_ERROR_2BIT				64U
#define XAIE2P_EVENTS_CORE_PM_ADDRESS_OUT_OF_RANGE			65U
#define XAIE2P_EVENTS_CORE_DM_ACCESS_TO_UNAVAILABLE			66U
#define XAIE2P_EVENTS_CORE_LOCK_ACCESS_TO_UNAVAILABLE			67U
#define XAIE2P_EVENTS_CORE_INSTR_WARNING				68U
#define XAIE2P_EVENTS_CORE_INSTR_ERROR					69U
#define XAIE2P_EVENTS_CORE_SPARSITY_OVERFLOW				70U
#define XAIE2P_EVENTS_CORE_STREAM_SWITCH_PORT_PARITY_ERROR		71U
#define XAIE2P_EVENTS_CORE_PROCESSOR_BUS_ERROR				72U
#define XAIE2P_EVENTS_CORE_GROUP_STREAM_SWITCH				73U
#define XAIE2P_EVENTS_CORE_PORT_IDLE_0					74U
#define XAIE2P_EVENTS_CORE_PORT_RUNNING_0				75U
#define XAIE2P_EVENTS_CORE_PORT_STALLED_0				76U
#define XAIE2P_EVENTS_CORE_PORT_TLAST_0					77U
#define XAIE2P_EVENTS_CORE_PORT_IDLE_1					78U
#define XAIE2P_EVENTS_CORE_PORT_RUNNING_1				79U
#define XAIE2P_EVENTS_CORE_PORT_STALLED_1				80U
#define XAIE2P_EVENTS_CORE_PORT_TLAST_1					81U
#define XAIE2P_EVENTS_CORE_PORT_IDLE_2					82U
#define XAIE2P_EVENTS_CORE_PORT_RUNNING_2				83U
#define XAIE2P_EVENTS_CORE_PORT_STALLED_2				84U
#define XAIE2P_EVENTS_CORE_PORT_TLAST_2					85U
#define XAIE2P_EVENTS_CORE_PORT_IDLE_3					86U
#define XAIE2P_EVENTS_CORE_PORT_RUNNING_3				87U
#define XAIE2P_EVENTS_CORE_PORT_STALLED_3				88U
#define XAIE2P_EVENTS_CORE_PORT_TLAST_3					89U
#define XAIE2P_EVENTS_CORE_PORT_IDLE_4					90U
#define XAIE2P_EVENTS_CORE_PORT_RUNNING_4				91U
#define XAIE2P_EVENTS_CORE_PORT_STALLED_4				92U
#define XAIE2P_EVENTS_CORE_PORT_TLAST_4					93U
#define XAIE2P_EVENTS_CORE_PORT_IDLE_5					94U
#define XAIE2P_EVENTS_CORE_PORT_RUNNING_5				95U
#define XAIE2P_EVENTS_CORE_PORT_STALLED_5				96U
#define XAIE2P_EVENTS_CORE_PORT_TLAST_5					97U
#define XAIE2P_EVENTS_CORE_PORT_IDLE_6					98U
#define XAIE2P_EVENTS_CORE_PORT_RUNNING_6				99U
#define XAIE2P_EVENTS_CORE_PORT_STALLED_6				100U
#define XAIE2P_EVENTS_CORE_PORT_TLAST_6					101U
#define XAIE2P_EVENTS_CORE_PORT_IDLE_7					102U
#define XAIE2P_EVENTS_CORE_PORT_RUNNING_7				103U
#define XAIE2P_EVENTS_CORE_PORT_STALLED_7				104U
#define XAIE2P_EVENTS_CORE_PORT_TLAST_7					105U
#define XAIE2P_EVENTS_CORE_GROUP_BROADCAST				106U
#define XAIE2P_EVENTS_CORE_BROADCAST_0					107U
#define XAIE2P_EVENTS_CORE_BROADCAST_1					108U
#define XAIE2P_EVENTS_CORE_BROADCAST_2					109U
#define XAIE2P_EVENTS_CORE_BROADCAST_3					110U
#define XAIE2P_EVENTS_CORE_BROADCAST_4					111U
#define XAIE2P_EVENTS_CORE_BROADCAST_5					112U
#define XAIE2P_EVENTS_CORE_BROADCAST_6					113U
#define XAIE2P_EVENTS_CORE_BROADCAST_7					114U
#define XAIE2P_EVENTS_CORE_BROADCAST_8					115U
#define XAIE2P_EVENTS_CORE_BROADCAST_9					116U
#define XAIE2P_EVENTS_CORE_BROADCAST_10					117U
#define XAIE2P_EVENTS_CORE_BROADCAST_11					118U
#define XAIE2P_EVENTS_CORE_BROADCAST_12					119U
#define XAIE2P_EVENTS_CORE_BROADCAST_13					120U
#define XAIE2P_EVENTS_CORE_BROADCAST_14					121U
#define XAIE2P_EVENTS_CORE_BROADCAST_15					122U
#define XAIE2P_EVENTS_CORE_GROUP_USER_EVENT				123U
#define XAIE2P_EVENTS_CORE_USER_EVENT_0					124U
#define XAIE2P_EVENTS_CORE_USER_EVENT_1					125U
#define XAIE2P_EVENTS_CORE_USER_EVENT_2					126U
#define XAIE2P_EVENTS_CORE_USER_EVENT_3					127U

/*Declaration of events for mem module of aie tile */
#define XAIE2P_EVENTS_MEM_NONE						0U
#define XAIE2P_EVENTS_MEM_TRUE						1U
#define XAIE2P_EVENTS_MEM_GROUP_0					2U
#define XAIE2P_EVENTS_MEM_TIMER_SYNC					3U
#define XAIE2P_EVENTS_MEM_TIMER_VALUE_REACHED				4U
#define XAIE2P_EVENTS_MEM_PERF_CNT_0					5U
#define XAIE2P_EVENTS_MEM_PERF_CNT_1					6U
#define XAIE2P_EVENTS_MEM_COMBO_EVENT_0					7U
#define XAIE2P_EVENTS_MEM_COMBO_EVENT_1					8U
#define XAIE2P_EVENTS_MEM_COMBO_EVENT_2					9U
#define XAIE2P_EVENTS_MEM_COMBO_EVENT_3					10U
#define XAIE2P_EVENTS_MEM_EDGE_DETECTION_EVENT_0			11U
#define XAIE2P_EVENTS_MEM_EDGE_DETECTION_EVENT_1			12U
#define XAIE2P_EVENTS_MEM_GROUP_WATCHPOINT				15U
#define XAIE2P_EVENTS_MEM_WATCHPOINT_0					16U
#define XAIE2P_EVENTS_MEM_WATCHPOINT_1					17U
#define XAIE2P_EVENTS_MEM_GROUP_DMA_ACTIVITY				18U
#define XAIE2P_EVENTS_MEM_DMA_S2MM_0_START_TASK				19U
#define XAIE2P_EVENTS_MEM_DMA_S2MM_1_START_TASK				20U
#define XAIE2P_EVENTS_MEM_DMA_MM2S_0_START_TASK				21U
#define XAIE2P_EVENTS_MEM_DMA_MM2S_1_START_TASK				22U
#define XAIE2P_EVENTS_MEM_DMA_S2MM_0_FINISHED_BD			23U
#define XAIE2P_EVENTS_MEM_DMA_S2MM_1_FINISHED_BD			24U
#define XAIE2P_EVENTS_MEM_DMA_MM2S_0_FINISHED_BD			25U
#define XAIE2P_EVENTS_MEM_DMA_MM2S_1_FINISHED_BD			26U
#define XAIE2P_EVENTS_MEM_DMA_S2MM_0_FINISHED_TASK			27U
#define XAIE2P_EVENTS_MEM_DMA_S2MM_1_FINISHED_TASK			28U
#define XAIE2P_EVENTS_MEM_DMA_MM2S_0_FINISHED_TASK			29U
#define XAIE2P_EVENTS_MEM_DMA_MM2S_1_FINISHED_TASK			30U
#define XAIE2P_EVENTS_MEM_DMA_S2MM_0_STALLED_LOCK			31U
#define XAIE2P_EVENTS_MEM_DMA_S2MM_1_STALLED_LOCK			32U
#define XAIE2P_EVENTS_MEM_DMA_MM2S_0_STALLED_LOCK			33U
#define XAIE2P_EVENTS_MEM_DMA_MM2S_1_STALLED_LOCK			34U
#define XAIE2P_EVENTS_MEM_DMA_S2MM_0_STREAM_STARVATION			35U
#define XAIE2P_EVENTS_MEM_DMA_S2MM_1_STREAM_STARVATION			36U
#define XAIE2P_EVENTS_MEM_DMA_MM2S_0_STREAM_BACKPRESSURE		37U
#define XAIE2P_EVENTS_MEM_DMA_MM2S_1_STREAM_BACKPRESSURE		38U
#define XAIE2P_EVENTS_MEM_DMA_S2MM_0_MEMORY_BACKPRESSURE		39U
#define XAIE2P_EVENTS_MEM_DMA_S2MM_1_MEMORY_BACKPRESSURE		40U
#define XAIE2P_EVENTS_MEM_DMA_MM2S_0_MEMORY_STARVATION			41U
#define XAIE2P_EVENTS_MEM_DMA_MM2S_1_MEMORY_STARVATION			42U
#define XAIE2P_EVENTS_MEM_GROUP_LOCK					43U
#define XAIE2P_EVENTS_MEM_LOCK_SEL0_ACQ_EQ				44U
#define XAIE2P_EVENTS_MEM_LOCK_SEL0_ACQ_GE				45U
#define XAIE2P_EVENTS_MEM_LOCK_0_REL					46U
#define XAIE2P_EVENTS_MEM_LOCK_SEL0_EQUAL_TO_VALUE			47U
#define XAIE2P_EVENTS_MEM_LOCK_SEL1_ACQ_EQ				48U
#define XAIE2P_EVENTS_MEM_LOCK_SEL1_ACQ_GE				49U
#define XAIE2P_EVENTS_MEM_LOCK_1_REL					50U
#define XAIE2P_EVENTS_MEM_LOCK_SEL1_EQUAL_TO_VALUE			51U
#define XAIE2P_EVENTS_MEM_LOCK_SEL2_ACQ_EQ				52U
#define XAIE2P_EVENTS_MEM_LOCK_SEL2_ACQ_GE				53U
#define XAIE2P_EVENTS_MEM_LOCK_2_REL					54U
#define XAIE2P_EVENTS_MEM_LOCK_SEL2_EQUAL_TO_VALUE			55U
#define XAIE2P_EVENTS_MEM_LOCK_SEL3_ACQ_EQ				56U
#define XAIE2P_EVENTS_MEM_LOCK_SEL3_ACQ_GE				57U
#define XAIE2P_EVENTS_MEM_LOCK_3_REL					58U
#define XAIE2P_EVENTS_MEM_LOCK_SEL3_EQUAL_TO_VALUE			59U
#define XAIE2P_EVENTS_MEM_LOCK_SEL4_ACQ_EQ				60U
#define XAIE2P_EVENTS_MEM_LOCK_SEL4_ACQ_GE				61U
#define XAIE2P_EVENTS_MEM_LOCK_4_REL					62U
#define XAIE2P_EVENTS_MEM_LOCK_SEL4_EQUAL_TO_VALUE			63U
#define XAIE2P_EVENTS_MEM_LOCK_SEL5_ACQ_EQ				64U
#define XAIE2P_EVENTS_MEM_LOCK_SEL5_ACQ_GE				65U
#define XAIE2P_EVENTS_MEM_LOCK_5_REL					66U
#define XAIE2P_EVENTS_MEM_LOCK_SEL5_EQUAL_TO_VALUE			67U
#define XAIE2P_EVENTS_MEM_LOCK_SEL6_ACQ_EQ				68U
#define XAIE2P_EVENTS_MEM_LOCK_SEL6_ACQ_GE				69U
#define XAIE2P_EVENTS_MEM_LOCK_6_REL					70U
#define XAIE2P_EVENTS_MEM_LOCK_SEL6_EQUAL_TO_VALUE			71U
#define XAIE2P_EVENTS_MEM_LOCK_SEL7_ACQ_EQ				72U
#define XAIE2P_EVENTS_MEM_LOCK_SEL7_ACQ_GE				73U
#define XAIE2P_EVENTS_MEM_LOCK_7_REL					74U
#define XAIE2P_EVENTS_MEM_LOCK_SEL7_EQUAL_TO_VALUE			75U
#define XAIE2P_EVENTS_MEM_GROUP_MEMORY_CONFLICT				76U
#define XAIE2P_EVENTS_MEM_CONFLICT_DM_BANK_0				77U
#define XAIE2P_EVENTS_MEM_CONFLICT_DM_BANK_1				78U
#define XAIE2P_EVENTS_MEM_CONFLICT_DM_BANK_2				79U
#define XAIE2P_EVENTS_MEM_CONFLICT_DM_BANK_3				80U
#define XAIE2P_EVENTS_MEM_CONFLICT_DM_BANK_4				81U
#define XAIE2P_EVENTS_MEM_CONFLICT_DM_BANK_5				82U
#define XAIE2P_EVENTS_MEM_CONFLICT_DM_BANK_6				83U
#define XAIE2P_EVENTS_MEM_CONFLICT_DM_BANK_7				84U
#define XAIE2P_EVENTS_MEM_GROUP_ERRORS					86U
#define XAIE2P_EVENTS_MEM_DM_ECC_ERROR_SCRUB_CORRECTED			87U
#define XAIE2P_EVENTS_MEM_DM_ECC_ERROR_SCRUB_2BIT			88U
#define XAIE2P_EVENTS_MEM_DM_ECC_ERROR_1BIT				89U
#define XAIE2P_EVENTS_MEM_DM_ECC_ERROR_2BIT				90U
#define XAIE2P_EVENTS_MEM_DM_PARITY_ERROR_BANK_2			91U
#define XAIE2P_EVENTS_MEM_DM_PARITY_ERROR_BANK_3			92U
#define XAIE2P_EVENTS_MEM_DM_PARITY_ERROR_BANK_4			93U
#define XAIE2P_EVENTS_MEM_DM_PARITY_ERROR_BANK_5			94U
#define XAIE2P_EVENTS_MEM_DM_PARITY_ERROR_BANK_6			95U
#define XAIE2P_EVENTS_MEM_DM_PARITY_ERROR_BANK_7			96U
#define XAIE2P_EVENTS_MEM_DMA_S2MM_0_ERROR				97U
#define XAIE2P_EVENTS_MEM_DMA_S2MM_1_ERROR				98U
#define XAIE2P_EVENTS_MEM_DMA_MM2S_0_ERROR				99U
#define XAIE2P_EVENTS_MEM_DMA_MM2S_1_ERROR				100U
#define XAIE2P_EVENTS_MEM_LOCK_ERROR					101U
#define XAIE2P_EVENTS_MEM_DMA_TASK_TOKEN_STALL				102U
#define XAIE2P_EVENTS_MEM_GROUP_BROADCAST				106U
#define XAIE2P_EVENTS_MEM_BROADCAST_0					107U
#define XAIE2P_EVENTS_MEM_BROADCAST_1					108U
#define XAIE2P_EVENTS_MEM_BROADCAST_2					109U
#define XAIE2P_EVENTS_MEM_BROADCAST_3					110U
#define XAIE2P_EVENTS_MEM_BROADCAST_4					111U
#define XAIE2P_EVENTS_MEM_BROADCAST_5					112U
#define XAIE2P_EVENTS_MEM_BROADCAST_6					113U
#define XAIE2P_EVENTS_MEM_BROADCAST_7					114U
#define XAIE2P_EVENTS_MEM_BROADCAST_8					115U
#define XAIE2P_EVENTS_MEM_BROADCAST_9					116U
#define XAIE2P_EVENTS_MEM_BROADCAST_10					117U
#define XAIE2P_EVENTS_MEM_BROADCAST_11					118U
#define XAIE2P_EVENTS_MEM_BROADCAST_12					119U
#define XAIE2P_EVENTS_MEM_BROADCAST_13					120U
#define XAIE2P_EVENTS_MEM_BROADCAST_14					121U
#define XAIE2P_EVENTS_MEM_BROADCAST_15					122U
#define XAIE2P_EVENTS_MEM_GROUP_USER_EVENT				123U
#define XAIE2P_EVENTS_MEM_USER_EVENT_0					124U
#define XAIE2P_EVENTS_MEM_USER_EVENT_1					125U
#define XAIE2P_EVENTS_MEM_USER_EVENT_2					126U
#define XAIE2P_EVENTS_MEM_USER_EVENT_3					127U

/*Declaration of events for PL/Noc module */
#define XAIE2P_EVENTS_PL_NONE						0U
#define XAIE2P_EVENTS_PL_TRUE						1U
#define XAIE2P_EVENTS_PL_GROUP_0					2U
#define XAIE2P_EVENTS_PL_TIMER_SYNC					3U
#define XAIE2P_EVENTS_PL_TIMER_VALUE_REACHED				4U
#define XAIE2P_EVENTS_PL_PERF_CNT_0					5U
#define XAIE2P_EVENTS_PL_PERF_CNT_1					6U
#define XAIE2P_EVENTS_PL_COMBO_EVENT_0					7U
#define XAIE2P_EVENTS_PL_COMBO_EVENT_1					8U
#define XAIE2P_EVENTS_PL_COMBO_EVENT_2					9U
#define XAIE2P_EVENTS_PL_COMBO_EVENT_3					10U
#define XAIE2P_EVENTS_PL_EDGE_DETECTION_EVENT_0				11U
#define XAIE2P_EVENTS_PL_EDGE_DETECTION_EVENT_1				12U
#define XAIE2P_EVENTS_PL_GROUP_DMA_ACTIVITY				13U
#define XAIE2P_EVENTS_PL_DMA_S2MM_0_START_TASK				14U
#define XAIE2P_EVENTS_PL_DMA_S2MM_1_START_TASK				15U
#define XAIE2P_EVENTS_PL_DMA_MM2S_0_START_TASK				16U
#define XAIE2P_EVENTS_PL_DMA_MM2S_1_START_TASK				17U
#define XAIE2P_EVENTS_PL_DMA_S2MM_0_FINISHED_BD				18U
#define XAIE2P_EVENTS_PL_DMA_S2MM_1_FINISHED_BD				19U
#define XAIE2P_EVENTS_PL_DMA_MM2S_0_FINISHED_BD				20U
#define XAIE2P_EVENTS_PL_DMA_MM2S_1_FINISHED_BD				21U
#define XAIE2P_EVENTS_PL_DMA_S2MM_0_FINISHED_TASK			22U
#define XAIE2P_EVENTS_PL_DMA_S2MM_1_FINISHED_TASK			23U
#define XAIE2P_EVENTS_PL_DMA_MM2S_0_FINISHED_TASK			24U
#define XAIE2P_EVENTS_PL_DMA_MM2S_1_FINISHED_TASK			25U
#define XAIE2P_EVENTS_PL_DMA_S2MM_0_STALLED_LOCK			26U
#define XAIE2P_EVENTS_PL_DMA_S2MM_1_STALLED_LOCK			27U
#define XAIE2P_EVENTS_PL_DMA_MM2S_0_STALLED_LOCK			28U
#define XAIE2P_EVENTS_PL_DMA_MM2S_1_STALLED_LOCK			29U
#define XAIE2P_EVENTS_PL_DMA_S2MM_0_STREAM_STARVATION			30U
#define XAIE2P_EVENTS_PL_DMA_S2MM_1_STREAM_STARVATION			31U
#define XAIE2P_EVENTS_PL_DMA_MM2S_0_STREAM_BACKPRESSURE			32U
#define XAIE2P_EVENTS_PL_DMA_MM2S_1_STREAM_BACKPRESSURE			33U
#define XAIE2P_EVENTS_PL_DMA_S2MM_0_MEMORY_BACKPRESSURE			34U
#define XAIE2P_EVENTS_PL_DMA_S2MM_1_MEMORY_BACKPRESSURE			35U
#define XAIE2P_EVENTS_PL_DMA_MM2S_0_MEMORY_STARVATION			36U
#define XAIE2P_EVENTS_PL_DMA_MM2S_1_MEMORY_STARVATION			37U
#define XAIE2P_EVENTS_PL_GROUP_LOCK					38U
#define XAIE2P_EVENTS_PL_LOCK_0_ACQ_EQ					39U
#define XAIE2P_EVENTS_PL_LOCK_0_ACQ_GE					40U
#define XAIE2P_EVENTS_PL_LOCK_0_REL					41U
#define XAIE2P_EVENTS_PL_LOCK_0_EQUAL_TO_VALUE				42U
#define XAIE2P_EVENTS_PL_LOCK_1_ACQ_EQ					43U
#define XAIE2P_EVENTS_PL_LOCK_1_ACQ_GE					44U
#define XAIE2P_EVENTS_PL_LOCK_1_REL					45U
#define XAIE2P_EVENTS_PL_LOCK_1_EQUAL_TO_VALUE				46U
#define XAIE2P_EVENTS_PL_LOCK_2_ACQ_EQ					47U
#define XAIE2P_EVENTS_PL_LOCK_2_ACQ_GE					48U
#define XAIE2P_EVENTS_PL_LOCK_2_REL					49U
#define XAIE2P_EVENTS_PL_LOCK_2_EQUAL_TO_VALUE				50U
#define XAIE2P_EVENTS_PL_LOCK_3_ACQ_EQ					51U
#define XAIE2P_EVENTS_PL_LOCK_3_ACQ_GE					52U
#define XAIE2P_EVENTS_PL_LOCK_3_REL					53U
#define XAIE2P_EVENTS_PL_LOCK_3_EQUAL_TO_VALUE				54U
#define XAIE2P_EVENTS_PL_LOCK_4_ACQ_EQ					55U
#define XAIE2P_EVENTS_PL_LOCK_4_ACQ_GE					56U
#define XAIE2P_EVENTS_PL_LOCK_4_REL					57U
#define XAIE2P_EVENTS_PL_LOCK_4_EQUAL_TO_VALUE				58U
#define XAIE2P_EVENTS_PL_LOCK_5_ACQ_EQ					59U
#define XAIE2P_EVENTS_PL_LOCK_5_ACQ_GE					60U
#define XAIE2P_EVENTS_PL_LOCK_5_REL					61U
#define XAIE2P_EVENTS_PL_LOCK_5_EQUAL_TO_VALUE				62U
#define XAIE2P_EVENTS_PL_GROUP_ERRORS					63U
#define XAIE2P_EVENTS_PL_AXI_MM_SLAVE_ERROR				64U
#define XAIE2P_EVENTS_PL_CONTROL_PKT_ERROR				65U
#define XAIE2P_EVENTS_PL_STREAM_SWITCH_PARITY_ERROR			66U
#define XAIE2P_EVENTS_PL_AXI_MM_DECODE_NSU_ERROR			67U
#define XAIE2P_EVENTS_PL_AXI_MM_SLAVE_NSU_ERROR				68U
#define XAIE2P_EVENTS_PL_AXI_MM_UNSUPPORTED_TRAFFIC			69U
#define XAIE2P_EVENTS_PL_AXI_MM_UNSECURE_ACCESS_IN_SECURE_MODE		70U
#define XAIE2P_EVENTS_PL_AXI_MM_BYTE_STROBE_ERROR			71U
#define XAIE2P_EVENTS_PL_DMA_S2MM_ERROR					72U
#define XAIE2P_EVENTS_PL_DMA_MM2S_ERROR					73U
#define XAIE2P_EVENTS_PL_LOCK_ERROR					74U
#define XAIE2P_EVENTS_PL_DMA_TASK_TOKEN_STALL				75U
#define XAIE2P_EVENTS_PL_GROUP_STREAM_SWITCH				76U
#define XAIE2P_EVENTS_PL_PORT_IDLE_0					77U
#define XAIE2P_EVENTS_PL_PORT_RUNNING_0					78U
#define XAIE2P_EVENTS_PL_PORT_STALLED_0					79U
#define XAIE2P_EVENTS_PL_PORT_TLAST_0					80U
#define XAIE2P_EVENTS_PL_PORT_IDLE_1					81U
#define XAIE2P_EVENTS_PL_PORT_RUNNING_1					82U
#define XAIE2P_EVENTS_PL_PORT_STALLED_1					83U
#define XAIE2P_EVENTS_PL_PORT_TLAST_1					84U
#define XAIE2P_EVENTS_PL_PORT_IDLE_2					85U
#define XAIE2P_EVENTS_PL_PORT_RUNNING_2					86U
#define XAIE2P_EVENTS_PL_PORT_STALLED_2					87U
#define XAIE2P_EVENTS_PL_PORT_TLAST_2					88U
#define XAIE2P_EVENTS_PL_PORT_IDLE_3					89U
#define XAIE2P_EVENTS_PL_PORT_RUNNING_3					90U
#define XAIE2P_EVENTS_PL_PORT_STALLED_3					91U
#define XAIE2P_EVENTS_PL_PORT_TLAST_3					92U
#define XAIE2P_EVENTS_PL_PORT_IDLE_4					93U
#define XAIE2P_EVENTS_PL_PORT_RUNNING_4					94U
#define XAIE2P_EVENTS_PL_PORT_STALLED_4					95U
#define XAIE2P_EVENTS_PL_PORT_TLAST_4					96U
#define XAIE2P_EVENTS_PL_PORT_IDLE_5					97U
#define XAIE2P_EVENTS_PL_PORT_RUNNING_5					98U
#define XAIE2P_EVENTS_PL_PORT_STALLED_5					99U
#define XAIE2P_EVENTS_PL_PORT_TLAST_5					100U
#define XAIE2P_EVENTS_PL_PORT_IDLE_6					101U
#define XAIE2P_EVENTS_PL_PORT_RUNNING_6					102U
#define XAIE2P_EVENTS_PL_PORT_STALLED_6					103U
#define XAIE2P_EVENTS_PL_PORT_TLAST_6					104U
#define XAIE2P_EVENTS_PL_PORT_IDLE_7					105U
#define XAIE2P_EVENTS_PL_PORT_RUNNING_7					106U
#define XAIE2P_EVENTS_PL_PORT_STALLED_7					107U
#define XAIE2P_EVENTS_PL_PORT_TLAST_7					108U
#define XAIE2P_EVENTS_PL_GROUP_BROADCAST_A				109U
#define XAIE2P_EVENTS_PL_BROADCAST_A_0					110U
#define XAIE2P_EVENTS_PL_BROADCAST_A_1					111U
#define XAIE2P_EVENTS_PL_BROADCAST_A_2					112U
#define XAIE2P_EVENTS_PL_BROADCAST_A_3					113U
#define XAIE2P_EVENTS_PL_BROADCAST_A_4					114U
#define XAIE2P_EVENTS_PL_BROADCAST_A_5					115U
#define XAIE2P_EVENTS_PL_BROADCAST_A_6					116U
#define XAIE2P_EVENTS_PL_BROADCAST_A_7					117U
#define XAIE2P_EVENTS_PL_BROADCAST_A_8					118U
#define XAIE2P_EVENTS_PL_BROADCAST_A_9					119U
#define XAIE2P_EVENTS_PL_BROADCAST_A_10					120U
#define XAIE2P_EVENTS_PL_BROADCAST_A_11					121U
#define XAIE2P_EVENTS_PL_BROADCAST_A_12					122U
#define XAIE2P_EVENTS_PL_BROADCAST_A_13					123U
#define XAIE2P_EVENTS_PL_BROADCAST_A_14					124U
#define XAIE2P_EVENTS_PL_BROADCAST_A_15					125U
#define XAIE2P_EVENTS_PL_USER_EVENT_0					126U
#define XAIE2P_EVENTS_PL_USER_EVENT_1					127U

/*Declaration of events for Mem Tile module */
#define XAIE2P_EVENTS_MEM_TILE_NONE					0U
#define XAIE2P_EVENTS_MEM_TILE_TRUE					1U
#define XAIE2P_EVENTS_MEM_TILE_GROUP_0					2U
#define XAIE2P_EVENTS_MEM_TILE_TIMER_SYNC				3U
#define XAIE2P_EVENTS_MEM_TILE_TIMER_VALUE_REACHED			4U
#define XAIE2P_EVENTS_MEM_TILE_PERF_CNT0_EVENT				5U
#define XAIE2P_EVENTS_MEM_TILE_PERF_CNT1_EVENT				6U
#define XAIE2P_EVENTS_MEM_TILE_PERF_CNT2_EVENT				7U
#define XAIE2P_EVENTS_MEM_TILE_PERF_CNT3_EVENT				8U
#define XAIE2P_EVENTS_MEM_TILE_COMBO_EVENT_0				9U
#define XAIE2P_EVENTS_MEM_TILE_COMBO_EVENT_1				10U
#define XAIE2P_EVENTS_MEM_TILE_COMBO_EVENT_2				11U
#define XAIE2P_EVENTS_MEM_TILE_COMBO_EVENT_3				12U
#define XAIE2P_EVENTS_MEM_TILE_EDGE_DETECTION_EVENT_0			13U
#define XAIE2P_EVENTS_MEM_TILE_EDGE_DETECTION_EVENT_1			14U
#define XAIE2P_EVENTS_MEM_TILE_GROUP_WATCHPOINT				15U
#define XAIE2P_EVENTS_MEM_TILE_WATCHPOINT_0				16U
#define XAIE2P_EVENTS_MEM_TILE_WATCHPOINT_1				17U
#define XAIE2P_EVENTS_MEM_TILE_WATCHPOINT_2				18U
#define XAIE2P_EVENTS_MEM_TILE_WATCHPOINT_3				19U
#define XAIE2P_EVENTS_MEM_TILE_GROUP_DMA_ACTIVITY			20U
#define XAIE2P_EVENTS_MEM_TILE_DMA_S2MM_SEL0_START_TASK			21U
#define XAIE2P_EVENTS_MEM_TILE_DMA_S2MM_SEL1_START_TASK			22U
#define XAIE2P_EVENTS_MEM_TILE_DMA_MM2S_SEL0_START_TASK			23U
#define XAIE2P_EVENTS_MEM_TILE_DMA_MM2S_SEL1_START_TASK			24U
#define XAIE2P_EVENTS_MEM_TILE_DMA_S2MM_SEL0_FINISHED_BD		25U
#define XAIE2P_EVENTS_MEM_TILE_DMA_S2MM_SEL1_FINISHED_BD		26U
#define XAIE2P_EVENTS_MEM_TILE_DMA_MM2S_SEL0_FINISHED_BD		27U
#define XAIE2P_EVENTS_MEM_TILE_DMA_MM2S_SEL1_FINISHED_BD		28U
#define XAIE2P_EVENTS_MEM_TILE_DMA_S2MM_SEL0_FINISHED_TASK		29U
#define XAIE2P_EVENTS_MEM_TILE_DMA_S2MM_SEL1_FINISHED_TASK		30U
#define XAIE2P_EVENTS_MEM_TILE_DMA_MM2S_SEL0_FINISHED_TASK		31U
#define XAIE2P_EVENTS_MEM_TILE_DMA_MM2S_SEL1_FINISHED_TASK		32U
#define XAIE2P_EVENTS_MEM_TILE_DMA_S2MM_SEL0_STALLED_LOCK		33U
#define XAIE2P_EVENTS_MEM_TILE_DMA_S2MM_SEL1_STALLED_LOCK		34U
#define XAIE2P_EVENTS_MEM_TILE_DMA_MM2S_SEL0_STALLED_LOCK		35U
#define XAIE2P_EVENTS_MEM_TILE_DMA_MM2S_SEL1_STALLED_LOCK		36U
#define XAIE2P_EVENTS_MEM_TILE_DMA_S2MM_SEL0_STREAM_STARVATION		37U
#define XAIE2P_EVENTS_MEM_TILE_DMA_S2MM_SEL1_STREAM_STARVATION		38U
#define XAIE2P_EVENTS_MEM_TILE_DMA_MM2S_SEL0_STREAM_BACKPRESSURE	39U
#define XAIE2P_EVENTS_MEM_TILE_DMA_MM2S_SEL1_STREAM_BACKPRESSURE	40U
#define XAIE2P_EVENTS_MEM_TILE_DMA_S2MM_SEL0_MEMORY_BACKPRESSURE	41U
#define XAIE2P_EVENTS_MEM_TILE_DMA_S2MM_SEL1_MEMORY_BACKPRESSURE	42U
#define XAIE2P_EVENTS_MEM_TILE_DMA_MM2S_SEL0_MEMORY_STARVATION		43U
#define XAIE2P_EVENTS_MEM_TILE_DMA_MM2S_SEL1_MEMORY_STARVATION		44U
#define XAIE2P_EVENTS_MEM_TILE_GROUP_LOCK				45U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL0_ACQ_EQ				46U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL0_ACQ_GE				47U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL0_REL				48U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL0_EQUAL_TO_VALUE			49U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL1_ACQ_EQ				50U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL1_ACQ_GE				51U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL1_REL				52U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL1_EQUAL_TO_VALUE			53U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL2_ACQ_EQ				54U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL2_ACQ_GE				55U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL2_REL				56U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL2_EQUAL_TO_VALUE			57U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL3_ACQ_EQ				58U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL3_ACQ_GE				59U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL3_REL				60U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL3_EQUAL_TO_VALUE			61U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL4_ACQ_EQ				62U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL4_ACQ_GE				63U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL4_REL				64U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL4_EQUAL_TO_VALUE			65U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL5_ACQ_EQ				66U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL5_ACQ_GE				67U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL5_REL				68U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL5_EQUAL_TO_VALUE			69U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL6_ACQ_EQ				70U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL6_ACQ_GE				71U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL6_REL				72U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL6_EQUAL_TO_VALUE			73U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL7_ACQ_EQ				74U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL7_ACQ_GE				75U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL7_REL				76U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_SEL7_EQUAL_TO_VALUE			77U
#define XAIE2P_EVENTS_MEM_TILE_GROUP_STREAM_SWITCH			78U
#define XAIE2P_EVENTS_MEM_TILE_PORT_IDLE_0				79U
#define XAIE2P_EVENTS_MEM_TILE_PORT_RUNNING_0				80U
#define XAIE2P_EVENTS_MEM_TILE_PORT_STALLED_0				81U
#define XAIE2P_EVENTS_MEM_TILE_PORT_TLAST_0				82U
#define XAIE2P_EVENTS_MEM_TILE_PORT_IDLE_1				83U
#define XAIE2P_EVENTS_MEM_TILE_PORT_RUNNING_1				84U
#define XAIE2P_EVENTS_MEM_TILE_PORT_STALLED_1				85U
#define XAIE2P_EVENTS_MEM_TILE_PORT_TLAST_1				86U
#define XAIE2P_EVENTS_MEM_TILE_PORT_IDLE_2				87U
#define XAIE2P_EVENTS_MEM_TILE_PORT_RUNNING_2				88U
#define XAIE2P_EVENTS_MEM_TILE_PORT_STALLED_2				89U
#define XAIE2P_EVENTS_MEM_TILE_PORT_TLAST_2				90U
#define XAIE2P_EVENTS_MEM_TILE_PORT_IDLE_3				91U
#define XAIE2P_EVENTS_MEM_TILE_PORT_RUNNING_3				92U
#define XAIE2P_EVENTS_MEM_TILE_PORT_STALLED_3				93U
#define XAIE2P_EVENTS_MEM_TILE_PORT_TLAST_3				94U
#define XAIE2P_EVENTS_MEM_TILE_PORT_IDLE_4				95U
#define XAIE2P_EVENTS_MEM_TILE_PORT_RUNNING_4				96U
#define XAIE2P_EVENTS_MEM_TILE_PORT_STALLED_4				97U
#define XAIE2P_EVENTS_MEM_TILE_PORT_TLAST_4				98U
#define XAIE2P_EVENTS_MEM_TILE_PORT_IDLE_5				99U
#define XAIE2P_EVENTS_MEM_TILE_PORT_RUNNING_5				100U
#define XAIE2P_EVENTS_MEM_TILE_PORT_STALLED_5				101U
#define XAIE2P_EVENTS_MEM_TILE_PORT_TLAST_5				102U
#define XAIE2P_EVENTS_MEM_TILE_PORT_IDLE_6				103U
#define XAIE2P_EVENTS_MEM_TILE_PORT_RUNNING_6				104U
#define XAIE2P_EVENTS_MEM_TILE_PORT_STALLED_6				105U
#define XAIE2P_EVENTS_MEM_TILE_PORT_TLAST_6				106U
#define XAIE2P_EVENTS_MEM_TILE_PORT_IDLE_7				107U
#define XAIE2P_EVENTS_MEM_TILE_PORT_RUNNING_7				108U
#define XAIE2P_EVENTS_MEM_TILE_PORT_STALLED_7				109U
#define XAIE2P_EVENTS_MEM_TILE_PORT_TLAST_7				110U
#define XAIE2P_EVENTS_MEM_TILE_GROUP_MEMORY_CONFLICT			111U
#define XAIE2P_EVENTS_MEM_TILE_CONFLICT_DM_BANK_0			112U
#define XAIE2P_EVENTS_MEM_TILE_CONFLICT_DM_BANK_1			113U
#define XAIE2P_EVENTS_MEM_TILE_CONFLICT_DM_BANK_2			114U
#define XAIE2P_EVENTS_MEM_TILE_CONFLICT_DM_BANK_3			115U
#define XAIE2P_EVENTS_MEM_TILE_CONFLICT_DM_BANK_4			116U
#define XAIE2P_EVENTS_MEM_TILE_CONFLICT_DM_BANK_5			117U
#define XAIE2P_EVENTS_MEM_TILE_CONFLICT_DM_BANK_6			118U
#define XAIE2P_EVENTS_MEM_TILE_CONFLICT_DM_BANK_7			119U
#define XAIE2P_EVENTS_MEM_TILE_CONFLICT_DM_BANK_8			120U
#define XAIE2P_EVENTS_MEM_TILE_CONFLICT_DM_BANK_9			121U
#define XAIE2P_EVENTS_MEM_TILE_CONFLICT_DM_BANK_10			122U
#define XAIE2P_EVENTS_MEM_TILE_CONFLICT_DM_BANK_11			123U
#define XAIE2P_EVENTS_MEM_TILE_CONFLICT_DM_BANK_12			124U
#define XAIE2P_EVENTS_MEM_TILE_CONFLICT_DM_BANK_13			125U
#define XAIE2P_EVENTS_MEM_TILE_CONFLICT_DM_BANK_14			126U
#define XAIE2P_EVENTS_MEM_TILE_CONFLICT_DM_BANK_15			127U
#define XAIE2P_EVENTS_MEM_TILE_GROUP_ERRORS				128U
#define XAIE2P_EVENTS_MEM_TILE_DM_ECC_ERROR_SCRUB_CORRECTED		129U
#define XAIE2P_EVENTS_MEM_TILE_DM_ECC_ERROR_SCRUB_2BIT			130U
#define XAIE2P_EVENTS_MEM_TILE_DM_ECC_ERROR_1BIT			131U
#define XAIE2P_EVENTS_MEM_TILE_DM_ECC_ERROR_2BIT			132U
#define XAIE2P_EVENTS_MEM_TILE_DMA_S2MM_ERROR				133U
#define XAIE2P_EVENTS_MEM_TILE_DMA_MM2S_ERROR				134U
#define XAIE2P_EVENTS_MEM_TILE_STREAM_SWITCH_PARITY_ERROR		135U
#define XAIE2P_EVENTS_MEM_TILE_STREAM_PKT_ERROR				136U
#define XAIE2P_EVENTS_MEM_TILE_CONTROL_PKT_ERROR			137U
#define XAIE2P_EVENTS_MEM_TILE_AXI_MM_SLAVE_ERROR			138U
#define XAIE2P_EVENTS_MEM_TILE_LOCK_ERROR				139U
#define XAIE2P_EVENTS_MEM_TILE_DMA_TASK_TOKEN_STALL			140U
#define XAIE2P_EVENTS_MEM_TILE_GROUP_BROADCAST				141U
#define XAIE2P_EVENTS_MEM_TILE_BROADCAST_0				142U
#define XAIE2P_EVENTS_MEM_TILE_BROADCAST_1				143U
#define XAIE2P_EVENTS_MEM_TILE_BROADCAST_2				144U
#define XAIE2P_EVENTS_MEM_TILE_BROADCAST_3				145U
#define XAIE2P_EVENTS_MEM_TILE_BROADCAST_4				146U
#define XAIE2P_EVENTS_MEM_TILE_BROADCAST_5				147U
#define XAIE2P_EVENTS_MEM_TILE_BROADCAST_6				148U
#define XAIE2P_EVENTS_MEM_TILE_BROADCAST_7				149U
#define XAIE2P_EVENTS_MEM_TILE_BROADCAST_8				150U
#define XAIE2P_EVENTS_MEM_TILE_BROADCAST_9				151U
#define XAIE2P_EVENTS_MEM_TILE_BROADCAST_10				152U
#define XAIE2P_EVENTS_MEM_TILE_BROADCAST_11				153U
#define XAIE2P_EVENTS_MEM_TILE_BROADCAST_12				154U
#define XAIE2P_EVENTS_MEM_TILE_BROADCAST_13				155U
#define XAIE2P_EVENTS_MEM_TILE_BROADCAST_14				156U
#define XAIE2P_EVENTS_MEM_TILE_BROADCAST_15				157U
#define XAIE2P_EVENTS_MEM_TILE_GROUP_USER_EVENT				158U
#define XAIE2P_EVENTS_MEM_TILE_USER_EVENT_0				159U
#define XAIE2P_EVENTS_MEM_TILE_USER_EVENT_1				160U

#endif /* XAIE_EVENTS_AIE2P_H */
/** @} */
