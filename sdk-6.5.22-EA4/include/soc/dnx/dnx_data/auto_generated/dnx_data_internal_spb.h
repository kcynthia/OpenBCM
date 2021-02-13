/** \file dnx_data_internal_spb.h
 * 
 * MODULE DEVICE DATA - DNX_DATA
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
#ifndef _DNX_DATA_INTERNAL_SPB_H_
/*{*/
#define _DNX_DATA_INTERNAL_SPB_H_
/*
 * INCLUDE FILES:
 * {
 */
#include <soc/dnx/dnx_data/auto_generated/dnx_data_internal.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_spb.h>
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
 * TYPEDEFS:
 * {
 */
/**
 * \brief 
 * Submodule enum
 */
typedef enum
{
    dnx_data_spb_submodule_ocb,

    /**
     * Must be last one!
     */
    _dnx_data_spb_submodule_nof
} dnx_data_spb_submodule_e;

/*
 * }
 */

/*
 * SUBMODULE OCB:
 * {
 */
/*
 * Features
 */
/* Feature enum - placed in if header (should be exposed to component user */
/* Get Data */
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
int dnx_data_spb_ocb_feature_get(
    int unit,
    dnx_data_spb_ocb_feature_e feature);

/*
 * Defines
 */
/**
 * \brief 
 * Define enum
 */
typedef enum
{
    dnx_data_spb_ocb_define_nof_blocks,

    /**
     * Must be last one!
     */
    _dnx_data_spb_ocb_define_nof
} dnx_data_spb_ocb_define_e;

/* Get Data */
/**
 * \brief returns define data of nof_blocks
 * Module - 'spb', Submodule - 'ocb', data - 'nof_blocks'
 * Number of ocb blocks
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_blocks - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
uint32 dnx_data_spb_ocb_nof_blocks_get(
    int unit);

/*
 * Tables
 */
/**
 * \brief 
 * Table enum
 */
typedef enum
{
    dnx_data_spb_ocb_table_last_in_chain,

    /**
     * Must be last one!
     */
    _dnx_data_spb_ocb_table_nof
} dnx_data_spb_ocb_table_e;

/* Get Data */
/**
 * \brief get table last_in_chain entry 
 * Holds for each OCB block whether is the last block in the chain
 * 
 * \param [in] unit - unit #
 * \param [in] ocb_index - OCB block index
 * 
 * \return
 *     last_in_chain - returns the relevant entry values grouped in struct - see dnx_data_spb_ocb_last_in_chain_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_spb_ocb_last_in_chain_t * dnx_data_spb_ocb_last_in_chain_get(
    int unit,
    int ocb_index);

/* Get Value Str */
/**
 * \brief Get table value as string
 * Module - 'spb', Submodule - 'ocb', table - 'last_in_chain'
 * Holds for each OCB block whether is the last block in the chain
 * 
 * \param [in] unit - Unit #
 * \param [out] buffer - buffer for the value
 * \param [in] key0 - key #0 index - 0 if not used
 * \param [in] key1 - key #1 index - 0 if not used
 * \param [in] value_index - value index to get - the index is alligned with values array in table structure
 * 
 * \return
 *     err - See shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
shr_error_e dnx_data_spb_ocb_last_in_chain_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/* Get Table info */
/**
 * \brief get general info table about table (for example key size)last_in_chain info
 * Holds for each OCB block whether is the last block in the chain
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     last_in_chain - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_spb_ocb_last_in_chain_info_get(
    int unit);

/*
 * FUNCTIONS:
 * {
 */
/**
 * \brief Init module
 * 
 * \param [in] unit - Unit #
 * \param [out] module_data - pointer to module data
 * 
 * \return
 *     rv - see 'shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
shr_error_e dnx_data_spb_init(
    int unit,
    dnxc_data_module_t *module_data);

/*
 * }
 */
/*}*/
#endif /*_DNX_DATA_INTERNAL_SPB_H_*/
/* *INDENT-ON* */