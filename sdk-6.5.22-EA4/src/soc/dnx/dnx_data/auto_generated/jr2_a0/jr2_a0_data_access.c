/** \file jr2_a0_data_access.c
 * 
 * DEVICE DATA - ACCESS
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
#define BSL_LOG_MODULE BSL_LS_BCMDNX_ACCESSDNX
/*
 * INCLUDE FILES:
 * {
 */
#include <soc/dnx/dnx_data/auto_generated/dnx_data_internal_access.h>
/*
 * }
 */

/*
 * FUNCTIONS:
 * {
 */
/*
 * Submodule: mdio
 */

/*
 * Features
 */
/*
 * Defines
 */
/**
 * \brief device level function which set define nof_pms_per_ring
 * define info:
 * Number of Fabric PMs per MDIO ring.
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
jr2_a0_dnx_data_access_mdio_nof_pms_per_ring_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_access;
    int submodule_index = dnx_data_access_submodule_mdio;
    int define_index = dnx_data_access_mdio_define_nof_pms_per_ring;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = dnx_data_fabric.blocks.nof_pms_get(unit);

    /* Set value */
    define->data = dnx_data_fabric.blocks.nof_pms_get(unit);

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define ring_offset
 * define info:
 * Offset for first fabric ring.
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
jr2_a0_dnx_data_access_mdio_ring_offset_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_access;
    int submodule_index = dnx_data_access_submodule_mdio;
    int define_index = dnx_data_access_mdio_define_ring_offset;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 5;

    /* Set value */
    define->data = 5;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set numeric ext_divisor
 * numeric info:
 * external MDIO clock rate divisor
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
jr2_a0_dnx_data_access_mdio_ext_divisor_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_access;
    int submodule_index = dnx_data_access_submodule_mdio;
    int define_index = dnx_data_access_mdio_define_ext_divisor;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 14;

    /* Set value */
    define->data = 14;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;
    /* Property */
    define->property.name = spn_RATE_EXT_MDIO_DIVISOR;
    define->property.doc = 
        "\n"
        "Configure external MDIO clock rate divisor\n"
        "ext_mdio_divisor= 0~255\n"
        "Default: -1\n"
        "\n"
    ;
    define->property.method = dnxc_data_property_method_range;
    define->property.method_str = "range";
    define->property.range_min = 0;
    define->property.range_max = 255;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));

    SHR_IF_ERR_EXIT(dnxc_data_mgmt_property_read(unit, &define->property, -1, &define->data));
    /* Set data flags as property */
    define->flags |= (DNXC_DATA_F_PROPERTY);

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set numeric int_divisor
 * numeric info:
 * internal MDIO clock rate divisor
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
jr2_a0_dnx_data_access_mdio_int_divisor_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_access;
    int submodule_index = dnx_data_access_submodule_mdio;
    int define_index = dnx_data_access_mdio_define_int_divisor;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 50;

    /* Set value */
    define->data = 50;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;
    /* Property */
    define->property.name = spn_RATE_INT_MDIO_DIVISOR;
    define->property.doc = 
        "\n"
        "Configure internal MDIO clock rate divisor\n"
        "int_mdio_divisor= 0~255\n"
        "Default: -1\n"
        "\n"
    ;
    define->property.method = dnxc_data_property_method_range;
    define->property.method_str = "range";
    define->property.range_min = 0;
    define->property.range_max = 255;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));

    SHR_IF_ERR_EXIT(dnxc_data_mgmt_property_read(unit, &define->property, -1, &define->data));
    /* Set data flags as property */
    define->flags |= (DNXC_DATA_F_PROPERTY);

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set numeric int_div_out_delay
 * numeric info:
 * number of clock delay between the rising edge of MDC and the starting data of MDIO for internal divisor
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
jr2_a0_dnx_data_access_mdio_int_div_out_delay_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_access;
    int submodule_index = dnx_data_access_submodule_mdio;
    int define_index = dnx_data_access_mdio_define_int_div_out_delay;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 25;

    /* Set value */
    define->data = 25;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;
    /* Property */
    define->property.name = spn_MDIO_OUTPUT_DELAY;
    define->property.doc = 
        "\n"
        "Configure number of clock delay between the rising edge of MDC and the starting data of MDIO\n"
        "mdio_output_delay= 0~255\n"
        "Default: -1\n"
        "\n"
    ;
    define->property.method = dnxc_data_property_method_suffix_range;
    define->property.method_str = "suffix_range";
    define->property.suffix = "int";
    define->property.range_min = 0;
    define->property.range_max = 255;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));

    SHR_IF_ERR_EXIT(dnxc_data_mgmt_property_read(unit, &define->property, -1, &define->data));
    /* Set data flags as property */
    define->flags |= (DNXC_DATA_F_PROPERTY);

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set numeric ext_div_out_delay
 * numeric info:
 * number of clock delay between the rising edge of MDC and the starting data of MDIO for external divisor
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
jr2_a0_dnx_data_access_mdio_ext_div_out_delay_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_access;
    int submodule_index = dnx_data_access_submodule_mdio;
    int define_index = dnx_data_access_mdio_define_ext_div_out_delay;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 14;

    /* Set value */
    define->data = 14;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;
    /* Property */
    define->property.name = spn_MDIO_OUTPUT_DELAY;
    define->property.doc = 
        "\n"
        "Configure number of clock delay between the rising edge of MDC and the starting data of MDIO\n"
        "mdio_output_delay= 0~255\n"
        "Default: -1\n"
        "\n"
    ;
    define->property.method = dnxc_data_property_method_suffix_range;
    define->property.method_str = "suffix_range";
    define->property.suffix = "ext";
    define->property.range_min = 0;
    define->property.range_max = 255;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));

    SHR_IF_ERR_EXIT(dnxc_data_mgmt_property_read(unit, &define->property, -1, &define->data));
    /* Set data flags as property */
    define->flags |= (DNXC_DATA_F_PROPERTY);

exit:
    SHR_FUNC_EXIT;
}

/*
 * Tables
 */
/*
 * Submodule: rcpu
 */

/*
 * Features
 */
/*
 * Defines
 */
/*
 * Tables
 */
/**
 * \brief device level function which set values for table rx
 * Module - 'access', Submodule - 'rcpu', table - 'rx'
 * general data about rx
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
jr2_a0_dnx_data_access_rcpu_rx_set(
    int unit)
{
    dnx_data_access_rcpu_rx_t *data, *default_data;
    dnxc_data_table_t *table;
    int module_index = dnx_data_module_access;
    int submodule_index = dnx_data_access_submodule_rcpu;
    int table_index = dnx_data_access_rcpu_table_rx;
    SHR_FUNC_INIT_VARS(unit);

    table = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].tables[table_index];
    /* Set data flags as supported */
    table->flags |= DNXC_DATA_F_SUPPORTED;

    /* Info - default values */
    table->values[0].default_val = "0";
    /* Allocate data buffer */
    DNXC_DATA_ALLOC(table->data, dnx_data_access_rcpu_rx_t, (1 + 1 /* to store default value */ ), "data of dnx_data_access_rcpu_table_rx");

    /* Store Default Values */
    default_data = (dnx_data_access_rcpu_rx_t *) dnxc_data_mgmt_table_data_get(unit, table, -1, -1);
    _SHR_PBMP_WORD_SET(default_data->pbmp, 0, 0);
    /* Set Default Values */
    data = (dnx_data_access_rcpu_rx_t *) dnxc_data_mgmt_table_data_get(unit, table, 0, 0);
    sal_memcpy(data, default_data, table->size_of_values);
    /*
     * Value Property - pbmp
     */
    table->values[0].property.name = spn_RCPU_RX_PBMP;
    table->values[0].property.doc =
        "\n"
        "Configure valid ports on which RCPU packets can be received by slave device\n"
        "\n"
    ;
    table->values[0].property.method = dnxc_data_property_method_pbmp;
    table->values[0].property.method_str = "pbmp";

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_table_value_set(unit, table));

    data = (dnx_data_access_rcpu_rx_t *) dnxc_data_mgmt_table_data_get(unit, table, 0, 0);
    SHR_IF_ERR_EXIT(dnxc_data_mgmt_property_read(unit, &table->values[0].property, -1, &data->pbmp));
    /* Set data flags as property */
    table->flags |= (DNXC_DATA_F_PROPERTY);

exit:
    SHR_FUNC_EXIT;
}

/*
 * Submodule: blocks
 */

/*
 * Features
 */
/*
 * Defines
 */
/*
 * Tables
 */
/**
 * \brief device level function which set values for table override
 * Module - 'access', Submodule - 'blocks', table - 'override'
 * blocks enable/disable override
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
jr2_a0_dnx_data_access_blocks_override_set(
    int unit)
{
    int index_index;
    dnx_data_access_blocks_override_t *data, *default_data;
    dnxc_data_table_t *table;
    int module_index = dnx_data_module_access;
    int submodule_index = dnx_data_access_submodule_blocks;
    int table_index = dnx_data_access_blocks_table_override;
    SHR_FUNC_INIT_VARS(unit);

    table = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].tables[table_index];
    /* Set data flags as supported */
    table->flags |= DNXC_DATA_F_SUPPORTED;

    /*
     * Set key sizes
     */
    table->keys[0].size = 10;
    table->info_get.key_size[0] = 10;

    /* Info - default values */
    table->values[0].default_val = "NULL";
    table->values[1].default_val = "-1";
    table->values[2].default_val = "-1";
    /* Exit the function if the table size is zero */
    if (table->keys[0].size == 0 || table->info_get.key_size[0] == 0)
    {
        SHR_EXIT();
    }

    /* Allocate data buffer */
    DNXC_DATA_ALLOC(table->data, dnx_data_access_blocks_override_t, (1 * (table->keys[0].size) + 1 /* to store default value */ ), "data of dnx_data_access_blocks_table_override");

    /* Store Default Values */
    default_data = (dnx_data_access_blocks_override_t *) dnxc_data_mgmt_table_data_get(unit, table, -1, -1);
    default_data->block_type = NULL;
    default_data->block_instance = -1;
    default_data->value = -1;
    /* Set Default Values */
    for (index_index = 0; index_index < table->keys[0].size; index_index++)
    {
        data = (dnx_data_access_blocks_override_t *) dnxc_data_mgmt_table_data_get(unit, table, index_index, 0);
        sal_memcpy(data, default_data, table->size_of_values);
    }

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_table_value_set(unit, table));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set values for table soft_init
 * Module - 'access', Submodule - 'blocks', table - 'soft_init'
 * soft_init info
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
jr2_a0_dnx_data_access_blocks_soft_init_set(
    int unit)
{
    dnx_data_access_blocks_soft_init_t *data, *default_data;
    dnxc_data_table_t *table;
    int module_index = dnx_data_module_access;
    int submodule_index = dnx_data_access_submodule_blocks;
    int table_index = dnx_data_access_blocks_table_soft_init;
    SHR_FUNC_INIT_VARS(unit);

    table = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].tables[table_index];
    /* Set data flags as supported */
    table->flags |= DNXC_DATA_F_SUPPORTED;

    /* Info - default values */
    table->values[0].default_val = "0x0";
    /* Allocate data buffer */
    DNXC_DATA_ALLOC(table->data, dnx_data_access_blocks_soft_init_t, (1 + 1 /* to store default value */ ), "data of dnx_data_access_blocks_table_soft_init");

    /* Store Default Values */
    default_data = (dnx_data_access_blocks_soft_init_t *) dnxc_data_mgmt_table_data_get(unit, table, -1, -1);
    _SHR_PBMP_WORD_SET(default_data->trigger_value, 0, 0x0);
    /* Set Default Values */
    data = (dnx_data_access_blocks_soft_init_t *) dnxc_data_mgmt_table_data_get(unit, table, 0, 0);
    sal_memcpy(data, default_data, table->size_of_values);
    /*
     * Set Values - Entries
     */
    data = (dnx_data_access_blocks_soft_init_t *) dnxc_data_mgmt_table_data_get(unit, table, 0, 0);
    #if 8 > _SHR_PBMP_WORD_MAX
    #error "out of bound access to array"
    #endif
    _SHR_PBMP_WORD_SET(data->trigger_value, 0, 0xFFFFFFFF);
    _SHR_PBMP_WORD_SET(data->trigger_value, 1, 0xFFFFFFFF);
    _SHR_PBMP_WORD_SET(data->trigger_value, 2, 0xFFFFFFFF);
    _SHR_PBMP_WORD_SET(data->trigger_value, 3, 0xFFFFFFFF);
    _SHR_PBMP_WORD_SET(data->trigger_value, 4, 0xFFFFFFFF);
    _SHR_PBMP_WORD_SET(data->trigger_value, 5, 0xE7FFFFFF);
    _SHR_PBMP_WORD_SET(data->trigger_value, 6, 0xFFFFFFFF);
    _SHR_PBMP_WORD_SET(data->trigger_value, 7, 0xFFFFFFFF);

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_table_value_set(unit, table));


exit:
    SHR_FUNC_EXIT;
}

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
jr2_a0_data_access_attach(
    int unit)
{
    dnxc_data_module_t *module = NULL;
    dnxc_data_submodule_t *submodule = NULL;
    dnxc_data_define_t *define = NULL;
    dnxc_data_feature_t *feature = NULL;
    dnxc_data_table_t *table = NULL;
    int module_index = dnx_data_module_access;
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
     * Attach submodule: mdio
     */
    submodule_index = dnx_data_access_submodule_mdio;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */
    data_index = dnx_data_access_mdio_define_nof_pms_per_ring;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_access_mdio_nof_pms_per_ring_set;
    data_index = dnx_data_access_mdio_define_ring_offset;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_access_mdio_ring_offset_set;
    data_index = dnx_data_access_mdio_define_ext_divisor;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_access_mdio_ext_divisor_set;
    data_index = dnx_data_access_mdio_define_int_divisor;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_access_mdio_int_divisor_set;
    data_index = dnx_data_access_mdio_define_int_div_out_delay;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_access_mdio_int_div_out_delay_set;
    data_index = dnx_data_access_mdio_define_ext_div_out_delay;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_access_mdio_ext_div_out_delay_set;

    /*
     * Attach features: 
     */

    /*
     * Attach tables: 
     */
    /*
     * Attach submodule: rcpu
     */
    submodule_index = dnx_data_access_submodule_rcpu;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */

    /*
     * Attach features: 
     */

    /*
     * Attach tables: 
     */
    data_index = dnx_data_access_rcpu_table_rx;
    table = &submodule->tables[data_index];
    table->set = jr2_a0_dnx_data_access_rcpu_rx_set;
    /*
     * Attach submodule: blocks
     */
    submodule_index = dnx_data_access_submodule_blocks;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */

    /*
     * Attach features: 
     */

    /*
     * Attach tables: 
     */
    data_index = dnx_data_access_blocks_table_override;
    table = &submodule->tables[data_index];
    table->set = jr2_a0_dnx_data_access_blocks_override_set;
    data_index = dnx_data_access_blocks_table_soft_init;
    table = &submodule->tables[data_index];
    table->set = jr2_a0_dnx_data_access_blocks_soft_init_set;

    SHR_FUNC_EXIT;
}
#undef BSL_LOG_MODULE
/* *INDENT-ON* */