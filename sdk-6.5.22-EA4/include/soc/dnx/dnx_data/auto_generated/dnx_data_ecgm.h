/** \file dnx_data_ecgm.h
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
#ifndef _DNX_DATA_ECGM_H_
/*{*/
#define _DNX_DATA_ECGM_H_
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
#include <soc/dnx/dnx_data/auto_generated/dnx_data_max_ecgm.h>
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
 * \brief Init default data structure - dnx_data_if_ecgm
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
shr_error_e dnx_data_if_ecgm_init(
    int unit);

/*
 * }
 */

/*
 * SUBMODULE  - GENERAL:
 * general ecgm info
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
    _dnx_data_ecgm_general_feature_nof
} dnx_data_ecgm_general_feature_e;

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
    *dnx_data_ecgm_general_feature_get_f) (
    int unit,
    dnx_data_ecgm_general_feature_e feature);

/**
 * \brief returns define data of ecgm_is_supported
 * Module - 'ecgm', Submodule - 'general', data - 'ecgm_is_supported'
 * indicate if egress congestion management block is supported
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     ecgm_is_supported - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_general_ecgm_is_supported_get_f) (
    int unit);

/*
 * SUBMODULE INTERFACE DNX_DATA_IF_ECGM - GENERAL:
 * {
 */
/**
 * \brief Interface for ecgm general data
 */
typedef struct
{
    /**
     * get submodule feature - disabled/enabled
     */
    dnx_data_ecgm_general_feature_get_f feature_get;
    /**
     * returns define data of ecgm_is_supported
     */
    dnx_data_ecgm_general_ecgm_is_supported_get_f ecgm_is_supported_get;
} dnx_data_if_ecgm_general_t;

/*
 * }
 */

/*
 * SUBMODULE  - CORE_RESOURCES:
 * ecgm resources info per core
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
    _dnx_data_ecgm_core_resources_feature_nof
} dnx_data_ecgm_core_resources_feature_e;

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
    *dnx_data_ecgm_core_resources_feature_get_f) (
    int unit,
    dnx_data_ecgm_core_resources_feature_e feature);

/**
 * \brief returns define data of nof_sp
 * Module - 'ecgm', Submodule - 'core_resources', data - 'nof_sp'
 * number of service pools
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_sp - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_core_resources_nof_sp_get_f) (
    int unit);

/**
 * \brief returns define data of nof_interface_profiles
 * Module - 'ecgm', Submodule - 'core_resources', data - 'nof_interface_profiles'
 * total interface profiles per core
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_interface_profiles - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_core_resources_nof_interface_profiles_get_f) (
    int unit);

/**
 * \brief returns define data of nof_port_profiles
 * Module - 'ecgm', Submodule - 'core_resources', data - 'nof_port_profiles'
 * total port profiles per core
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_port_profiles - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_core_resources_nof_port_profiles_get_f) (
    int unit);

/**
 * \brief returns define data of total_pds
 * Module - 'ecgm', Submodule - 'core_resources', data - 'total_pds'
 * total packet descriptors per core
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     total_pds - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_core_resources_total_pds_get_f) (
    int unit);

/**
 * \brief returns define data of total_pds_nof_bits
 * Module - 'ecgm', Submodule - 'core_resources', data - 'total_pds_nof_bits'
 * number of bits for total packet descriptors
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     total_pds_nof_bits - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_core_resources_total_pds_nof_bits_get_f) (
    int unit);

/**
 * \brief returns define data of total_dbs
 * Module - 'ecgm', Submodule - 'core_resources', data - 'total_dbs'
 * total data buffers per core
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     total_dbs - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_core_resources_total_dbs_get_f) (
    int unit);

/**
 * \brief returns define data of total_dbs_nof_bits
 * Module - 'ecgm', Submodule - 'core_resources', data - 'total_dbs_nof_bits'
 * number of bits for total data buffers
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     total_dbs_nof_bits - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_core_resources_total_dbs_nof_bits_get_f) (
    int unit);

/**
 * \brief returns define data of reserved_dbs_per_sp_nof_bits
 * Module - 'ecgm', Submodule - 'core_resources', data - 'reserved_dbs_per_sp_nof_bits'
 * Number of bits for total reserved data buffers per Service Pool
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     reserved_dbs_per_sp_nof_bits - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_core_resources_reserved_dbs_per_sp_nof_bits_get_f) (
    int unit);

/**
 * \brief returns define data of max_alpha_value
 * Module - 'ecgm', Submodule - 'core_resources', data - 'max_alpha_value'
 * max value for FADT alpha
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     max_alpha_value - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_core_resources_max_alpha_value_get_f) (
    int unit);

/**
 * \brief returns define data of min_alpha_value
 * Module - 'ecgm', Submodule - 'core_resources', data - 'min_alpha_value'
 * min value for FADT alpha
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     min_alpha_value - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_core_resources_min_alpha_value_get_f) (
    int unit);

/**
 * \brief returns define data of max_core_bandwidth_Mbps
 * Module - 'ecgm', Submodule - 'core_resources', data - 'max_core_bandwidth_Mbps'
 * maximum bandwidth pec core in Mbps for ecgm calculation
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     max_core_bandwidth_Mbps - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_core_resources_max_core_bandwidth_Mbps_get_f) (
    int unit);

/*
 * SUBMODULE INTERFACE DNX_DATA_IF_ECGM - CORE_RESOURCES:
 * {
 */
/**
 * \brief Interface for ecgm core_resources data
 */
typedef struct
{
    /**
     * get submodule feature - disabled/enabled
     */
    dnx_data_ecgm_core_resources_feature_get_f feature_get;
    /**
     * returns define data of nof_sp
     */
    dnx_data_ecgm_core_resources_nof_sp_get_f nof_sp_get;
    /**
     * returns define data of nof_interface_profiles
     */
    dnx_data_ecgm_core_resources_nof_interface_profiles_get_f nof_interface_profiles_get;
    /**
     * returns define data of nof_port_profiles
     */
    dnx_data_ecgm_core_resources_nof_port_profiles_get_f nof_port_profiles_get;
    /**
     * returns define data of total_pds
     */
    dnx_data_ecgm_core_resources_total_pds_get_f total_pds_get;
    /**
     * returns define data of total_pds_nof_bits
     */
    dnx_data_ecgm_core_resources_total_pds_nof_bits_get_f total_pds_nof_bits_get;
    /**
     * returns define data of total_dbs
     */
    dnx_data_ecgm_core_resources_total_dbs_get_f total_dbs_get;
    /**
     * returns define data of total_dbs_nof_bits
     */
    dnx_data_ecgm_core_resources_total_dbs_nof_bits_get_f total_dbs_nof_bits_get;
    /**
     * returns define data of reserved_dbs_per_sp_nof_bits
     */
    dnx_data_ecgm_core_resources_reserved_dbs_per_sp_nof_bits_get_f reserved_dbs_per_sp_nof_bits_get;
    /**
     * returns define data of max_alpha_value
     */
    dnx_data_ecgm_core_resources_max_alpha_value_get_f max_alpha_value_get;
    /**
     * returns define data of min_alpha_value
     */
    dnx_data_ecgm_core_resources_min_alpha_value_get_f min_alpha_value_get;
    /**
     * returns define data of max_core_bandwidth_Mbps
     */
    dnx_data_ecgm_core_resources_max_core_bandwidth_Mbps_get_f max_core_bandwidth_Mbps_get;
} dnx_data_if_ecgm_core_resources_t;

/*
 * }
 */

/*
 * SUBMODULE  - PORT_RESOURCES:
 * ecgm resources info per port
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
    _dnx_data_ecgm_port_resources_feature_nof
} dnx_data_ecgm_port_resources_feature_e;

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
    *dnx_data_ecgm_port_resources_feature_get_f) (
    int unit,
    dnx_data_ecgm_port_resources_feature_e feature);

/**
 * \brief returns define data of max_nof_ports
 * Module - 'ecgm', Submodule - 'port_resources', data - 'max_nof_ports'
 * maximum num of ports per core for ecgm calculation
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     max_nof_ports - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_port_resources_max_nof_ports_get_f) (
    int unit);

/*
 * SUBMODULE INTERFACE DNX_DATA_IF_ECGM - PORT_RESOURCES:
 * {
 */
/**
 * \brief Interface for ecgm port_resources data
 */
typedef struct
{
    /**
     * get submodule feature - disabled/enabled
     */
    dnx_data_ecgm_port_resources_feature_get_f feature_get;
    /**
     * returns define data of max_nof_ports
     */
    dnx_data_ecgm_port_resources_max_nof_ports_get_f max_nof_ports_get;
} dnx_data_if_ecgm_port_resources_t;

/*
 * }
 */

/*
 * SUBMODULE  - DELETE_FIFO:
 * default values for ECGM delete FIFOs
 * {
 */
/*
 * Table value structure
 */
/**
 * \brief Holds values of submodule delete_fifo table thresholds
 * Table info:
 * Delete FIFO thresholds
 */
typedef struct
{
    /**
     * threshold for higher priority in FQP
     */
    uint32 fqp_high_priority;
    /**
     * threshold for stop reading multicast low priority FIFO
     */
    uint32 stop_mc_low;
    /**
     * threshold for stop reading multicast high priority FIFO
     */
    uint32 stop_mc_high;
    /**
     * threshold for stop reading unicast FIFO and stop send packets to ERPP
     */
    uint32 stop_all;
} dnx_data_ecgm_delete_fifo_thresholds_t;

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
    _dnx_data_ecgm_delete_fifo_feature_nof
} dnx_data_ecgm_delete_fifo_feature_e;

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
    *dnx_data_ecgm_delete_fifo_feature_get_f) (
    int unit,
    dnx_data_ecgm_delete_fifo_feature_e feature);

/**
 * \brief get table thresholds entry 
 * Delete FIFO thresholds
 * 
 * \param [in] unit - unit #
 * \param [in] fifo_type - fifo type to get thresholds to.
 * 
 * \return
 *     thresholds - returns the relevant entry values grouped in struct - see dnx_data_ecgm_delete_fifo_thresholds_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef const dnx_data_ecgm_delete_fifo_thresholds_t *(
    *dnx_data_ecgm_delete_fifo_thresholds_get_f) (
    int unit,
    int fifo_type);

/*
 * SUBMODULE INTERFACE DNX_DATA_IF_ECGM - DELETE_FIFO:
 * {
 */
/**
 * \brief Interface for ecgm delete_fifo data
 */
typedef struct
{
    /**
     * get submodule feature - disabled/enabled
     */
    dnx_data_ecgm_delete_fifo_feature_get_f feature_get;
    /**
     * get table thresholds entry 
     */
    dnx_data_ecgm_delete_fifo_thresholds_get_f thresholds_get;
    /**
     * get general info table about table (for example key size)thresholds info
     */
    dnxc_data_table_info_get_f thresholds_info_get;
} dnx_data_if_ecgm_delete_fifo_t;

/*
 * }
 */

/*
 * SUBMODULE  - INFO:
 * Egress congestion info
 * {
 */
/*
 * Table value structure
 */
/**
 * \brief Holds values of submodule info table dropped_reason_rqp
 * Table info:
 * reasons for the dropped and rejected packets in RQP
 */
typedef struct
{
    /**
     * reason string
     */
    char *reason;
} dnx_data_ecgm_info_dropped_reason_rqp_t;

/**
 * \brief Holds values of submodule info table dropped_reason_pqp
 * Table info:
 * reasons for the dropped and rejected packets in PQP
 */
typedef struct
{
    /**
     * reason string
     */
    char *reason;
} dnx_data_ecgm_info_dropped_reason_pqp_t;

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
     * Indicate if table to select the debug vector for ECGM to SCH per Interface FC exists. 
     */
    dnx_data_ecgm_info_fc_egr_if_vector_select,

    /**
     * Must be last one!
     */
    _dnx_data_ecgm_info_feature_nof
} dnx_data_ecgm_info_feature_e;

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
    *dnx_data_ecgm_info_feature_get_f) (
    int unit,
    dnx_data_ecgm_info_feature_e feature);

/**
 * \brief returns define data of fc_q_pair_vector_select_nof_bits
 * Module - 'ecgm', Submodule - 'info', data - 'fc_q_pair_vector_select_nof_bits'
 * Number of bits of the Q-pair debug vector selector for EGQ to SCH per Q-pair FC
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     fc_q_pair_vector_select_nof_bits - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_info_fc_q_pair_vector_select_nof_bits_get_f) (
    int unit);

/**
 * \brief returns define data of fc_q_pair_vector_nof_presented
 * Module - 'ecgm', Submodule - 'info', data - 'fc_q_pair_vector_nof_presented'
 * Number of presented indications of the Q-pair debug vector for EGQ to SCH per Q-pair FC
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     fc_q_pair_vector_nof_presented - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_info_fc_q_pair_vector_nof_presented_get_f) (
    int unit);

/**
 * \brief returns define data of fc_egr_if_vector_select_nof_bits
 * Module - 'ecgm', Submodule - 'info', data - 'fc_egr_if_vector_select_nof_bits'
 * Number of bits of the Egr IF debug vector selector for ECGM to EGQ per Egr IF FC
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     fc_egr_if_vector_select_nof_bits - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_info_fc_egr_if_vector_select_nof_bits_get_f) (
    int unit);

/**
 * \brief returns define data of fc_egr_if_vector_nof_presented
 * Module - 'ecgm', Submodule - 'info', data - 'fc_egr_if_vector_nof_presented'
 * Number of presented indications of the Egr IF debug vector for EGQ to SCH per Egr IF FC
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     fc_egr_if_vector_nof_presented - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_info_fc_egr_if_vector_nof_presented_get_f) (
    int unit);

/**
 * \brief returns define data of nof_dropped_reasons_rqp
 * Module - 'ecgm', Submodule - 'info', data - 'nof_dropped_reasons_rqp'
 * number of reasons for the dropped packets in RQP
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_dropped_reasons_rqp - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_info_nof_dropped_reasons_rqp_get_f) (
    int unit);

/**
 * \brief returns define data of nof_dropped_reasons_pqp
 * Module - 'ecgm', Submodule - 'info', data - 'nof_dropped_reasons_pqp'
 * number of reasons for the dropped packets in PQP
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_dropped_reasons_pqp - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_info_nof_dropped_reasons_pqp_get_f) (
    int unit);

/**
 * \brief returns define data of nof_bits_in_pd_count
 * Module - 'ecgm', Submodule - 'info', data - 'nof_bits_in_pd_count'
 * number of bits in PD COUNT
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_bits_in_pd_count - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_ecgm_info_nof_bits_in_pd_count_get_f) (
    int unit);

/**
 * \brief get table dropped_reason_rqp entry 
 * reasons for the dropped and rejected packets in RQP
 * 
 * \param [in] unit - unit #
 * \param [in] index - this index mapped to the bit in RQP_DISCARD_REASONS
 * 
 * \return
 *     dropped_reason_rqp - returns the relevant entry values grouped in struct - see dnx_data_ecgm_info_dropped_reason_rqp_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef const dnx_data_ecgm_info_dropped_reason_rqp_t *(
    *dnx_data_ecgm_info_dropped_reason_rqp_get_f) (
    int unit,
    int index);

/**
 * \brief get table dropped_reason_pqp entry 
 * reasons for the dropped and rejected packets in PQP
 * 
 * \param [in] unit - unit #
 * \param [in] index - this index mapped to the bit in PQP_DISCARD_REASONS
 * 
 * \return
 *     dropped_reason_pqp - returns the relevant entry values grouped in struct - see dnx_data_ecgm_info_dropped_reason_pqp_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef const dnx_data_ecgm_info_dropped_reason_pqp_t *(
    *dnx_data_ecgm_info_dropped_reason_pqp_get_f) (
    int unit,
    int index);

/*
 * SUBMODULE INTERFACE DNX_DATA_IF_ECGM - INFO:
 * {
 */
/**
 * \brief Interface for ecgm info data
 */
typedef struct
{
    /**
     * get submodule feature - disabled/enabled
     */
    dnx_data_ecgm_info_feature_get_f feature_get;
    /**
     * returns define data of fc_q_pair_vector_select_nof_bits
     */
    dnx_data_ecgm_info_fc_q_pair_vector_select_nof_bits_get_f fc_q_pair_vector_select_nof_bits_get;
    /**
     * returns define data of fc_q_pair_vector_nof_presented
     */
    dnx_data_ecgm_info_fc_q_pair_vector_nof_presented_get_f fc_q_pair_vector_nof_presented_get;
    /**
     * returns define data of fc_egr_if_vector_select_nof_bits
     */
    dnx_data_ecgm_info_fc_egr_if_vector_select_nof_bits_get_f fc_egr_if_vector_select_nof_bits_get;
    /**
     * returns define data of fc_egr_if_vector_nof_presented
     */
    dnx_data_ecgm_info_fc_egr_if_vector_nof_presented_get_f fc_egr_if_vector_nof_presented_get;
    /**
     * returns define data of nof_dropped_reasons_rqp
     */
    dnx_data_ecgm_info_nof_dropped_reasons_rqp_get_f nof_dropped_reasons_rqp_get;
    /**
     * returns define data of nof_dropped_reasons_pqp
     */
    dnx_data_ecgm_info_nof_dropped_reasons_pqp_get_f nof_dropped_reasons_pqp_get;
    /**
     * returns define data of nof_bits_in_pd_count
     */
    dnx_data_ecgm_info_nof_bits_in_pd_count_get_f nof_bits_in_pd_count_get;
    /**
     * get table dropped_reason_rqp entry 
     */
    dnx_data_ecgm_info_dropped_reason_rqp_get_f dropped_reason_rqp_get;
    /**
     * get general info table about table (for example key size)dropped_reason_rqp info
     */
    dnxc_data_table_info_get_f dropped_reason_rqp_info_get;
    /**
     * get table dropped_reason_pqp entry 
     */
    dnx_data_ecgm_info_dropped_reason_pqp_get_f dropped_reason_pqp_get;
    /**
     * get general info table about table (for example key size)dropped_reason_pqp info
     */
    dnxc_data_table_info_get_f dropped_reason_pqp_info_get;
} dnx_data_if_ecgm_info_t;

/*
 * }
 */

/*
 * MODULE INTERFACE DNX_DATA_IF_ECGM:
 * {
 */
/**
 * \brief Interface for ecgm data
 */
typedef struct
{
    /**
     * Interface for ecgm general data
     */
    dnx_data_if_ecgm_general_t general;
    /**
     * Interface for ecgm core_resources data
     */
    dnx_data_if_ecgm_core_resources_t core_resources;
    /**
     * Interface for ecgm port_resources data
     */
    dnx_data_if_ecgm_port_resources_t port_resources;
    /**
     * Interface for ecgm delete_fifo data
     */
    dnx_data_if_ecgm_delete_fifo_t delete_fifo;
    /**
     * Interface for ecgm info data
     */
    dnx_data_if_ecgm_info_t info;
} dnx_data_if_ecgm_t;

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
extern dnx_data_if_ecgm_t dnx_data_ecgm;
/*
 * }
 */
/*}*/
#endif /*_DNX_DATA_ECGM_H_*/
/* *INDENT-ON* */