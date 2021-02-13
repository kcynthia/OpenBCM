/** \file dnx/swstate/auto_generated/types/dnx_fabric_types.h
 *
 * sw state types (structs/enums/typedefs)
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

#ifndef __DNX_FABRIC_TYPES_H__
#define __DNX_FABRIC_TYPES_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <include/shared/shr_thread_manager.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_fabric.h>
/*
 * STRUCTs
 */

/**
 * Modids to group map
 */
typedef struct {
    /**
     * Number of modids mapped this group
     */
    int nof_modids;
    /**
     * The modids that mapped to this group
     */
    int* modids;
} dnx_fabric_modids_group_map_t;

/**
 * Fabric link information
 */
typedef struct {
    /**
     * Boolean, is link is eligible for sending traffic
     */
    int is_link_allowed;
    /**
     * Boolean, is link isolated
     */
    int is_link_isolated;
} dnx_fabric_link_t;

/**
 * DB for system upgrade
 */
typedef struct {
    /**
     * System upgrade state 0
     */
    uint32 state_0;
    /**
     * System upgrade state 1
     */
    uint32 state_1;
    /**
     * System upgrade state 2
     */
    uint32 state_2;
} dnx_fabric_system_upgrade_t;

/**
 * DB for Fabric
 */
typedef struct {
    /**
     * Map modids to a group
     */
    dnx_fabric_modids_group_map_t* modids_to_group_map;
    /**
     * links information
     */
    dnx_fabric_link_t* links;
    /**
     * Handler for the periodic event that changes the load balancing counting mode
     */
    shr_thread_manager_handler_t load_balancing_shr_thread_manager_handler;
    /**
     * System upgrade states
     */
    dnx_fabric_system_upgrade_t system_upgrade;
} dnx_fabric_db_t;


#endif /* __DNX_FABRIC_TYPES_H__ */