/** \file dnx/swstate/auto_generated/access/instru_counters_access.h
 *
 * sw state functions declarations
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2021 Broadcom Inc. All rights reserved.
 */

#ifndef __INSTRU_COUNTERS_ACCESS_H__
#define __INSTRU_COUNTERS_ACCESS_H__

#include <soc/dnx/swstate/auto_generated/types/instru_counters_types.h>
/*
 * TYPEDEFs
 */

/**
 * implemented by: instru_sync_counters_is_init
 */
typedef int (*instru_sync_counters_is_init_cb)(
    int unit, uint8 *is_init);

/**
 * implemented by: instru_sync_counters_init
 */
typedef int (*instru_sync_counters_init_cb)(
    int unit);

/**
 * implemented by: instru_sync_counters_icgm_countes_sync_counters_started_set
 */
typedef int (*instru_sync_counters_icgm_countes_sync_counters_started_set_cb)(
    int unit, uint8 sync_counters_started);

/**
 * implemented by: instru_sync_counters_icgm_countes_sync_counters_started_get
 */
typedef int (*instru_sync_counters_icgm_countes_sync_counters_started_get_cb)(
    int unit, uint8 *sync_counters_started);

/**
 * implemented by: instru_sync_counters_icgm_countes_tod_1588_timestamp_start_set
 */
typedef int (*instru_sync_counters_icgm_countes_tod_1588_timestamp_start_set_cb)(
    int unit, uint64 tod_1588_timestamp_start);

/**
 * implemented by: instru_sync_counters_icgm_countes_tod_1588_timestamp_start_get
 */
typedef int (*instru_sync_counters_icgm_countes_tod_1588_timestamp_start_get_cb)(
    int unit, uint64 *tod_1588_timestamp_start);

/**
 * implemented by: instru_sync_counters_icgm_countes_per_core_info_alloc
 */
typedef int (*instru_sync_counters_icgm_countes_per_core_info_alloc_cb)(
    int unit);

/**
 * implemented by: instru_sync_counters_icgm_countes_per_core_info_record_last_read_nof_set
 */
typedef int (*instru_sync_counters_icgm_countes_per_core_info_record_last_read_nof_set_cb)(
    int unit, uint32 per_core_info_idx_0, uint32 record_last_read_nof);

/**
 * implemented by: instru_sync_counters_icgm_countes_per_core_info_record_last_read_nof_get
 */
typedef int (*instru_sync_counters_icgm_countes_per_core_info_record_last_read_nof_get_cb)(
    int unit, uint32 per_core_info_idx_0, uint32 *record_last_read_nof);

/**
 * implemented by: instru_sync_counters_nif_countes_sync_counters_started_set
 */
typedef int (*instru_sync_counters_nif_countes_sync_counters_started_set_cb)(
    int unit, uint8 sync_counters_started);

/**
 * implemented by: instru_sync_counters_nif_countes_sync_counters_started_get
 */
typedef int (*instru_sync_counters_nif_countes_sync_counters_started_get_cb)(
    int unit, uint8 *sync_counters_started);

/**
 * implemented by: instru_sync_counters_nif_countes_tod_1588_timestamp_start_set
 */
typedef int (*instru_sync_counters_nif_countes_tod_1588_timestamp_start_set_cb)(
    int unit, uint64 tod_1588_timestamp_start);

/**
 * implemented by: instru_sync_counters_nif_countes_tod_1588_timestamp_start_get
 */
typedef int (*instru_sync_counters_nif_countes_tod_1588_timestamp_start_get_cb)(
    int unit, uint64 *tod_1588_timestamp_start);

/**
 * implemented by: instru_sync_counters_nif_countes_per_ethu_info_alloc
 */
typedef int (*instru_sync_counters_nif_countes_per_ethu_info_alloc_cb)(
    int unit);

/**
 * implemented by: instru_sync_counters_nif_countes_per_ethu_info_record_last_read_nof_set
 */
typedef int (*instru_sync_counters_nif_countes_per_ethu_info_record_last_read_nof_set_cb)(
    int unit, uint32 per_ethu_info_idx_0, uint32 per_ethu_info_idx_1, uint32 record_last_read_nof_idx_0, uint32 record_last_read_nof);

/**
 * implemented by: instru_sync_counters_nif_countes_per_ethu_info_record_last_read_nof_get
 */
typedef int (*instru_sync_counters_nif_countes_per_ethu_info_record_last_read_nof_get_cb)(
    int unit, uint32 per_ethu_info_idx_0, uint32 per_ethu_info_idx_1, uint32 record_last_read_nof_idx_0, uint32 *record_last_read_nof);

/**
 * implemented by: instru_sync_counters_nif_countes_per_ethu_info_record_last_read_nof_alloc
 */
typedef int (*instru_sync_counters_nif_countes_per_ethu_info_record_last_read_nof_alloc_cb)(
    int unit, uint32 per_ethu_info_idx_0, uint32 per_ethu_info_idx_1);

/*
 * STRUCTs
 */

/**
 * This structure holds the access functions for the variable sync_counters_started
 */
typedef struct {
    instru_sync_counters_icgm_countes_sync_counters_started_set_cb set;
    instru_sync_counters_icgm_countes_sync_counters_started_get_cb get;
} instru_sync_counters_icgm_countes_sync_counters_started_cbs;

/**
 * This structure holds the access functions for the variable tod_1588_timestamp_start
 */
typedef struct {
    instru_sync_counters_icgm_countes_tod_1588_timestamp_start_set_cb set;
    instru_sync_counters_icgm_countes_tod_1588_timestamp_start_get_cb get;
} instru_sync_counters_icgm_countes_tod_1588_timestamp_start_cbs;

/**
 * This structure holds the access functions for the variable record_last_read_nof
 */
typedef struct {
    instru_sync_counters_icgm_countes_per_core_info_record_last_read_nof_set_cb set;
    instru_sync_counters_icgm_countes_per_core_info_record_last_read_nof_get_cb get;
} instru_sync_counters_icgm_countes_per_core_info_record_last_read_nof_cbs;

/**
 * This structure holds the access functions for the variable sync_counters_icgm_per_core_t
 */
typedef struct {
    instru_sync_counters_icgm_countes_per_core_info_alloc_cb alloc;
    /**
     * Access struct for record_last_read_nof
     */
    instru_sync_counters_icgm_countes_per_core_info_record_last_read_nof_cbs record_last_read_nof;
} instru_sync_counters_icgm_countes_per_core_info_cbs;

/**
 * This structure holds the access functions for the variable icgm_sync_counters_info_t
 */
typedef struct {
    /**
     * Access struct for sync_counters_started
     */
    instru_sync_counters_icgm_countes_sync_counters_started_cbs sync_counters_started;
    /**
     * Access struct for tod_1588_timestamp_start
     */
    instru_sync_counters_icgm_countes_tod_1588_timestamp_start_cbs tod_1588_timestamp_start;
    /**
     * Access struct for per_core_info
     */
    instru_sync_counters_icgm_countes_per_core_info_cbs per_core_info;
} instru_sync_counters_icgm_countes_cbs;

/**
 * This structure holds the access functions for the variable sync_counters_started
 */
typedef struct {
    instru_sync_counters_nif_countes_sync_counters_started_set_cb set;
    instru_sync_counters_nif_countes_sync_counters_started_get_cb get;
} instru_sync_counters_nif_countes_sync_counters_started_cbs;

/**
 * This structure holds the access functions for the variable tod_1588_timestamp_start
 */
typedef struct {
    instru_sync_counters_nif_countes_tod_1588_timestamp_start_set_cb set;
    instru_sync_counters_nif_countes_tod_1588_timestamp_start_get_cb get;
} instru_sync_counters_nif_countes_tod_1588_timestamp_start_cbs;

/**
 * This structure holds the access functions for the variable record_last_read_nof
 */
typedef struct {
    instru_sync_counters_nif_countes_per_ethu_info_record_last_read_nof_set_cb set;
    instru_sync_counters_nif_countes_per_ethu_info_record_last_read_nof_get_cb get;
    instru_sync_counters_nif_countes_per_ethu_info_record_last_read_nof_alloc_cb alloc;
} instru_sync_counters_nif_countes_per_ethu_info_record_last_read_nof_cbs;

/**
 * This structure holds the access functions for the variable sync_counters_nif_per_eth_info_t
 */
typedef struct {
    instru_sync_counters_nif_countes_per_ethu_info_alloc_cb alloc;
    /**
     * Access struct for record_last_read_nof
     */
    instru_sync_counters_nif_countes_per_ethu_info_record_last_read_nof_cbs record_last_read_nof;
} instru_sync_counters_nif_countes_per_ethu_info_cbs;

/**
 * This structure holds the access functions for the variable nif_sync_counters_info_t
 */
typedef struct {
    /**
     * Access struct for sync_counters_started
     */
    instru_sync_counters_nif_countes_sync_counters_started_cbs sync_counters_started;
    /**
     * Access struct for tod_1588_timestamp_start
     */
    instru_sync_counters_nif_countes_tod_1588_timestamp_start_cbs tod_1588_timestamp_start;
    /**
     * Access struct for per_ethu_info
     */
    instru_sync_counters_nif_countes_per_ethu_info_cbs per_ethu_info;
} instru_sync_counters_nif_countes_cbs;

/**
 * This structure holds the access functions for the variable instru_sync_counters_sw_state_t
 */
typedef struct {
    instru_sync_counters_is_init_cb is_init;
    instru_sync_counters_init_cb init;
    /**
     * Access struct for icgm_countes
     */
    instru_sync_counters_icgm_countes_cbs icgm_countes;
    /**
     * Access struct for nif_countes
     */
    instru_sync_counters_nif_countes_cbs nif_countes;
} instru_sync_counters_cbs;

/*
 * Global Variables
 */

/*
 * Global Variables
 */

extern instru_sync_counters_cbs instru_sync_counters;

#endif /* __INSTRU_COUNTERS_ACCESS_H__ */