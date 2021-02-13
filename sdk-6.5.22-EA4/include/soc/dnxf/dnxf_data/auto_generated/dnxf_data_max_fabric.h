/** \file dnxf_data_max_fabric.h
 * 
 * MODULE DATA MAX - 
 * Maintain max value (of all devices) per define
 * 
 * Device Data
 * SW component that maintains per device data
 * For additional details about Device Data Component goto 'dnxc_data_mgmt.h'
 *        
 *     
 * 
 * AUTO-GENERATED BY AUTOCODER!
 * DO NOT EDIT THIS FILE!
 */
/* *INDENT-OFF* */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2021 Broadcom Inc. All rights reserved.
 */
#ifndef _DNXF_DATA_MAX_FABRIC_H_
/*{*/
#define _DNXF_DATA_MAX_FABRIC_H_
/*
 * INCLUDE FILES:
 * {
 */
/*
 * }
 */

/*!
* \brief This file is only used by DNX (JR2 family). Including it by
* software that is not specific to DNX is an error.
*/
#ifndef BCM_DNXF_SUPPORT
#error "This file is for use by DNX (JR2) family only!"
#endif

/*
 * MAX DEFINES:
 * {
 */
/**
 * \brief
 * The maximum number of pipes that the device supports.
 */
#define DNXF_DATA_MAX_FABRIC_GENERAL_MAX_NOF_PIPES (3)

/**
 * \brief
 * Max number of pipes supported by the device
 */
#define DNXF_DATA_MAX_FABRIC_PIPES_MAX_NOF_PIPES (3)

/**
 * \brief
 * Multicast table row size in UINT32s.
 */
#define DNXF_DATA_MAX_FABRIC_MULTICAST_TABLE_ROW_SIZE_IN_UINT32 (7)

/**
 * \brief
 * FIFO granularity
 */
#define DNXF_DATA_MAX_FABRIC_FIFOS_GRANULARITY (4)

/**
 * \brief
 * Minimal FIFO depth
 */
#define DNXF_DATA_MAX_FABRIC_FIFOS_MIN_DEPTH (16)

/**
 * \brief
 * Maximal unused resources allowed per FIFO
 */
#define DNXF_DATA_MAX_FABRIC_FIFOS_MAX_UNUSED_RESOURCES (36)

/**
 * \brief
 * Maximal Available Resources per RX FIFO
 */
#define DNXF_DATA_MAX_FABRIC_FIFOS_RX_RESOURCES (768)

/**
 * \brief
 * Maximal Available Resources per MIDDLE FIFO
 */
#define DNXF_DATA_MAX_FABRIC_FIFOS_MID_RESOURCES (4608)

/**
 * \brief
 * Maximal Available Resources per TX FIFO
 */
#define DNXF_DATA_MAX_FABRIC_FIFOS_TX_RESOURCES (4096)

/**
 * \brief
 * RX FULL-to-DEPTH offset
 */
#define DNXF_DATA_MAX_FABRIC_FIFOS_RX_FULL_OFFSET (4)

/**
 * \brief
 * MID FULL-to-DEPTH offset
 */
#define DNXF_DATA_MAX_FABRIC_FIFOS_MID_FULL_OFFSET (12)

/**
 * \brief
 * TX FULL-to-DEPTH offset
 */
#define DNXF_DATA_MAX_FABRIC_FIFOS_TX_FULL_OFFSET (12)

/**
 * \brief
 * Number of CGM profiles.
 */
#define DNXF_DATA_MAX_FABRIC_CONGESTION_NOF_PROFILES (2)

/**
 * \brief
 * Number of CGM threhold priorities.
 */
#define DNXF_DATA_MAX_FABRIC_CONGESTION_NOF_THRESHOLD_PRIORITIES (4)

/**
 * \brief
 * Number of CGM threhold levels.
 */
#define DNXF_DATA_MAX_FABRIC_CONGESTION_NOF_THRESHOLD_LEVELS (3)

/**
 * \brief
 * Number of threshold index dimendions used to indicate the application of the threshold value.
 */
#define DNXF_DATA_MAX_FABRIC_CONGESTION_NOF_THRESHOLD_INDEX_DIMENSIONS (2)

/**
 * \brief
 * Number of CGM thresholds for each device.
 */
#define DNXF_DATA_MAX_FABRIC_CONGESTION_NOF_THRESHOLDS (37)

/**
 * \brief
 * Number of DFL banks.
 */
#define DNXF_DATA_MAX_FABRIC_CONGESTION_NOF_DFL_BANKS (10)

/**
 * \brief
 * Number of sub-banks for each DFL bank.
 */
#define DNXF_DATA_MAX_FABRIC_CONGESTION_NOF_DFL_SUB_BANKS (2)

/**
 * \brief
 * Number of overall entries in each DFL bank.
 */
#define DNXF_DATA_MAX_FABRIC_CONGESTION_NOF_DFL_BANK_ENTRIES (3600)

/**
 * \brief
 * Number of RCI indication bits.
 */
#define DNXF_DATA_MAX_FABRIC_CONGESTION_NOF_RCI_BITS (2)

/**
 * \brief
 * Number of entries per one cell (chunk).
 */
#define DNXF_DATA_MAX_FABRIC_CELL_FIFO_DMA_FABRIC_CELL_NOF_ENTRIES_PER_CELL (4)

/**
 * \brief
 * Payload size of data cpu cells (bits).
 */
#define DNXF_DATA_MAX_FABRIC_CELL_RX_CPU_CELL_MAX_PAYLOAD_SIZE (1024)

/**
 * \brief
 * Number of rx CPU buffers.
 */
#define DNXF_DATA_MAX_FABRIC_CELL_RX_MAX_NOF_CPU_BUFFERS (8)

/**
 * \brief
 * Offset in the header fields of sr cells.
 */
#define DNXF_DATA_MAX_FABRIC_CELL_SOURCE_ROUTED_CELLS_HEADER_OFFSET (32)

/**
 * \brief
 * Number of channels used for fifo DMA.
 */
#define DNXF_DATA_MAX_FABRIC_CELL_FIFO_DMA_NOF_CHANNELS (8)

/**
 * \brief
 * DMA entry size in bytes
 */
#define DNXF_DATA_MAX_FABRIC_CELL_FIFO_DMA_ENTRY_SIZE (80)

/**
 * \brief
 * MAX number of entries in DMA buffer.
 */
#define DNXF_DATA_MAX_FABRIC_CELL_FIFO_DMA_MAX_NOF_ENTRIES (16384)

/**
 * \brief
 * MIN number of entries in DMA buffer.
 */
#define DNXF_DATA_MAX_FABRIC_CELL_FIFO_DMA_MIN_NOF_ENTRIES (64)

/**
 * \brief
 * Max link score.
 */
#define DNXF_DATA_MAX_FABRIC_TOPOLOGY_MAX_LINK_SCORE (120)

/**
 * \brief
 * Number of system modids.
 */
#define DNXF_DATA_MAX_FABRIC_TOPOLOGY_NOF_SYSTEM_MODID (8192)

/**
 * \brief
 * Number of local modids.
 */
#define DNXF_DATA_MAX_FABRIC_TOPOLOGY_NOF_LOCAL_MODID (512)

/**
 * \brief
 * Number of local modids in FE13 mode.
 */
#define DNXF_DATA_MAX_FABRIC_TOPOLOGY_NOF_LOCAL_MODID_FE13 (256)

/**
 * \brief
 * Time interval between 2 GPD cells to enter GPD mode (usec).
 */
#define DNXF_DATA_MAX_FABRIC_GPD_IN_TIME (60)

/**
 * \brief
 * Time to get out of GPD mode if no GPD cells arrived (msec).
 */
#define DNXF_DATA_MAX_FABRIC_GPD_OUT_TIME (200)

/**
 * \brief
 * RTP table Row Size in UINT32s.
 */
#define DNXF_DATA_MAX_FABRIC_REACHABILITY_TABLE_ROW_SIZE_IN_UINT32 (7)

/**
 * \brief
 * RMHMT Group Size.
 */
#define DNXF_DATA_MAX_FABRIC_REACHABILITY_TABLE_GROUP_SIZE (32)

/**
 * \brief
 * RTP RMGR resolution.
 */
#define DNXF_DATA_MAX_FABRIC_REACHABILITY_RMGR_UNITS (32)

/**
 * \brief
 * RTP RMGR number of links that should be taken into account.
 */
#define DNXF_DATA_MAX_FABRIC_REACHABILITY_RMGR_NOF_LINKS (192)

/**
 * \brief
 * Factor waiting for the GPD to spread in the system.
 */
#define DNXF_DATA_MAX_FABRIC_REACHABILITY_GPD_RMGR_TIME_FACTOR (4)

/**
 * \brief
 * Reachability gen rate between links.
 */
#define DNXF_DATA_MAX_FABRIC_REACHABILITY_GEN_RATE_LINK_DELTA (15)

/**
 * \brief
 * RTP Reachability gen rate full cycle.
 */
#define DNXF_DATA_MAX_FABRIC_REACHABILITY_GEN_RATE_FULL_CYCLE (44800)

/**
 * \brief
 * RTP GPD Reachability gen rate full cycle (nsec).
 */
#define DNXF_DATA_MAX_FABRIC_REACHABILITY_GPD_GEN_RATE_FULL_CYCLE (10000)

/**
 * \brief
 * RTP Reachability watchdog rate.
 */
#define DNXF_DATA_MAX_FABRIC_REACHABILITY_WATCHDOG_RATE (100000)

/**
 * \brief
 * fabric system upgrade maximum master id
 */
#define DNXF_DATA_MAX_FABRIC_SYSTEM_UPGRADE_MAX_MASTER_ID (2047)

/**
 * \brief
 * fabric system upgrade param 0
 */
#define DNXF_DATA_MAX_FABRIC_SYSTEM_UPGRADE_PARAM_0 (10)

/**
 * \brief
 * fabric system upgrade param 1
 */
#define DNXF_DATA_MAX_FABRIC_SYSTEM_UPGRADE_PARAM_1 (8388607)

/**
 * \brief
 * fabric system upgrade param 2
 */
#define DNXF_DATA_MAX_FABRIC_SYSTEM_UPGRADE_PARAM_2 (10000)

/**
 * \brief
 * fabric system upgrade param 3
 */
#define DNXF_DATA_MAX_FABRIC_SYSTEM_UPGRADE_PARAM_3 (300000)

/**
 * \brief
 * fabric system upgrade param 4
 */
#define DNXF_DATA_MAX_FABRIC_SYSTEM_UPGRADE_PARAM_4 (1000)

/**
 * \brief
 * fabric system upgrade param 5
 */
#define DNXF_DATA_MAX_FABRIC_SYSTEM_UPGRADE_PARAM_5 (100000)

/**
 * \brief
 * fabric system upgrade param 7
 */
#define DNXF_DATA_MAX_FABRIC_SYSTEM_UPGRADE_PARAM_7 (100)

/*
 * }
 */

/*}*/
#endif /*_DNXF_DATA_MAX_FABRIC_H_*/
/* *INDENT-ON* */