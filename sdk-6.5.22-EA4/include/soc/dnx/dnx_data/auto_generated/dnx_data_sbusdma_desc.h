/** \file dnx_data_sbusdma_desc.h
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
#ifndef _DNX_DATA_SBUSDMA_DESC_H_
/*{*/
#define _DNX_DATA_SBUSDMA_DESC_H_
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
#include <soc/dnx/dnx_data/auto_generated/dnx_data_max_sbusdma_desc.h>
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
 * \brief Init default data structure - dnx_data_if_sbusdma_desc
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
shr_error_e dnx_data_if_sbusdma_desc_init(
    int unit);

/*
 * }
 */

/*
 * SUBMODULE  - GLOBAL:
 * Descriptor DMA global defines
 * {
 */
/*
 * Table value structure
 */
/**
 * \brief Holds values of submodule global table enable_module_desc_dma
 * Table info:
 * Enable descriptor DMA per module
 */
typedef struct
{
    /**
     * Enable descriptor DMA for the given module.
     */
    uint32 enable;
} dnx_data_sbusdma_desc_global_enable_module_desc_dma_t;

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
     * Descriptor DMA aggregation and async commit to HW.
     */
    dnx_data_sbusdma_desc_global_desc_dma,
    /**
     * Force enable descriptor DMA to ignore image limitations.
     */
    dnx_data_sbusdma_desc_global_force_enable,

    /**
     * Must be last one!
     */
    _dnx_data_sbusdma_desc_global_feature_nof
} dnx_data_sbusdma_desc_global_feature_e;

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
    *dnx_data_sbusdma_desc_global_feature_get_f) (
    int unit,
    dnx_data_sbusdma_desc_global_feature_e feature);

/**
 * \brief returns numeric data of dma_desc_aggregator_chain_length_max
 * Module - 'sbusdma_desc', Submodule - 'global', data - 'dma_desc_aggregator_chain_length_max'
 * Maximal number of descriptors in a single chain.
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     dma_desc_aggregator_chain_length_max - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_sbusdma_desc_global_dma_desc_aggregator_chain_length_max_get_f) (
    int unit);

/**
 * \brief returns numeric data of dma_desc_aggregator_buff_size_kb
 * Module - 'sbusdma_desc', Submodule - 'global', data - 'dma_desc_aggregator_buff_size_kb'
 * Total size in KB of dmmable memory allocated in favor of the descriptor DMA double-buffer.
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     dma_desc_aggregator_buff_size_kb - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_sbusdma_desc_global_dma_desc_aggregator_buff_size_kb_get_f) (
    int unit);

/**
 * \brief returns numeric data of dma_desc_aggregator_timeout_usec
 * Module - 'sbusdma_desc', Submodule - 'global', data - 'dma_desc_aggregator_timeout_usec'
 * Timeout between the creation of a descriptor chain and its commit to HW
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     dma_desc_aggregator_timeout_usec - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_sbusdma_desc_global_dma_desc_aggregator_timeout_usec_get_f) (
    int unit);

/**
 * \brief get table enable_module_desc_dma entry 
 * Enable descriptor DMA per module
 * 
 * \param [in] unit - unit #
 * \param [in] module_enum_val - The module name.
 * 
 * \return
 *     enable_module_desc_dma - returns the relevant entry values grouped in struct - see dnx_data_sbusdma_desc_global_enable_module_desc_dma_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef const dnx_data_sbusdma_desc_global_enable_module_desc_dma_t *(
    *dnx_data_sbusdma_desc_global_enable_module_desc_dma_get_f) (
    int unit,
    int module_enum_val);

/*
 * SUBMODULE INTERFACE DNX_DATA_IF_SBUSDMA_DESC - GLOBAL:
 * {
 */
/**
 * \brief Interface for sbusdma_desc global data
 */
typedef struct
{
    /**
     * get submodule feature - disabled/enabled
     */
    dnx_data_sbusdma_desc_global_feature_get_f feature_get;
    /**
     * returns numeric data of dma_desc_aggregator_chain_length_max
     */
    dnx_data_sbusdma_desc_global_dma_desc_aggregator_chain_length_max_get_f dma_desc_aggregator_chain_length_max_get;
    /**
     * returns numeric data of dma_desc_aggregator_buff_size_kb
     */
    dnx_data_sbusdma_desc_global_dma_desc_aggregator_buff_size_kb_get_f dma_desc_aggregator_buff_size_kb_get;
    /**
     * returns numeric data of dma_desc_aggregator_timeout_usec
     */
    dnx_data_sbusdma_desc_global_dma_desc_aggregator_timeout_usec_get_f dma_desc_aggregator_timeout_usec_get;
    /**
     * get table enable_module_desc_dma entry 
     */
    dnx_data_sbusdma_desc_global_enable_module_desc_dma_get_f enable_module_desc_dma_get;
    /**
     * get general info table about table (for example key size)enable_module_desc_dma info
     */
    dnxc_data_table_info_get_f enable_module_desc_dma_info_get;
} dnx_data_if_sbusdma_desc_global_t;

/*
 * }
 */

/*
 * MODULE INTERFACE DNX_DATA_IF_SBUSDMA_DESC:
 * {
 */
/**
 * \brief Interface for sbusdma_desc data
 */
typedef struct
{
    /**
     * Interface for sbusdma_desc global data
     */
    dnx_data_if_sbusdma_desc_global_t global;
} dnx_data_if_sbusdma_desc_t;

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
extern dnx_data_if_sbusdma_desc_t dnx_data_sbusdma_desc;
/*
 * }
 */
/*}*/
#endif /*_DNX_DATA_SBUSDMA_DESC_H_*/
/* *INDENT-ON* */