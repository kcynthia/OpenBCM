/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2021 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
*/
#ifndef _SHR_sw_state_dpp_soc_arad_pp_l2_lif_ac_H_
#define _SHR_sw_state_dpp_soc_arad_pp_l2_lif_ac_H_


#define SW_STATE_DPP_SOC_ARAD_PP_L2_LIF_AC_AC_KEY_MAP_MULTI_SET_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_SOC_ARAD_PP_L2_LIF_AC_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_SOC_ARAD_PP_L2_LIF_AC_AC_KEY_MAP_MULTI_SET_LAYOUT_NOF_MAX_LAYOUT_NODES) 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_soc_arad_pp_l2_lif_ac_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_soc_arad_pp_l2_lif_ac_ac_key_map_multi_set_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#endif /* _SHR_sw_state_dpp_soc_arad_pp_l2_lif_ac_H_ */