/** \file dnx_data_internal_mib.h
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
#ifndef _DNX_DATA_INTERNAL_MIB_H_
/*{*/
#define _DNX_DATA_INTERNAL_MIB_H_
/*
 * INCLUDE FILES:
 * {
 */
#include <soc/dnx/dnx_data/auto_generated/dnx_data_internal.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_mib.h>
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
    dnx_data_mib_submodule_general,
    dnx_data_mib_submodule_controlled_counters,

    /**
     * Must be last one!
     */
    _dnx_data_mib_submodule_nof
} dnx_data_mib_submodule_e;

/*
 * }
 */

/*
 * SUBMODULE GENERAL:
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
int dnx_data_mib_general_feature_get(
    int unit,
    dnx_data_mib_general_feature_e feature);

/*
 * Defines
 */
/**
 * \brief 
 * Define enum
 */
typedef enum
{
    dnx_data_mib_general_define_nof_row_per_cdu_lane,
    dnx_data_mib_general_define_stat_interval,
    dnx_data_mib_general_define_stat_jumbo,

    /**
     * Must be last one!
     */
    _dnx_data_mib_general_define_nof
} dnx_data_mib_general_define_e;

/* Get Data */
/**
 * \brief returns define data of nof_row_per_cdu_lane
 * Module - 'mib', Submodule - 'general', data - 'nof_row_per_cdu_lane'
 * Indicate number of row used per cdu lane.
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_row_per_cdu_lane - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
uint32 dnx_data_mib_general_nof_row_per_cdu_lane_get(
    int unit);

/**
 * \brief returns numeric data of stat_interval
 * Module - 'mib', Submodule - 'general', data - 'stat_interval'
 * Set statistics collection interval in microseconds
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     stat_interval - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
uint32 dnx_data_mib_general_stat_interval_get(
    int unit);

/**
 * \brief returns numeric data of stat_jumbo
 * Module - 'mib', Submodule - 'general', data - 'stat_jumbo'
 * Maximum packet size used in statistics counter update
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     stat_jumbo - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
uint32 dnx_data_mib_general_stat_jumbo_get(
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
    dnx_data_mib_general_table_stat_pbmp,

    /**
     * Must be last one!
     */
    _dnx_data_mib_general_table_nof
} dnx_data_mib_general_table_e;

/* Get Data */
/**
 * \brief get table stat_pbmp entry 
 * Bitmap of ports to enable statistic counter collection
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     stat_pbmp - returns the relevant entry values grouped in struct - see dnx_data_mib_general_stat_pbmp_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_mib_general_stat_pbmp_t * dnx_data_mib_general_stat_pbmp_get(
    int unit);

/* Get Value Str */
/**
 * \brief Get table value as string
 * Module - 'mib', Submodule - 'general', table - 'stat_pbmp'
 * Bitmap of ports to enable statistic counter collection
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
shr_error_e dnx_data_mib_general_stat_pbmp_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/* Get Table info */
/**
 * \brief get general info table about table (for example key size)stat_pbmp info
 * Bitmap of ports to enable statistic counter collection
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     stat_pbmp - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_mib_general_stat_pbmp_info_get(
    int unit);

/*
 * SUBMODULE CONTROLLED_COUNTERS:
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
int dnx_data_mib_controlled_counters_feature_get(
    int unit,
    dnx_data_mib_controlled_counters_feature_e feature);

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
    _dnx_data_mib_controlled_counters_define_nof
} dnx_data_mib_controlled_counters_define_e;

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
    dnx_data_mib_controlled_counters_table_map_data,
    dnx_data_mib_controlled_counters_table_set_data,
    dnx_data_mib_controlled_counters_table_counter_data,

    /**
     * Must be last one!
     */
    _dnx_data_mib_controlled_counters_table_nof
} dnx_data_mib_controlled_counters_table_e;

/* Get Data */
/**
 * \brief get table map_data entry 
 * map table of controlled counters - maps bcm counter type and counter set to a set of internal controlled (hw) counters
 * 
 * \param [in] unit - unit #
 * \param [in] counter_type - bcm stat id out of bcm_stat_val_t type='bcm_stat_val_t'
 * \param [in] set_type - counter set type out of dnx_algo_port_mib_counter_set_type_e
 * 
 * \return
 *     map_data - returns the relevant entry values grouped in struct - see dnx_data_mib_controlled_counters_map_data_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_mib_controlled_counters_map_data_t * dnx_data_mib_controlled_counters_map_data_get(
    int unit,
    int counter_type,
    int set_type);

/**
 * \brief get table set_data entry 
 * counters set info - hw access, documentation, etc...
 * 
 * \param [in] unit - unit #
 * \param [in] counter_id - controlled counter id, see - dnx_mib_counter_t'
 * \param [in] set_type - counter set type out of dnx_algo_port_mib_counter_set_type_e
 * 
 * \return
 *     set_data - returns the relevant entry values grouped in struct - see dnx_data_mib_controlled_counters_set_data_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_mib_controlled_counters_set_data_t * dnx_data_mib_controlled_counters_set_data_get(
    int unit,
    int counter_id,
    int set_type);

/**
 * \brief get table counter_data entry 
 * counter data
 * 
 * \param [in] unit - unit #
 * \param [in] counter_id - controlled counter id, see - dnx_mib_counter_t'
 * 
 * \return
 *     counter_data - returns the relevant entry values grouped in struct - see dnx_data_mib_controlled_counters_counter_data_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnx_data_mib_controlled_counters_counter_data_t * dnx_data_mib_controlled_counters_counter_data_get(
    int unit,
    int counter_id);

/* Get Value Str */
/**
 * \brief Get table value as string
 * Module - 'mib', Submodule - 'controlled_counters', table - 'map_data'
 * map table of controlled counters - maps bcm counter type and counter set to a set of internal controlled (hw) counters
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
shr_error_e dnx_data_mib_controlled_counters_map_data_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'mib', Submodule - 'controlled_counters', table - 'set_data'
 * counters set info - hw access, documentation, etc...
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
shr_error_e dnx_data_mib_controlled_counters_set_data_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/**
 * \brief Get table value as string
 * Module - 'mib', Submodule - 'controlled_counters', table - 'counter_data'
 * counter data
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
shr_error_e dnx_data_mib_controlled_counters_counter_data_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index);

/* Get Table info */
/**
 * \brief get general info table about table (for example key size)map_data info
 * map table of controlled counters - maps bcm counter type and counter set to a set of internal controlled (hw) counters
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     map_data - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_mib_controlled_counters_map_data_info_get(
    int unit);

/**
 * \brief get general info table about table (for example key size)set_data info
 * counters set info - hw access, documentation, etc...
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     set_data - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_mib_controlled_counters_set_data_info_get(
    int unit);

/**
 * \brief get general info table about table (for example key size)counter_data info
 * counter data
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     counter_data - returns table info
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
const dnxc_data_table_info_t * dnx_data_mib_controlled_counters_counter_data_info_get(
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
shr_error_e dnx_data_mib_init(
    int unit,
    dnxc_data_module_t *module_data);

/*
 * }
 */
/*}*/
#endif /*_DNX_DATA_INTERNAL_MIB_H_*/
/* *INDENT-ON* */