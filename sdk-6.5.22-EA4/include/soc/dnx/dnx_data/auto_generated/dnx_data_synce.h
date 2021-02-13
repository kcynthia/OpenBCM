/** \file dnx_data_synce.h
 * 
 * MODULE DATA INTERFACE - 
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
#ifndef _DNX_DATA_SYNCE_H_
/*{*/
#define _DNX_DATA_SYNCE_H_
/*
 * INCLUDE FILES:
 * {
 */
#include <sal/limits.h>
#include <soc/property.h>
#include <shared/shrextend/shrextend_debug.h>
#include <shared/utilex/utilex_framework.h>
#include <soc/dnxc/dnxc_data/dnxc_data_utils.h>
#include <soc/dnxc/dnxc_data/dnxc_data_mgmt.h>
#include <bcm/port.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_nif.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_fabric.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_max_synce.h>
/*
 * }
 */

/*!
* \brief This file is only used by DNX (JR2 family). Including it by
* software that is not specific to DNX is an error.
*/
#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX (JR2) family only!"
#endif

/*
 * MODULE FUNCTIONS:
 * {
 */
/**
 * \brief Init default data structure - dnx_data_if_synce
 * 
 * \param [in] unit - Unit #
 * 
 * \return
 *     rv - see 'shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
shr_error_e dnx_data_if_synce_init(
    int unit);

/*
 * }
 */

/*
 * SUBMODULE  - GENERAL:
 * Synchronous Ethernet general attributes shared by Nif and Fabric SyncE.
 * {
 */
/*
 * Table value structure
 */
/**
 * \brief Holds values of submodule general table cfg
 * Table info:
 * SyncE common configuration.
 */
typedef struct
{
    /**
     * Select the SyncE source port for SyncE PLL.
     */
    bcm_port_t source_clock_port;
    /**
     * Enable or Disable the SyncE auto-squelch.
     */
    uint32 squelch_enable;
    /**
     * SyncE output clock select.
     */
    uint32 output_clock_sel;
} dnx_data_synce_general_cfg_t;

/**
 * \brief Holds values of submodule general table nmg_chain_map
 * Table info:
 * ethu_id mapped to NMG chain related to SYNCE
 */
typedef struct
{
    /**
     * NMG chain id
     */
    uint32 chain_id;
} dnx_data_synce_general_nmg_chain_map_t;

/*
 * Feature enum
 */
/**
 * \brief 
 * Submodule features
 */
typedef enum
{
    /**
     * Indicates SYNCE is NOT in SDM mode.
     */
    dnx_data_synce_general_synce_no_sdm_mode,
    /**
     * NMG_SYNC_CHAIN_SEL is needed or not to be configured to select NMG chain 0 or 1
     */
    dnx_data_synce_general_synce_nmg_chain_select,
    /**
     * Indicates SyncE support measure serdes rate on down port or not
     */
    dnx_data_synce_general_measure_rate_on_down_port_is_supported,

    /**
     * Must be last one!
     */
    _dnx_data_synce_general_feature_nof
} dnx_data_synce_general_feature_e;

/*
 * Submodule functions typedefs
 */
/**
 * \brief get submodule feature - disabled/enabled
 * 
 * \param [in] unit - Unit #
 * \param [in] feature - feature to get (see enum definition for more details
 * 
 * \return
 *     is_supported - returns 1 if and only if supported and 0 otherwise
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef int(
    *dnx_data_synce_general_feature_get_f) (
    int unit,
    dnx_data_synce_general_feature_e feature);

/**
 * \brief returns define data of nof_plls
 * Module - 'synce', Submodule - 'general', data - 'nof_plls'
 * Number of synce plls in the device.
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_plls - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_synce_general_nof_plls_get_f) (
    int unit);

/**
 * \brief returns define data of nif_div_min
 * Module - 'synce', Submodule - 'general', data - 'nif_div_min'
 * Min value for the nif synce output clk.
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nif_div_min - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_synce_general_nif_div_min_get_f) (
    int unit);

/**
 * \brief returns define data of nif_div_max
 * Module - 'synce', Submodule - 'general', data - 'nif_div_max'
 * Max value for the nif synce output clk.
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nif_div_max - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_synce_general_nif_div_max_get_f) (
    int unit);

/**
 * \brief returns define data of fabric_div_min
 * Module - 'synce', Submodule - 'general', data - 'fabric_div_min'
 * Min value for the fabric synce output clk.
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     fabric_div_min - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_synce_general_fabric_div_min_get_f) (
    int unit);

/**
 * \brief returns define data of fabric_div_max
 * Module - 'synce', Submodule - 'general', data - 'fabric_div_max'
 * Max value for the fabric synce output clk.
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     fabric_div_max - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_synce_general_fabric_div_max_get_f) (
    int unit);

/**
 * \brief returns define data of nof_clk_blocks
 * Module - 'synce', Submodule - 'general', data - 'nof_clk_blocks'
 * Max value for the nif synce clock blocks.
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_clk_blocks - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_synce_general_nof_clk_blocks_get_f) (
    int unit);

/**
 * \brief returns define data of nof_fabric_clk_blocks
 * Module - 'synce', Submodule - 'general', data - 'nof_fabric_clk_blocks'
 * Max value for the fabric synce clock blocks.
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_fabric_clk_blocks - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_synce_general_nof_fabric_clk_blocks_get_f) (
    int unit);

/**
 * \brief returns numeric data of output_clk_mode
 * Module - 'synce', Submodule - 'general', data - 'output_clk_mode'
 * SyncE output clock mode.
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     output_clk_mode - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_synce_general_output_clk_mode_get_f) (
    int unit);

/**
 * \brief get table cfg entry 
 * SyncE common configuration.
 * 
 * \param [in] unit - unit #
 * \param [in] synce_index - Master or Slave SyncE.
 * 
 * \return
 *     cfg - returns the relevant entry values grouped in struct - see dnx_data_synce_general_cfg_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef const dnx_data_synce_general_cfg_t *(
    *dnx_data_synce_general_cfg_get_f) (
    int unit,
    int synce_index);

/**
 * \brief get table nmg_chain_map entry 
 * ethu_id mapped to NMG chain related to SYNCE
 * 
 * \param [in] unit - unit #
 * \param [in] ethu_index - ethu instance number.
 * 
 * \return
 *     nmg_chain_map - returns the relevant entry values grouped in struct - see dnx_data_synce_general_nmg_chain_map_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef const dnx_data_synce_general_nmg_chain_map_t *(
    *dnx_data_synce_general_nmg_chain_map_get_f) (
    int unit,
    int ethu_index);

/*
 * SUBMODULE INTERFACE DNX_DATA_IF_SYNCE - GENERAL:
 * {
 */
/**
 * \brief Interface for synce general data
 */
typedef struct
{
    /**
     * get submodule feature - disabled/enabled
     */
    dnx_data_synce_general_feature_get_f feature_get;
    /**
     * returns define data of nof_plls
     */
    dnx_data_synce_general_nof_plls_get_f nof_plls_get;
    /**
     * returns define data of nif_div_min
     */
    dnx_data_synce_general_nif_div_min_get_f nif_div_min_get;
    /**
     * returns define data of nif_div_max
     */
    dnx_data_synce_general_nif_div_max_get_f nif_div_max_get;
    /**
     * returns define data of fabric_div_min
     */
    dnx_data_synce_general_fabric_div_min_get_f fabric_div_min_get;
    /**
     * returns define data of fabric_div_max
     */
    dnx_data_synce_general_fabric_div_max_get_f fabric_div_max_get;
    /**
     * returns define data of nof_clk_blocks
     */
    dnx_data_synce_general_nof_clk_blocks_get_f nof_clk_blocks_get;
    /**
     * returns define data of nof_fabric_clk_blocks
     */
    dnx_data_synce_general_nof_fabric_clk_blocks_get_f nof_fabric_clk_blocks_get;
    /**
     * returns numeric data of output_clk_mode
     */
    dnx_data_synce_general_output_clk_mode_get_f output_clk_mode_get;
    /**
     * get table cfg entry 
     */
    dnx_data_synce_general_cfg_get_f cfg_get;
    /**
     * get general info table about table (for example key size)cfg info
     */
    dnxc_data_table_info_get_f cfg_info_get;
    /**
     * get table nmg_chain_map entry 
     */
    dnx_data_synce_general_nmg_chain_map_get_f nmg_chain_map_get;
    /**
     * get general info table about table (for example key size)nmg_chain_map info
     */
    dnxc_data_table_info_get_f nmg_chain_map_info_get;
} dnx_data_if_synce_general_t;

/*
 * }
 */

/*
 * MODULE INTERFACE DNX_DATA_IF_SYNCE:
 * {
 */
/**
 * \brief Interface for synce data
 */
typedef struct
{
    /**
     * Interface for synce general data
     */
    dnx_data_if_synce_general_t general;
} dnx_data_if_synce_t;

/*
 * }
 */
/*
 * Extern:
 * {
 */
/**
 * \brief
 * Module structured interface - used to get the required data stored in dnx data
 */
extern dnx_data_if_synce_t dnx_data_synce;
/*
 * }
 */
/*}*/
#endif /*_DNX_DATA_SYNCE_H_*/
/* *INDENT-ON* */