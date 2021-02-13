/** \file dnx_data_lane_map.c
 * 
 * MODULE DEVICE DATA - LANE_MAP
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
#define BSL_LOG_MODULE BSL_LS_BCMDNX_PORT
/*
 * INCLUDE FILES:
 * {
 */
#include <soc/dnx/dnx_data/auto_generated/dnx_data_internal_lane_map.h>
/*
 * }
 */

/*
 * Extern per device attach function
 */
#ifdef BCM_DNX2_SUPPORT
/*{*/
extern shr_error_e jr2_a0_data_lane_map_attach(
    int unit);
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
/*
 * SUBMODULE - NIF:
 * {
 */
/*
 * nif init
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
dnx_data_lane_map_nif_init(
    int unit,
    dnxc_data_submodule_t *submodule_data)
{
    SHR_FUNC_INIT_VARS(unit);

    submodule_data->name = "nif";
    submodule_data->doc = "lane mapping attributes for NIF";
    /*
     * Features
     */
    submodule_data->nof_features = _dnx_data_lane_map_nif_feature_nof;
    DNXC_DATA_ALLOC(submodule_data->features, dnxc_data_feature_t,  submodule_data->nof_features, "_dnxc_data lane_map nif features");

    /*
     * Defines
     */
    submodule_data->nof_defines = _dnx_data_lane_map_nif_define_nof;
    DNXC_DATA_ALLOC(submodule_data->defines, dnxc_data_define_t, submodule_data->nof_defines, "_dnxc_data lane_map nif defines");

    /*
     * Tables
     */
    submodule_data->nof_tables = _dnx_data_lane_map_nif_table_nof;
    DNXC_DATA_ALLOC(submodule_data->tables, dnxc_data_table_t, submodule_data->nof_tables, "_dnxc_data lane_map nif tables");

    /*
     * Table - mapping
     */
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].name = "mapping";
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].doc = "lane to serdes mapping info for NIF ports";
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].flags |= DNXC_DATA_F_TABLE;
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].size_of_values = sizeof(dnx_data_lane_map_nif_mapping_t);
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].entry_get = dnx_data_lane_map_nif_mapping_entry_str_get;

    /* Keys */
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].nof_keys = 1;
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].keys[0].name = "lane_id";
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].keys[0].doc = "logical lane id";

    /* Values */
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].nof_values = 2;
    DNXC_DATA_ALLOC(submodule_data->tables[dnx_data_lane_map_nif_table_mapping].values, dnxc_data_value_t, submodule_data->tables[dnx_data_lane_map_nif_table_mapping].nof_values, "_dnx_data_lane_map_nif_table_mapping table values");
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].values[0].name = "serdes_rx_id";
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].values[0].type = "int";
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].values[0].doc = "Rx Serdes lane id";
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].values[0].offset = UTILEX_OFFSETOF(dnx_data_lane_map_nif_mapping_t, serdes_rx_id);
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].values[1].name = "serdes_tx_id";
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].values[1].type = "int";
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].values[1].doc = "Tx Serdes lane id";
    submodule_data->tables[dnx_data_lane_map_nif_table_mapping].values[1].offset = UTILEX_OFFSETOF(dnx_data_lane_map_nif_mapping_t, serdes_tx_id);


exit:
    SHR_FUNC_EXIT;
}

/*
 * nif features
 */
int
dnx_data_lane_map_nif_feature_get(
    int unit,
    dnx_data_lane_map_nif_feature_e feature)
{
    return dnxc_data_mgmt_feature_data_get(unit, dnx_data_module_lane_map, dnx_data_lane_map_submodule_nif, feature);
}

/*
 * nif defines
 */
/*
 * nif tables
 */
/* Table Get */
const dnx_data_lane_map_nif_mapping_t *
dnx_data_lane_map_nif_mapping_get(
    int unit,
    int lane_id)
{
    char *data;
    dnxc_data_table_t *table;

    /* Get table */
    table = dnxc_data_mgmt_table_get(unit, dnx_data_module_lane_map, dnx_data_lane_map_submodule_nif, dnx_data_lane_map_nif_table_mapping);
    /* Get data */
    data = dnxc_data_mgmt_table_data_get(unit, table, lane_id, 0);
    return (const dnx_data_lane_map_nif_mapping_t *) data;

}

/* Get value as str */
shr_error_e
dnx_data_lane_map_nif_mapping_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index)
{
    dnxc_data_table_t *table;
    const dnx_data_lane_map_nif_mapping_t *data;
    SHR_FUNC_INIT_VARS(unit);

    /* Get table */
    table = dnxc_data_mgmt_table_get(unit, dnx_data_module_lane_map, dnx_data_lane_map_submodule_nif, dnx_data_lane_map_nif_table_mapping);
    data = (const dnx_data_lane_map_nif_mapping_t *) dnxc_data_mgmt_table_data_diag_get(unit, table, key0, 0);
    switch (value_index)
    {
        case 0:
            sal_snprintf(buffer, DNXC_DATA_MGMT_MAX_TABLE_VALUE_LENGTH, "%d", data->serdes_rx_id);
            break;
        case 1:
            sal_snprintf(buffer, DNXC_DATA_MGMT_MAX_TABLE_VALUE_LENGTH, "%d", data->serdes_tx_id);
            break;
    }

    SHR_FUNC_EXIT;
}

/* Table Info Get */
const dnxc_data_table_info_t *
dnx_data_lane_map_nif_mapping_info_get(
    int unit)
{

    /* Return table info */
    return dnxc_data_mgmt_table_info_get(unit, dnx_data_module_lane_map, dnx_data_lane_map_submodule_nif, dnx_data_lane_map_nif_table_mapping);

}

/*
 * }
 */

/*
 * SUBMODULE - FABRIC:
 * {
 */
/*
 * fabric init
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
dnx_data_lane_map_fabric_init(
    int unit,
    dnxc_data_submodule_t *submodule_data)
{
    SHR_FUNC_INIT_VARS(unit);

    submodule_data->name = "fabric";
    submodule_data->doc = "lane mapping attributes for Farbic";
    /*
     * Features
     */
    submodule_data->nof_features = _dnx_data_lane_map_fabric_feature_nof;
    DNXC_DATA_ALLOC(submodule_data->features, dnxc_data_feature_t,  submodule_data->nof_features, "_dnxc_data lane_map fabric features");

    /*
     * Defines
     */
    submodule_data->nof_defines = _dnx_data_lane_map_fabric_define_nof;
    DNXC_DATA_ALLOC(submodule_data->defines, dnxc_data_define_t, submodule_data->nof_defines, "_dnxc_data lane_map fabric defines");

    submodule_data->defines[dnx_data_lane_map_fabric_define_resolution].name = "resolution";
    submodule_data->defines[dnx_data_lane_map_fabric_define_resolution].doc = "Nof links which fabric lane mapping is allowed.";
    /* Set data type flag */
    submodule_data->defines[dnx_data_lane_map_fabric_define_resolution].flags |= DNXC_DATA_F_DEFINE;

    /*
     * Tables
     */
    submodule_data->nof_tables = _dnx_data_lane_map_fabric_table_nof;
    DNXC_DATA_ALLOC(submodule_data->tables, dnxc_data_table_t, submodule_data->nof_tables, "_dnxc_data lane_map fabric tables");

    /*
     * Table - mapping
     */
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].name = "mapping";
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].doc = "lane to serdes mapping info for Fabric links";
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].flags |= DNXC_DATA_F_TABLE;
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].size_of_values = sizeof(dnx_data_lane_map_fabric_mapping_t);
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].entry_get = dnx_data_lane_map_fabric_mapping_entry_str_get;

    /* Keys */
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].nof_keys = 1;
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].keys[0].name = "lane_id";
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].keys[0].doc = "logical lane id";

    /* Values */
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].nof_values = 2;
    DNXC_DATA_ALLOC(submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].values, dnxc_data_value_t, submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].nof_values, "_dnx_data_lane_map_fabric_table_mapping table values");
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].values[0].name = "serdes_rx_id";
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].values[0].type = "int";
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].values[0].doc = "Rx Serdes lane id";
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].values[0].offset = UTILEX_OFFSETOF(dnx_data_lane_map_fabric_mapping_t, serdes_rx_id);
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].values[1].name = "serdes_tx_id";
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].values[1].type = "int";
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].values[1].doc = "Tx Serdes lane id";
    submodule_data->tables[dnx_data_lane_map_fabric_table_mapping].values[1].offset = UTILEX_OFFSETOF(dnx_data_lane_map_fabric_mapping_t, serdes_tx_id);


exit:
    SHR_FUNC_EXIT;
}

/*
 * fabric features
 */
int
dnx_data_lane_map_fabric_feature_get(
    int unit,
    dnx_data_lane_map_fabric_feature_e feature)
{
    return dnxc_data_mgmt_feature_data_get(unit, dnx_data_module_lane_map, dnx_data_lane_map_submodule_fabric, feature);
}

/*
 * fabric defines
 */
uint32
dnx_data_lane_map_fabric_resolution_get(
    int unit)
{
    return dnxc_data_mgmt_define_data_get(unit, dnx_data_module_lane_map, dnx_data_lane_map_submodule_fabric, dnx_data_lane_map_fabric_define_resolution);
}

/*
 * fabric tables
 */
/* Table Get */
const dnx_data_lane_map_fabric_mapping_t *
dnx_data_lane_map_fabric_mapping_get(
    int unit,
    int lane_id)
{
    char *data;
    dnxc_data_table_t *table;

    /* Get table */
    table = dnxc_data_mgmt_table_get(unit, dnx_data_module_lane_map, dnx_data_lane_map_submodule_fabric, dnx_data_lane_map_fabric_table_mapping);
    /* Get data */
    data = dnxc_data_mgmt_table_data_get(unit, table, lane_id, 0);
    return (const dnx_data_lane_map_fabric_mapping_t *) data;

}

/* Get value as str */
shr_error_e
dnx_data_lane_map_fabric_mapping_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index)
{
    dnxc_data_table_t *table;
    const dnx_data_lane_map_fabric_mapping_t *data;
    SHR_FUNC_INIT_VARS(unit);

    /* Get table */
    table = dnxc_data_mgmt_table_get(unit, dnx_data_module_lane_map, dnx_data_lane_map_submodule_fabric, dnx_data_lane_map_fabric_table_mapping);
    data = (const dnx_data_lane_map_fabric_mapping_t *) dnxc_data_mgmt_table_data_diag_get(unit, table, key0, 0);
    switch (value_index)
    {
        case 0:
            sal_snprintf(buffer, DNXC_DATA_MGMT_MAX_TABLE_VALUE_LENGTH, "%d", data->serdes_rx_id);
            break;
        case 1:
            sal_snprintf(buffer, DNXC_DATA_MGMT_MAX_TABLE_VALUE_LENGTH, "%d", data->serdes_tx_id);
            break;
    }

    SHR_FUNC_EXIT;
}

/* Table Info Get */
const dnxc_data_table_info_t *
dnx_data_lane_map_fabric_mapping_info_get(
    int unit)
{

    /* Return table info */
    return dnxc_data_mgmt_table_info_get(unit, dnx_data_module_lane_map, dnx_data_lane_map_submodule_fabric, dnx_data_lane_map_fabric_table_mapping);

}

/*
 * }
 */

/*
 * SUBMODULE - ILKN:
 * {
 */
/*
 * ilkn init
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
dnx_data_lane_map_ilkn_init(
    int unit,
    dnxc_data_submodule_t *submodule_data)
{
    SHR_FUNC_INIT_VARS(unit);

    submodule_data->name = "ilkn";
    submodule_data->doc = "logical lane re-mapping attributes for ILKN";
    /*
     * Features
     */
    submodule_data->nof_features = _dnx_data_lane_map_ilkn_feature_nof;
    DNXC_DATA_ALLOC(submodule_data->features, dnxc_data_feature_t,  submodule_data->nof_features, "_dnxc_data lane_map ilkn features");

    /*
     * Defines
     */
    submodule_data->nof_defines = _dnx_data_lane_map_ilkn_define_nof;
    DNXC_DATA_ALLOC(submodule_data->defines, dnxc_data_define_t, submodule_data->nof_defines, "_dnxc_data lane_map ilkn defines");

    /*
     * Tables
     */
    submodule_data->nof_tables = _dnx_data_lane_map_ilkn_table_nof;
    DNXC_DATA_ALLOC(submodule_data->tables, dnxc_data_table_t, submodule_data->nof_tables, "_dnxc_data lane_map ilkn tables");

    /*
     * Table - remapping
     */
    submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].name = "remapping";
    submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].doc = "Ilkn remapping info";
    submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].flags |= DNXC_DATA_F_TABLE;
    submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].size_of_values = sizeof(dnx_data_lane_map_ilkn_remapping_t);
    submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].entry_get = dnx_data_lane_map_ilkn_remapping_entry_str_get;

    /* Keys */
    submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].nof_keys = 2;
    submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].keys[0].name = "lane_id";
    submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].keys[0].doc = "logical lane id";
    submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].keys[1].name = "ilkn_id";
    submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].keys[1].doc = "ILKN port ID";

    /* Values */
    submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].nof_values = 1;
    DNXC_DATA_ALLOC(submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].values, dnxc_data_value_t, submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].nof_values, "_dnx_data_lane_map_ilkn_table_remapping table values");
    submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].values[0].name = "ilkn_lane_id";
    submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].values[0].type = "int";
    submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].values[0].doc = "Ilkn lane ID after remapping.";
    submodule_data->tables[dnx_data_lane_map_ilkn_table_remapping].values[0].offset = UTILEX_OFFSETOF(dnx_data_lane_map_ilkn_remapping_t, ilkn_lane_id);


exit:
    SHR_FUNC_EXIT;
}

/*
 * ilkn features
 */
int
dnx_data_lane_map_ilkn_feature_get(
    int unit,
    dnx_data_lane_map_ilkn_feature_e feature)
{
    return dnxc_data_mgmt_feature_data_get(unit, dnx_data_module_lane_map, dnx_data_lane_map_submodule_ilkn, feature);
}

/*
 * ilkn defines
 */
/*
 * ilkn tables
 */
/* Table Get */
const dnx_data_lane_map_ilkn_remapping_t *
dnx_data_lane_map_ilkn_remapping_get(
    int unit,
    int lane_id,
    int ilkn_id)
{
    char *data;
    dnxc_data_table_t *table;

    /* Get table */
    table = dnxc_data_mgmt_table_get(unit, dnx_data_module_lane_map, dnx_data_lane_map_submodule_ilkn, dnx_data_lane_map_ilkn_table_remapping);
    /* Get data */
    data = dnxc_data_mgmt_table_data_get(unit, table, lane_id, ilkn_id);
    return (const dnx_data_lane_map_ilkn_remapping_t *) data;

}

/* Get value as str */
shr_error_e
dnx_data_lane_map_ilkn_remapping_entry_str_get(
    int unit,
    char *buffer,
    int key0,
    int key1,
    int value_index)
{
    dnxc_data_table_t *table;
    const dnx_data_lane_map_ilkn_remapping_t *data;
    SHR_FUNC_INIT_VARS(unit);

    /* Get table */
    table = dnxc_data_mgmt_table_get(unit, dnx_data_module_lane_map, dnx_data_lane_map_submodule_ilkn, dnx_data_lane_map_ilkn_table_remapping);
    data = (const dnx_data_lane_map_ilkn_remapping_t *) dnxc_data_mgmt_table_data_diag_get(unit, table, key0, key1);
    switch (value_index)
    {
        case 0:
            sal_snprintf(buffer, DNXC_DATA_MGMT_MAX_TABLE_VALUE_LENGTH, "%d", data->ilkn_lane_id);
            break;
    }

    SHR_FUNC_EXIT;
}

/* Table Info Get */
const dnxc_data_table_info_t *
dnx_data_lane_map_ilkn_remapping_info_get(
    int unit)
{

    /* Return table info */
    return dnxc_data_mgmt_table_info_get(unit, dnx_data_module_lane_map, dnx_data_lane_map_submodule_ilkn, dnx_data_lane_map_ilkn_table_remapping);

}

/*
 * }
 */

shr_error_e
dnx_data_lane_map_init(
    int unit,
    dnxc_data_module_t *module_data)
{
    SHR_FUNC_INIT_VARS(unit);

    /* Data Struct Init */
    module_data->name = "lane_map";
    module_data->nof_submodules = _dnx_data_lane_map_submodule_nof;
    DNXC_DATA_ALLOC(module_data->submodules, dnxc_data_submodule_t, module_data->nof_submodules, "_dnxc_data lane_map submodules");

    /*
     * Init Submodule data
     */
    SHR_IF_ERR_EXIT(dnx_data_lane_map_nif_init(unit, &module_data->submodules[dnx_data_lane_map_submodule_nif]));
    SHR_IF_ERR_EXIT(dnx_data_lane_map_fabric_init(unit, &module_data->submodules[dnx_data_lane_map_submodule_fabric]));
    SHR_IF_ERR_EXIT(dnx_data_lane_map_ilkn_init(unit, &module_data->submodules[dnx_data_lane_map_submodule_ilkn]));
    /*
     * Attach device module
     */
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_jr2_a0(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_lane_map_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_jr2_b0(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_lane_map_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_jr2_b1(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_lane_map_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_j2c_a0(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_lane_map_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_j2c_a1(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_lane_map_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_q2a_a0(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_lane_map_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_q2a_b0(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_lane_map_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_q2a_b1(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_lane_map_attach(unit));
    }
    else
/*}*/
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
/*{*/
    if (dnxc_data_mgmt_is_j2p_a0(unit))
    {
        SHR_IF_ERR_EXIT(jr2_a0_data_lane_map_attach(unit));
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