/** \file jr2_a0_data_latency.c
 * 
 * DEVICE DATA - LATENCY
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
#include <soc/dnx/dnx_data/auto_generated/dnx_data_internal_latency.h>
/*
 * }
 */

/*
 * FUNCTIONS:
 * {
 */
/*
 * Submodule: features
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
jr2_a0_dnx_data_latency_features_valid_flow_profile_flag_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_latency;
    int submodule_index = dnx_data_latency_submodule_features;
    int feature_index = dnx_data_latency_features_valid_flow_profile_flag;
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
jr2_a0_dnx_data_latency_features_valid_end_to_end_aqm_profile_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_latency;
    int submodule_index = dnx_data_latency_submodule_features;
    int feature_index = dnx_data_latency_features_valid_end_to_end_aqm_profile;
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
jr2_a0_dnx_data_latency_features_probabilistic_mechanism_support_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_latency;
    int submodule_index = dnx_data_latency_submodule_features;
    int feature_index = dnx_data_latency_features_probabilistic_mechanism_support;
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
jr2_a0_dnx_data_latency_features_latency_measurement_support_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_latency;
    int submodule_index = dnx_data_latency_submodule_features;
    int feature_index = dnx_data_latency_features_latency_measurement_support;
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
jr2_a0_dnx_data_latency_features_valid_track_expansion_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_latency;
    int submodule_index = dnx_data_latency_submodule_features;
    int feature_index = dnx_data_latency_features_valid_track_expansion;
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
 * Submodule: profile
 */

/*
 * Features
 */
/*
 * Defines
 */
/**
 * \brief device level function which set define egress_nof
 * define info:
 * Number of egress (end-to-end) latency profiles
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
jr2_a0_dnx_data_latency_profile_egress_nof_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_latency;
    int submodule_index = dnx_data_latency_submodule_profile;
    int define_index = dnx_data_latency_profile_define_egress_nof;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 16;

    /* Set value */
    define->data = 16;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define ingress_nof
 * define info:
 * Number of ingress latency profiles
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
jr2_a0_dnx_data_latency_profile_ingress_nof_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_latency;
    int submodule_index = dnx_data_latency_submodule_profile;
    int define_index = dnx_data_latency_profile_define_ingress_nof;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 32;

    /* Set value */
    define->data = 32;

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
 * Submodule: aqm
 */

/*
 * Features
 */
/*
 * Defines
 */
/**
 * \brief device level function which set define profiles_nof
 * define info:
 * Number of AQM profiles
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
jr2_a0_dnx_data_latency_aqm_profiles_nof_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_latency;
    int submodule_index = dnx_data_latency_submodule_aqm;
    int define_index = dnx_data_latency_aqm_define_profiles_nof;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 16;

    /* Set value */
    define->data = 16;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define flows_nof
 * define info:
 * Number AQM flow IDs
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
jr2_a0_dnx_data_latency_aqm_flows_nof_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_latency;
    int submodule_index = dnx_data_latency_submodule_aqm;
    int define_index = dnx_data_latency_aqm_define_flows_nof;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 256;

    /* Set value */
    define->data = 256;

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
 * Submodule: ingress
 */

/*
 * Features
 */
/*
 * Defines
 */
/**
 * \brief device level function which set define jr_mode_latency_timestamp_left_shift
 * define info:
 * The time value taken from the OAM TS header is shifted left by this amount of bits
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
jr2_a0_dnx_data_latency_ingress_jr_mode_latency_timestamp_left_shift_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_latency;
    int submodule_index = dnx_data_latency_submodule_ingress;
    int define_index = dnx_data_latency_ingress_define_jr_mode_latency_timestamp_left_shift;
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
jr2_a0_data_latency_attach(
    int unit)
{
    dnxc_data_module_t *module = NULL;
    dnxc_data_submodule_t *submodule = NULL;
    dnxc_data_define_t *define = NULL;
    dnxc_data_feature_t *feature = NULL;
    dnxc_data_table_t *table = NULL;
    int module_index = dnx_data_module_latency;
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
     * Attach submodule: features
     */
    submodule_index = dnx_data_latency_submodule_features;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */

    /*
     * Attach features: 
     */
    data_index = dnx_data_latency_features_valid_flow_profile_flag;
    feature = &submodule->features[data_index];
    feature->set = jr2_a0_dnx_data_latency_features_valid_flow_profile_flag_set;
    data_index = dnx_data_latency_features_valid_end_to_end_aqm_profile;
    feature = &submodule->features[data_index];
    feature->set = jr2_a0_dnx_data_latency_features_valid_end_to_end_aqm_profile_set;
    data_index = dnx_data_latency_features_probabilistic_mechanism_support;
    feature = &submodule->features[data_index];
    feature->set = jr2_a0_dnx_data_latency_features_probabilistic_mechanism_support_set;
    data_index = dnx_data_latency_features_latency_measurement_support;
    feature = &submodule->features[data_index];
    feature->set = jr2_a0_dnx_data_latency_features_latency_measurement_support_set;
    data_index = dnx_data_latency_features_valid_track_expansion;
    feature = &submodule->features[data_index];
    feature->set = jr2_a0_dnx_data_latency_features_valid_track_expansion_set;

    /*
     * Attach tables: 
     */
    /*
     * Attach submodule: profile
     */
    submodule_index = dnx_data_latency_submodule_profile;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */
    data_index = dnx_data_latency_profile_define_egress_nof;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_latency_profile_egress_nof_set;
    data_index = dnx_data_latency_profile_define_ingress_nof;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_latency_profile_ingress_nof_set;

    /*
     * Attach features: 
     */

    /*
     * Attach tables: 
     */
    /*
     * Attach submodule: aqm
     */
    submodule_index = dnx_data_latency_submodule_aqm;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */
    data_index = dnx_data_latency_aqm_define_profiles_nof;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_latency_aqm_profiles_nof_set;
    data_index = dnx_data_latency_aqm_define_flows_nof;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_latency_aqm_flows_nof_set;

    /*
     * Attach features: 
     */

    /*
     * Attach tables: 
     */
    /*
     * Attach submodule: ingress
     */
    submodule_index = dnx_data_latency_submodule_ingress;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */
    data_index = dnx_data_latency_ingress_define_jr_mode_latency_timestamp_left_shift;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_latency_ingress_jr_mode_latency_timestamp_left_shift_set;

    /*
     * Attach features: 
     */

    /*
     * Attach tables: 
     */

    SHR_FUNC_EXIT;
}
#undef BSL_LOG_MODULE
/* *INDENT-ON* */