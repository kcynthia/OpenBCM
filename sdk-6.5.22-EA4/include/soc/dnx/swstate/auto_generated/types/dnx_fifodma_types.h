/** \file dnx/swstate/auto_generated/types/dnx_fifodma_types.h
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

#ifndef __DNX_FIFODMA_TYPES_H__
#define __DNX_FIFODMA_TYPES_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <include/bcm_int/dnx/l2/l2_learn.h>
#include <include/bcm_int/dnx/sat/sat.h>
#include <include/soc/dnx/dnx_fifodma.h>
#include <soc/dnxc/swstate/types/sw_state_cb.h>
#include <src/bcm/dnx/oam/oam_oamp.h>
/*
 * CALLBACK's
 */

/*
 * STRUCTs
 */

/**
 * fifodma configration information
 */
typedef struct {
    /**
     * Maximum number of entries.
     */
    uint32 max_entries;
    /**
     * Boolean value, '0' - register is used; '1' - memory is used.
     */
    int is_mem;
    /**
     * Name of memory.
     */
    int mem;
    /**
     * Name of register.
     */
    int reg;
    /**
     * Index of register or memory array.
     */
    int array_index;
    /**
     * Block parameter in memory access.
     */
    int copyno;
    /**
     * Specified entry size which does not match the register or memory size, ignore when it equals to 0.
     */
    int force_entry_size;
    /**
     * Number of valid entries in host memory exceeds which an interrupt will be raised.
     */
    int threshold;
    /**
     * Time before triggering a FIFO_DMA_TIMEOUT interrupt, in microseconds.
     */
    int timeout;
    /**
     * Boolean value, '0' - is in interrupt mode; '1' - is in poll mode.
     */
    int is_poll;
    /**
     * Size of entry.
     */
    uint32 entry_size;
    /**
     * Boolean value, '0' - current fifodma channel is not used; '1' - current fifodma channel is used.
     */
    int is_alloced;
    /**
     * Boolean value, '0' - current fifodma channel is not started; '1' - current fifodma channel is started.
     */
    int is_started;
    /**
     * Boolean value, '0' - current fifodma channel is not paused; '1' - current fifodma channel is paused.
     */
    int is_paused;
    /**
     * Callback function from fifodma users.
     */
    sw_state_cb_t handler;
    /**
     * Current entry location in host memory
     */
    int last_entry_id;
    /**
     * Low 32 bits of host memory buffer pointer
     */
    uint32 host_buff_lo;
    /**
     * High 32 bits of host memory buffer pointer
     */
    uint32 host_buff_hi;
} fifodma_info_t;

/**
 * fifodma database
 */
typedef struct {
    /**
     * dnx fifodma configration information.
     */
    fifodma_info_t* entry;
} fifodma_db_t;


#endif /* __DNX_FIFODMA_TYPES_H__ */