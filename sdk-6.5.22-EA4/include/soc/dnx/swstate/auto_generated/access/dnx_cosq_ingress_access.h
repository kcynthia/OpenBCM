/** \file dnx/swstate/auto_generated/access/dnx_cosq_ingress_access.h
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

#ifndef __DNX_COSQ_INGRESS_ACCESS_H__
#define __DNX_COSQ_INGRESS_ACCESS_H__

#include <soc/dnx/swstate/auto_generated/types/dnx_cosq_ingress_types.h>
#include <bcm/cosq.h>
#include <bcm/types.h>
#include <bcm_int/dnx/cosq/ingress/ingress_congestion.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_egr_queuing.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_ingr_congestion.h>
#include <soc/dnxc/swstate/types/sw_state_bitmap.h>
#include <soc/dnxc/swstate/types/sw_state_pbmp.h>
/*
 * TYPEDEFs
 */

/**
 * implemented by: dnx_cosq_ingress_db_is_init
 */
typedef int (*dnx_cosq_ingress_db_is_init_cb)(
    int unit, uint8 *is_init);

/**
 * implemented by: dnx_cosq_ingress_db_init
 */
typedef int (*dnx_cosq_ingress_db_init_cb)(
    int unit);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_set
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_set_cb)(
    int unit, bcm_pbmp_t nif);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_get
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_get_cb)(
    int unit, bcm_pbmp_t *nif);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_neq
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_neq_cb)(
    int unit, _shr_pbmp_t input_pbmp, uint8 *result);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_eq
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_eq_cb)(
    int unit, _shr_pbmp_t input_pbmp, uint8 *result);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_member
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_member_cb)(
    int unit, uint32 _input_port, uint8 *result);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_not_null
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_not_null_cb)(
    int unit, uint8 *result);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_is_null
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_is_null_cb)(
    int unit, uint8 *result);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_count
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_count_cb)(
    int unit, int *result);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_xor
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_xor_cb)(
    int unit, _shr_pbmp_t input_pbmp);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_remove
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_remove_cb)(
    int unit, _shr_pbmp_t input_pbmp);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_assign
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_assign_cb)(
    int unit, _shr_pbmp_t input_pbmp);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_get
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_get_cb)(
    int unit, _shr_pbmp_t *output_pbmp);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_and
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_and_cb)(
    int unit, _shr_pbmp_t input_pbmp);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_negate
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_negate_cb)(
    int unit, _shr_pbmp_t input_pbmp);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_or
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_or_cb)(
    int unit, _shr_pbmp_t input_pbmp);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_clear
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_clear_cb)(
    int unit);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_port_add
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_port_add_cb)(
    int unit, uint32 _input_port);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_port_flip
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_port_flip_cb)(
    int unit, uint32 _input_port);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_port_remove
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_port_remove_cb)(
    int unit, uint32 _input_port);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_port_set
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_port_set_cb)(
    int unit, uint32 _input_port);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_ports_range_add
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_ports_range_add_cb)(
    int unit, uint32 _first_port, uint32 _range);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_nif_pbmp_fmt
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_nif_pbmp_fmt_cb)(
    int unit, char* _buffer);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_mirror_bit_set
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_mirror_bit_set_cb)(
    int unit, uint32 mirror_idx_0, uint32 _bit_num);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_mirror_bit_clear
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_mirror_bit_clear_cb)(
    int unit, uint32 mirror_idx_0, uint32 _bit_num);

/**
 * implemented by: dnx_cosq_ingress_db_fixed_priority_mirror_bit_get
 */
typedef int (*dnx_cosq_ingress_db_fixed_priority_mirror_bit_get_cb)(
    int unit, uint32 mirror_idx_0, uint32 _bit_num, uint8* result);

/*
 * STRUCTs
 */

/**
 * This structure holds the access functions for the variable nif
 */
typedef struct {
    dnx_cosq_ingress_db_fixed_priority_nif_set_cb set;
    dnx_cosq_ingress_db_fixed_priority_nif_get_cb get;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_neq_cb pbmp_neq;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_eq_cb pbmp_eq;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_member_cb pbmp_member;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_not_null_cb pbmp_not_null;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_is_null_cb pbmp_is_null;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_count_cb pbmp_count;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_xor_cb pbmp_xor;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_remove_cb pbmp_remove;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_assign_cb pbmp_assign;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_get_cb pbmp_get;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_and_cb pbmp_and;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_negate_cb pbmp_negate;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_or_cb pbmp_or;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_clear_cb pbmp_clear;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_port_add_cb pbmp_port_add;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_port_flip_cb pbmp_port_flip;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_port_remove_cb pbmp_port_remove;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_port_set_cb pbmp_port_set;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_ports_range_add_cb pbmp_ports_range_add;
    dnx_cosq_ingress_db_fixed_priority_nif_pbmp_fmt_cb pbmp_fmt;
} dnx_cosq_ingress_db_fixed_priority_nif_cbs;

/**
 * This structure holds the access functions for the variable mirror
 */
typedef struct {
    dnx_cosq_ingress_db_fixed_priority_mirror_bit_set_cb bit_set;
    dnx_cosq_ingress_db_fixed_priority_mirror_bit_clear_cb bit_clear;
    dnx_cosq_ingress_db_fixed_priority_mirror_bit_get_cb bit_get;
} dnx_cosq_ingress_db_fixed_priority_mirror_cbs;

/**
 * This structure holds the access functions for the variable dnx_cosq_ingress_fixed_priority_t
 */
typedef struct {
    /**
     * Access struct for nif
     */
    dnx_cosq_ingress_db_fixed_priority_nif_cbs nif;
    /**
     * Access struct for mirror
     */
    dnx_cosq_ingress_db_fixed_priority_mirror_cbs mirror;
} dnx_cosq_ingress_db_fixed_priority_cbs;

/**
 * This structure holds the access functions for the variable dnx_cosq_ingress_db_t
 */
typedef struct {
    dnx_cosq_ingress_db_is_init_cb is_init;
    dnx_cosq_ingress_db_init_cb init;
    /**
     * Access struct for fixed_priority
     */
    dnx_cosq_ingress_db_fixed_priority_cbs fixed_priority;
} dnx_cosq_ingress_db_cbs;

/*
 * Global Variables
 */

/*
 * Global Variables
 */

extern dnx_cosq_ingress_db_cbs dnx_cosq_ingress_db;

#endif /* __DNX_COSQ_INGRESS_ACCESS_H__ */