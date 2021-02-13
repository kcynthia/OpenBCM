/** \file j2p_a0_data_ecgm.c
 * 
 * DEVICE DATA - ECGM
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
 * FUNCTIONS:
 * {
 */
/*
 * Submodule: core_resources
 */

/*
 * Features
 */
/*
 * Defines
 */
/**
 * \brief device level function which set define total_pds
 * define info:
 * total packet descriptors per core
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
j2p_a0_dnx_data_ecgm_core_resources_total_pds_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_ecgm;
    int submodule_index = dnx_data_ecgm_submodule_core_resources;
    int define_index = dnx_data_ecgm_core_resources_define_total_pds;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 76000;

    /* Set value */
    define->data = 76000;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define total_pds_nof_bits
 * define info:
 * number of bits for total packet descriptors
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
j2p_a0_dnx_data_ecgm_core_resources_total_pds_nof_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_ecgm;
    int submodule_index = dnx_data_ecgm_submodule_core_resources;
    int define_index = dnx_data_ecgm_core_resources_define_total_pds_nof_bits;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 17;

    /* Set value */
    define->data = 17;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define total_dbs
 * define info:
 * total data buffers per core
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
j2p_a0_dnx_data_ecgm_core_resources_total_dbs_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_ecgm;
    int submodule_index = dnx_data_ecgm_submodule_core_resources;
    int define_index = dnx_data_ecgm_core_resources_define_total_dbs;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 32000;

    /* Set value */
    define->data = 32000;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define reserved_dbs_per_sp_nof_bits
 * define info:
 * Number of bits for total reserved data buffers per Service Pool
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
j2p_a0_dnx_data_ecgm_core_resources_reserved_dbs_per_sp_nof_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_ecgm;
    int submodule_index = dnx_data_ecgm_submodule_core_resources;
    int define_index = dnx_data_ecgm_core_resources_define_reserved_dbs_per_sp_nof_bits;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 17;

    /* Set value */
    define->data = 17;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define max_core_bandwidth_Mbps
 * define info:
 * maximum bandwidth pec core in Mbps for ecgm calculation
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
j2p_a0_dnx_data_ecgm_core_resources_max_core_bandwidth_Mbps_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_ecgm;
    int submodule_index = dnx_data_ecgm_submodule_core_resources;
    int define_index = dnx_data_ecgm_core_resources_define_max_core_bandwidth_Mbps;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 3600000;

    /* Set value */
    define->data = 3600000;

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
/*
 * Submodule: port_resources
 */

/*
 * Features
 */
/*
 * Defines
 */
/**
 * \brief device level function which set define max_nof_ports
 * define info:
 * maximum num of ports per core for ecgm calculation
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
j2p_a0_dnx_data_ecgm_port_resources_max_nof_ports_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_ecgm;
    int submodule_index = dnx_data_ecgm_submodule_port_resources;
    int define_index = dnx_data_ecgm_port_resources_define_max_nof_ports;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 72;

    /* Set value */
    define->data = 72;

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
/*
 * Submodule: info
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
j2p_a0_dnx_data_ecgm_info_fc_egr_if_vector_select_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_ecgm;
    int submodule_index = dnx_data_ecgm_submodule_info;
    int feature_index = dnx_data_ecgm_info_fc_egr_if_vector_select;
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
/**
 * \brief device level function which set define fc_egr_if_vector_select_nof_bits
 * define info:
 * Number of bits of the Egr IF debug vector selector for ECGM to EGQ per Egr IF FC
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
j2p_a0_dnx_data_ecgm_info_fc_egr_if_vector_select_nof_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_ecgm;
    int submodule_index = dnx_data_ecgm_submodule_info;
    int define_index = dnx_data_ecgm_info_define_fc_egr_if_vector_select_nof_bits;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 1;

    /* Set value */
    define->data = 1;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define fc_egr_if_vector_nof_presented
 * define info:
 * Number of presented indications of the Egr IF debug vector for EGQ to SCH per Egr IF FC
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
j2p_a0_dnx_data_ecgm_info_fc_egr_if_vector_nof_presented_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_ecgm;
    int submodule_index = dnx_data_ecgm_submodule_info;
    int define_index = dnx_data_ecgm_info_define_fc_egr_if_vector_nof_presented;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 80;

    /* Set value */
    define->data = 80;

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
j2p_a0_data_ecgm_attach(
    int unit)
{
    dnxc_data_module_t *module = NULL;
    dnxc_data_submodule_t *submodule = NULL;
    dnxc_data_define_t *define = NULL;
    dnxc_data_feature_t *feature = NULL;
    dnxc_data_table_t *table = NULL;
    int module_index = dnx_data_module_ecgm;
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
     * Attach submodule: core_resources
     */
    submodule_index = dnx_data_ecgm_submodule_core_resources;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */
    data_index = dnx_data_ecgm_core_resources_define_total_pds;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_ecgm_core_resources_total_pds_set;
    data_index = dnx_data_ecgm_core_resources_define_total_pds_nof_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_ecgm_core_resources_total_pds_nof_bits_set;
    data_index = dnx_data_ecgm_core_resources_define_total_dbs;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_ecgm_core_resources_total_dbs_set;
    data_index = dnx_data_ecgm_core_resources_define_reserved_dbs_per_sp_nof_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_ecgm_core_resources_reserved_dbs_per_sp_nof_bits_set;
    data_index = dnx_data_ecgm_core_resources_define_max_core_bandwidth_Mbps;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_ecgm_core_resources_max_core_bandwidth_Mbps_set;

    /*
     * Attach features: 
     */

    /*
     * Attach tables: 
     */
    /*
     * Attach submodule: port_resources
     */
    submodule_index = dnx_data_ecgm_submodule_port_resources;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */
    data_index = dnx_data_ecgm_port_resources_define_max_nof_ports;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_ecgm_port_resources_max_nof_ports_set;

    /*
     * Attach features: 
     */

    /*
     * Attach tables: 
     */
    /*
     * Attach submodule: info
     */
    submodule_index = dnx_data_ecgm_submodule_info;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */
    data_index = dnx_data_ecgm_info_define_fc_egr_if_vector_select_nof_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_ecgm_info_fc_egr_if_vector_select_nof_bits_set;
    data_index = dnx_data_ecgm_info_define_fc_egr_if_vector_nof_presented;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_ecgm_info_fc_egr_if_vector_nof_presented_set;

    /*
     * Attach features: 
     */
    data_index = dnx_data_ecgm_info_fc_egr_if_vector_select;
    feature = &submodule->features[data_index];
    feature->set = j2p_a0_dnx_data_ecgm_info_fc_egr_if_vector_select_set;

    /*
     * Attach tables: 
     */

    SHR_FUNC_EXIT;
}
#undef BSL_LOG_MODULE
/* *INDENT-ON* */