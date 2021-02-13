/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 * search for 'sw_state_diagnostic_cbs_t' for the root of the struct
 */

#ifndef _SHR_SW_STATE_DPP_BCM_L3_DIAGNOSTIC_H_
#define _SHR_SW_STATE_DPP_BCM_L3_DIAGNOSTIC_H_

#ifdef BCM_WARM_BOOT_API_TEST
/********************************* diagnostic calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the diagnostic calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the diagnostic struct by 'sw_state_diagnostic_cb_init'.                  */
/***************************************************************************************************/

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_bcm_l3_dump */
typedef int (*sw_state_dpp_bcm_l3_dump_cb)(
    int unit);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_bcm_l3_used_intf_dump */
typedef int (*sw_state_dpp_bcm_l3_used_intf_dump_cb)(
    int unit, int l3_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_bcm_l3_used_vrf_dump */
typedef int (*sw_state_dpp_bcm_l3_used_vrf_dump_cb)(
    int unit, int l3_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_bcm_l3_used_host_dump */
typedef int (*sw_state_dpp_bcm_l3_used_host_dump_cb)(
    int unit, int l3_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_bcm_l3_used_route_dump */
typedef int (*sw_state_dpp_bcm_l3_used_route_dump_cb)(
    int unit, int l3_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_bcm_l3_dpp_l3_state_dump */
typedef int (*sw_state_dpp_bcm_l3_dpp_l3_state_dump_cb)(
    int unit, int l3_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_bcm_l3_dpp_l3_state_init_dump */
typedef int (*sw_state_dpp_bcm_l3_dpp_l3_state_init_dump_cb)(
    int unit, int l3_idx_0, int dpp_l3_state_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_bcm_l3_dpp_l3_state_urpf_mode_dump */
typedef int (*sw_state_dpp_bcm_l3_dpp_l3_state_urpf_mode_dump_cb)(
    int unit, int l3_idx_0, int dpp_l3_state_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_bcm_l3_dpp_l3_state_bcm_tunnel_intf_to_eep_dump */
typedef int (*sw_state_dpp_bcm_l3_dpp_l3_state_bcm_tunnel_intf_to_eep_dump_cb)(
    int unit, int l3_idx_0, int dpp_l3_state_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_bcm_l3_vrrp_protocol_set_types_dump */
typedef int (*sw_state_dpp_bcm_l3_vrrp_protocol_set_types_dump_cb)(
    int unit, int l3_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_bcm_l3_vrrp_protocol_set_counts_dump */
typedef int (*sw_state_dpp_bcm_l3_vrrp_protocol_set_counts_dump_cb)(
    int unit, int l3_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

/*********************************** diagnostic calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the diagnostic layer for the entire SW state.*/
/* use this tree to dump fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_bcm_l3_used_intf_diagnostic_cbs_s {
    sw_state_dpp_bcm_l3_used_intf_dump_cb dump;
} sw_state_dpp_bcm_l3_used_intf_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_bcm_l3_used_vrf_diagnostic_cbs_s {
    sw_state_dpp_bcm_l3_used_vrf_dump_cb dump;
} sw_state_dpp_bcm_l3_used_vrf_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_bcm_l3_used_host_diagnostic_cbs_s {
    sw_state_dpp_bcm_l3_used_host_dump_cb dump;
} sw_state_dpp_bcm_l3_used_host_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_bcm_l3_used_route_diagnostic_cbs_s {
    sw_state_dpp_bcm_l3_used_route_dump_cb dump;
} sw_state_dpp_bcm_l3_used_route_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_bcm_l3_dpp_l3_state_init_diagnostic_cbs_s {
    sw_state_dpp_bcm_l3_dpp_l3_state_init_dump_cb dump;
} sw_state_dpp_bcm_l3_dpp_l3_state_init_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_bcm_l3_dpp_l3_state_urpf_mode_diagnostic_cbs_s {
    sw_state_dpp_bcm_l3_dpp_l3_state_urpf_mode_dump_cb dump;
} sw_state_dpp_bcm_l3_dpp_l3_state_urpf_mode_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_bcm_l3_dpp_l3_state_bcm_tunnel_intf_to_eep_diagnostic_cbs_s {
    sw_state_dpp_bcm_l3_dpp_l3_state_bcm_tunnel_intf_to_eep_dump_cb dump;
} sw_state_dpp_bcm_l3_dpp_l3_state_bcm_tunnel_intf_to_eep_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_bcm_l3_dpp_l3_state_diagnostic_cbs_s {
    sw_state_dpp_bcm_l3_dpp_l3_state_dump_cb dump;
    sw_state_dpp_bcm_l3_dpp_l3_state_init_diagnostic_cbs_t init;
    sw_state_dpp_bcm_l3_dpp_l3_state_urpf_mode_diagnostic_cbs_t urpf_mode;
    sw_state_dpp_bcm_l3_dpp_l3_state_bcm_tunnel_intf_to_eep_diagnostic_cbs_t bcm_tunnel_intf_to_eep;
} sw_state_dpp_bcm_l3_dpp_l3_state_diagnostic_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_bcm_l3_vrrp_protocol_set_types_diagnostic_cbs_s {
    sw_state_dpp_bcm_l3_vrrp_protocol_set_types_dump_cb dump;
} sw_state_dpp_bcm_l3_vrrp_protocol_set_types_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_bcm_l3_vrrp_protocol_set_counts_diagnostic_cbs_s {
    sw_state_dpp_bcm_l3_vrrp_protocol_set_counts_dump_cb dump;
} sw_state_dpp_bcm_l3_vrrp_protocol_set_counts_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_bcm_l3_diagnostic_cbs_s {
#if defined(BCM_PETRA_SUPPORT)
    sw_state_dpp_bcm_l3_dump_cb dump;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
    sw_state_dpp_bcm_l3_used_intf_diagnostic_cbs_t used_intf;
    sw_state_dpp_bcm_l3_used_vrf_diagnostic_cbs_t used_vrf;
    sw_state_dpp_bcm_l3_used_host_diagnostic_cbs_t used_host;
    sw_state_dpp_bcm_l3_used_route_diagnostic_cbs_t used_route;
    sw_state_dpp_bcm_l3_dpp_l3_state_diagnostic_cbs_t dpp_l3_state;
    sw_state_dpp_bcm_l3_vrrp_protocol_set_types_diagnostic_cbs_t vrrp_protocol_set_types;
    sw_state_dpp_bcm_l3_vrrp_protocol_set_counts_diagnostic_cbs_t vrrp_protocol_set_counts;
} sw_state_dpp_bcm_l3_diagnostic_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

int sw_state_dpp_bcm_l3_diagnostic_cb_init(int unit);

#endif /* BCM_WARM_BOOT_API_TEST */

#endif /* _SHR_SW_STATE_DPP_BCM_L3_DIAGNOSTIC_H_ */