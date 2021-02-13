/** \file dnx/swstate/auto_generated/access/reflector_access.h
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

#ifndef __REFLECTOR_ACCESS_H__
#define __REFLECTOR_ACCESS_H__

#include <soc/dnx/swstate/auto_generated/types/reflector_types.h>
/*
 * TYPEDEFs
 */

/**
 * implemented by: reflector_sw_db_info_is_init
 */
typedef int (*reflector_sw_db_info_is_init_cb)(
    int unit, uint8 *is_init);

/**
 * implemented by: reflector_sw_db_info_init
 */
typedef int (*reflector_sw_db_info_init_cb)(
    int unit);

/**
 * implemented by: reflector_sw_db_info_uc_encap_id_set
 */
typedef int (*reflector_sw_db_info_uc_encap_id_set_cb)(
    int unit, int encap_id);

/**
 * implemented by: reflector_sw_db_info_uc_encap_id_get
 */
typedef int (*reflector_sw_db_info_uc_encap_id_get_cb)(
    int unit, int *encap_id);

/**
 * implemented by: reflector_sw_db_info_uc_is_allocated_set
 */
typedef int (*reflector_sw_db_info_uc_is_allocated_set_cb)(
    int unit, int is_allocated);

/**
 * implemented by: reflector_sw_db_info_uc_is_allocated_get
 */
typedef int (*reflector_sw_db_info_uc_is_allocated_get_cb)(
    int unit, int *is_allocated);

/**
 * implemented by: reflector_sw_db_info_uc_l2_int_encap_id_set
 */
typedef int (*reflector_sw_db_info_uc_l2_int_encap_id_set_cb)(
    int unit, int encap_id);

/**
 * implemented by: reflector_sw_db_info_uc_l2_int_encap_id_get
 */
typedef int (*reflector_sw_db_info_uc_l2_int_encap_id_get_cb)(
    int unit, int *encap_id);

/**
 * implemented by: reflector_sw_db_info_uc_l2_int_is_allocated_set
 */
typedef int (*reflector_sw_db_info_uc_l2_int_is_allocated_set_cb)(
    int unit, int is_allocated);

/**
 * implemented by: reflector_sw_db_info_uc_l2_int_is_allocated_get
 */
typedef int (*reflector_sw_db_info_uc_l2_int_is_allocated_get_cb)(
    int unit, int *is_allocated);

/**
 * implemented by: reflector_sw_db_info_uc_l2_int_onepass_encap_id_set
 */
typedef int (*reflector_sw_db_info_uc_l2_int_onepass_encap_id_set_cb)(
    int unit, int encap_id);

/**
 * implemented by: reflector_sw_db_info_uc_l2_int_onepass_encap_id_get
 */
typedef int (*reflector_sw_db_info_uc_l2_int_onepass_encap_id_get_cb)(
    int unit, int *encap_id);

/**
 * implemented by: reflector_sw_db_info_uc_l2_int_onepass_is_allocated_set
 */
typedef int (*reflector_sw_db_info_uc_l2_int_onepass_is_allocated_set_cb)(
    int unit, int is_allocated);

/**
 * implemented by: reflector_sw_db_info_uc_l2_int_onepass_is_allocated_get
 */
typedef int (*reflector_sw_db_info_uc_l2_int_onepass_is_allocated_get_cb)(
    int unit, int *is_allocated);

/**
 * implemented by: reflector_sw_db_info_sbfd_reflector_cnt_set
 */
typedef int (*reflector_sw_db_info_sbfd_reflector_cnt_set_cb)(
    int unit, uint32 sbfd_reflector_cnt);

/**
 * implemented by: reflector_sw_db_info_sbfd_reflector_cnt_get
 */
typedef int (*reflector_sw_db_info_sbfd_reflector_cnt_get_cb)(
    int unit, uint32 *sbfd_reflector_cnt);

/*
 * STRUCTs
 */

/**
 * This structure holds the access functions for the variable encap_id
 */
typedef struct {
    reflector_sw_db_info_uc_encap_id_set_cb set;
    reflector_sw_db_info_uc_encap_id_get_cb get;
} reflector_sw_db_info_uc_encap_id_cbs;

/**
 * This structure holds the access functions for the variable is_allocated
 */
typedef struct {
    reflector_sw_db_info_uc_is_allocated_set_cb set;
    reflector_sw_db_info_uc_is_allocated_get_cb get;
} reflector_sw_db_info_uc_is_allocated_cbs;

/**
 * This structure holds the access functions for the variable reflector_uc_sw_db_info_t
 */
typedef struct {
    /**
     * Access struct for encap_id
     */
    reflector_sw_db_info_uc_encap_id_cbs encap_id;
    /**
     * Access struct for is_allocated
     */
    reflector_sw_db_info_uc_is_allocated_cbs is_allocated;
} reflector_sw_db_info_uc_cbs;

/**
 * This structure holds the access functions for the variable encap_id
 */
typedef struct {
    reflector_sw_db_info_uc_l2_int_encap_id_set_cb set;
    reflector_sw_db_info_uc_l2_int_encap_id_get_cb get;
} reflector_sw_db_info_uc_l2_int_encap_id_cbs;

/**
 * This structure holds the access functions for the variable is_allocated
 */
typedef struct {
    reflector_sw_db_info_uc_l2_int_is_allocated_set_cb set;
    reflector_sw_db_info_uc_l2_int_is_allocated_get_cb get;
} reflector_sw_db_info_uc_l2_int_is_allocated_cbs;

/**
 * This structure holds the access functions for the variable reflector_uc_sw_db_info_t
 */
typedef struct {
    /**
     * Access struct for encap_id
     */
    reflector_sw_db_info_uc_l2_int_encap_id_cbs encap_id;
    /**
     * Access struct for is_allocated
     */
    reflector_sw_db_info_uc_l2_int_is_allocated_cbs is_allocated;
} reflector_sw_db_info_uc_l2_int_cbs;

/**
 * This structure holds the access functions for the variable encap_id
 */
typedef struct {
    reflector_sw_db_info_uc_l2_int_onepass_encap_id_set_cb set;
    reflector_sw_db_info_uc_l2_int_onepass_encap_id_get_cb get;
} reflector_sw_db_info_uc_l2_int_onepass_encap_id_cbs;

/**
 * This structure holds the access functions for the variable is_allocated
 */
typedef struct {
    reflector_sw_db_info_uc_l2_int_onepass_is_allocated_set_cb set;
    reflector_sw_db_info_uc_l2_int_onepass_is_allocated_get_cb get;
} reflector_sw_db_info_uc_l2_int_onepass_is_allocated_cbs;

/**
 * This structure holds the access functions for the variable reflector_uc_sw_db_info_t
 */
typedef struct {
    /**
     * Access struct for encap_id
     */
    reflector_sw_db_info_uc_l2_int_onepass_encap_id_cbs encap_id;
    /**
     * Access struct for is_allocated
     */
    reflector_sw_db_info_uc_l2_int_onepass_is_allocated_cbs is_allocated;
} reflector_sw_db_info_uc_l2_int_onepass_cbs;

/**
 * This structure holds the access functions for the variable sbfd_reflector_cnt
 */
typedef struct {
    reflector_sw_db_info_sbfd_reflector_cnt_set_cb set;
    reflector_sw_db_info_sbfd_reflector_cnt_get_cb get;
} reflector_sw_db_info_sbfd_reflector_cnt_cbs;

/**
 * This structure holds the access functions for the variable reflector_sw_db_info_t
 */
typedef struct {
    reflector_sw_db_info_is_init_cb is_init;
    reflector_sw_db_info_init_cb init;
    /**
     * Access struct for uc
     */
    reflector_sw_db_info_uc_cbs uc;
    /**
     * Access struct for uc_l2_int
     */
    reflector_sw_db_info_uc_l2_int_cbs uc_l2_int;
    /**
     * Access struct for uc_l2_int_onepass
     */
    reflector_sw_db_info_uc_l2_int_onepass_cbs uc_l2_int_onepass;
    /**
     * Access struct for sbfd_reflector_cnt
     */
    reflector_sw_db_info_sbfd_reflector_cnt_cbs sbfd_reflector_cnt;
} reflector_sw_db_info_cbs;

/*
 * Global Variables
 */

/*
 * Global Variables
 */

extern reflector_sw_db_info_cbs reflector_sw_db_info;

#endif /* __REFLECTOR_ACCESS_H__ */