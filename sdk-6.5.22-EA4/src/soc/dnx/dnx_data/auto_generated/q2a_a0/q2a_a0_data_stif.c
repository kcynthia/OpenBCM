/** \file q2a_a0_data_stif.c
 * 
 * DEVICE DATA - STIF
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
#define BSL_LOG_MODULE BSL_LS_BCMDNX_STAT
/*
 * INCLUDE FILES:
 * {
 */
#include <soc/dnx/dnx_data/auto_generated/dnx_data_internal_stif.h>
#include <bcm/stat.h>
#include <bcm_int/dnx/stat/stif/stif_mgmt.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_nif.h>
/*
 * }
 */

/*
 * FUNCTIONS:
 * {
 */
/*
 * Submodule: config
 */

/*
 * Features
 */
/**
 * \brief Pointer to function (per device) which set values for feature
 * 
 * \param [in] unit - Unit #
 * 
 * \return
 *     err - see shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
static shr_error_e
q2a_a0_dnx_data_stif_config_stif_report_disp_is_drop_with_mc_single_copy_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_stif;
    int submodule_index = dnx_data_stif_submodule_config;
    int feature_index = dnx_data_stif_config_stif_report_disp_is_drop_with_mc_single_copy;
    SHR_FUNC_INIT_VARS(unit);

    feature = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].features[feature_index];
    /* Set default value */
    feature->default_data = 1;

    /* Set value */
    feature->data = 1;

    /* Set data flags as supported */
    feature->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_feature_value_set(unit, feature));

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief Pointer to function (per device) which set values for feature
 * 
 * \param [in] unit - Unit #
 * 
 * \return
 *     err - see shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
static shr_error_e
q2a_a0_dnx_data_stif_config_mixing_ports_limitation_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_stif;
    int submodule_index = dnx_data_stif_submodule_config;
    int feature_index = dnx_data_stif_config_mixing_ports_limitation;
    SHR_FUNC_INIT_VARS(unit);

    feature = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].features[feature_index];
    /* Set default value */
    feature->default_data = 0;

    /* Set value */
    feature->data = 0;

    /* Set data flags as supported */
    feature->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_feature_value_set(unit, feature));

exit:
    SHR_FUNC_EXIT;
}

/*
 * Defines
 */
/*
 * Tables
 */
/*
 * Submodule: port
 */

/*
 * Features
 */
/*
 * Defines
 */
/**
 * \brief device level function which set define max_nof_instances
 * define info:
 * stif-nif port instances
 * 
 * \param [in] unit - Unit #
 * 
 * \return
 *     err - see shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
static shr_error_e
q2a_a0_dnx_data_stif_port_max_nof_instances_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_stif;
    int submodule_index = dnx_data_stif_submodule_port;
    int define_index = dnx_data_stif_port_define_max_nof_instances;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 2;

    /* Set value */
    define->data = 2;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define stif_ethu_select_size
 * define info:
 * used for dbal - size of stif ethu select in bits
 * 
 * \param [in] unit - Unit #
 * 
 * \return
 *     err - see shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
static shr_error_e
q2a_a0_dnx_data_stif_port_stif_ethu_select_size_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_stif;
    int submodule_index = dnx_data_stif_submodule_port;
    int define_index = dnx_data_stif_port_define_stif_ethu_select_size;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 2;

    /* Set value */
    define->data = 2;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define stif_lane_mapping_size
 * define info:
 * used for dbal - size of stif to lane bitmap in bits
 * 
 * \param [in] unit - Unit #
 * 
 * \return
 *     err - see shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
static shr_error_e
q2a_a0_dnx_data_stif_port_stif_lane_mapping_size_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_stif;
    int submodule_index = dnx_data_stif_submodule_port;
    int define_index = dnx_data_stif_port_define_stif_lane_mapping_size;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 4;

    /* Set value */
    define->data = 4;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/*
 * Tables
 */
/**
 * \brief device level function which set values for table ethu_id_stif_valid
 * Module - 'stif', Submodule - 'port', table - 'ethu_id_stif_valid'
 * stif-nif valid ethu ids for stif and their according hw value to be set
 * The function set relevant table structure in _dnx_data
 * 
 * \param [in] unit - Unit #
 * 
 * \return
 *     err - See shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
static shr_error_e
q2a_a0_dnx_data_stif_port_ethu_id_stif_valid_set(
    int unit)
{
    int ethu_id_index;
    dnx_data_stif_port_ethu_id_stif_valid_t *data, *default_data;
    dnxc_data_table_t *table;
    int module_index = dnx_data_module_stif;
    int submodule_index = dnx_data_stif_submodule_port;
    int table_index = dnx_data_stif_port_table_ethu_id_stif_valid;
    SHR_FUNC_INIT_VARS(unit);

    table = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].tables[table_index];
    /* Set data flags as supported */
    table->flags |= DNXC_DATA_F_SUPPORTED;

    /*
     * Set key sizes
     */
    table->keys[0].size = dnx_data_nif.eth.ethu_nof_get(unit);
    table->info_get.key_size[0] = dnx_data_nif.eth.ethu_nof_get(unit);

    /* Info - default values */
    table->values[0].default_val = "0";
    table->values[1].default_val = "0";
    /* Exit the function if the table size is zero */
    if (table->keys[0].size == 0 || table->info_get.key_size[0] == 0)
    {
        SHR_EXIT();
    }

    /* Allocate data buffer */
    DNXC_DATA_ALLOC(table->data, dnx_data_stif_port_ethu_id_stif_valid_t, (1 * (table->keys[0].size) + 1 /* to store default value */ ), "data of dnx_data_stif_port_table_ethu_id_stif_valid");

    /* Store Default Values */
    default_data = (dnx_data_stif_port_ethu_id_stif_valid_t *) dnxc_data_mgmt_table_data_get(unit, table, -1, -1);
    default_data->valid = 0;
    default_data->hw_select_value = 0;
    /* Set Default Values */
    for (ethu_id_index = 0; ethu_id_index < table->keys[0].size; ethu_id_index++)
    {
        data = (dnx_data_stif_port_ethu_id_stif_valid_t *) dnxc_data_mgmt_table_data_get(unit, table, ethu_id_index, 0);
        sal_memcpy(data, default_data, table->size_of_values);
    }
    /*
     * Set Values - Entries
     */
    if (0 < table->keys[0].size)
    {
        data = (dnx_data_stif_port_ethu_id_stif_valid_t *) dnxc_data_mgmt_table_data_get(unit, table, 0, 0);
        data->valid = 0;
        data->hw_select_value = 0;
    }
    if (1 < table->keys[0].size)
    {
        data = (dnx_data_stif_port_ethu_id_stif_valid_t *) dnxc_data_mgmt_table_data_get(unit, table, 1, 0);
        data->valid = 0;
        data->hw_select_value = 0;
    }
    if (2 < table->keys[0].size)
    {
        data = (dnx_data_stif_port_ethu_id_stif_valid_t *) dnxc_data_mgmt_table_data_get(unit, table, 2, 0);
        data->valid = 0;
        data->hw_select_value = 0;
    }
    if (3 < table->keys[0].size)
    {
        data = (dnx_data_stif_port_ethu_id_stif_valid_t *) dnxc_data_mgmt_table_data_get(unit, table, 3, 0);
        data->valid = 1;
        data->hw_select_value = 2;
    }
    if (4 < table->keys[0].size)
    {
        data = (dnx_data_stif_port_ethu_id_stif_valid_t *) dnxc_data_mgmt_table_data_get(unit, table, 4, 0);
        data->valid = 0;
        data->hw_select_value = 0;
    }

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_table_value_set(unit, table));


exit:
    SHR_FUNC_EXIT;
}

/*
 * Submodule: report
 */

/*
 * Features
 */
/**
 * \brief Pointer to function (per device) which set values for feature
 * 
 * \param [in] unit - Unit #
 * 
 * \return
 *     err - see shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
static shr_error_e
q2a_a0_dnx_data_stif_report_etpp_core_in_portmetadata_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_stif;
    int submodule_index = dnx_data_stif_submodule_report;
    int feature_index = dnx_data_stif_report_etpp_core_in_portmetadata;
    SHR_FUNC_INIT_VARS(unit);

    feature = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].features[feature_index];
    /* Set default value */
    feature->default_data = 1;

    /* Set value */
    feature->data = 1;

    /* Set data flags as supported */
    feature->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_feature_value_set(unit, feature));

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief Pointer to function (per device) which set values for feature
 * 
 * \param [in] unit - Unit #
 * 
 * \return
 *     err - see shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
static shr_error_e
q2a_a0_dnx_data_stif_report_stif_record_is_last_copy_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_stif;
    int submodule_index = dnx_data_stif_submodule_report;
    int feature_index = dnx_data_stif_report_stif_record_is_last_copy;
    SHR_FUNC_INIT_VARS(unit);

    feature = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].features[feature_index];
    /* Set default value */
    feature->default_data = 1;

    /* Set value */
    feature->data = 1;

    /* Set data flags as supported */
    feature->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_feature_value_set(unit, feature));

exit:
    SHR_FUNC_EXIT;
}

/*
 * Defines
 */
/*
 * Tables
 */
/*
 * Submodule: flow_control
 */

/*
 * Features
 */
/**
 * \brief Pointer to function (per device) which set values for feature
 * 
 * \param [in] unit - Unit #
 * 
 * \return
 *     err - see shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
static shr_error_e
q2a_a0_dnx_data_stif_flow_control_instance_0_must_be_on_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_stif;
    int submodule_index = dnx_data_stif_submodule_flow_control;
    int feature_index = dnx_data_stif_flow_control_instance_0_must_be_on;
    SHR_FUNC_INIT_VARS(unit);

    feature = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].features[feature_index];
    /* Set default value */
    feature->default_data = 0;

    /* Set value */
    feature->data = 0;

    /* Set data flags as supported */
    feature->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_feature_value_set(unit, feature));

exit:
    SHR_FUNC_EXIT;
}

/*
 * Defines
 */
/*
 * Tables
 */
/*
 * Device attach func
 */
/**
 * \brief Attach device to module - attach set function to data structure
 * 
 * \param [in] unit - Unit #
 * 
 * \return
 *     err - 
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
shr_error_e
q2a_a0_data_stif_attach(
    int unit)
{
    dnxc_data_module_t *module = NULL;
    dnxc_data_submodule_t *submodule = NULL;
    dnxc_data_define_t *define = NULL;
    dnxc_data_feature_t *feature = NULL;
    dnxc_data_table_t *table = NULL;
    int module_index = dnx_data_module_stif;
    int submodule_index = -1, data_index = -1;
    SHR_FUNC_INIT_VARS(unit);

    COMPILER_REFERENCE(define);
    COMPILER_REFERENCE(feature);
    COMPILER_REFERENCE(table);
    COMPILER_REFERENCE(submodule);
    COMPILER_REFERENCE(data_index);
    COMPILER_REFERENCE(submodule_index);
    module = &_dnxc_data[unit].modules[module_index];
    /*
     * Attach submodule: config
     */
    submodule_index = dnx_data_stif_submodule_config;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */

    /*
     * Attach features: 
     */
    data_index = dnx_data_stif_config_stif_report_disp_is_drop_with_mc_single_copy;
    feature = &submodule->features[data_index];
    feature->set = q2a_a0_dnx_data_stif_config_stif_report_disp_is_drop_with_mc_single_copy_set;
    data_index = dnx_data_stif_config_mixing_ports_limitation;
    feature = &submodule->features[data_index];
    feature->set = q2a_a0_dnx_data_stif_config_mixing_ports_limitation_set;

    /*
     * Attach tables: 
     */
    /*
     * Attach submodule: port
     */
    submodule_index = dnx_data_stif_submodule_port;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */
    data_index = dnx_data_stif_port_define_max_nof_instances;
    define = &submodule->defines[data_index];
    define->set = q2a_a0_dnx_data_stif_port_max_nof_instances_set;
    data_index = dnx_data_stif_port_define_stif_ethu_select_size;
    define = &submodule->defines[data_index];
    define->set = q2a_a0_dnx_data_stif_port_stif_ethu_select_size_set;
    data_index = dnx_data_stif_port_define_stif_lane_mapping_size;
    define = &submodule->defines[data_index];
    define->set = q2a_a0_dnx_data_stif_port_stif_lane_mapping_size_set;

    /*
     * Attach features: 
     */

    /*
     * Attach tables: 
     */
    data_index = dnx_data_stif_port_table_ethu_id_stif_valid;
    table = &submodule->tables[data_index];
    table->set = q2a_a0_dnx_data_stif_port_ethu_id_stif_valid_set;
    /*
     * Attach submodule: report
     */
    submodule_index = dnx_data_stif_submodule_report;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */

    /*
     * Attach features: 
     */
    data_index = dnx_data_stif_report_etpp_core_in_portmetadata;
    feature = &submodule->features[data_index];
    feature->set = q2a_a0_dnx_data_stif_report_etpp_core_in_portmetadata_set;
    data_index = dnx_data_stif_report_stif_record_is_last_copy;
    feature = &submodule->features[data_index];
    feature->set = q2a_a0_dnx_data_stif_report_stif_record_is_last_copy_set;

    /*
     * Attach tables: 
     */
    /*
     * Attach submodule: flow_control
     */
    submodule_index = dnx_data_stif_submodule_flow_control;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */

    /*
     * Attach features: 
     */
    data_index = dnx_data_stif_flow_control_instance_0_must_be_on;
    feature = &submodule->features[data_index];
    feature->set = q2a_a0_dnx_data_stif_flow_control_instance_0_must_be_on_set;

    /*
     * Attach tables: 
     */

    SHR_FUNC_EXIT;
}
#undef BSL_LOG_MODULE
/* *INDENT-ON* */