/** \file dnx_data_meter.h
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
#ifndef _DNX_DATA_METER_H_
/*{*/
#define _DNX_DATA_METER_H_
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
#include <bcm/policer.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_max_meter.h>
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
 * \brief Init default data structure - dnx_data_if_meter
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
shr_error_e dnx_data_if_meter_init(
    int unit);

/*
 * }
 */

/*
 * SUBMODULE  - PROFILE:
 * meter profile definitions
 * {
 */
/*
 * Table value structure
 */
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
     * Must be last one!
     */
    _dnx_data_meter_profile_feature_nof
} dnx_data_meter_profile_feature_e;

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
    *dnx_data_meter_profile_feature_get_f) (
    int unit,
    dnx_data_meter_profile_feature_e feature);

/**
 * \brief returns define data of large_bucket_mode_exp_add
 * Module - 'meter', Submodule - 'profile', data - 'large_bucket_mode_exp_add'
 * cbs calculation: the value need to add to the exponent in larger bucket mode
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     large_bucket_mode_exp_add - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_profile_large_bucket_mode_exp_add_get_f) (
    int unit);

/**
 * \brief returns define data of max_regular_bucket_mode_burst
 * Module - 'meter', Submodule - 'profile', data - 'max_regular_bucket_mode_burst'
 * max value for burst size (in bytes), which do not use large bucket mode
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     max_regular_bucket_mode_burst - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_profile_max_regular_bucket_mode_burst_get_f) (
    int unit);

/**
 * \brief returns define data of rev_exp_min
 * Module - 'meter', Submodule - 'profile', data - 'rev_exp_min'
 * min value for reverse exponent
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     rev_exp_min - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_profile_rev_exp_min_get_f) (
    int unit);

/**
 * \brief returns define data of rev_exp_max
 * Module - 'meter', Submodule - 'profile', data - 'rev_exp_max'
 * max value for reverse exponent
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     rev_exp_max - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_profile_rev_exp_max_get_f) (
    int unit);

/**
 * \brief returns define data of burst_size_min
 * Module - 'meter', Submodule - 'profile', data - 'burst_size_min'
 * minimum burst size in kbits
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     burst_size_min - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_profile_burst_size_min_get_f) (
    int unit);

/**
 * \brief returns define data of nof_valid_global_meters
 * Module - 'meter', Submodule - 'profile', data - 'nof_valid_global_meters'
 * nof_valid_global_meters, based in nof fwd-types
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_valid_global_meters - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_profile_nof_valid_global_meters_get_f) (
    int unit);

/**
 * \brief returns define data of nof_dp_command_max
 * Module - 'meter', Submodule - 'profile', data - 'nof_dp_command_max'
 * max nof DP commands
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_dp_command_max - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_profile_nof_dp_command_max_get_f) (
    int unit);

/**
 * \brief returns define data of global_engine_hw_stat_database_id
 * Module - 'meter', Submodule - 'profile', data - 'global_engine_hw_stat_database_id'
 * to indicate global meter in HW - for Ingress Gtimer counter statistic
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     global_engine_hw_stat_database_id - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_profile_global_engine_hw_stat_database_id_get_f) (
    int unit);

/**
 * \brief returns define data of ir_mant_nof_bits
 * Module - 'meter', Submodule - 'profile', data - 'ir_mant_nof_bits'
 * size of cir/eir mantissa
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     ir_mant_nof_bits - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_profile_ir_mant_nof_bits_get_f) (
    int unit);

/*
 * SUBMODULE INTERFACE DNX_DATA_IF_METER - PROFILE:
 * {
 */
/**
 * \brief Interface for meter profile data
 */
typedef struct
{
    /**
     * get submodule feature - disabled/enabled
     */
    dnx_data_meter_profile_feature_get_f feature_get;
    /**
     * returns define data of large_bucket_mode_exp_add
     */
    dnx_data_meter_profile_large_bucket_mode_exp_add_get_f large_bucket_mode_exp_add_get;
    /**
     * returns define data of max_regular_bucket_mode_burst
     */
    dnx_data_meter_profile_max_regular_bucket_mode_burst_get_f max_regular_bucket_mode_burst_get;
    /**
     * returns define data of rev_exp_min
     */
    dnx_data_meter_profile_rev_exp_min_get_f rev_exp_min_get;
    /**
     * returns define data of rev_exp_max
     */
    dnx_data_meter_profile_rev_exp_max_get_f rev_exp_max_get;
    /**
     * returns define data of burst_size_min
     */
    dnx_data_meter_profile_burst_size_min_get_f burst_size_min_get;
    /**
     * returns define data of nof_valid_global_meters
     */
    dnx_data_meter_profile_nof_valid_global_meters_get_f nof_valid_global_meters_get;
    /**
     * returns define data of nof_dp_command_max
     */
    dnx_data_meter_profile_nof_dp_command_max_get_f nof_dp_command_max_get;
    /**
     * returns define data of global_engine_hw_stat_database_id
     */
    dnx_data_meter_profile_global_engine_hw_stat_database_id_get_f global_engine_hw_stat_database_id_get;
    /**
     * returns define data of ir_mant_nof_bits
     */
    dnx_data_meter_profile_ir_mant_nof_bits_get_f ir_mant_nof_bits_get;
} dnx_data_if_meter_profile_t;

/*
 * }
 */

/*
 * SUBMODULE  - DIAG:
 * meter diagnostics
 * {
 */
/*
 * Table value structure
 */
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
     * Are meter engine statistics settings and counter measurments supported?
     */
    dnx_data_meter_diag_rate_measurements_support,

    /**
     * Must be last one!
     */
    _dnx_data_meter_diag_feature_nof
} dnx_data_meter_diag_feature_e;

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
    *dnx_data_meter_diag_feature_get_f) (
    int unit,
    dnx_data_meter_diag_feature_e feature);

/*
 * SUBMODULE INTERFACE DNX_DATA_IF_METER - DIAG:
 * {
 */
/**
 * \brief Interface for meter diag data
 */
typedef struct
{
    /**
     * get submodule feature - disabled/enabled
     */
    dnx_data_meter_diag_feature_get_f feature_get;
} dnx_data_if_meter_diag_t;

/*
 * }
 */

/*
 * SUBMODULE  - METER_DB:
 * meter database definitions
 * {
 */
/*
 * Table value structure
 */
/*
 * Feature enum
 */
/**
 * \brief 
 * Submodule features
 */
typedef enum
{
    dnx_data_meter_meter_db_refresh_disable_required,
    /**
     * Per DB Traffic Class Sensitive Metering support
     */
    dnx_data_meter_meter_db_tcsm_support,

    /**
     * Must be last one!
     */
    _dnx_data_meter_meter_db_feature_nof
} dnx_data_meter_meter_db_feature_e;

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
    *dnx_data_meter_meter_db_feature_get_f) (
    int unit,
    dnx_data_meter_meter_db_feature_e feature);

/**
 * \brief returns define data of nof_ingress_db
 * Module - 'meter', Submodule - 'meter_db', data - 'nof_ingress_db'
 * nof ingress meter databases
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_ingress_db - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_meter_db_nof_ingress_db_get_f) (
    int unit);

/**
 * \brief returns define data of nof_egress_db
 * Module - 'meter', Submodule - 'meter_db', data - 'nof_egress_db'
 * nof egress meter databases
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_egress_db - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_meter_db_nof_egress_db_get_f) (
    int unit);

/**
 * \brief returns define data of meter_ids_in_group
 * Module - 'meter', Submodule - 'meter_db', data - 'meter_ids_in_group'
 * nof meter ids in one meter group
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     meter_ids_in_group - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_meter_db_meter_ids_in_group_get_f) (
    int unit);

/*
 * SUBMODULE INTERFACE DNX_DATA_IF_METER - METER_DB:
 * {
 */
/**
 * \brief Interface for meter meter_db data
 */
typedef struct
{
    /**
     * get submodule feature - disabled/enabled
     */
    dnx_data_meter_meter_db_feature_get_f feature_get;
    /**
     * returns define data of nof_ingress_db
     */
    dnx_data_meter_meter_db_nof_ingress_db_get_f nof_ingress_db_get;
    /**
     * returns define data of nof_egress_db
     */
    dnx_data_meter_meter_db_nof_egress_db_get_f nof_egress_db_get;
    /**
     * returns define data of meter_ids_in_group
     */
    dnx_data_meter_meter_db_meter_ids_in_group_get_f meter_ids_in_group_get;
} dnx_data_if_meter_meter_db_t;

/*
 * }
 */

/*
 * SUBMODULE  - MEM_MGMT:
 * meter shared memory definitions
 * {
 */
/*
 * Table value structure
 */
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
     * Must be last one!
     */
    _dnx_data_meter_mem_mgmt_feature_nof
} dnx_data_meter_mem_mgmt_feature_e;

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
    *dnx_data_meter_mem_mgmt_feature_get_f) (
    int unit,
    dnx_data_meter_mem_mgmt_feature_e feature);

/**
 * \brief returns define data of adrress_range_resolution
 * Module - 'meter', Submodule - 'mem_mgmt', data - 'adrress_range_resolution'
 * nof of meters resolution in shmem address range HW table 
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     adrress_range_resolution - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_mem_mgmt_adrress_range_resolution_get_f) (
    int unit);

/**
 * \brief returns define data of object_stat_pointer_base_resolution
 * Module - 'meter', Submodule - 'mem_mgmt', data - 'object_stat_pointer_base_resolution'
 * resolution for parameter 'object_stat_pointer_base', in API bcm_policer_engine_database_attach
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     object_stat_pointer_base_resolution - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_mem_mgmt_object_stat_pointer_base_resolution_get_f) (
    int unit);

/**
 * \brief returns define data of base_big_engine_for_meter
 * Module - 'meter', Submodule - 'mem_mgmt', data - 'base_big_engine_for_meter'
 * the base engine that is used for engine. (except the small engines)
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     base_big_engine_for_meter - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_mem_mgmt_base_big_engine_for_meter_get_f) (
    int unit);

/**
 * \brief returns define data of ingress_single_bucket_engine
 * Module - 'meter', Submodule - 'mem_mgmt', data - 'ingress_single_bucket_engine'
 * holds the engines that is used for ingress eth meter, which is small and can be used only in single bucket mode
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     ingress_single_bucket_engine - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_mem_mgmt_ingress_single_bucket_engine_get_f) (
    int unit);

/**
 * \brief returns define data of egress_single_bucket_engine
 * Module - 'meter', Submodule - 'mem_mgmt', data - 'egress_single_bucket_engine'
 * holds the engines that is used for egress eth meter, which is small and can be used only in single bucket mode
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     egress_single_bucket_engine - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_mem_mgmt_egress_single_bucket_engine_get_f) (
    int unit);

/**
 * \brief returns define data of counters_buckets_ratio_per_engine
 * Module - 'meter', Submodule - 'mem_mgmt', data - 'counters_buckets_ratio_per_engine'
 * each engine contain X counters or 2*X buckets (for meter). this holds the ratio
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     counters_buckets_ratio_per_engine - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_mem_mgmt_counters_buckets_ratio_per_engine_get_f) (
    int unit);

/**
 * \brief returns define data of meter_pointer_size
 * Module - 'meter', Submodule - 'mem_mgmt', data - 'meter_pointer_size'
 * The size in bits of the meter pointer
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     meter_pointer_size - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_mem_mgmt_meter_pointer_size_get_f) (
    int unit);

/**
 * \brief returns define data of meter_pointer_map_size
 * Module - 'meter', Submodule - 'mem_mgmt', data - 'meter_pointer_map_size'
 * Map meter pointer MSBs (from TM command) to new pointer MSBs which are used for bank selection - the size of the mapping in bits
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     meter_pointer_map_size - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_mem_mgmt_meter_pointer_map_size_get_f) (
    int unit);

/**
 * \brief returns define data of invalid_bank_id
 * Module - 'meter', Submodule - 'mem_mgmt', data - 'invalid_bank_id'
 * Invalid bank id
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     invalid_bank_id - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_mem_mgmt_invalid_bank_id_get_f) (
    int unit);

/**
 * \brief returns define data of ptr_map_table_resolution
 * Module - 'meter', Submodule - 'mem_mgmt', data - 'ptr_map_table_resolution'
 * ptr map table index is 8 msb bits mask of the object stat id pointer. this indicates the resolution of the table based on this mask
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     ptr_map_table_resolution - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_mem_mgmt_ptr_map_table_resolution_get_f) (
    int unit);

/**
 * \brief returns numeric data of bank_id_size
 * Module - 'meter', Submodule - 'mem_mgmt', data - 'bank_id_size'
 * The size in bits of the bank id calculated from the nof big engines
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     bank_id_size - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_mem_mgmt_bank_id_size_get_f) (
    int unit);

/**
 * \brief returns numeric data of nof_bank_ids
 * Module - 'meter', Submodule - 'mem_mgmt', data - 'nof_bank_ids'
 * The number of possible bank ids
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_bank_ids - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_mem_mgmt_nof_bank_ids_get_f) (
    int unit);

/**
 * \brief returns numeric data of sections_offset
 * Module - 'meter', Submodule - 'mem_mgmt', data - 'sections_offset'
 * one engine contain two sections (banks). This parameter holds the offset between two sections. (For example: engine 16: banks: 0,6)
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     sections_offset - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_mem_mgmt_sections_offset_get_f) (
    int unit);

/*
 * SUBMODULE INTERFACE DNX_DATA_IF_METER - MEM_MGMT:
 * {
 */
/**
 * \brief Interface for meter mem_mgmt data
 */
typedef struct
{
    /**
     * get submodule feature - disabled/enabled
     */
    dnx_data_meter_mem_mgmt_feature_get_f feature_get;
    /**
     * returns define data of adrress_range_resolution
     */
    dnx_data_meter_mem_mgmt_adrress_range_resolution_get_f adrress_range_resolution_get;
    /**
     * returns define data of object_stat_pointer_base_resolution
     */
    dnx_data_meter_mem_mgmt_object_stat_pointer_base_resolution_get_f object_stat_pointer_base_resolution_get;
    /**
     * returns define data of base_big_engine_for_meter
     */
    dnx_data_meter_mem_mgmt_base_big_engine_for_meter_get_f base_big_engine_for_meter_get;
    /**
     * returns define data of ingress_single_bucket_engine
     */
    dnx_data_meter_mem_mgmt_ingress_single_bucket_engine_get_f ingress_single_bucket_engine_get;
    /**
     * returns define data of egress_single_bucket_engine
     */
    dnx_data_meter_mem_mgmt_egress_single_bucket_engine_get_f egress_single_bucket_engine_get;
    /**
     * returns define data of counters_buckets_ratio_per_engine
     */
    dnx_data_meter_mem_mgmt_counters_buckets_ratio_per_engine_get_f counters_buckets_ratio_per_engine_get;
    /**
     * returns define data of meter_pointer_size
     */
    dnx_data_meter_mem_mgmt_meter_pointer_size_get_f meter_pointer_size_get;
    /**
     * returns define data of meter_pointer_map_size
     */
    dnx_data_meter_mem_mgmt_meter_pointer_map_size_get_f meter_pointer_map_size_get;
    /**
     * returns define data of invalid_bank_id
     */
    dnx_data_meter_mem_mgmt_invalid_bank_id_get_f invalid_bank_id_get;
    /**
     * returns define data of ptr_map_table_resolution
     */
    dnx_data_meter_mem_mgmt_ptr_map_table_resolution_get_f ptr_map_table_resolution_get;
    /**
     * returns numeric data of bank_id_size
     */
    dnx_data_meter_mem_mgmt_bank_id_size_get_f bank_id_size_get;
    /**
     * returns numeric data of nof_bank_ids
     */
    dnx_data_meter_mem_mgmt_nof_bank_ids_get_f nof_bank_ids_get;
    /**
     * returns numeric data of sections_offset
     */
    dnx_data_meter_mem_mgmt_sections_offset_get_f sections_offset_get;
} dnx_data_if_meter_mem_mgmt_t;

/*
 * }
 */

/*
 * SUBMODULE  - COMPENSATION:
 * meter compensation defintions
 * {
 */
/*
 * Table value structure
 */
/**
 * \brief Holds values of submodule compensation table ingress_port_delta_value
 * Table info:
 * minimum and maximum delta value for ingress compensation per port
 */
typedef struct
{
    /**
     * minimum value
     */
    int min;
    /**
     * maximum value
     */
    int max;
} dnx_data_meter_compensation_ingress_port_delta_value_t;

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
     * Must be last one!
     */
    _dnx_data_meter_compensation_feature_nof
} dnx_data_meter_compensation_feature_e;

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
    *dnx_data_meter_compensation_feature_get_f) (
    int unit,
    dnx_data_meter_compensation_feature_e feature);

/**
 * \brief get table ingress_port_delta_value entry 
 * minimum and maximum delta value for ingress compensation per port
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     ingress_port_delta_value - returns the relevant entry values grouped in struct - see dnx_data_meter_compensation_ingress_port_delta_value_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef const dnx_data_meter_compensation_ingress_port_delta_value_t *(
    *dnx_data_meter_compensation_ingress_port_delta_value_get_f) (
    int unit);

/*
 * SUBMODULE INTERFACE DNX_DATA_IF_METER - COMPENSATION:
 * {
 */
/**
 * \brief Interface for meter compensation data
 */
typedef struct
{
    /**
     * get submodule feature - disabled/enabled
     */
    dnx_data_meter_compensation_feature_get_f feature_get;
    /**
     * get table ingress_port_delta_value entry 
     */
    dnx_data_meter_compensation_ingress_port_delta_value_get_f ingress_port_delta_value_get;
    /**
     * get general info table about table (for example key size)ingress_port_delta_value info
     */
    dnxc_data_table_info_get_f ingress_port_delta_value_info_get;
} dnx_data_if_meter_compensation_t;

/*
 * }
 */

/*
 * SUBMODULE  - EXPANSION:
 * meter expansion definitions
 * {
 */
/*
 * Table value structure
 */
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
     * expansion is done based on global-engine pointer or based on traffic-class
     */
    dnx_data_meter_expansion_expansion_based_on_tc_support,
    /**
     * When doing expansion per L2-Fwd type, is expading per unknown address supported.
     */
    dnx_data_meter_expansion_expansion_for_uuc_umc_support,

    /**
     * Must be last one!
     */
    _dnx_data_meter_expansion_feature_nof
} dnx_data_meter_expansion_feature_e;

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
    *dnx_data_meter_expansion_feature_get_f) (
    int unit,
    dnx_data_meter_expansion_feature_e feature);

/**
 * \brief returns define data of max_size
 * Module - 'meter', Submodule - 'expansion', data - 'max_size'
 * The max expansion size value in numeric units
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     max_size - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_meter_expansion_max_size_get_f) (
    int unit);

/*
 * SUBMODULE INTERFACE DNX_DATA_IF_METER - EXPANSION:
 * {
 */
/**
 * \brief Interface for meter expansion data
 */
typedef struct
{
    /**
     * get submodule feature - disabled/enabled
     */
    dnx_data_meter_expansion_feature_get_f feature_get;
    /**
     * returns define data of max_size
     */
    dnx_data_meter_expansion_max_size_get_f max_size_get;
} dnx_data_if_meter_expansion_t;

/*
 * }
 */

/*
 * MODULE INTERFACE DNX_DATA_IF_METER:
 * {
 */
/**
 * \brief Interface for meter data
 */
typedef struct
{
    /**
     * Interface for meter profile data
     */
    dnx_data_if_meter_profile_t profile;
    /**
     * Interface for meter diag data
     */
    dnx_data_if_meter_diag_t diag;
    /**
     * Interface for meter meter_db data
     */
    dnx_data_if_meter_meter_db_t meter_db;
    /**
     * Interface for meter mem_mgmt data
     */
    dnx_data_if_meter_mem_mgmt_t mem_mgmt;
    /**
     * Interface for meter compensation data
     */
    dnx_data_if_meter_compensation_t compensation;
    /**
     * Interface for meter expansion data
     */
    dnx_data_if_meter_expansion_t expansion;
} dnx_data_if_meter_t;

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
extern dnx_data_if_meter_t dnx_data_meter;
/*
 * }
 */
/*}*/
#endif /*_DNX_DATA_METER_H_*/
/* *INDENT-ON* */