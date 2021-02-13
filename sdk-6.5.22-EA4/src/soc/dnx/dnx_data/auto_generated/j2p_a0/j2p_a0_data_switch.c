/** \file j2p_a0_data_switch.c
 * 
 * DEVICE DATA - SWITCH
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
#define BSL_LOG_MODULE BSL_LS_BCMDNX_SWITCH
/*
 * INCLUDE FILES:
 * {
 */
#include <soc/dnx/dnx_data/auto_generated/dnx_data_internal_switch.h>
/*
 * }
 */

/*
 * FUNCTIONS:
 * {
 */
/*
 * Submodule: load_balancing
 */

/*
 * Features
 */
/*
 * Defines
 */
/**
 * \brief device level function which set define reserved_next_label_valid
 * define info:
 * Indicate whether the field reserved_next_label_valid exists
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
j2p_a0_dnx_data_switch_load_balancing_reserved_next_label_valid_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_load_balancing;
    int define_index = dnx_data_switch_load_balancing_define_reserved_next_label_valid;
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
 * \brief device level function which set define hashing_selection_per_layer
 * define info:
 * Indicate whether the functionality of using the LB key in hashing per layer is enabled
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
j2p_a0_dnx_data_switch_load_balancing_hashing_selection_per_layer_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_load_balancing;
    int define_index = dnx_data_switch_load_balancing_define_hashing_selection_per_layer;
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
 * \brief device level function which set define mpls_split_stack_config
 * define info:
 * Indicate whether there is support separate configuration per each of the two stacks - terminated and non-terminated
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
j2p_a0_dnx_data_switch_load_balancing_mpls_split_stack_config_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_load_balancing;
    int define_index = dnx_data_switch_load_balancing_define_mpls_split_stack_config;
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
 * \brief device level function which set define mpls_cam_next_label_valid_field_exists
 * define info:
 * The MPLS force label TCAM contains a field which was later remove for some of the devices.
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
j2p_a0_dnx_data_switch_load_balancing_mpls_cam_next_label_valid_field_exists_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_load_balancing;
    int define_index = dnx_data_switch_load_balancing_define_mpls_cam_next_label_valid_field_exists;
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
 * \brief device level function which set define padded_layers_crc_buffer
 * define info:
 * Indicate if a zeros padding is added to the layer recored CRCs values before the LB keys generation
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
j2p_a0_dnx_data_switch_load_balancing_padded_layers_crc_buffer_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_load_balancing;
    int define_index = dnx_data_switch_load_balancing_define_padded_layers_crc_buffer;
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
 * \brief device level function which set define wide_hash_buffer
 * define info:
 * The buffer used to generate the header CRC after the header was folded into this size. A wide size is used for non symmetrical IPv6 hashing
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
j2p_a0_dnx_data_switch_load_balancing_wide_hash_buffer_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_load_balancing;
    int define_index = dnx_data_switch_load_balancing_define_wide_hash_buffer;
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
 * \brief device level function which set define nof_lb_mpls_stack
 * define info:
 * The NOF MPLS stacks supported for the LB key generation
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
j2p_a0_dnx_data_switch_load_balancing_nof_lb_mpls_stack_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_load_balancing;
    int define_index = dnx_data_switch_load_balancing_define_nof_lb_mpls_stack;
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
/*
 * Submodule: svtag
 */

/*
 * Features
 */
/*
 * Defines
 */
/**
 * \brief device level function which set define supported
 * define info:
 * Indicate if the SVTAG supported on the device
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
j2p_a0_dnx_data_switch_svtag_supported_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_svtag;
    int define_index = dnx_data_switch_svtag_define_supported;
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
 * \brief device level function which set define svtag_label_size_bits
 * define info:
 * The size in bits of an SVTAG label
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
j2p_a0_dnx_data_switch_svtag_svtag_label_size_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_svtag;
    int define_index = dnx_data_switch_svtag_define_svtag_label_size_bits;
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

/**
 * \brief device level function which set define egress_svtag_offset_addr_size_bits
 * define info:
 * The size in bits of the offset addr on the egress svtag 
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
j2p_a0_dnx_data_switch_svtag_egress_svtag_offset_addr_size_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_svtag;
    int define_index = dnx_data_switch_svtag_define_egress_svtag_offset_addr_size_bits;
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
 * \brief device level function which set define egress_svtag_offset_addr_position_bits
 * define info:
 * The position in bits of the offset addr in the egress svtag 
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
j2p_a0_dnx_data_switch_svtag_egress_svtag_offset_addr_position_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_svtag;
    int define_index = dnx_data_switch_svtag_define_egress_svtag_offset_addr_position_bits;
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
 * \brief device level function which set define egress_svtag_signature_size_bits
 * define info:
 * The size in bits of the signature on the egress svtag 
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
j2p_a0_dnx_data_switch_svtag_egress_svtag_signature_size_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_svtag;
    int define_index = dnx_data_switch_svtag_define_egress_svtag_signature_size_bits;
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
 * \brief device level function which set define egress_svtag_signature_position_bits
 * define info:
 * The position in bits of the signature in the egress svtag 
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
j2p_a0_dnx_data_switch_svtag_egress_svtag_signature_position_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_svtag;
    int define_index = dnx_data_switch_svtag_define_egress_svtag_signature_position_bits;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 24;

    /* Set value */
    define->data = 24;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define egress_svtag_sci_size_bits
 * define info:
 * The size in bits of the SCI on the egress svtag 
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
j2p_a0_dnx_data_switch_svtag_egress_svtag_sci_size_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_svtag;
    int define_index = dnx_data_switch_svtag_define_egress_svtag_sci_size_bits;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 10;

    /* Set value */
    define->data = 10;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define egress_svtag_sci_position_bits
 * define info:
 * The position in bits of the SCI in the egress svtag 
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
j2p_a0_dnx_data_switch_svtag_egress_svtag_sci_position_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_svtag;
    int define_index = dnx_data_switch_svtag_define_egress_svtag_sci_position_bits;
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
 * \brief device level function which set define egress_svtag_pkt_type_size_bits
 * define info:
 * The size in bits of the packet type on the egress svtag 
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
j2p_a0_dnx_data_switch_svtag_egress_svtag_pkt_type_size_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_svtag;
    int define_index = dnx_data_switch_svtag_define_egress_svtag_pkt_type_size_bits;
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
 * \brief device level function which set define egress_svtag_pkt_type_position_bits
 * define info:
 * The position in bits of the packet type in the egress svtag 
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
j2p_a0_dnx_data_switch_svtag_egress_svtag_pkt_type_position_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_svtag;
    int define_index = dnx_data_switch_svtag_define_egress_svtag_pkt_type_position_bits;
    SHR_FUNC_INIT_VARS(unit);

    define = &_dnxc_data[unit].modules[module_index].submodules[submodule_index].defines[define_index];
    /* Set default value */
    define->default_data = 10;

    /* Set value */
    define->data = 10;

    /* Set data flags as supported */
    define->flags |= DNXC_DATA_F_SUPPORTED;

    /* Override data with dynamic data (if required) */
    SHR_IF_ERR_EXIT(dnxc_data_dyn_loader_define_value_set(unit, define));


exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief device level function which set define egress_svtag_ipv6_indication_position_bits
 * define info:
 * The position in bits of the IPv6 indication in the egress svtag 
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
j2p_a0_dnx_data_switch_svtag_egress_svtag_ipv6_indication_position_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_svtag;
    int define_index = dnx_data_switch_svtag_define_egress_svtag_ipv6_indication_position_bits;
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
 * \brief device level function which set define egress_svtag_hw_field_position_bits
 * define info:
 * The position in bits of the SVTAG in the HW field.
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
j2p_a0_dnx_data_switch_svtag_egress_svtag_hw_field_position_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_svtag;
    int define_index = dnx_data_switch_svtag_define_egress_svtag_hw_field_position_bits;
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
 * \brief device level function which set define egress_svtag_accumulation_indication_hw_field_position_bits
 * define info:
 * The HW field position in bits of the SVTAG accumulation indication.
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
j2p_a0_dnx_data_switch_svtag_egress_svtag_accumulation_indication_hw_field_position_bits_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_svtag;
    int define_index = dnx_data_switch_svtag_define_egress_svtag_accumulation_indication_hw_field_position_bits;
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

/**
 * \brief device level function which set define ingress_svtag_position_bytes
 * define info:
 * The ingress SVTAG position in bytes before it swapped to the beginning  of the packet.
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
j2p_a0_dnx_data_switch_svtag_ingress_svtag_position_bytes_set(
    int unit)
{
    dnxc_data_define_t *define;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_svtag;
    int define_index = dnx_data_switch_svtag_define_ingress_svtag_position_bytes;
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
j2p_a0_dnx_data_switch_feature_mpls_labels_included_in_hash_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_feature;
    int feature_index = dnx_data_switch_feature_mpls_labels_included_in_hash;
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
j2p_a0_dnx_data_switch_feature_excluded_header_bits_from_hash_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_feature;
    int feature_index = dnx_data_switch_feature_excluded_header_bits_from_hash;
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
j2p_a0_dnx_data_switch_feature_silent_dummy_lif_lookup_set(
    int unit)
{
    dnxc_data_feature_t *feature;
    int module_index = dnx_data_module_switch;
    int submodule_index = dnx_data_switch_submodule_feature;
    int feature_index = dnx_data_switch_feature_silent_dummy_lif_lookup;
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
j2p_a0_data_switch_attach(
    int unit)
{
    dnxc_data_module_t *module = NULL;
    dnxc_data_submodule_t *submodule = NULL;
    dnxc_data_define_t *define = NULL;
    dnxc_data_feature_t *feature = NULL;
    dnxc_data_table_t *table = NULL;
    int module_index = dnx_data_module_switch;
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
     * Attach submodule: load_balancing
     */
    submodule_index = dnx_data_switch_submodule_load_balancing;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */
    data_index = dnx_data_switch_load_balancing_define_reserved_next_label_valid;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_load_balancing_reserved_next_label_valid_set;
    data_index = dnx_data_switch_load_balancing_define_hashing_selection_per_layer;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_load_balancing_hashing_selection_per_layer_set;
    data_index = dnx_data_switch_load_balancing_define_mpls_split_stack_config;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_load_balancing_mpls_split_stack_config_set;
    data_index = dnx_data_switch_load_balancing_define_mpls_cam_next_label_valid_field_exists;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_load_balancing_mpls_cam_next_label_valid_field_exists_set;
    data_index = dnx_data_switch_load_balancing_define_padded_layers_crc_buffer;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_load_balancing_padded_layers_crc_buffer_set;
    data_index = dnx_data_switch_load_balancing_define_wide_hash_buffer;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_load_balancing_wide_hash_buffer_set;
    data_index = dnx_data_switch_load_balancing_define_nof_lb_mpls_stack;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_load_balancing_nof_lb_mpls_stack_set;

    /*
     * Attach features: 
     */

    /*
     * Attach tables: 
     */
    /*
     * Attach submodule: svtag
     */
    submodule_index = dnx_data_switch_submodule_svtag;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */
    data_index = dnx_data_switch_svtag_define_supported;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_svtag_supported_set;
    data_index = dnx_data_switch_svtag_define_svtag_label_size_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_svtag_svtag_label_size_bits_set;
    data_index = dnx_data_switch_svtag_define_egress_svtag_offset_addr_size_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_svtag_egress_svtag_offset_addr_size_bits_set;
    data_index = dnx_data_switch_svtag_define_egress_svtag_offset_addr_position_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_svtag_egress_svtag_offset_addr_position_bits_set;
    data_index = dnx_data_switch_svtag_define_egress_svtag_signature_size_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_svtag_egress_svtag_signature_size_bits_set;
    data_index = dnx_data_switch_svtag_define_egress_svtag_signature_position_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_svtag_egress_svtag_signature_position_bits_set;
    data_index = dnx_data_switch_svtag_define_egress_svtag_sci_size_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_svtag_egress_svtag_sci_size_bits_set;
    data_index = dnx_data_switch_svtag_define_egress_svtag_sci_position_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_svtag_egress_svtag_sci_position_bits_set;
    data_index = dnx_data_switch_svtag_define_egress_svtag_pkt_type_size_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_svtag_egress_svtag_pkt_type_size_bits_set;
    data_index = dnx_data_switch_svtag_define_egress_svtag_pkt_type_position_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_svtag_egress_svtag_pkt_type_position_bits_set;
    data_index = dnx_data_switch_svtag_define_egress_svtag_ipv6_indication_position_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_svtag_egress_svtag_ipv6_indication_position_bits_set;
    data_index = dnx_data_switch_svtag_define_egress_svtag_hw_field_position_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_svtag_egress_svtag_hw_field_position_bits_set;
    data_index = dnx_data_switch_svtag_define_egress_svtag_accumulation_indication_hw_field_position_bits;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_svtag_egress_svtag_accumulation_indication_hw_field_position_bits_set;
    data_index = dnx_data_switch_svtag_define_ingress_svtag_position_bytes;
    define = &submodule->defines[data_index];
    define->set = j2p_a0_dnx_data_switch_svtag_ingress_svtag_position_bytes_set;

    /*
     * Attach features: 
     */

    /*
     * Attach tables: 
     */
    /*
     * Attach submodule: feature
     */
    submodule_index = dnx_data_switch_submodule_feature;
    submodule = &module->submodules[submodule_index];

    /*
     * Attach defines: 
     */

    /*
     * Attach features: 
     */
    data_index = dnx_data_switch_feature_mpls_labels_included_in_hash;
    feature = &submodule->features[data_index];
    feature->set = j2p_a0_dnx_data_switch_feature_mpls_labels_included_in_hash_set;
    data_index = dnx_data_switch_feature_excluded_header_bits_from_hash;
    feature = &submodule->features[data_index];
    feature->set = j2p_a0_dnx_data_switch_feature_excluded_header_bits_from_hash_set;
    data_index = dnx_data_switch_feature_silent_dummy_lif_lookup;
    feature = &submodule->features[data_index];
    feature->set = j2p_a0_dnx_data_switch_feature_silent_dummy_lif_lookup_set;

    /*
     * Attach tables: 
     */

    SHR_FUNC_EXIT;
}
#undef BSL_LOG_MODULE
/* *INDENT-ON* */