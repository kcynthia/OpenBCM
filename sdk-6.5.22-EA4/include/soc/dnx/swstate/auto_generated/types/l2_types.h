/** \file dnx/swstate/auto_generated/types/l2_types.h
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

#ifndef __L2_TYPES_H__
#define __L2_TYPES_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <bcm/switch.h>
/*
 * STRUCTs
 */

/**
 * Context selection information
 */
typedef struct {
    /**
     * ipv4uc ctx-selection lines counter
     */
    int ipv4uc_counter;
    /**
     * ipv4mc ctx-selection lines counter
     */
    int ipv4mc_counter;
    /**
     * ipv6uc ctx-selection lines counter
     */
    int ipv6uc_counter;
    /**
     * ipv6mc ctx-selection lines counter
     */
    int ipv6mc_counter;
    /**
     * mpls ctx-selection lines counter
     */
    int mpls_counter;
    /**
     * ipv4uc ctx-selection lines list
     */
    int ipv4uc[64];
    /**
     * ipv4mc ctx-selection lines list
     */
    int ipv4mc[64];
    /**
     * ipv6uc ctx-selection lines list
     */
    int ipv6uc[64];
    /**
     * ipv6mc ctx-selection lines list
     */
    int ipv6mc[64];
    /**
     * mpls ctx-selection lines list
     */
    int mpls[64];
} opportunistic_learning_ctx_t;

/**
 * Context data of l2
 */
typedef struct {
    /**
     * 1 if the fid profiles where changed
     */
    uint8 fid_profiles_changed;
    /**
     * Context selection information
     */
    opportunistic_learning_ctx_t opportunistic_learning_ctx;
    /**
     * enable L2 learning for routed packets
     */
    uint32 routing_learning;
} l2_db_t;


#endif /* __L2_TYPES_H__ */