/*! \file bcm56880_a0_fp_em_bank_sids_get.c
 *
 * Chip Specific em bank sids get function
 * for Trident4(56880_A0).
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <shr/shr_error.h>
#include <shr/shr_debug.h>
#include <bcmfp/bcmfp_internal.h>
#include <bcmfp/bcmfp_chip_internal.h>
#include <bcmfp/chip/bcm56880_a0_fp.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>

#define BSL_LOG_MODULE BSL_LS_BCMFP_DEV

int
bcm56880_a0_fp_em_bank_sids_get(int unit,
                                bcmdrd_sid_t lts_tcam_sid,
                                uint32_t *ptid)
{
    SHR_FUNC_ENTER(unit);

    SHR_NULL_CHECK(ptid, SHR_E_PARAM);

    switch (lts_tcam_sid) {
    case IFTA90_E2T_00_LTS_TCAM_0_ONLYm:
        ptid[BCMFP_EM_PRESEL_PTID] = IFTA90_E2T_00_LTS_PRE_SELm;
        ptid[BCMFP_EM_LTS_TCAM_PTID] = IFTA90_E2T_00_LTS_TCAM_0_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_FLOP_PTID] = IFTA90_E2T_00_LTS_POLICY_FLOP_0m;
        ptid[BCMFP_EM_LTS_DATA_PTID] = IFTA90_E2T_00_LTS_TCAM_0_DATA_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_EXT_PTID] = IFTA90_E2T_00_LTS_POLICY_EXT_0m;
        ptid[BCMFP_EM_KEY_MASK_PTID] = IFTA90_E2T_00_KEY_MASK_TABLEm;
        ptid[BCMFP_EM_KEY_ATTRIBUTES_PTID] = IFTA90_E2T_00_KEY_ATTRIBUTESm;
        ptid[BCMFP_EM_PDD_PTID] = IFTA90_E2T_00_PDD_PROFILE_TABLE_0m;
        ptid[BCMFP_EM_SBR_PTID] = IFTA90_SBR_PROFILE_TABLE_0m;
        ptid[BCMFP_EM_HIT_INDEX_PTID] = IFTA90_E2T_00_HIT_INDEX_PROFILEm;
        ptid[BCMFP_EM_LKUP_MISS_PTID] = IFTA90_E2T_00_ARRAY_MISS_POLICYm;
        ptid[BCMFP_EM_LKUP_MISS_LTPR_PTID] = IFTA90_E2T_00_MISS_LTPR_PROFILE_TABLEm;
        break;
    case IFTA90_E2T_00_LTS_TCAM_1_ONLYm:
        ptid[BCMFP_EM_PRESEL_PTID] = IFTA90_E2T_00_LTS_PRE_SELm;
        ptid[BCMFP_EM_LTS_TCAM_PTID] = IFTA90_E2T_00_LTS_TCAM_1_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_FLOP_PTID] = IFTA90_E2T_00_LTS_POLICY_FLOP_1m;
        ptid[BCMFP_EM_LTS_DATA_PTID] = IFTA90_E2T_00_LTS_TCAM_1_DATA_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_EXT_PTID] = IFTA90_E2T_00_LTS_POLICY_EXT_1m;
        ptid[BCMFP_EM_KEY_MASK_PTID] = IFTA90_E2T_00_KEY_MASK_TABLEm;
        ptid[BCMFP_EM_KEY_ATTRIBUTES_PTID] = IFTA90_E2T_00_KEY_ATTRIBUTESm;
        ptid[BCMFP_EM_PDD_PTID] = IFTA90_E2T_00_PDD_PROFILE_TABLE_1m;
        ptid[BCMFP_EM_SBR_PTID] = IFTA90_SBR_PROFILE_TABLE_0m;
        ptid[BCMFP_EM_HIT_INDEX_PTID] = IFTA90_E2T_00_HIT_INDEX_PROFILEm;
        ptid[BCMFP_EM_LKUP_MISS_PTID] = IFTA90_E2T_00_ARRAY_MISS_POLICYm;
        ptid[BCMFP_EM_LKUP_MISS_LTPR_PTID] = IFTA90_E2T_00_MISS_LTPR_PROFILE_TABLEm;
        break;
    case IFTA90_E2T_01_LTS_TCAM_0_ONLYm:
        ptid[BCMFP_EM_PRESEL_PTID] = IFTA90_E2T_01_LTS_PRE_SELm;
        ptid[BCMFP_EM_LTS_TCAM_PTID] = IFTA90_E2T_01_LTS_TCAM_0_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_FLOP_PTID] = IFTA90_E2T_01_LTS_POLICY_FLOP_0m;
        ptid[BCMFP_EM_LTS_DATA_PTID] = IFTA90_E2T_01_LTS_TCAM_0_DATA_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_EXT_PTID] = IFTA90_E2T_01_LTS_POLICY_EXT_0m;
        ptid[BCMFP_EM_KEY_MASK_PTID] = IFTA90_E2T_01_KEY_MASK_TABLEm;
        ptid[BCMFP_EM_KEY_ATTRIBUTES_PTID] = IFTA90_E2T_01_KEY_ATTRIBUTESm;
        ptid[BCMFP_EM_PDD_PTID] = IFTA90_E2T_01_PDD_PROFILE_TABLE_0m;
        ptid[BCMFP_EM_SBR_PTID] = IFTA90_SBR_PROFILE_TABLE_0m;
        ptid[BCMFP_EM_HIT_INDEX_PTID] = IFTA90_E2T_01_HIT_INDEX_PROFILEm;
        ptid[BCMFP_EM_LKUP_MISS_PTID] = IFTA90_E2T_01_ARRAY_MISS_POLICYm;
        ptid[BCMFP_EM_LKUP_MISS_LTPR_PTID] = IFTA90_E2T_01_MISS_LTPR_PROFILE_TABLEm;
        break;
    case IFTA90_E2T_01_LTS_TCAM_1_ONLYm:
        ptid[BCMFP_EM_PRESEL_PTID] = IFTA90_E2T_01_LTS_PRE_SELm;
        ptid[BCMFP_EM_LTS_TCAM_PTID] = IFTA90_E2T_01_LTS_TCAM_1_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_FLOP_PTID] = IFTA90_E2T_01_LTS_POLICY_FLOP_1m;
        ptid[BCMFP_EM_LTS_DATA_PTID] = IFTA90_E2T_01_LTS_TCAM_1_DATA_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_EXT_PTID] = IFTA90_E2T_01_LTS_POLICY_EXT_1m;
        ptid[BCMFP_EM_KEY_MASK_PTID] = IFTA90_E2T_01_KEY_MASK_TABLEm;
        ptid[BCMFP_EM_KEY_ATTRIBUTES_PTID] = IFTA90_E2T_01_KEY_ATTRIBUTESm;
        ptid[BCMFP_EM_PDD_PTID] = IFTA90_E2T_01_PDD_PROFILE_TABLE_1m;
        ptid[BCMFP_EM_SBR_PTID] = IFTA90_SBR_PROFILE_TABLE_0m;
        ptid[BCMFP_EM_HIT_INDEX_PTID] = IFTA90_E2T_01_HIT_INDEX_PROFILEm;
        ptid[BCMFP_EM_LKUP_MISS_PTID] = IFTA90_E2T_01_ARRAY_MISS_POLICYm;
        ptid[BCMFP_EM_LKUP_MISS_LTPR_PTID] = IFTA90_E2T_01_MISS_LTPR_PROFILE_TABLEm;
        break;
    case IFTA90_E2T_02_LTS_TCAM_0_ONLYm:
        ptid[BCMFP_EM_PRESEL_PTID] = IFTA90_E2T_02_LTS_PRE_SELm;
        ptid[BCMFP_EM_LTS_TCAM_PTID] = IFTA90_E2T_02_LTS_TCAM_0_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_FLOP_PTID] = IFTA90_E2T_02_LTS_POLICY_FLOP_0m;
        ptid[BCMFP_EM_LTS_DATA_PTID] = IFTA90_E2T_02_LTS_TCAM_0_DATA_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_EXT_PTID] = IFTA90_E2T_02_LTS_POLICY_EXT_0m;
        ptid[BCMFP_EM_KEY_MASK_PTID] = IFTA90_E2T_02_KEY_MASK_TABLEm;
        ptid[BCMFP_EM_KEY_ATTRIBUTES_PTID] = IFTA90_E2T_02_KEY_ATTRIBUTESm;
        ptid[BCMFP_EM_PDD_PTID] = IFTA90_E2T_02_PDD_PROFILE_TABLE_0m;
        ptid[BCMFP_EM_SBR_PTID] = IFTA90_SBR_PROFILE_TABLE_1m;
        ptid[BCMFP_EM_HIT_INDEX_PTID] = IFTA90_E2T_02_HIT_INDEX_PROFILEm;
        ptid[BCMFP_EM_LKUP_MISS_PTID] = IFTA90_E2T_02_ARRAY_MISS_POLICYm;
        ptid[BCMFP_EM_LKUP_MISS_LTPR_PTID] = IFTA90_E2T_02_MISS_LTPR_PROFILE_TABLEm;
        break;
    case IFTA90_E2T_02_LTS_TCAM_1_ONLYm:
        ptid[BCMFP_EM_PRESEL_PTID] = IFTA90_E2T_02_LTS_PRE_SELm;
        ptid[BCMFP_EM_LTS_TCAM_PTID] = IFTA90_E2T_02_LTS_TCAM_1_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_FLOP_PTID] = IFTA90_E2T_02_LTS_POLICY_FLOP_1m;
        ptid[BCMFP_EM_LTS_DATA_PTID] = IFTA90_E2T_02_LTS_TCAM_1_DATA_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_EXT_PTID] = IFTA90_E2T_02_LTS_POLICY_EXT_1m;
        ptid[BCMFP_EM_KEY_MASK_PTID] = IFTA90_E2T_02_KEY_MASK_TABLEm;
        ptid[BCMFP_EM_KEY_ATTRIBUTES_PTID] = IFTA90_E2T_02_KEY_ATTRIBUTESm;
        ptid[BCMFP_EM_PDD_PTID] = IFTA90_E2T_02_PDD_PROFILE_TABLE_1m;
        ptid[BCMFP_EM_SBR_PTID] = IFTA90_SBR_PROFILE_TABLE_1m;
        ptid[BCMFP_EM_HIT_INDEX_PTID] = IFTA90_E2T_02_HIT_INDEX_PROFILEm;
        ptid[BCMFP_EM_LKUP_MISS_PTID] = IFTA90_E2T_02_ARRAY_MISS_POLICYm;
        ptid[BCMFP_EM_LKUP_MISS_LTPR_PTID] = IFTA90_E2T_02_MISS_LTPR_PROFILE_TABLEm;
        break;
    case IFTA90_E2T_03_LTS_TCAM_0_ONLYm:
        ptid[BCMFP_EM_PRESEL_PTID] = IFTA90_E2T_03_LTS_PRE_SELm;
        ptid[BCMFP_EM_LTS_TCAM_PTID] = IFTA90_E2T_03_LTS_TCAM_0_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_FLOP_PTID] = IFTA90_E2T_03_LTS_POLICY_FLOP_0m;
        ptid[BCMFP_EM_LTS_DATA_PTID] = IFTA90_E2T_03_LTS_TCAM_0_DATA_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_EXT_PTID] = IFTA90_E2T_03_LTS_POLICY_EXT_0m;
        ptid[BCMFP_EM_KEY_MASK_PTID] = IFTA90_E2T_03_KEY_MASK_TABLEm;
        ptid[BCMFP_EM_KEY_ATTRIBUTES_PTID] = IFTA90_E2T_03_KEY_ATTRIBUTESm;
        ptid[BCMFP_EM_PDD_PTID] = IFTA90_E2T_03_PDD_PROFILE_TABLE_0m;
        ptid[BCMFP_EM_SBR_PTID] = IFTA90_SBR_PROFILE_TABLE_1m;
        ptid[BCMFP_EM_HIT_INDEX_PTID] = IFTA90_E2T_03_HIT_INDEX_PROFILEm;
        ptid[BCMFP_EM_LKUP_MISS_PTID] = IFTA90_E2T_03_ARRAY_MISS_POLICYm;
        ptid[BCMFP_EM_LKUP_MISS_LTPR_PTID] = IFTA90_E2T_03_MISS_LTPR_PROFILE_TABLEm;
        break;
    case IFTA90_E2T_03_LTS_TCAM_1_ONLYm:
        ptid[BCMFP_EM_PRESEL_PTID] = IFTA90_E2T_03_LTS_PRE_SELm;
        ptid[BCMFP_EM_LTS_TCAM_PTID] = IFTA90_E2T_03_LTS_TCAM_1_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_FLOP_PTID] = IFTA90_E2T_03_LTS_POLICY_FLOP_1m;
        ptid[BCMFP_EM_LTS_DATA_PTID] = IFTA90_E2T_03_LTS_TCAM_1_DATA_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_EXT_PTID] = IFTA90_E2T_03_LTS_POLICY_EXT_1m;
        ptid[BCMFP_EM_KEY_MASK_PTID] = IFTA90_E2T_03_KEY_MASK_TABLEm;
        ptid[BCMFP_EM_KEY_ATTRIBUTES_PTID] = IFTA90_E2T_03_KEY_ATTRIBUTESm;
        ptid[BCMFP_EM_PDD_PTID] = IFTA90_E2T_03_PDD_PROFILE_TABLE_1m;
        ptid[BCMFP_EM_SBR_PTID] = IFTA90_SBR_PROFILE_TABLE_1m;
        ptid[BCMFP_EM_HIT_INDEX_PTID] = IFTA90_E2T_03_HIT_INDEX_PROFILEm;
        ptid[BCMFP_EM_LKUP_MISS_PTID] = IFTA90_E2T_03_ARRAY_MISS_POLICYm;
        ptid[BCMFP_EM_LKUP_MISS_LTPR_PTID] = IFTA90_E2T_03_MISS_LTPR_PROFILE_TABLEm;
        break;
    case IFTA80_E2T_00_LTS_TCAM_0_ONLYm:
        ptid[BCMFP_EM_PRESEL_PTID] = IFTA80_E2T_00_LTS_PRE_SELm;
        ptid[BCMFP_EM_LTS_TCAM_PTID] = IFTA80_E2T_00_LTS_TCAM_0_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_FLOP_PTID] = IFTA80_E2T_00_LTS_POLICY_FLOP_0m;
        ptid[BCMFP_EM_LTS_DATA_PTID] = IFTA80_E2T_00_LTS_TCAM_0_DATA_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_EXT_PTID] = IFTA80_E2T_00_LTS_POLICY_EXT_0m;
        ptid[BCMFP_EM_KEY_MASK_PTID] = IFTA80_E2T_00_KEY_MASK_TABLEm;
        ptid[BCMFP_EM_KEY_ATTRIBUTES_PTID] = IFTA80_E2T_00_KEY_ATTRIBUTESm;
        ptid[BCMFP_EM_PDD_PTID] = IFTA80_E2T_00_PDD_PROFILE_TABLE_0m;
        ptid[BCMFP_EM_SBR_PTID] = IFTA80_SBR_PROFILE_TABLE_1m;
        ptid[BCMFP_EM_HIT_INDEX_PTID] = IFTA80_E2T_00_HIT_INDEX_PROFILEm;
        ptid[BCMFP_EM_LKUP_MISS_PTID] = IFTA80_E2T_00_ARRAY_MISS_POLICYm;
        ptid[BCMFP_EM_LKUP_MISS_LTPR_PTID] = IFTA80_E2T_00_MISS_LTPR_PROFILE_TABLEm;
        break;
    case IFTA80_E2T_00_LTS_TCAM_1_ONLYm:
        ptid[BCMFP_EM_PRESEL_PTID] = IFTA80_E2T_00_LTS_PRE_SELm;
        ptid[BCMFP_EM_LTS_TCAM_PTID] = IFTA80_E2T_00_LTS_TCAM_1_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_FLOP_PTID] = IFTA80_E2T_00_LTS_POLICY_FLOP_1m;
        ptid[BCMFP_EM_LTS_DATA_PTID] = IFTA80_E2T_00_LTS_TCAM_1_DATA_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_EXT_PTID] = IFTA80_E2T_00_LTS_POLICY_EXT_1m;
        ptid[BCMFP_EM_KEY_MASK_PTID] = IFTA80_E2T_00_KEY_MASK_TABLEm;
        ptid[BCMFP_EM_KEY_ATTRIBUTES_PTID] = IFTA80_E2T_00_KEY_ATTRIBUTESm;
        ptid[BCMFP_EM_PDD_PTID] = IFTA80_E2T_00_PDD_PROFILE_TABLE_1m;
        ptid[BCMFP_EM_SBR_PTID] = IFTA80_SBR_PROFILE_TABLE_1m;
        ptid[BCMFP_EM_HIT_INDEX_PTID] = IFTA80_E2T_00_HIT_INDEX_PROFILEm;
        ptid[BCMFP_EM_LKUP_MISS_PTID] = IFTA80_E2T_00_ARRAY_MISS_POLICYm;
        ptid[BCMFP_EM_LKUP_MISS_LTPR_PTID] = IFTA80_E2T_00_MISS_LTPR_PROFILE_TABLEm;
        break;
    case IFTA80_E2T_01_LTS_TCAM_0_ONLYm:
        ptid[BCMFP_EM_PRESEL_PTID] = IFTA80_E2T_01_LTS_PRE_SELm;
        ptid[BCMFP_EM_LTS_TCAM_PTID] = IFTA80_E2T_01_LTS_TCAM_0_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_FLOP_PTID] = IFTA80_E2T_01_LTS_POLICY_FLOP_0m;
        ptid[BCMFP_EM_LTS_DATA_PTID] = IFTA80_E2T_01_LTS_TCAM_0_DATA_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_EXT_PTID] = IFTA80_E2T_01_LTS_POLICY_EXT_0m;
        ptid[BCMFP_EM_KEY_MASK_PTID] = IFTA80_E2T_01_KEY_MASK_TABLEm;
        ptid[BCMFP_EM_KEY_ATTRIBUTES_PTID] = IFTA80_E2T_01_KEY_ATTRIBUTESm;
        ptid[BCMFP_EM_PDD_PTID] = IFTA80_E2T_01_PDD_PROFILE_TABLE_0m;
        ptid[BCMFP_EM_SBR_PTID] = IFTA80_SBR_PROFILE_TABLE_1m;
        ptid[BCMFP_EM_HIT_INDEX_PTID] = IFTA80_E2T_01_HIT_INDEX_PROFILEm;
        ptid[BCMFP_EM_LKUP_MISS_PTID] = IFTA80_E2T_01_ARRAY_MISS_POLICYm;
        ptid[BCMFP_EM_LKUP_MISS_LTPR_PTID] = IFTA80_E2T_01_MISS_LTPR_PROFILE_TABLEm;
        break;
    case IFTA80_E2T_01_LTS_TCAM_1_ONLYm:
        ptid[BCMFP_EM_PRESEL_PTID] = IFTA80_E2T_01_LTS_PRE_SELm;
        ptid[BCMFP_EM_LTS_TCAM_PTID] = IFTA80_E2T_01_LTS_TCAM_1_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_FLOP_PTID] = IFTA80_E2T_01_LTS_POLICY_FLOP_1m;
        ptid[BCMFP_EM_LTS_DATA_PTID] = IFTA80_E2T_01_LTS_TCAM_1_DATA_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_EXT_PTID] = IFTA80_E2T_01_LTS_POLICY_EXT_1m;
        ptid[BCMFP_EM_KEY_MASK_PTID] = IFTA80_E2T_01_KEY_MASK_TABLEm;
        ptid[BCMFP_EM_KEY_ATTRIBUTES_PTID] = IFTA80_E2T_01_KEY_ATTRIBUTESm;
        ptid[BCMFP_EM_PDD_PTID] = IFTA80_E2T_01_PDD_PROFILE_TABLE_1m;
        ptid[BCMFP_EM_SBR_PTID] = IFTA80_SBR_PROFILE_TABLE_1m;
        ptid[BCMFP_EM_HIT_INDEX_PTID] = IFTA80_E2T_01_HIT_INDEX_PROFILEm;
        ptid[BCMFP_EM_LKUP_MISS_PTID] = IFTA80_E2T_01_ARRAY_MISS_POLICYm;
        ptid[BCMFP_EM_LKUP_MISS_LTPR_PTID] = IFTA80_E2T_01_MISS_LTPR_PROFILE_TABLEm;
        break;
    case IFTA80_E2T_02_LTS_TCAM_0_ONLYm:
        ptid[BCMFP_EM_PRESEL_PTID] = IFTA80_E2T_02_LTS_PRE_SELm;
        ptid[BCMFP_EM_LTS_TCAM_PTID] = IFTA80_E2T_02_LTS_TCAM_0_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_FLOP_PTID] = IFTA80_E2T_02_LTS_POLICY_FLOP_0m;
        ptid[BCMFP_EM_LTS_DATA_PTID] = IFTA80_E2T_02_LTS_TCAM_0_DATA_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_EXT_PTID] = IFTA80_E2T_02_LTS_POLICY_EXT_0m;
        ptid[BCMFP_EM_KEY_MASK_PTID] = IFTA80_E2T_02_KEY_MASK_TABLEm;
        ptid[BCMFP_EM_KEY_ATTRIBUTES_PTID] = IFTA80_E2T_02_KEY_ATTRIBUTESm;
        ptid[BCMFP_EM_PDD_PTID] = IFTA80_E2T_02_PDD_PROFILE_TABLE_0m;
        ptid[BCMFP_EM_SBR_PTID] = IFTA80_SBR_PROFILE_TABLE_2m;
        ptid[BCMFP_EM_HIT_INDEX_PTID] = IFTA80_E2T_02_HIT_INDEX_PROFILEm;
        ptid[BCMFP_EM_LKUP_MISS_PTID] = IFTA80_E2T_02_ARRAY_MISS_POLICYm;
        ptid[BCMFP_EM_LKUP_MISS_LTPR_PTID] = IFTA80_E2T_02_MISS_LTPR_PROFILE_TABLEm;
        break;
    case IFTA80_E2T_02_LTS_TCAM_1_ONLYm:
        ptid[BCMFP_EM_PRESEL_PTID] = IFTA80_E2T_02_LTS_PRE_SELm;
        ptid[BCMFP_EM_LTS_TCAM_PTID] = IFTA80_E2T_02_LTS_TCAM_1_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_FLOP_PTID] = IFTA80_E2T_02_LTS_POLICY_FLOP_1m;
        ptid[BCMFP_EM_LTS_DATA_PTID] = IFTA80_E2T_02_LTS_TCAM_1_DATA_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_EXT_PTID] = IFTA80_E2T_02_LTS_POLICY_EXT_1m;
        ptid[BCMFP_EM_KEY_MASK_PTID] = IFTA80_E2T_02_KEY_MASK_TABLEm;
        ptid[BCMFP_EM_KEY_ATTRIBUTES_PTID] = IFTA80_E2T_02_KEY_ATTRIBUTESm;
        ptid[BCMFP_EM_PDD_PTID] = IFTA80_E2T_02_PDD_PROFILE_TABLE_1m;
        ptid[BCMFP_EM_SBR_PTID] = IFTA80_SBR_PROFILE_TABLE_2m;
        ptid[BCMFP_EM_HIT_INDEX_PTID] = IFTA80_E2T_02_HIT_INDEX_PROFILEm;
        ptid[BCMFP_EM_LKUP_MISS_PTID] = IFTA80_E2T_02_ARRAY_MISS_POLICYm;
        ptid[BCMFP_EM_LKUP_MISS_LTPR_PTID] = IFTA80_E2T_02_MISS_LTPR_PROFILE_TABLEm;
        break;
    case IFTA80_E2T_03_LTS_TCAM_0_ONLYm:
        ptid[BCMFP_EM_PRESEL_PTID] = IFTA80_E2T_03_LTS_PRE_SELm;
        ptid[BCMFP_EM_LTS_TCAM_PTID] = IFTA80_E2T_03_LTS_TCAM_0_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_FLOP_PTID] = IFTA80_E2T_03_LTS_POLICY_FLOP_0m;
        ptid[BCMFP_EM_LTS_DATA_PTID] = IFTA80_E2T_03_LTS_TCAM_0_DATA_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_EXT_PTID] = IFTA80_E2T_03_LTS_POLICY_EXT_0m;
        ptid[BCMFP_EM_KEY_MASK_PTID] = IFTA80_E2T_03_KEY_MASK_TABLEm;
        ptid[BCMFP_EM_KEY_ATTRIBUTES_PTID] = IFTA80_E2T_03_KEY_ATTRIBUTESm;
        ptid[BCMFP_EM_PDD_PTID] = IFTA80_E2T_03_PDD_PROFILE_TABLE_0m;
        ptid[BCMFP_EM_SBR_PTID] = IFTA80_SBR_PROFILE_TABLE_2m;
        ptid[BCMFP_EM_HIT_INDEX_PTID] = IFTA80_E2T_03_HIT_INDEX_PROFILEm;
        ptid[BCMFP_EM_LKUP_MISS_PTID] = IFTA80_E2T_03_ARRAY_MISS_POLICYm;
        ptid[BCMFP_EM_LKUP_MISS_LTPR_PTID] = IFTA80_E2T_03_MISS_LTPR_PROFILE_TABLEm;
        break;
    case IFTA80_E2T_03_LTS_TCAM_1_ONLYm:
        ptid[BCMFP_EM_PRESEL_PTID] = IFTA80_E2T_03_LTS_PRE_SELm;
        ptid[BCMFP_EM_LTS_TCAM_PTID] = IFTA80_E2T_03_LTS_TCAM_1_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_FLOP_PTID] = IFTA80_E2T_03_LTS_POLICY_FLOP_1m;
        ptid[BCMFP_EM_LTS_DATA_PTID] = IFTA80_E2T_03_LTS_TCAM_1_DATA_ONLYm;
        ptid[BCMFP_EM_LTS_DATA_EXT_PTID] = IFTA80_E2T_03_LTS_POLICY_EXT_1m;
        ptid[BCMFP_EM_KEY_MASK_PTID] = IFTA80_E2T_03_KEY_MASK_TABLEm;
        ptid[BCMFP_EM_KEY_ATTRIBUTES_PTID] = IFTA80_E2T_03_KEY_ATTRIBUTESm;
        ptid[BCMFP_EM_PDD_PTID] = IFTA80_E2T_03_PDD_PROFILE_TABLE_1m;
        ptid[BCMFP_EM_SBR_PTID] = IFTA80_SBR_PROFILE_TABLE_2m;
        ptid[BCMFP_EM_HIT_INDEX_PTID] = IFTA80_E2T_03_HIT_INDEX_PROFILEm;
        ptid[BCMFP_EM_LKUP_MISS_PTID] = IFTA80_E2T_03_ARRAY_MISS_POLICYm;
        ptid[BCMFP_EM_LKUP_MISS_LTPR_PTID] = IFTA80_E2T_03_MISS_LTPR_PROFILE_TABLEm;
        break;
    default:
        SHR_ERR_EXIT(SHR_E_PARAM);
    }

exit:
    SHR_FUNC_EXIT();
}

int
bcm56880_a0_fp_em_sid_exists(int unit,
                             bcmdrd_sid_t *sid_arr,
                             uint32_t count,
                             bcmdrd_sid_t ptid)
{
    uint32_t idx = 0;

    for (idx = 0; idx < count; idx++) {
        if (sid_arr[idx] == ptid) {
            return true;
        }
    }

    return false;
}
