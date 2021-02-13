/** \file dnx_data_ecgm.c
 * 
 * MODULE DEVICE DATA - ECGM
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
#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_BCMDNX_COSQ
/*
 * INCLUDE FILES:
 * {
 */
#include <soc/dnx/dnx_data/auto_generated/dnx_data_internal_ecgm.h>
/*
 * }
 */

/*
 * Extern per device attach function
 */
#ifdef BCM_DNX2_SUPPORT
/*{*/
extern shr_error_e jr2_a0_data_ecgm_attach(
    int unit);
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
extern shr_error_e j2c_a0_data_ecgm_attach(
    int unit);
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
extern shr_error_e q2a_a0_data_ecgm_attach(
    int unit);
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
extern shr_error_e j2p_a0_data_ecgm_attach(
    int unit);
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
/*
 * SUBMODULE - GENERAL:
 * {
 */
/*
 * general init
 */
/**
 * \brief Set submodule data to default value per device type
 * 
 * \param [in] unit - Unit #
 * \param [out] submodule_data - pointer to submodule data
 * 
 * \return
 *     rv - see 'shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
static shr_error_e
dnx_data_ecgm_general_init(
    int unit,
    dnxc_data_submodule_t *submodule_data)
{
    SHR_FUNC_INIT_VARS(unit);

    submodule_data->name = "general";
    submodule_data->doc = "general ecgm info";
    /*
     * Features
     */
    submodule_data->nof_features = _dnx_data_ecgm_general_feature_nof;
    DNXC_DATA_ALLOC(submodule_data->features, dnxc_data_feature_t,  submodule_data->nof_features, "_dnxc_data ecgm general features");

    /*
     * Defines
     */
    submodule_data->nof_defines = _dnx_data_ecgm_general_define_nof;
    DNXC_DATA_ALLOC(submodule_data->defines, dnxc_data_define_t, submodule_data->nof_defines, "_dnxc_data ecgm general defines");

    submodule_data->defines[dnx_data_ecgm_general_define_ecgm_is_supported].name = "ecgm_is_supported";
    submodule_data->defines[dnx_data_ecgm_general_define_ecgm_is_supported].doc = "indicate if egress congestion management block is supported";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_general_define_ecgm_is_supported].flags |= DNXC_DATA_F_DEFINE;

    /*
     * Tables
     */
    submodule_data->nof_tables = _dnx_data_ecgm_general_table_nof;
    DNXC_DATA_ALLOC(submodule_data->tables, dnxc_data_table_t, submodule_data->nof_tables, "_dnxc_data ecgm general tables");


exit:
    SHR_FUNC_EXIT;
}

/*
 * general features
 */
int
dnx_data_ecgm_general_feature_get(
    int unit,
    dnx_data_ecgm_general_feature_e feature)
{
    return dnxc_data_mgmt_feature_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_general, feature);
}

/*
 * general defines
 */
uint32
dnx_data_ecgm_general_ecgm_is_supported_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_general, dnx_data_ecgm_general_define_ecgm_is_supported);
}

/*
 * general tables
 */
/* Table Get */
/* Get value as str */
/* Table Info Get */
/*
 * }
 */

/*
 * SUBMODULE - CORE_RESOURCES:
 * {
 */
/*
 * core_resources init
 */
/**
 * \brief Set submodule data to default value per device type
 * 
 * \param [in] unit - Unit #
 * \param [out] submodule_data - pointer to submodule data
 * 
 * \return
 *     rv - see 'shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
static shr_error_e
dnx_data_ecgm_core_resources_init(
    int unit,
    dnxc_data_submodule_t *submodule_data)
{
    SHR_FUNC_INIT_VARS(unit);

    submodule_data->name = "core_resources";
    submodule_data->doc = "ecgm resources info per core";
    /*
     * Features
     */
    submodule_data->nof_features = _dnx_data_ecgm_core_resources_feature_nof;
    DNXC_DATA_ALLOC(submodule_data->features, dnxc_data_feature_t,  submodule_data->nof_features, "_dnxc_data ecgm core_resources features");

    /*
     * Defines
     */
    submodule_data->nof_defines = _dnx_data_ecgm_core_resources_define_nof;
    DNXC_DATA_ALLOC(submodule_data->defines, dnxc_data_define_t, submodule_data->nof_defines, "_dnxc_data ecgm core_resources defines");

    submodule_data->defines[dnx_data_ecgm_core_resources_define_nof_sp].name = "nof_sp";
    submodule_data->defines[dnx_data_ecgm_core_resources_define_nof_sp].doc = "number of service pools";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_core_resources_define_nof_sp].flags |= DNXC_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_ecgm_core_resources_define_nof_interface_profiles].name = "nof_interface_profiles";
    submodule_data->defines[dnx_data_ecgm_core_resources_define_nof_interface_profiles].doc = "total interface profiles per core";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_core_resources_define_nof_interface_profiles].flags |= DNXC_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_ecgm_core_resources_define_nof_port_profiles].name = "nof_port_profiles";
    submodule_data->defines[dnx_data_ecgm_core_resources_define_nof_port_profiles].doc = "total port profiles per core";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_core_resources_define_nof_port_profiles].flags |= DNXC_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_ecgm_core_resources_define_total_pds].name = "total_pds";
    submodule_data->defines[dnx_data_ecgm_core_resources_define_total_pds].doc = "total packet descriptors per core";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_core_resources_define_total_pds].flags |= DNXC_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_ecgm_core_resources_define_total_pds_nof_bits].name = "total_pds_nof_bits";
    submodule_data->defines[dnx_data_ecgm_core_resources_define_total_pds_nof_bits].doc = "number of bits for total packet descriptors";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_core_resources_define_total_pds_nof_bits].flags |= DNXC_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_ecgm_core_resources_define_total_dbs].name = "total_dbs";
    submodule_data->defines[dnx_data_ecgm_core_resources_define_total_dbs].doc = "total data buffers per core";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_core_resources_define_total_dbs].flags |= DNXC_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_ecgm_core_resources_define_total_dbs_nof_bits].name = "total_dbs_nof_bits";
    submodule_data->defines[dnx_data_ecgm_core_resources_define_total_dbs_nof_bits].doc = "number of bits for total data buffers";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_core_resources_define_total_dbs_nof_bits].flags |= DNXC_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_ecgm_core_resources_define_reserved_dbs_per_sp_nof_bits].name = "reserved_dbs_per_sp_nof_bits";
    submodule_data->defines[dnx_data_ecgm_core_resources_define_reserved_dbs_per_sp_nof_bits].doc = "Number of bits for total reserved data buffers per Service Pool";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_core_resources_define_reserved_dbs_per_sp_nof_bits].flags |= DNXC_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_ecgm_core_resources_define_max_alpha_value].name = "max_alpha_value";
    submodule_data->defines[dnx_data_ecgm_core_resources_define_max_alpha_value].doc = "max value for FADT alpha";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_core_resources_define_max_alpha_value].flags |= DNXC_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_ecgm_core_resources_define_min_alpha_value].name = "min_alpha_value";
    submodule_data->defines[dnx_data_ecgm_core_resources_define_min_alpha_value].doc = "min value for FADT alpha";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_core_resources_define_min_alpha_value].flags |= DNXC_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_ecgm_core_resources_define_max_core_bandwidth_Mbps].name = "max_core_bandwidth_Mbps";
    submodule_data->defines[dnx_data_ecgm_core_resources_define_max_core_bandwidth_Mbps].doc = "maximum bandwidth pec core in Mbps for ecgm calculation";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_core_resources_define_max_core_bandwidth_Mbps].flags |= DNXC_DATA_F_DEFINE;

    /*
     * Tables
     */
    submodule_data->nof_tables = _dnx_data_ecgm_core_resources_table_nof;
    DNXC_DATA_ALLOC(submodule_data->tables, dnxc_data_table_t, submodule_data->nof_tables, "_dnxc_data ecgm core_resources tables");


exit:
    SHR_FUNC_EXIT;
}

/*
 * core_resources features
 */
int
dnx_data_ecgm_core_resources_feature_get(
    int unit,
    dnx_data_ecgm_core_resources_feature_e feature)
{
    return dnxc_data_mgmt_feature_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_core_resources, feature);
}

/*
 * core_resources defines
 */
uint32
dnx_data_ecgm_core_resources_nof_sp_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_core_resources, dnx_data_ecgm_core_resources_define_nof_sp);
}

uint32
dnx_data_ecgm_core_resources_nof_interface_profiles_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_core_resources, dnx_data_ecgm_core_resources_define_nof_interface_profiles);
}

uint32
dnx_data_ecgm_core_resources_nof_port_profiles_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_core_resources, dnx_data_ecgm_core_resources_define_nof_port_profiles);
}

uint32
dnx_data_ecgm_core_resources_total_pds_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_core_resources, dnx_data_ecgm_core_resources_define_total_pds);
}

uint32
dnx_data_ecgm_core_resources_total_pds_nof_bits_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_core_resources, dnx_data_ecgm_core_resources_define_total_pds_nof_bits);
}

uint32
dnx_data_ecgm_core_resources_total_dbs_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_core_resources, dnx_data_ecgm_core_resources_define_total_dbs);
}

uint32
dnx_data_ecgm_core_resources_total_dbs_nof_bits_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_core_resources, dnx_data_ecgm_core_resources_define_total_dbs_nof_bits);
}

uint32
dnx_data_ecgm_core_resources_reserved_dbs_per_sp_nof_bits_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_core_resources, dnx_data_ecgm_core_resources_define_reserved_dbs_per_sp_nof_bits);
}

uint32
dnx_data_ecgm_core_resources_max_alpha_value_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_core_resources, dnx_data_ecgm_core_resources_define_max_alpha_value);
}

uint32
dnx_data_ecgm_core_resources_min_alpha_value_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_core_resources, dnx_data_ecgm_core_resources_define_min_alpha_value);
}

uint32
dnx_data_ecgm_core_resources_max_core_bandwidth_Mbps_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_core_resources, dnx_data_ecgm_core_resources_define_max_core_bandwidth_Mbps);
}

/*
 * core_resources tables
 */
/* Table Get */
/* Get value as str */
/* Table Info Get */
/*
 * }
 */

/*
 * SUBMODULE - PORT_RESOURCES:
 * {
 */
/*
 * port_resources init
 */
/**
 * \brief Set submodule data to default value per device type
 * 
 * \param [in] unit - Unit #
 * \param [out] submodule_data - pointer to submodule data
 * 
 * \return
 *     rv - see 'shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
static shr_error_e
dnx_data_ecgm_port_resources_init(
    int unit,
    dnxc_data_submodule_t *submodule_data)
{
    SHR_FUNC_INIT_VARS(unit);

    submodule_data->name = "port_resources";
    submodule_data->doc = "ecgm resources info per port";
    /*
     * Features
     */
    submodule_data->nof_features = _dnx_data_ecgm_port_resources_feature_nof;
    DNXC_DATA_ALLOC(submodule_data->features, dnxc_data_feature_t,  submodule_data->nof_features, "_dnxc_data ecgm port_resources features");

    /*
     * Defines
     */
    submodule_data->nof_defines = _dnx_data_ecgm_port_resources_define_nof;
    DNXC_DATA_ALLOC(submodule_data->defines, dnxc_data_define_t, submodule_data->nof_defines, "_dnxc_data ecgm port_resources defines");

    submodule_data->defines[dnx_data_ecgm_port_resources_define_max_nof_ports].name = "max_nof_ports";
    submodule_data->defines[dnx_data_ecgm_port_resources_define_max_nof_ports].doc = "maximum num of ports per core for ecgm calculation";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_port_resources_define_max_nof_ports].flags |= DNXC_DATA_F_DEFINE;

    /*
     * Tables
     */
    submodule_data->nof_tables = _dnx_data_ecgm_port_resources_table_nof;
    DNXC_DATA_ALLOC(submodule_data->tables, dnxc_data_table_t, submodule_data->nof_tables, "_dnxc_data ecgm port_resources tables");


exit:
    SHR_FUNC_EXIT;
}

/*
 * port_resources features
 */
int
dnx_data_ecgm_port_resources_feature_get(
    int unit,
    dnx_data_ecgm_port_resources_feature_e feature)
{
    return dnxc_data_mgmt_feature_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_port_resources, feature);
}

/*
 * port_resources defines
 */
uint32
dnx_data_ecgm_port_resources_max_nof_ports_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_port_resources, dnx_data_ecgm_port_resources_define_max_nof_ports);
}

/*
 * port_resources tables
 */
/* Table Get */
/* Get value as str */
/* Table Info Get */
/*
 * }
 */

/*
 * SUBMODULE - DELETE_FIFO:
 * {
 */
/*
 * delete_fifo init
 */
/**
 * \brief Set submodule data to default value per device type
 * 
 * \param [in] unit - Unit #
 * \param [out] submodule_data - pointer to submodule data
 * 
 * \return
 *     rv - see 'shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
static shr_error_e
dnx_data_ecgm_delete_fifo_init(
    int unit,
    dnxc_data_submodule_t *submodule_data)
{
    SHR_FUNC_INIT_VARS(unit);

    submodule_data->name = "delete_fifo";
    submodule_data->doc = "default values for ECGM delete FIFOs";
    /*
     * Features
     */
    submodule_data->nof_features = _dnx_data_ecgm_delete_fifo_feature_nof;
    DNXC_DATA_ALLOC(submodule_data->features, dnxc_data_feature_t,  submodule_data->nof_features, "_dnxc_data ecgm delete_fifo features");

    /*
     * Defines
     */
    submodule_data->nof_defines = _dnx_data_ecgm_delete_fifo_define_nof;
    DNXC_DATA_ALLOC(submodule_data->defines, dnxc_data_define_t, submodule_data->nof_defines, "_dnxc_data ecgm delete_fifo defines");

    /*
     * Tables
     */
    submodule_data->nof_tables = _dnx_data_ecgm_delete_fifo_table_nof;
    DNXC_DATA_ALLOC(submodule_data->tables, dnxc_data_table_t, submodule_data->nof_tables, "_dnxc_data ecgm delete_fifo tables");

    /*
     * Table - thresholds
     */
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].name = "thresholds";
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].doc = "Delete FIFO thresholds";
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].flags |= DNXC_DATA_F_TABLE;
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].size_of_values = sizeof(dnx_data_ecgm_delete_fifo_thresholds_t);
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].entry_get = dnx_data_ecgm_delete_fifo_thresholds_entry_str_get;

    /* Keys */
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].nof_keys = 1;
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].keys[0].name = "fifo_type";
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].keys[0].doc = "fifo type to get thresholds to.";

    /* Values */
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].nof_values = 4;
    DNXC_DATA_ALLOC(submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values, dnxc_data_value_t, submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].nof_values, "_dnx_data_ecgm_delete_fifo_table_thresholds table values");
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values[0].name = "fqp_high_priority";
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values[0].type = "uint32";
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values[0].doc = "threshold for higher priority in FQP";
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values[0].offset = UTILEX_OFFSETOF(dnx_data_ecgm_delete_fifo_thresholds_t, fqp_high_priority);
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values[1].name = "stop_mc_low";
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values[1].type = "uint32";
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values[1].doc = "threshold for stop reading multicast low priority FIFO";
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values[1].offset = UTILEX_OFFSETOF(dnx_data_ecgm_delete_fifo_thresholds_t, stop_mc_low);
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values[2].name = "stop_mc_high";
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values[2].type = "uint32";
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values[2].doc = "threshold for stop reading multicast high priority FIFO";
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values[2].offset = UTILEX_OFFSETOF(dnx_data_ecgm_delete_fifo_thresholds_t, stop_mc_high);
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values[3].name = "stop_all";
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values[3].type = "uint32";
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values[3].doc = "threshold for stop reading unicast FIFO and stop send packets to ERPP";
    submodule_data->tables[dnx_data_ecgm_delete_fifo_table_thresholds].values[3].offset = UTILEX_OFFSETOF(dnx_data_ecgm_delete_fifo_thresholds_t, stop_all);


exit:
    SHR_FUNC_EXIT;
}

/*
 * delete_fifo features
 */
int
dnx_data_ecgm_delete_fifo_feature_get(
    int unit,
    dnx_data_ecgm_delete_fifo_feature_e feature)
{
    return dnxc_data_mgmt_feature_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_delete_fifo, feature);
}

/*
 * delete_fifo defines
 */
/*
 * delete_fifo tables
 */
/* Table Get */
const dnx_data_ecgm_delete_fifo_thresholds_t *
dnx_data_ecgm_delete_fifo_thresholds_get(
    int unit,
    int fifo_type)
{
    char *data;
    dnxc_data_table_t *table;

    /* Get table */
    table = dnxc_data_mgmt_table_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_delete_fifo, dnx_data_ecgm_delete_fifo_table_thresholds);
    /* Get data */
    data = dnxc_data_mgmt_table_data_get(unit, table, fifo_type, 0);
    return (const dnx_data_ecgm_delete_fifo_thresholds_t *) data;

}

/* Get value as str */
shr_error_e
dnx_data_ecgm_delete_fifo_thresholds_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index)
{
    dnxc_data_table_t *table;
    const dnx_data_ecgm_delete_fifo_thresholds_t *data;
    SHR_FUNC_INIT_VARS(unit);

    /* Get table */
    table = dnxc_data_mgmt_table_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_delete_fifo, dnx_data_ecgm_delete_fifo_table_thresholds);
    data = (const dnx_data_ecgm_delete_fifo_thresholds_t *) dnxc_data_mgmt_table_data_diag_get(unit, table, key0, 0);
    switch (value_index)
    {
        case 0:
            sal_snprintf(buffer, DNXC_DATA_MGMT_MAX_TABLE_VALUE_LENGTH, "%d", data->fqp_high_priority);
            break;
        case 1:
            sal_snprintf(buffer, DNXC_DATA_MGMT_MAX_TABLE_VALUE_LENGTH, "%d", data->stop_mc_low);
            break;
        case 2:
            sal_snprintf(buffer, DNXC_DATA_MGMT_MAX_TABLE_VALUE_LENGTH, "%d", data->stop_mc_high);
            break;
        case 3:
            sal_snprintf(buffer, DNXC_DATA_MGMT_MAX_TABLE_VALUE_LENGTH, "%d", data->stop_all);
            break;
    }

    SHR_FUNC_EXIT;
}

/* Table Info Get */
const dnxc_data_table_info_t *
dnx_data_ecgm_delete_fifo_thresholds_info_get(
    int unit)
{

    /* Return table info */
    return dnxc_data_mgmt_table_info_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_delete_fifo, dnx_data_ecgm_delete_fifo_table_thresholds);

}

/*
 * }
 */

/*
 * SUBMODULE - INFO:
 * {
 */
/*
 * info init
 */
/**
 * \brief Set submodule data to default value per device type
 * 
 * \param [in] unit - Unit #
 * \param [out] submodule_data - pointer to submodule data
 * 
 * \return
 *     rv - see 'shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
static shr_error_e
dnx_data_ecgm_info_init(
    int unit,
    dnxc_data_submodule_t *submodule_data)
{
    SHR_FUNC_INIT_VARS(unit);

    submodule_data->name = "info";
    submodule_data->doc = "Egress congestion info";
    /*
     * Features
     */
    submodule_data->nof_features = _dnx_data_ecgm_info_feature_nof;
    DNXC_DATA_ALLOC(submodule_data->features, dnxc_data_feature_t,  submodule_data->nof_features, "_dnxc_data ecgm info features");

    submodule_data->features[dnx_data_ecgm_info_fc_egr_if_vector_select].name = "fc_egr_if_vector_select";
    submodule_data->features[dnx_data_ecgm_info_fc_egr_if_vector_select].doc = "Indicate if table to select the debug vector for ECGM to SCH per Interface FC exists. ";
    submodule_data->features[dnx_data_ecgm_info_fc_egr_if_vector_select].flags |= DNXC_DATA_F_FEATURE;

    /*
     * Defines
     */
    submodule_data->nof_defines = _dnx_data_ecgm_info_define_nof;
    DNXC_DATA_ALLOC(submodule_data->defines, dnxc_data_define_t, submodule_data->nof_defines, "_dnxc_data ecgm info defines");

    submodule_data->defines[dnx_data_ecgm_info_define_fc_q_pair_vector_select_nof_bits].name = "fc_q_pair_vector_select_nof_bits";
    submodule_data->defines[dnx_data_ecgm_info_define_fc_q_pair_vector_select_nof_bits].doc = "Number of bits of the Q-pair debug vector selector for EGQ to SCH per Q-pair FC";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_info_define_fc_q_pair_vector_select_nof_bits].flags |= DNXC_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_ecgm_info_define_fc_q_pair_vector_nof_presented].name = "fc_q_pair_vector_nof_presented";
    submodule_data->defines[dnx_data_ecgm_info_define_fc_q_pair_vector_nof_presented].doc = "Number of presented indications of the Q-pair debug vector for EGQ to SCH per Q-pair FC";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_info_define_fc_q_pair_vector_nof_presented].flags |= DNXC_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_ecgm_info_define_fc_egr_if_vector_select_nof_bits].name = "fc_egr_if_vector_select_nof_bits";
    submodule_data->defines[dnx_data_ecgm_info_define_fc_egr_if_vector_select_nof_bits].doc = "Number of bits of the Egr IF debug vector selector for ECGM to EGQ per Egr IF FC";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_info_define_fc_egr_if_vector_select_nof_bits].flags |= DNXC_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_ecgm_info_define_fc_egr_if_vector_nof_presented].name = "fc_egr_if_vector_nof_presented";
    submodule_data->defines[dnx_data_ecgm_info_define_fc_egr_if_vector_nof_presented].doc = "Number of presented indications of the Egr IF debug vector for EGQ to SCH per Egr IF FC";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_info_define_fc_egr_if_vector_nof_presented].flags |= DNXC_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_ecgm_info_define_nof_dropped_reasons_rqp].name = "nof_dropped_reasons_rqp";
    submodule_data->defines[dnx_data_ecgm_info_define_nof_dropped_reasons_rqp].doc = "number of reasons for the dropped packets in RQP";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_info_define_nof_dropped_reasons_rqp].flags |= DNXC_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_ecgm_info_define_nof_dropped_reasons_pqp].name = "nof_dropped_reasons_pqp";
    submodule_data->defines[dnx_data_ecgm_info_define_nof_dropped_reasons_pqp].doc = "number of reasons for the dropped packets in PQP";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_info_define_nof_dropped_reasons_pqp].flags |= DNXC_DATA_F_DEFINE;

    submodule_data->defines[dnx_data_ecgm_info_define_nof_bits_in_pd_count].name = "nof_bits_in_pd_count";
    submodule_data->defines[dnx_data_ecgm_info_define_nof_bits_in_pd_count].doc = "number of bits in PD COUNT";
    /* Set data type flag */
    submodule_data->defines[dnx_data_ecgm_info_define_nof_bits_in_pd_count].flags |= DNXC_DATA_F_DEFINE;

    /*
     * Tables
     */
    submodule_data->nof_tables = _dnx_data_ecgm_info_table_nof;
    DNXC_DATA_ALLOC(submodule_data->tables, dnxc_data_table_t, submodule_data->nof_tables, "_dnxc_data ecgm info tables");

    /*
     * Table - dropped_reason_rqp
     */
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_rqp].name = "dropped_reason_rqp";
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_rqp].doc = "reasons for the dropped and rejected packets in RQP";
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_rqp].flags |= DNXC_DATA_F_TABLE;
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_rqp].size_of_values = sizeof(dnx_data_ecgm_info_dropped_reason_rqp_t);
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_rqp].entry_get = dnx_data_ecgm_info_dropped_reason_rqp_entry_str_get;

    /* Keys */
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_rqp].nof_keys = 1;
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_rqp].keys[0].name = "index";
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_rqp].keys[0].doc = "this index mapped to the bit in RQP_DISCARD_REASONS";

    /* Values */
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_rqp].nof_values = 1;
    DNXC_DATA_ALLOC(submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_rqp].values, dnxc_data_value_t, submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_rqp].nof_values, "_dnx_data_ecgm_info_table_dropped_reason_rqp table values");
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_rqp].values[0].name = "reason";
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_rqp].values[0].type = "char *";
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_rqp].values[0].doc = "reason string";
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_rqp].values[0].offset = UTILEX_OFFSETOF(dnx_data_ecgm_info_dropped_reason_rqp_t, reason);

    /*
     * Table - dropped_reason_pqp
     */
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_pqp].name = "dropped_reason_pqp";
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_pqp].doc = "reasons for the dropped and rejected packets in PQP";
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_pqp].flags |= DNXC_DATA_F_TABLE;
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_pqp].size_of_values = sizeof(dnx_data_ecgm_info_dropped_reason_pqp_t);
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_pqp].entry_get = dnx_data_ecgm_info_dropped_reason_pqp_entry_str_get;

    /* Keys */
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_pqp].nof_keys = 1;
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_pqp].keys[0].name = "index";
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_pqp].keys[0].doc = "this index mapped to the bit in PQP_DISCARD_REASONS";

    /* Values */
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_pqp].nof_values = 1;
    DNXC_DATA_ALLOC(submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_pqp].values, dnxc_data_value_t, submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_pqp].nof_values, "_dnx_data_ecgm_info_table_dropped_reason_pqp table values");
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_pqp].values[0].name = "reason";
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_pqp].values[0].type = "char *";
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_pqp].values[0].doc = "reason string";
    submodule_data->tables[dnx_data_ecgm_info_table_dropped_reason_pqp].values[0].offset = UTILEX_OFFSETOF(dnx_data_ecgm_info_dropped_reason_pqp_t, reason);


exit:
    SHR_FUNC_EXIT;
}

/*
 * info features
 */
int
dnx_data_ecgm_info_feature_get(
    int unit,
    dnx_data_ecgm_info_feature_e feature)
{
    return dnxc_data_mgmt_feature_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_info, feature);
}

/*
 * info defines
 */
uint32
dnx_data_ecgm_info_fc_q_pair_vector_select_nof_bits_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_info, dnx_data_ecgm_info_define_fc_q_pair_vector_select_nof_bits);
}

uint32
dnx_data_ecgm_info_fc_q_pair_vector_nof_presented_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_info, dnx_data_ecgm_info_define_fc_q_pair_vector_nof_presented);
}

uint32
dnx_data_ecgm_info_fc_egr_if_vector_select_nof_bits_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_info, dnx_data_ecgm_info_define_fc_egr_if_vector_select_nof_bits);
}

uint32
dnx_data_ecgm_info_fc_egr_if_vector_nof_presented_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_info, dnx_data_ecgm_info_define_fc_egr_if_vector_nof_presented);
}

uint32
dnx_data_ecgm_info_nof_dropped_reasons_rqp_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_info, dnx_data_ecgm_info_define_nof_dropped_reasons_rqp);
}

uint32
dnx_data_ecgm_info_nof_dropped_reasons_pqp_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_info, dnx_data_ecgm_info_define_nof_dropped_reasons_pqp);
}

uint32
dnx_data_ecgm_info_nof_bits_in_pd_count_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_info, dnx_data_ecgm_info_define_nof_bits_in_pd_count);
}

/*
 * info tables
 */
/* Table Get */
const dnx_data_ecgm_info_dropped_reason_rqp_t *
dnx_data_ecgm_info_dropped_reason_rqp_get(
    int unit,
    int index)
{
    char *data;
    dnxc_data_table_t *table;

    /* Get table */
    table = dnxc_data_mgmt_table_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_info, dnx_data_ecgm_info_table_dropped_reason_rqp);
    /* Get data */
    data = dnxc_data_mgmt_table_data_get(unit, table, index, 0);
    return (const dnx_data_ecgm_info_dropped_reason_rqp_t *) data;

}

const dnx_data_ecgm_info_dropped_reason_pqp_t *
dnx_data_ecgm_info_dropped_reason_pqp_get(
    int unit,
    int index)
{
    char *data;
    dnxc_data_table_t *table;

    /* Get table */
    table = dnxc_data_mgmt_table_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_info, dnx_data_ecgm_info_table_dropped_reason_pqp);
    /* Get data */
    data = dnxc_data_mgmt_table_data_get(unit, table, index, 0);
    return (const dnx_data_ecgm_info_dropped_reason_pqp_t *) data;

}

/* Get value as str */
shr_error_e
dnx_data_ecgm_info_dropped_reason_rqp_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index)
{
    dnxc_data_table_t *table;
    const dnx_data_ecgm_info_dropped_reason_rqp_t *data;
    SHR_FUNC_INIT_VARS(unit);

    /* Get table */
    table = dnxc_data_mgmt_table_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_info, dnx_data_ecgm_info_table_dropped_reason_rqp);
    data = (const dnx_data_ecgm_info_dropped_reason_rqp_t *) dnxc_data_mgmt_table_data_diag_get(unit, table, key0, 0);
    switch (value_index)
    {
        case 0:
            sal_snprintf(buffer, DNXC_DATA_MGMT_MAX_TABLE_VALUE_LENGTH, "%s", data->reason == NULL ? "" : data->reason);
            break;
    }

    SHR_FUNC_EXIT;
}

shr_error_e
dnx_data_ecgm_info_dropped_reason_pqp_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index)
{
    dnxc_data_table_t *table;
    const dnx_data_ecgm_info_dropped_reason_pqp_t *data;
    SHR_FUNC_INIT_VARS(unit);

    /* Get table */
    table = dnxc_data_mgmt_table_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_info, dnx_data_ecgm_info_table_dropped_reason_pqp);
    data = (const dnx_data_ecgm_info_dropped_reason_pqp_t *) dnxc_data_mgmt_table_data_diag_get(unit, table, key0, 0);
    switch (value_index)
    {
        case 0:
            sal_snprintf(buffer, DNXC_DATA_MGMT_MAX_TABLE_VALUE_LENGTH, "%s", data->reason == NULL ? "" : data->reason);
            break;
    }

    SHR_FUNC_EXIT;
}

/* Table Info Get */
const dnxc_data_table_info_t *
dnx_data_ecgm_info_dropped_reason_rqp_info_get(
    int unit)
{

    /* Return table info */
    return dnxc_data_mgmt_table_info_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_info, dnx_data_ecgm_info_table_dropped_reason_rqp);

}

const dnxc_data_table_info_t *
dnx_data_ecgm_info_dropped_reason_pqp_info_get(
    int unit)
{

    /* Return table info */
    return dnxc_data_mgmt_table_info_get(unit, dnx_data_module_ecgm, dnx_data_ecgm_submodule_info, dnx_data_ecgm_info_table_dropped_reason_pqp);

}

/*
 * }
 */

shr_error_e
dnx_data_ecgm_init(
    int unit,
    dnxc_data_module_t *module_data)
{
    SHR_FUNC_INIT_VARS(unit);

    /* Data Struct Init */
    module_data->name = "ecgm";
    module_data->nof_submodules = _dnx_data_ecgm_submodule_nof;
    DNXC_DATA_ALLOC(module_data->submodules, dnxc_data_submodule_t, module_data->nof_submodules, "_dnxc_data ecgm submodules");

    /*
     * Init Submodule data
     */
    SHR_IF_ERR_EXIT(dnx_data_ecgm_general_init(unit, &module_data->submodules[dnx_data_ecgm_submodule_general]));
    SHR_IF_ERR_EXIT(dnx_data_ecgm_core_resources_init(unit, &module_data->submodules[dnx_data_ecgm_submodule_core_resources]));
    SHR_IF_ERR_EXIT(dnx_data_ecgm_port_resources_init(unit, &module_data->submodules[dnx_data_ecgm_submodule_port_resources]));
    SHR_IF_ERR_EXIT(dnx_data_ecgm_delete_fifo_init(unit, &module_data->submodules[dnx_data_ecgm_submodule_delete_fifo]));
    SHR_IF_ERR_EXIT(dnx_data_ecgm_info_init(unit, &module_data->submodules[dnx_data_ecgm_submodule_info]));
    /*
     * Attach device module
     */
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_jr2_a0(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_ecgm_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_jr2_b0(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_ecgm_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_jr2_b1(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_ecgm_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_j2c_a0(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_ecgm_attach(unit));
        SHR_IF_ERR_EXIT(j2c_a0_data_ecgm_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_j2c_a1(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_ecgm_attach(unit));
        SHR_IF_ERR_EXIT(j2c_a0_data_ecgm_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_q2a_a0(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_ecgm_attach(unit));
        SHR_IF_ERR_EXIT(q2a_a0_data_ecgm_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_q2a_b0(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_ecgm_attach(unit));
        SHR_IF_ERR_EXIT(q2a_a0_data_ecgm_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_q2a_b1(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_ecgm_attach(unit));
        SHR_IF_ERR_EXIT(q2a_a0_data_ecgm_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_j2p_a0(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_ecgm_attach(unit));
        SHR_IF_ERR_EXIT(j2p_a0_data_ecgm_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
    {
        SHR_EXIT();
    }

exit:
    SHR_FUNC_EXIT;
}
#undef BSL_LOG_MODULE
/* *INDENT-ON* */