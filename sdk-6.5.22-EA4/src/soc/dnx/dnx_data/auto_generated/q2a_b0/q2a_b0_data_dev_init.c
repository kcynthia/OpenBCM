/** \file q2a_b0_data_dev_init.c
 * 
 * DEVICE DATA - DEV_INIT
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
#define BSL_LOG_MODULE BSL_LS_BCMDNX_INIT
/*
 * INCLUDE FILES:
 * {
 */
#include <soc/dnx/dnx_data/auto_generated/dnx_data_internal_dev_init.h>
#include <bcm_int/dnx/spb/spb.h>
#include <bcm_int/dnx/init/init.h>
#include <bcm_int/dnx/init/init_custom_funcs.h>
#include <shared/utilex/utilex_time_analyzer.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_fc.h>
#include <appl/reference/dnx/appl_ref_init_deinit.h>
/*
 * }
 */

/*
 * FUNCTIONS:
 * {
 */
/*
 * Submodule: time
 */

/*
 * Features
 */
/*
 * Defines
 */
/**
 * \brief device level function which set define init_total_thresh
 * define info:
 * Default time threshold (in microseconds) for the overall time that the BCM Init takes
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
q2a_b0_dnx_data_dev_init_time_init_total_thresh_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_dev_init;
    int submodule_index = dnx_data_dev_init_submodule_time;
    int define_index = dnx_data_dev_init_time_define_init_total_thresh;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 17227200;

    /* Set value */
    define->data = 17227200;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define appl_init_total_thresh
 * define info:
 * Default time threshold (in microseconds) for the overall time that the APPL Init takes
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
q2a_b0_dnx_data_dev_init_time_appl_init_total_thresh_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_dev_init;
    int submodule_index = dnx_data_dev_init_submodule_time;
    int define_index = dnx_data_dev_init_time_define_appl_init_total_thresh;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 19380000;

    /* Set value */
    define->data = 19380000;

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
 * \brief device level function which set values for table step_thresh
 * Module - 'dev_init', Submodule - 'time', table - 'step_thresh'
 * Time threshold (in microseconds) for the time each step is taking during BCM init
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
q2a_b0_dnx_data_dev_init_time_step_thresh_set(
    int unit)
{
    int step_id_index;
    dnx_data_dev_init_time_step_thresh_t *data, *default_data;
    dnxc_data_table_t *table;
    int module_index = dnx_data_module_dev_init;
    int submodule_index = dnx_data_dev_init_submodule_time;
    int table_index = dnx_data_dev_init_time_table_step_thresh;
    SHR_FUNC_INIT_VARS(unit);

    table = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].tables[table_index];
    /* Set data flags as supported */
    table->flags |= DNXC_DATA_F_SUPPORTED;

    /*
     * Set key sizes
     */
    table->keys[0].size = DNX_INIT_STEP_COUNT;
    table->info_get.key_size[0] = DNX_INIT_STEP_COUNT;

    /* Info - default values */
    table->values[0].default_val = "BCM_INIT_STEP_TIME_THRESH_DEFAULT";
    /* Exit the function if the table size is zero */
    if (table->keys[0].size == 0 || table->info_get.key_size[0] == 0)
    {
        SHR_EXIT();
    }

    /* Allocate data buffer */
    DNXC_DATA_ALLOC(table->data, dnx_data_dev_init_time_step_thresh_t, (1 * (table->keys[0].size) + 1 /* to store default value */ ), "data of dnx_data_dev_init_time_table_step_thresh");

    /* Store Default Values */
    default_data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, -1, -1);
    default_data->value = BCM_INIT_STEP_TIME_THRESH_DEFAULT;
    /* Set Default Values */
    for (step_id_index = 0; step_id_index < table->keys[0].size; step_id_index++)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, step_id_index, 0);
        sal_memcpy(data, default_data, table->size_of_values);
    }
    /*
     * Set Values - Entries
     */
    if (DNX_INIT_STEP_DBAL < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_DBAL, 0);
        data->value = 717600;
    }
    if (DNX_INIT_STEP_TUNE < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_TUNE, 0);
        data->value = 555000;
    }
    if (DNX_INIT_STEP_TM_MODULES < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_TM_MODULES, 0);
        data->value = 622800;
    }
    if (DNX_INIT_STEP_PP_GENERAL < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_PP_GENERAL, 0);
        data->value = 1549200;
    }
    if (DNX_INIT_MDB < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_MDB, 0);
        data->value = 597600;
    }
    if (DNX_INIT_STEP_PEMLA < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_PEMLA, 0);
        data->value = 6450000;
    }
    if (DNX_INIT_STEP_MEM_DEFAULTS < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_MEM_DEFAULTS, 0);
        data->value = 3145200;
    }
    if (DNX_INIT_STEP_ALGO < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_ALGO, 0);
        data->value = 292800;
    }
    if (DNX_INIT_STEP_SOFT_RESET < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_SOFT_RESET, 0);
        data->value = 151200;
    }
    if (DNX_INIT_STEP_DBAL_ACCESS_MDB < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_DBAL_ACCESS_MDB, 0);
        data->value = 345600;
    }
    if (DNX_INIT_STEP_DBAL_TABLES < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_DBAL_TABLES, 0);
        data->value = 344400;
    }
    if (DNX_INIT_STEP_PP_MODULES < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_PP_MODULES, 0);
        data->value = 2005200;
    }
    if (DNX_INIT_STEP_SW_STATE < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_SW_STATE, 0);
        data->value = 643200;
    }
    if (DNX_INIT_STEP_SW_STATE_GENERAL < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_SW_STATE_GENERAL, 0);
        data->value = 391000;
    }
    if (DNX_INIT_STEP_AUX_ACCESS < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_AUX_ACCESS, 0);
        data->value = 792000;
    }
    if (DNX_INIT_STEP_SOFT_INIT < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_SOFT_INIT, 0);
        data->value = 115200;
    }
    if (DNX_INIT_STEP_DYN_PORT_PROP_SET < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_DYN_PORT_PROP_SET, 0);
        data->value = 512400;
    }
    if (DNX_INIT_STEP_ACCESS < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_ACCESS, 0);
        data->value = 157200;
    }
    if (DNX_INIT_STEP_PRE_SOFT_INIT < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_PRE_SOFT_INIT, 0);
        data->value = 3152400;
    }
    if (DNX_INIT_STEP_APPL_PROPERTIES < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_APPL_PROPERTIES, 0);
        data->value = 2546400;
    }
    if (DNX_INIT_STEP_COMMON_MODULES < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_COMMON_MODULES, 0);
        data->value = 8304000;
    }
    if (DNX_INIT_STEP_DNX_DATA < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_DNX_DATA, 0);
        data->value = 756000;
    }
    if (DNX_INIT_STEP_DYN_PORT_ADD < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_DYN_PORT_ADD, 0);
        data->value = 2049600;
    }
    if (DNX_INIT_STEP_FIELD < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_FIELD, 0);
        data->value = 228000;
    }
    if (DNX_INIT_STEP_ALGO_LIF < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, DNX_INIT_STEP_ALGO_LIF, 0);
        data->value = 450000;
    }

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_table_value_set(unit, table));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set values for table appl_step_thresh
 * Module - 'dev_init', Submodule - 'time', table - 'appl_step_thresh'
 * Time threshold (in microseconds) for the time each step is taking during APPL init
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
q2a_b0_dnx_data_dev_init_time_appl_step_thresh_set(
    int unit)
{
    int step_id_index;
    dnx_data_dev_init_time_appl_step_thresh_t *data, *default_data;
    dnxc_data_table_t *table;
    int module_index = dnx_data_module_dev_init;
    int submodule_index = dnx_data_dev_init_submodule_time;
    int table_index = dnx_data_dev_init_time_table_appl_step_thresh;
    SHR_FUNC_INIT_VARS(unit);

    table = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].tables[table_index];
    /* Set data flags as supported */
    table->flags |= DNXC_DATA_F_SUPPORTED;

    /*
     * Set key sizes
     */
    table->keys[0].size = APPL_DNX_INIT_STEP_COUNT;
    table->info_get.key_size[0] = APPL_DNX_INIT_STEP_COUNT;

    /* Info - default values */
    table->values[0].default_val = "APPL_DNX_INIT_STEP_TIME_THRESH_DEFAULT";
    /* Exit the function if the table size is zero */
    if (table->keys[0].size == 0 || table->info_get.key_size[0] == 0)
    {
        SHR_EXIT();
    }

    /* Allocate data buffer */
    DNXC_DATA_ALLOC(table->data, dnx_data_dev_init_time_appl_step_thresh_t, (1 * (table->keys[0].size) + 1 /* to store default value */ ), "data of dnx_data_dev_init_time_table_appl_step_thresh");

    /* Store Default Values */
    default_data = (dnx_data_dev_init_time_appl_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, -1, -1);
    default_data->value = APPL_DNX_INIT_STEP_TIME_THRESH_DEFAULT;
    /* Set Default Values */
    for (step_id_index = 0; step_id_index < table->keys[0].size; step_id_index++)
    {
        data = (dnx_data_dev_init_time_appl_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, step_id_index, 0);
        sal_memcpy(data, default_data, table->size_of_values);
    }
    /*
     * Set Values - Entries
     */
    if (APPL_DNX_STEP_QOS < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_appl_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, APPL_DNX_STEP_QOS, 0);
        data->value = 339600;
    }
    if (APPL_DNX_STEP_SYS_PORTS < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_appl_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, APPL_DNX_STEP_SYS_PORTS, 0);
        data->value = 288000;
    }
    if (APPL_DNX_STEP_VLAN < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_appl_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, APPL_DNX_STEP_VLAN, 0);
        data->value = 614400;
    }
    if (APPL_DNX_STEP_SDK < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_appl_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, APPL_DNX_STEP_SDK, 0);
        data->value = 17294400;
    }
    if (APPL_DNX_STEP_E2E_SCHEME < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_appl_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, APPL_DNX_STEP_E2E_SCHEME, 0);
        data->value = 177600;
    }
    if (APPL_DNX_STEP_LINKSCAN < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_appl_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, APPL_DNX_STEP_LINKSCAN, 0);
        data->value = 258000;
    }
    if (APPL_DNX_STEP_APPS < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_appl_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, APPL_DNX_STEP_APPS, 0);
        data->value = 2127600;
    }
    if (APPL_DNX_STEP_OAM < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_appl_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, APPL_DNX_STEP_OAM, 0);
        data->value = 234000;
    }
    if (APPL_DNX_STEP_ITMH_PPH < table->keys[0].size)
    {
        data = (dnx_data_dev_init_time_appl_step_thresh_t *) dnxc_data_mgmt_table_data_get(unit, table, APPL_DNX_STEP_ITMH_PPH, 0);
        data->value = 171600;
    }

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_table_value_set(unit, table));


exit:
    SHR_FUNC_EXIT;
}

/*
 * Submodule: general
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
q2a_b0_dnx_data_dev_init_general_network_header_termination_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_dev_init;
    int submodule_index = dnx_data_dev_init_submodule_general;
    int feature_index = dnx_data_dev_init_general_network_header_termination;
    SHR_FUNC_INIT_VARS(unit);

    feature = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].features[feature_index];
    /* Set default value */
    feature->default_data = dnx_data_headers.system_headers.system_headers_mode_get(unit)==dnx_data_headers.system_headers.system_headers_mode_jericho2_get(unit)?1:0;

    /* Set value */
    feature->data = dnx_data_headers.system_headers.system_headers_mode_get(unit)==dnx_data_headers.system_headers.system_headers_mode_jericho2_get(unit)?1:0;

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
q2a_b0_data_dev_init_attach(
    int unit)
{
    dnxc_data_module_t *module = NULL;
    dnxc_data_submodule_t *submodule = NULL;
    dnxc_data_define_t *define = NULL;
    dnxc_data_feature_t *feature = NULL;
    dnxc_data_table_t *table = NULL;
    int module_index = dnx_data_module_dev_init;
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
     * Attach submodule: time
     */
    submodule_index = dnx_data_dev_init_submodule_time;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */
    data_index = dnx_data_dev_init_time_define_init_total_thresh;
    define = &submodule->defines[data_index];
    define->set = q2a_b0_dnx_data_dev_init_time_init_total_thresh_set;
    data_index = dnx_data_dev_init_time_define_appl_init_total_thresh;
    define = &submodule->defines[data_index];
    define->set = q2a_b0_dnx_data_dev_init_time_appl_init_total_thresh_set;

    /*
     * Attach features: 
     */

    /*
     * Attach tables: 
     */
    data_index = dnx_data_dev_init_time_table_step_thresh;
    table = &submodule->tables[data_index];
    table->set = q2a_b0_dnx_data_dev_init_time_step_thresh_set;
    data_index = dnx_data_dev_init_time_table_appl_step_thresh;
    table = &submodule->tables[data_index];
    table->set = q2a_b0_dnx_data_dev_init_time_appl_step_thresh_set;
    /*
     * Attach submodule: general
     */
    submodule_index = dnx_data_dev_init_submodule_general;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */

    /*
     * Attach features: 
     */
    data_index = dnx_data_dev_init_general_network_header_termination;
    feature = &submodule->features[data_index];
    feature->set = q2a_b0_dnx_data_dev_init_general_network_header_termination_set;

    /*
     * Attach tables: 
     */

    SHR_FUNC_EXIT;
}
#undef BSL_LOG_MODULE
/* *INDENT-ON* */