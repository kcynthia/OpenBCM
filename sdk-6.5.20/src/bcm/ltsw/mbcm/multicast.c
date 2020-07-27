/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm/types.h>

#include <bcm_int/ltsw/mbcm/multicast.h>
#include <bcm_int/ltsw/mbcm/mbcm.h>

#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_MULTICAST

/*!
 * \brief The Multicast mbcm drivers.
 */
static mbcm_ltsw_multicast_drv_t mbcm_ltsw_multicast_drv[BCM_MAX_NUM_UNITS];

/******************************************************************************
 * Private functions
 */

/******************************************************************************
 * Public functions
 */

int
mbcm_ltsw_multicast_drv_set(
    int unit,
    mbcm_ltsw_multicast_drv_t *drv)
{
    mbcm_ltsw_multicast_drv_t *local = &mbcm_ltsw_multicast_drv[unit];

    SHR_FUNC_ENTER(unit);


    mbcm_ltsw_drv_init((mbcm_ltsw_drv_t *)local,
                       (mbcm_ltsw_drv_t *)drv,
                       sizeof(*local)/MBCM_LTSW_FNPTR_SZ);

    SHR_EXIT();

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_init(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_detach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_detach(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_pub_info_get(
    int unit,
    bcmint_multicast_pub_info_t *mc_pub)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_pub_info_get(unit, mc_pub));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_l2_grp_create(
    int unit,
    uint32_t l2mc_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_l2_grp_create(unit, l2mc_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_l2_grp_destroy(
    int unit,
    uint32_t l2mc_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_l2_grp_destroy(unit, l2mc_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_l2_grp_update(
    int unit,
    uint32_t l2mc_id,
    bcmint_multicast_l2_grp_op_code_t opcode,
    bcm_port_t *port_array,
    uint32_t port_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_l2_grp_update(unit, l2mc_id, opcode, port_array, port_count));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_l2_egress_get(
    int unit,
    uint32_t l2mc_id,
    int port_size,
    bcm_gport_t *port_array,
    bcm_if_t *encap_id_array,
    int *port_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_l2_egress_get(unit, l2mc_id, port_size, port_array, encap_id_array, port_count));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_l3_grp_create(
    int unit,
    uint32_t l3mc_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_l3_grp_create(unit, l3mc_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_l3_grp_destroy(
    int unit,
    uint32_t l3mc_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_l3_grp_destroy(unit, l3mc_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_l3_grp_update(
    int unit,
    uint32_t l3mc_id,
    bcmint_multicast_l3_grp_op_code_t opcode,
    bcm_port_t port,
    bcm_if_t *encap_id_array,
    uint32_t encap_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_l3_grp_update(unit, l3mc_id, opcode, port, encap_id_array, encap_count));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_l3_egress_get(
    int unit,
    uint32_t l3mc_id,
    int port_size,
    bcm_gport_t *port_array,
    bcm_if_t *encap_id_array,
    int *port_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_l3_egress_get(unit, l3mc_id, port_size, port_array, encap_id_array, port_count));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_encap_create(
    int unit,
    bcm_multicast_encap_t *mc_encap,
    bcm_if_t *encap_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_encap_create(unit, mc_encap, encap_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_encap_destroy(
    int unit,
    bcm_if_t encap_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_encap_destroy(unit, encap_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_encap_get(
    int unit,
    bcm_if_t encap_id,
    bcm_multicast_encap_t *mc_encap)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_encap_get(unit, encap_id, mc_encap));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_encap_recover(
    int unit,
    bcm_if_t encap_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_encap_recover(unit, encap_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_def_vlan_grp_id_get(
    int unit,
    uint32_t *grp_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_def_vlan_grp_id_get(unit, grp_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_def_vlan_grp_update(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_def_vlan_grp_update(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_l2_l3_combined_set(
    int unit,
    bool enable)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_l2_l3_combined_set(unit, enable));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_l2_l3_combined_get(
    int unit,
    bool *enable)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_l2_l3_combined_get(unit, enable));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_remap_group_set(
    int unit,
    int mc_index_from,
    int mc_index_to)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_remap_group_set(unit, mc_index_from, mc_index_to));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_remap_group_get(
    int unit,
    int mc_index_from,
    int *mc_index_to)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_remap_group_get(unit, mc_index_from, mc_index_to));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_egress_object_encap_get(
    int unit,
    bcm_multicast_t group,
    bcm_if_t intf,
    bcm_if_t *encap_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_egress_object_encap_get(unit, group, intf, encap_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_mtu_set(
    int unit,
    int mc_index,
    int mtu)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_mtu_set(unit, mc_index, mtu));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_mtu_get(
    int unit,
    int mc_index,
    int *mtu)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_mtu_get(unit, mc_index, mtu));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_repl_port_attach(
    int unit,
    bcm_port_t port)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_repl_port_attach(unit, port));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_repl_port_detach(
    int unit,
    bcm_port_t port)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_repl_port_detach(unit, port));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_multicast_vlan_flood_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_multicast_drv[unit].multicast_vlan_flood_init(unit));

exit:
    SHR_FUNC_EXIT();
}
