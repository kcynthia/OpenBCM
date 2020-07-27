/** \file algo/swstate/auto_generated/access/algo_trunk_access.h
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
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef __ALGO_TRUNK_ACCESS_H__
#define __ALGO_TRUNK_ACCESS_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/algo_trunk_types.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#include <bcm_int/dnx/algo/trunk/algo_trunk.h>
/*
 * TYPEDEFs
 */

/**
 * implemented by: algo_trunk_db_is_init
 */
typedef int (*algo_trunk_db_is_init_cb)(
    int unit, uint8 *is_init);

/**
 * implemented by: algo_trunk_db_init
 */
typedef int (*algo_trunk_db_init_cb)(
    int unit);

/**
 * implemented by: algo_trunk_db_egress_trunk_set
 */
typedef int (*algo_trunk_db_egress_trunk_set_cb)(
    int unit, dnx_algo_template_t egress_trunk);

/**
 * implemented by: algo_trunk_db_egress_trunk_get
 */
typedef int (*algo_trunk_db_egress_trunk_get_cb)(
    int unit, dnx_algo_template_t *egress_trunk);

/**
 * implemented by: algo_trunk_db_egress_trunk_create
 */
typedef int (*algo_trunk_db_egress_trunk_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

/**
 * implemented by: algo_trunk_db_egress_trunk_allocate_single
 */
typedef int (*algo_trunk_db_egress_trunk_allocate_single_cb)(
    int unit, uint32 flags, bcm_trunk_t *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

/**
 * implemented by: algo_trunk_db_egress_trunk_free_single
 */
typedef int (*algo_trunk_db_egress_trunk_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

/**
 * implemented by: algo_trunk_db_egress_trunk_exchange
 */
typedef int (*algo_trunk_db_egress_trunk_exchange_cb)(
    int unit, uint32 flags, const bcm_trunk_t *profile_data, int old_profile, const void *extra_arguments, int *new_profile, uint8 *first_reference, uint8 *last_reference);

/**
 * implemented by: algo_trunk_db_egress_trunk_profile_data_get
 */
typedef int (*algo_trunk_db_egress_trunk_profile_data_get_cb)(
    int unit, int profile, int *ref_count, bcm_trunk_t *profile_data);

/**
 * implemented by: algo_trunk_db_egress_trunk_profile_get
 */
typedef int (*algo_trunk_db_egress_trunk_profile_get_cb)(
    int unit, const bcm_trunk_t *profile_data, int *profile);

/*
 * STRUCTs
 */

/**
 * This structure holds the access functions for the variable egress_trunk
 */
typedef struct {
    algo_trunk_db_egress_trunk_set_cb set;
    algo_trunk_db_egress_trunk_get_cb get;
    algo_trunk_db_egress_trunk_create_cb create;
    algo_trunk_db_egress_trunk_allocate_single_cb allocate_single;
    algo_trunk_db_egress_trunk_free_single_cb free_single;
    algo_trunk_db_egress_trunk_exchange_cb exchange;
    algo_trunk_db_egress_trunk_profile_data_get_cb profile_data_get;
    algo_trunk_db_egress_trunk_profile_get_cb profile_get;
} algo_trunk_db_egress_trunk_cbs;

/**
 * This structure holds the access functions for the variable algo_trunk_sw_state_t
 */
typedef struct {
    algo_trunk_db_is_init_cb is_init;
    algo_trunk_db_init_cb init;
    /**
     * Access struct for egress_trunk
     */
    algo_trunk_db_egress_trunk_cbs egress_trunk;
} algo_trunk_db_cbs;

/*
 * Global Variables
 */

/*
 * Global Variables
 */

extern algo_trunk_db_cbs algo_trunk_db;

#endif /* __ALGO_TRUNK_ACCESS_H__ */