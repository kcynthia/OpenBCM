/** \file dnx/swstate/auto_generated/types/dnx_sch_config_types.h
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

#ifndef __DNX_SCH_CONFIG_TYPES_H__
#define __DNX_SCH_CONFIG_TYPES_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <include/bcm/types.h>
#include <include/soc/dnx/dnx_data/auto_generated/dnx_data_sch.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
/*
 * ENUMs
 */

/**
 * Independent-Per-Flow configuration mode
 */
typedef enum {
    /**
     * Independent-Per-Flow Weight configuration mode: inverse proportional.
     * The lower the flow's specified weight, the higher the bandwidth portion that the flow is awarded.
     * The exact portion of the rate distributed to an active flow with weight Wn,
     * under a WFQ with active flows weights W1 - Wk is (1/Wn)/Sum(1/Wi) for i in [1..k].
     * This mode achieves a similar behavior for flow weight configuration in all modes,
     * but limits the weight resolution for independent-per-flow mode.
     * For example, for weights in maximal allowed range [1..63],
     * all weights above 32, i.e. in range [33..63], will be configured as 1/63
     */
    DNX_SCH_IPF_CONFIG_MODE_INVERSE = 0,
    /**
     * Independent-Per-Flow Weight configuration mode: proportional.
     * The higher the flow's specified weight, the higher the bandwidth portion that the flow is awarded.
     * The portion of the rate distributed to an active flow with weight Wn,
     * under a WFQ with active flows weights W1 - Wk is is Wn/Sum(Wi) for i in [1..k].
     * This mode results in having a different behavior for independent-per-flow mode as compared to other modes,
     * but preserves the weight resolution as supported by the device. For example, for weights in maximal allowed
     * range [1..63], each weight will be configured accordingly on the device.
     */
    DNX_SCH_IPF_CONFIG_MODE_PROPORTIONAL,
    /**
     * Undefined configuration mode
     */
    DNX_SCH_IPF_CONFIG_MODE_NONE
} dnx_sch_ipf_config_mode_e;

/*
 * STRUCTs
 */

typedef struct {
    uint8 num_cos;
    uint8 connection_valid;
    uint8 src_modid;
} dnx_sch_connector_swstate_info_t;

typedef struct {
    int weight;
    int mode;
} dnx_sch_credit_src_info_t;

typedef struct {
    uint32 child_count;
} dnx_sch_se_swstate_info_t;

typedef struct {
    dnx_sch_credit_src_info_t credit_src;
} dnx_sch_flow_swstate_info_t;

/**
 * legacy cosq config info
 */
typedef struct {
    int* hr_group_bw[DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES];
    int groups_bw[DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES][3];
    dnx_sch_ipf_config_mode_e ipf_config_mode;
    dnx_sch_flow_swstate_info_t* flow[DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES];
    dnx_sch_connector_swstate_info_t* connector[DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES];
    dnx_sch_se_swstate_info_t* se[DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES];
} dnx_sch_config_t;


#endif /* __DNX_SCH_CONFIG_TYPES_H__ */