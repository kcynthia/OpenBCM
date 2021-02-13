/** \file jr2_a0_data_esem.c
 * 
 * DEVICE DATA - ESEM
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
#define BSL_LOG_MODULE BSL_LS_BCMDNX_ESEM
/*
 * INCLUDE FILES:
 * {
 */
#include <soc/dnx/dnx_data/auto_generated/dnx_data_internal_esem.h>
/*
 * }
 */

/*
 * FUNCTIONS:
 * {
 */
/*
 * Submodule: access_cmd
 */

/*
 * Features
 */
/*
 * Defines
 */
/**
 * \brief device level function which set define nof_esem_accesses
 * define info:
 * The number of accesses that can be preformed into the ESEM/EXEM.
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
jr2_a0_dnx_data_esem_access_cmd_nof_esem_accesses_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_access_cmd;
    int define_index = dnx_data_esem_access_cmd_define_nof_esem_accesses;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 3;

    /* Set value */
    define->data = 3;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define app_di_id_size_in_bits
 * define info:
 * NOF bits for the APP DB ID.
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
jr2_a0_dnx_data_esem_access_cmd_app_di_id_size_in_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_access_cmd;
    int define_index = dnx_data_esem_access_cmd_define_app_di_id_size_in_bits;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 3;

    /* Set value */
    define->data = 3;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define no_action
 * define info:
 * Undefined access command index
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
jr2_a0_dnx_data_esem_access_cmd_no_action_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_access_cmd;
    int define_index = dnx_data_esem_access_cmd_define_no_action;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 0;

    /* Set value */
    define->data = 0;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define default_native
 * define info:
 * Default access command for native AC
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
jr2_a0_dnx_data_esem_access_cmd_default_native_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_access_cmd;
    int define_index = dnx_data_esem_access_cmd_define_default_native;
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
 * \brief device level function which set define default_ac
 * define info:
 * Default-access command index for outer AC
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
jr2_a0_dnx_data_esem_access_cmd_default_ac_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_access_cmd;
    int define_index = dnx_data_esem_access_cmd_define_default_ac;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 8;

    /* Set value */
    define->data = 8;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define sflow_sample_interface
 * define info:
 * Default-access command index for sflow sample interface
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
jr2_a0_dnx_data_esem_access_cmd_sflow_sample_interface_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_access_cmd;
    int define_index = dnx_data_esem_access_cmd_define_sflow_sample_interface;
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
 * \brief device level function which set define ip_tunnel_no_action
 * define info:
 * No lookup access command for ip tunnel cases
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
jr2_a0_dnx_data_esem_access_cmd_ip_tunnel_no_action_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_access_cmd;
    int define_index = dnx_data_esem_access_cmd_define_ip_tunnel_no_action;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 60;

    /* Set value */
    define->data = 60;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define nof_esem_cmd_default_profiles
 * define info:
 * Number of esem cmd default profiles
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
jr2_a0_dnx_data_esem_access_cmd_nof_esem_cmd_default_profiles_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_access_cmd;
    int define_index = dnx_data_esem_access_cmd_define_nof_esem_cmd_default_profiles;
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
 * \brief device level function which set define nof_cmds_size_in_bits
 * define info:
 * Number of bits for the esem command
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
jr2_a0_dnx_data_esem_access_cmd_nof_cmds_size_in_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_access_cmd;
    int define_index = dnx_data_esem_access_cmd_define_nof_cmds_size_in_bits;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 6;

    /* Set value */
    define->data = 6;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define nof_cmds
 * define info:
 * Number of esem access commands
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
jr2_a0_dnx_data_esem_access_cmd_nof_cmds_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_access_cmd;
    int define_index = dnx_data_esem_access_cmd_define_nof_cmds;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 1 << dnx_data_esem.access_cmd.nof_cmds_size_in_bits_get(unit);

    /* Set value */
    define->data = 1 << dnx_data_esem.access_cmd.nof_cmds_size_in_bits_get(unit);

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define min_size_for_esem_cmd
 * define info:
 * The minimal size in bits that is required for a result type to have a holding of ESEM CMD
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
jr2_a0_dnx_data_esem_access_cmd_min_size_for_esem_cmd_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_access_cmd;
    int define_index = dnx_data_esem_access_cmd_define_min_size_for_esem_cmd;
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
 * \brief device level function which set define esem_cmd_arr_prefix_gre_any_ipv4
 * define info:
 * The ESEM command ARR prefix of an GRE ANY IPv4
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
jr2_a0_dnx_data_esem_access_cmd_esem_cmd_arr_prefix_gre_any_ipv4_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_access_cmd;
    int define_index = dnx_data_esem_access_cmd_define_esem_cmd_arr_prefix_gre_any_ipv4;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 0x30;

    /* Set value */
    define->data = 0x30;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define esem_cmd_arr_prefix_vxlan_gpe
 * define info:
 * The ESEM command ARR prefix of VXLAN GPE
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
jr2_a0_dnx_data_esem_access_cmd_esem_cmd_arr_prefix_vxlan_gpe_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_access_cmd;
    int define_index = dnx_data_esem_access_cmd_define_esem_cmd_arr_prefix_vxlan_gpe;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 0x34;

    /* Set value */
    define->data = 0x34;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define esem_cmd_arr_prefix_ip_tunnel_no_action
 * define info:
 * The ESEM command ARR prefix of ip tunnel no action
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
jr2_a0_dnx_data_esem_access_cmd_esem_cmd_arr_prefix_ip_tunnel_no_action_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_access_cmd;
    int define_index = dnx_data_esem_access_cmd_define_esem_cmd_arr_prefix_ip_tunnel_no_action;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 0x3C;

    /* Set value */
    define->data = 0x3C;

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
 * Submodule: default_result_profile
 */

/*
 * Features
 */
/*
 * Defines
 */
/**
 * \brief device level function which set define default_native
 * define info:
 * Profile for Esem default result for default native
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
jr2_a0_dnx_data_esem_default_result_profile_default_native_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_default_result_profile;
    int define_index = dnx_data_esem_default_result_profile_define_default_native;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 12;

    /* Set value */
    define->data = 12;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define default_ac
 * define info:
 * Profile for Esem default result for default AC
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
jr2_a0_dnx_data_esem_default_result_profile_default_ac_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_default_result_profile;
    int define_index = dnx_data_esem_default_result_profile_define_default_ac;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 13;

    /* Set value */
    define->data = 13;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define sflow_sample_interface
 * define info:
 * Profile for Esem default result for sflow sample interface
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
jr2_a0_dnx_data_esem_default_result_profile_sflow_sample_interface_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_default_result_profile;
    int define_index = dnx_data_esem_default_result_profile_define_sflow_sample_interface;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 14;

    /* Set value */
    define->data = 14;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define default_dual_homing
 * define info:
 * Profile for Esem default result for dual homing db
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
jr2_a0_dnx_data_esem_default_result_profile_default_dual_homing_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_default_result_profile;
    int define_index = dnx_data_esem_default_result_profile_define_default_dual_homing;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 15;

    /* Set value */
    define->data = 15;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define vxlan
 * define info:
 * Profile for Esem default result for vxlan
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
jr2_a0_dnx_data_esem_default_result_profile_vxlan_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_default_result_profile;
    int define_index = dnx_data_esem_default_result_profile_define_vxlan;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 11;

    /* Set value */
    define->data = 11;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define nof_profiles
 * define info:
 * Number of esem default result profiles
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
jr2_a0_dnx_data_esem_default_result_profile_nof_profiles_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_default_result_profile;
    int define_index = dnx_data_esem_default_result_profile_define_nof_profiles;
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
 * \brief device level function which set define nof_allocable_profiles
 * define info:
 * Number of esem default result profiles exposed to users
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
jr2_a0_dnx_data_esem_default_result_profile_nof_allocable_profiles_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_default_result_profile;
    int define_index = dnx_data_esem_default_result_profile_define_nof_allocable_profiles;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 8;

    /* Set value */
    define->data = 8;

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
 * Submodule: feature
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
jr2_a0_dnx_data_esem_feature_etps_properties_assignment_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_feature;
    int feature_index = dnx_data_esem_feature_etps_properties_assignment;
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
jr2_a0_dnx_data_esem_feature_key_with_sspa_contains_member_id_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_esem;
    int submodule_index = dnx_data_esem_submodule_feature;
    int feature_index = dnx_data_esem_feature_key_with_sspa_contains_member_id;
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
jr2_a0_data_esem_attach(
    int unit)
{
    dnxc_data_module_t *module = NULL;
    dnxc_data_submodule_t *submodule = NULL;
    dnxc_data_define_t *define = NULL;
    dnxc_data_feature_t *feature = NULL;
    dnxc_data_table_t *table = NULL;
    int module_index = dnx_data_module_esem;
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
     * Attach submodule: access_cmd
     */
    submodule_index = dnx_data_esem_submodule_access_cmd;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */
    data_index = dnx_data_esem_access_cmd_define_nof_esem_accesses;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_access_cmd_nof_esem_accesses_set;
    data_index = dnx_data_esem_access_cmd_define_app_di_id_size_in_bits;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_access_cmd_app_di_id_size_in_bits_set;
    data_index = dnx_data_esem_access_cmd_define_no_action;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_access_cmd_no_action_set;
    data_index = dnx_data_esem_access_cmd_define_default_native;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_access_cmd_default_native_set;
    data_index = dnx_data_esem_access_cmd_define_default_ac;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_access_cmd_default_ac_set;
    data_index = dnx_data_esem_access_cmd_define_sflow_sample_interface;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_access_cmd_sflow_sample_interface_set;
    data_index = dnx_data_esem_access_cmd_define_ip_tunnel_no_action;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_access_cmd_ip_tunnel_no_action_set;
    data_index = dnx_data_esem_access_cmd_define_nof_esem_cmd_default_profiles;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_access_cmd_nof_esem_cmd_default_profiles_set;
    data_index = dnx_data_esem_access_cmd_define_nof_cmds_size_in_bits;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_access_cmd_nof_cmds_size_in_bits_set;
    data_index = dnx_data_esem_access_cmd_define_nof_cmds;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_access_cmd_nof_cmds_set;
    data_index = dnx_data_esem_access_cmd_define_min_size_for_esem_cmd;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_access_cmd_min_size_for_esem_cmd_set;
    data_index = dnx_data_esem_access_cmd_define_esem_cmd_arr_prefix_gre_any_ipv4;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_access_cmd_esem_cmd_arr_prefix_gre_any_ipv4_set;
    data_index = dnx_data_esem_access_cmd_define_esem_cmd_arr_prefix_vxlan_gpe;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_access_cmd_esem_cmd_arr_prefix_vxlan_gpe_set;
    data_index = dnx_data_esem_access_cmd_define_esem_cmd_arr_prefix_ip_tunnel_no_action;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_access_cmd_esem_cmd_arr_prefix_ip_tunnel_no_action_set;

    /*
     * Attach features: 
     */

    /*
     * Attach tables: 
     */
    /*
     * Attach submodule: default_result_profile
     */
    submodule_index = dnx_data_esem_submodule_default_result_profile;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */
    data_index = dnx_data_esem_default_result_profile_define_default_native;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_default_result_profile_default_native_set;
    data_index = dnx_data_esem_default_result_profile_define_default_ac;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_default_result_profile_default_ac_set;
    data_index = dnx_data_esem_default_result_profile_define_sflow_sample_interface;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_default_result_profile_sflow_sample_interface_set;
    data_index = dnx_data_esem_default_result_profile_define_default_dual_homing;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_default_result_profile_default_dual_homing_set;
    data_index = dnx_data_esem_default_result_profile_define_vxlan;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_default_result_profile_vxlan_set;
    data_index = dnx_data_esem_default_result_profile_define_nof_profiles;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_default_result_profile_nof_profiles_set;
    data_index = dnx_data_esem_default_result_profile_define_nof_allocable_profiles;
    define = &submodule->defines[data_index];
    define->set = jr2_a0_dnx_data_esem_default_result_profile_nof_allocable_profiles_set;

    /*
     * Attach features: 
     */

    /*
     * Attach tables: 
     */
    /*
     * Attach submodule: feature
     */
    submodule_index = dnx_data_esem_submodule_feature;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */

    /*
     * Attach features: 
     */
    data_index = dnx_data_esem_feature_etps_properties_assignment;
    feature = &submodule->features[data_index];
    feature->set = jr2_a0_dnx_data_esem_feature_etps_properties_assignment_set;
    data_index = dnx_data_esem_feature_key_with_sspa_contains_member_id;
    feature = &submodule->features[data_index];
    feature->set = jr2_a0_dnx_data_esem_feature_key_with_sspa_contains_member_id_set;

    /*
     * Attach tables: 
     */

    SHR_FUNC_EXIT;
}
#undef BSL_LOG_MODULE
/* *INDENT-ON* */