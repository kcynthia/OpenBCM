/** \file dnx_data_internal_dnx2_aod.h
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
#ifndef _DNX_DATA_INTERNAL_DNX2_AOD_H_
/*{*/
#define _DNX_DATA_INTERNAL_DNX2_AOD_H_
/*
 * INCLUDE FILES:
 * {
 */
#include <soc/dnx/dnx_data/auto_generated/dnx_data_internal.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_dnx2_aod.h>
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
    dnx_data_dnx2_aod_submodule_tables,

    /**
     * Must be last one!
     */
    _dnx_data_dnx2_aod_submodule_nof
} dnx_data_dnx2_aod_submodule_e;

/*
 * }
 */

/*
 * SUBMODULE TABLES:
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
int dnx_data_dnx2_aod_tables_feature_get(
    int unit,
    dnx_data_dnx2_aod_tables_feature_e feature);

/*
 * Defines
 */
/**
 * \brief 
 * Define enum
 */
typedef enum
{

    /**
     * Must be last one!
     */
    _dnx_data_dnx2_aod_tables_define_nof
} dnx_data_dnx2_aod_tables_define_e;

/* Get Data */
/*
 * Tables
 */
/**
 * \brief 
 * Table enum
 */
typedef enum
{
    dnx_data_dnx2_aod_tables_table_ERPP_FWD_CONTEXT_FILTER___image,
    dnx_data_dnx2_aod_tables_table_ERPP_FWD_CONTEXT_FILTER,
    dnx_data_dnx2_aod_tables_table_EGRESS_PER_FORWARD_CODE___image,
    dnx_data_dnx2_aod_tables_table_EGRESS_PER_FORWARD_CODE,
    dnx_data_dnx2_aod_tables_table_ERPP_FORWARD_CODE_SELECTION___image,
    dnx_data_dnx2_aod_tables_table_ERPP_FORWARD_CODE_SELECTION,
    dnx_data_dnx2_aod_tables_table_ETPP_FORWARD_CODE_SELECTION___image,
    dnx_data_dnx2_aod_tables_table_ETPP_FORWARD_CODE_SELECTION,
    dnx_data_dnx2_aod_tables_table_EGRESS_PARSING_START_TYPE_CONTEXT___image,
    dnx_data_dnx2_aod_tables_table_EGRESS_PARSING_START_TYPE_CONTEXT,
    dnx_data_dnx2_aod_tables_table_EGRESS_PARSING_CONTEXT_MAP_JR1_MODE___image,
    dnx_data_dnx2_aod_tables_table_EGRESS_PARSING_CONTEXT_MAP_JR1_MODE,
    dnx_data_dnx2_aod_tables_table_MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES___image,
    dnx_data_dnx2_aod_tables_table_MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES,

    /**
     * Must be last one!
     */
    _dnx_data_dnx2_aod_tables_table_nof
} dnx_data_dnx2_aod_tables_table_e;

/* Get Data */
/**
 * \brief get table ERPP_FWD_CONTEXT_FILTER___image entry 
 * table related image
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     ERPP_FWD_CONTEXT_FILTER___image - returns the relevant entry values grouped in struct - see dnx_data_dnx2_aod_tables_ERPP_FWD_CONTEXT_FILTER___image_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_dnx2_aod_tables_ERPP_FWD_CONTEXT_FILTER___image_t * dnx_data_dnx2_aod_tables_ERPP_FWD_CONTEXT_FILTER___image_get(
    int unit);

/**
 * \brief get table ERPP_FWD_CONTEXT_FILTER entry 
 * ERPP_FWD_CONTEXT_FILTER
 * 
 * \param [in] unit - unit #
 * \param [in] index - entry index
 * 
 * \return
 *     ERPP_FWD_CONTEXT_FILTER - returns the relevant entry values grouped in struct - see dnx_data_dnx2_aod_tables_ERPP_FWD_CONTEXT_FILTER_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_dnx2_aod_tables_ERPP_FWD_CONTEXT_FILTER_t * dnx_data_dnx2_aod_tables_ERPP_FWD_CONTEXT_FILTER_get(
    int unit,
    int index);

/**
 * \brief get table EGRESS_PER_FORWARD_CODE___image entry 
 * table related image
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     EGRESS_PER_FORWARD_CODE___image - returns the relevant entry values grouped in struct - see dnx_data_dnx2_aod_tables_EGRESS_PER_FORWARD_CODE___image_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_dnx2_aod_tables_EGRESS_PER_FORWARD_CODE___image_t * dnx_data_dnx2_aod_tables_EGRESS_PER_FORWARD_CODE___image_get(
    int unit);

/**
 * \brief get table EGRESS_PER_FORWARD_CODE entry 
 * EGRESS_PER_FORWARD_CODE
 * 
 * \param [in] unit - unit #
 * \param [in] index - entry index
 * \param [in] soc_value - soc property value
 * 
 * \return
 *     EGRESS_PER_FORWARD_CODE - returns the relevant entry values grouped in struct - see dnx_data_dnx2_aod_tables_EGRESS_PER_FORWARD_CODE_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_dnx2_aod_tables_EGRESS_PER_FORWARD_CODE_t * dnx_data_dnx2_aod_tables_EGRESS_PER_FORWARD_CODE_get(
    int unit,
    int index,
    int soc_value);

/**
 * \brief get table ERPP_FORWARD_CODE_SELECTION___image entry 
 * table related image
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     ERPP_FORWARD_CODE_SELECTION___image - returns the relevant entry values grouped in struct - see dnx_data_dnx2_aod_tables_ERPP_FORWARD_CODE_SELECTION___image_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_dnx2_aod_tables_ERPP_FORWARD_CODE_SELECTION___image_t * dnx_data_dnx2_aod_tables_ERPP_FORWARD_CODE_SELECTION___image_get(
    int unit);

/**
 * \brief get table ERPP_FORWARD_CODE_SELECTION entry 
 * ERPP_FORWARD_CODE_SELECTION
 * 
 * \param [in] unit - unit #
 * \param [in] index - entry index
 * \param [in] soc_value - soc property value
 * 
 * \return
 *     ERPP_FORWARD_CODE_SELECTION - returns the relevant entry values grouped in struct - see dnx_data_dnx2_aod_tables_ERPP_FORWARD_CODE_SELECTION_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_dnx2_aod_tables_ERPP_FORWARD_CODE_SELECTION_t * dnx_data_dnx2_aod_tables_ERPP_FORWARD_CODE_SELECTION_get(
    int unit,
    int index,
    int soc_value);

/**
 * \brief get table ETPP_FORWARD_CODE_SELECTION___image entry 
 * table related image
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     ETPP_FORWARD_CODE_SELECTION___image - returns the relevant entry values grouped in struct - see dnx_data_dnx2_aod_tables_ETPP_FORWARD_CODE_SELECTION___image_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_dnx2_aod_tables_ETPP_FORWARD_CODE_SELECTION___image_t * dnx_data_dnx2_aod_tables_ETPP_FORWARD_CODE_SELECTION___image_get(
    int unit);

/**
 * \brief get table ETPP_FORWARD_CODE_SELECTION entry 
 * ETPP_FORWARD_CODE_SELECTION
 * 
 * \param [in] unit - unit #
 * \param [in] index - entry index
 * \param [in] soc_value - soc property value
 * 
 * \return
 *     ETPP_FORWARD_CODE_SELECTION - returns the relevant entry values grouped in struct - see dnx_data_dnx2_aod_tables_ETPP_FORWARD_CODE_SELECTION_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_dnx2_aod_tables_ETPP_FORWARD_CODE_SELECTION_t * dnx_data_dnx2_aod_tables_ETPP_FORWARD_CODE_SELECTION_get(
    int unit,
    int index,
    int soc_value);

/**
 * \brief get table EGRESS_PARSING_START_TYPE_CONTEXT___image entry 
 * table related image
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     EGRESS_PARSING_START_TYPE_CONTEXT___image - returns the relevant entry values grouped in struct - see dnx_data_dnx2_aod_tables_EGRESS_PARSING_START_TYPE_CONTEXT___image_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_dnx2_aod_tables_EGRESS_PARSING_START_TYPE_CONTEXT___image_t * dnx_data_dnx2_aod_tables_EGRESS_PARSING_START_TYPE_CONTEXT___image_get(
    int unit);

/**
 * \brief get table EGRESS_PARSING_START_TYPE_CONTEXT entry 
 * EGRESS_PARSING_START_TYPE_CONTEXT
 * 
 * \param [in] unit - unit #
 * \param [in] index - entry index
 * \param [in] soc_value - soc property value
 * 
 * \return
 *     EGRESS_PARSING_START_TYPE_CONTEXT - returns the relevant entry values grouped in struct - see dnx_data_dnx2_aod_tables_EGRESS_PARSING_START_TYPE_CONTEXT_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_dnx2_aod_tables_EGRESS_PARSING_START_TYPE_CONTEXT_t * dnx_data_dnx2_aod_tables_EGRESS_PARSING_START_TYPE_CONTEXT_get(
    int unit,
    int index,
    int soc_value);

/**
 * \brief get table EGRESS_PARSING_CONTEXT_MAP_JR1_MODE___image entry 
 * table related image
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     EGRESS_PARSING_CONTEXT_MAP_JR1_MODE___image - returns the relevant entry values grouped in struct - see dnx_data_dnx2_aod_tables_EGRESS_PARSING_CONTEXT_MAP_JR1_MODE___image_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_dnx2_aod_tables_EGRESS_PARSING_CONTEXT_MAP_JR1_MODE___image_t * dnx_data_dnx2_aod_tables_EGRESS_PARSING_CONTEXT_MAP_JR1_MODE___image_get(
    int unit);

/**
 * \brief get table EGRESS_PARSING_CONTEXT_MAP_JR1_MODE entry 
 * EGRESS_PARSING_CONTEXT_MAP_JR1_MODE
 * 
 * \param [in] unit - unit #
 * \param [in] index - entry index
 * \param [in] soc_value - soc property value
 * 
 * \return
 *     EGRESS_PARSING_CONTEXT_MAP_JR1_MODE - returns the relevant entry values grouped in struct - see dnx_data_dnx2_aod_tables_EGRESS_PARSING_CONTEXT_MAP_JR1_MODE_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_dnx2_aod_tables_EGRESS_PARSING_CONTEXT_MAP_JR1_MODE_t * dnx_data_dnx2_aod_tables_EGRESS_PARSING_CONTEXT_MAP_JR1_MODE_get(
    int unit,
    int index,
    int soc_value);

/**
 * \brief get table MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES___image entry 
 * table related image
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES___image - returns the relevant entry values grouped in struct - see dnx_data_dnx2_aod_tables_MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES___image_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_dnx2_aod_tables_MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES___image_t * dnx_data_dnx2_aod_tables_MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES___image_get(
    int unit);

/**
 * \brief get table MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES entry 
 * MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES
 * 
 * \param [in] unit - unit #
 * \param [in] index - entry index
 * 
 * \return
 *     MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES - returns the relevant entry values grouped in struct - see dnx_data_dnx2_aod_tables_MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_dnx2_aod_tables_MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES_t * dnx_data_dnx2_aod_tables_MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES_get(
    int unit,
    int index);

/* Get Value Str */
/**
 * \brief Get table value as string
 * Module - 'dnx2_aod', Submodule - 'tables', table - 'ERPP_FWD_CONTEXT_FILTER___image'
 * table related image
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
shr_error_e dnx_data_dnx2_aod_tables_ERPP_FWD_CONTEXT_FILTER___image_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'dnx2_aod', Submodule - 'tables', table - 'ERPP_FWD_CONTEXT_FILTER'
 * ERPP_FWD_CONTEXT_FILTER
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
shr_error_e dnx_data_dnx2_aod_tables_ERPP_FWD_CONTEXT_FILTER_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'dnx2_aod', Submodule - 'tables', table - 'EGRESS_PER_FORWARD_CODE___image'
 * table related image
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
shr_error_e dnx_data_dnx2_aod_tables_EGRESS_PER_FORWARD_CODE___image_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'dnx2_aod', Submodule - 'tables', table - 'EGRESS_PER_FORWARD_CODE'
 * EGRESS_PER_FORWARD_CODE
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
shr_error_e dnx_data_dnx2_aod_tables_EGRESS_PER_FORWARD_CODE_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'dnx2_aod', Submodule - 'tables', table - 'ERPP_FORWARD_CODE_SELECTION___image'
 * table related image
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
shr_error_e dnx_data_dnx2_aod_tables_ERPP_FORWARD_CODE_SELECTION___image_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'dnx2_aod', Submodule - 'tables', table - 'ERPP_FORWARD_CODE_SELECTION'
 * ERPP_FORWARD_CODE_SELECTION
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
shr_error_e dnx_data_dnx2_aod_tables_ERPP_FORWARD_CODE_SELECTION_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'dnx2_aod', Submodule - 'tables', table - 'ETPP_FORWARD_CODE_SELECTION___image'
 * table related image
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
shr_error_e dnx_data_dnx2_aod_tables_ETPP_FORWARD_CODE_SELECTION___image_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'dnx2_aod', Submodule - 'tables', table - 'ETPP_FORWARD_CODE_SELECTION'
 * ETPP_FORWARD_CODE_SELECTION
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
shr_error_e dnx_data_dnx2_aod_tables_ETPP_FORWARD_CODE_SELECTION_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'dnx2_aod', Submodule - 'tables', table - 'EGRESS_PARSING_START_TYPE_CONTEXT___image'
 * table related image
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
shr_error_e dnx_data_dnx2_aod_tables_EGRESS_PARSING_START_TYPE_CONTEXT___image_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'dnx2_aod', Submodule - 'tables', table - 'EGRESS_PARSING_START_TYPE_CONTEXT'
 * EGRESS_PARSING_START_TYPE_CONTEXT
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
shr_error_e dnx_data_dnx2_aod_tables_EGRESS_PARSING_START_TYPE_CONTEXT_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'dnx2_aod', Submodule - 'tables', table - 'EGRESS_PARSING_CONTEXT_MAP_JR1_MODE___image'
 * table related image
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
shr_error_e dnx_data_dnx2_aod_tables_EGRESS_PARSING_CONTEXT_MAP_JR1_MODE___image_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'dnx2_aod', Submodule - 'tables', table - 'EGRESS_PARSING_CONTEXT_MAP_JR1_MODE'
 * EGRESS_PARSING_CONTEXT_MAP_JR1_MODE
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
shr_error_e dnx_data_dnx2_aod_tables_EGRESS_PARSING_CONTEXT_MAP_JR1_MODE_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'dnx2_aod', Submodule - 'tables', table - 'MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES___image'
 * table related image
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
shr_error_e dnx_data_dnx2_aod_tables_MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES___image_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'dnx2_aod', Submodule - 'tables', table - 'MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES'
 * MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES
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
shr_error_e dnx_data_dnx2_aod_tables_MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/* Get Table info */
/**
 * \brief get general info table about table (for example key size)ERPP_FWD_CONTEXT_FILTER___image info
 * table related image
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     ERPP_FWD_CONTEXT_FILTER___image - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_dnx2_aod_tables_ERPP_FWD_CONTEXT_FILTER___image_info_get(
    int unit);

/**
 * \brief get general info table about table (for example key size)ERPP_FWD_CONTEXT_FILTER info
 * ERPP_FWD_CONTEXT_FILTER
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     ERPP_FWD_CONTEXT_FILTER - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_dnx2_aod_tables_ERPP_FWD_CONTEXT_FILTER_info_get(
    int unit);

/**
 * \brief get general info table about table (for example key size)EGRESS_PER_FORWARD_CODE___image info
 * table related image
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     EGRESS_PER_FORWARD_CODE___image - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_dnx2_aod_tables_EGRESS_PER_FORWARD_CODE___image_info_get(
    int unit);

/**
 * \brief get general info table about table (for example key size)EGRESS_PER_FORWARD_CODE info
 * EGRESS_PER_FORWARD_CODE
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     EGRESS_PER_FORWARD_CODE - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_dnx2_aod_tables_EGRESS_PER_FORWARD_CODE_info_get(
    int unit);

/**
 * \brief get general info table about table (for example key size)ERPP_FORWARD_CODE_SELECTION___image info
 * table related image
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     ERPP_FORWARD_CODE_SELECTION___image - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_dnx2_aod_tables_ERPP_FORWARD_CODE_SELECTION___image_info_get(
    int unit);

/**
 * \brief get general info table about table (for example key size)ERPP_FORWARD_CODE_SELECTION info
 * ERPP_FORWARD_CODE_SELECTION
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     ERPP_FORWARD_CODE_SELECTION - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_dnx2_aod_tables_ERPP_FORWARD_CODE_SELECTION_info_get(
    int unit);

/**
 * \brief get general info table about table (for example key size)ETPP_FORWARD_CODE_SELECTION___image info
 * table related image
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     ETPP_FORWARD_CODE_SELECTION___image - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_dnx2_aod_tables_ETPP_FORWARD_CODE_SELECTION___image_info_get(
    int unit);

/**
 * \brief get general info table about table (for example key size)ETPP_FORWARD_CODE_SELECTION info
 * ETPP_FORWARD_CODE_SELECTION
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     ETPP_FORWARD_CODE_SELECTION - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_dnx2_aod_tables_ETPP_FORWARD_CODE_SELECTION_info_get(
    int unit);

/**
 * \brief get general info table about table (for example key size)EGRESS_PARSING_START_TYPE_CONTEXT___image info
 * table related image
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     EGRESS_PARSING_START_TYPE_CONTEXT___image - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_dnx2_aod_tables_EGRESS_PARSING_START_TYPE_CONTEXT___image_info_get(
    int unit);

/**
 * \brief get general info table about table (for example key size)EGRESS_PARSING_START_TYPE_CONTEXT info
 * EGRESS_PARSING_START_TYPE_CONTEXT
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     EGRESS_PARSING_START_TYPE_CONTEXT - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_dnx2_aod_tables_EGRESS_PARSING_START_TYPE_CONTEXT_info_get(
    int unit);

/**
 * \brief get general info table about table (for example key size)EGRESS_PARSING_CONTEXT_MAP_JR1_MODE___image info
 * table related image
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     EGRESS_PARSING_CONTEXT_MAP_JR1_MODE___image - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_dnx2_aod_tables_EGRESS_PARSING_CONTEXT_MAP_JR1_MODE___image_info_get(
    int unit);

/**
 * \brief get general info table about table (for example key size)EGRESS_PARSING_CONTEXT_MAP_JR1_MODE info
 * EGRESS_PARSING_CONTEXT_MAP_JR1_MODE
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     EGRESS_PARSING_CONTEXT_MAP_JR1_MODE - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_dnx2_aod_tables_EGRESS_PARSING_CONTEXT_MAP_JR1_MODE_info_get(
    int unit);

/**
 * \brief get general info table about table (for example key size)MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES___image info
 * table related image
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES___image - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_dnx2_aod_tables_MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES___image_info_get(
    int unit);

/**
 * \brief get general info table about table (for example key size)MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES info
 * MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_dnx2_aod_tables_MPLS_SPECIAL_LABEL_PROFILE_ATTRIBUTES_info_get(
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
shr_error_e dnx_data_dnx2_aod_init(
    int unit,
    dnxc_data_module_t *module_data);

/*
 * }
 */
/*}*/
#endif /*_DNX_DATA_INTERNAL_DNX2_AOD_H_*/
/* *INDENT-ON* */