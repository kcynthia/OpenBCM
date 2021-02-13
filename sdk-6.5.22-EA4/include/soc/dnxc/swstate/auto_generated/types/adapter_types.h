/** \file dnxc/swstate/auto_generated/types/adapter_types.h
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

#ifndef __ADAPTER_TYPES_H__
#define __ADAPTER_TYPES_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <bcm/types.h>
#include <soc/dnxc/swstate/types/sw_state_mutex.h>
/*
 * STRUCTs
 */

/**
 * Context data of the adapter
 */
typedef struct {
    /**
     * Param for sending and receiving packets and signals
     */
    int adapter_rx_tx_fd;
    /**
     * Param for sending and receiving packets and signals
     */
    sw_state_mutex_t adapter_rx_tx_mutex;
    /**
     * Param for accessing the registers and memories
     */
    int adapter_mem_reg_fd;
    /**
     * Param for accessing the registers and memories
     */
    sw_state_mutex_t adapter_mem_reg_mutex;
    /**
     * Param for accessing the other tasks
     */
    int adapter_sdk_interface_fd;
    /**
     * Param for accessing the other tasks
     */
    sw_state_mutex_t adapter_sdk_interface_mutex;
    /**
     * Handler for external events socket
     */
    int adapter_external_events_fd;
    /**
     * Mutex for external events socket
     */
    sw_state_mutex_t adapter_external_events_mutex;
    /**
     * UDP port of external event server
     */
    uint32 adapter_external_events_port;
    /**
     * adapter server IP address
     */
    uint32 adapter_server_address;
} dnxc_adapter_context_params_t;

/**
 * Context data of the adapter
 */
typedef struct {
    /**
     * array per nof dies. Each die has its own adapter params
     */
    dnxc_adapter_context_params_t params[1];
} adapter_basic_access_info_t;


#endif /* __ADAPTER_TYPES_H__ */