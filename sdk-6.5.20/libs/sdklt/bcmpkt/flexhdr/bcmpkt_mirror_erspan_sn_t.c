/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) header.yml.
 * Edits to this file will be lost when it is regenerated.
 *
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * All Rights Reserved.$
 *
 * Tool Path: $SDK/INTERNAL/fltg/xfc_map_parser
 */

/*! \file bcmpkt_mirror_erspan_sn_t.c
 *
 * mirror_erspan_sn_t access interface.
 */
#include <shr/shr_error.h>
#include <shr/shr_debug.h>
#include <bsl/bsl.h>
#include <bcmlrd/bcmlrd_conf.h>
#include <bcmpkt/flexhdr/bcmpkt_mirror_erspan_sn_t.h>
#include <bcmpkt/flexhdr/bcmpkt_mirror_erspan_sn_t_internal.h>

#define BSL_LOG_MODULE BSL_LS_BCMPKT_FLEX_HDR

#define BCMLRD_VARIANT_ENTRY(_bd,_bu,_va,_ve,_vu,_vv,_vo,_vd,_r0,_r1) \
    extern const bcmpkt_mirror_erspan_sn_t_fget_t _bd##_vu##_va##_mirror_erspan_sn_t_fget;
#include <bcmlrd/chip/bcmlrd_variant.h>

#define BCMLRD_VARIANT_ENTRY(_bd,_bu,_va,_ve,_vu,_vv,_vo,_vd,_r0,_r1) \
    &_bd##_vu##_va##_mirror_erspan_sn_t_fget,
static const bcmpkt_mirror_erspan_sn_t_fget_t *mirror_erspan_sn_t_fget[] = {
    NULL,
#include <bcmlrd/chip/bcmlrd_variant.h>
    NULL
};

#define BCMLRD_VARIANT_ENTRY(_bd,_bu,_va,_ve,_vu,_vv,_vo,_vd,_r0,_r1) \
    extern const bcmpkt_mirror_erspan_sn_t_fset_t _bd##_vu##_va##_mirror_erspan_sn_t_fset;
#include <bcmlrd/chip/bcmlrd_variant.h>

#define BCMLRD_VARIANT_ENTRY(_bd,_bu,_va,_ve,_vu,_vv,_vo,_vd,_r0,_r1) \
    &_bd##_vu##_va##_mirror_erspan_sn_t_fset,
static const bcmpkt_mirror_erspan_sn_t_fset_t *mirror_erspan_sn_t_fset[] = {
    NULL,
#include <bcmlrd/chip/bcmlrd_variant.h>
    NULL
};

#define BCMLRD_VARIANT_ENTRY(_bd,_bu,_va,_ve,_vu,_vv,_vo,_vd,_r0,_r1) \
    extern const bcmpkt_mirror_erspan_sn_t_figet_t _bd##_vu##_va##_mirror_erspan_sn_t_figet;
#include <bcmlrd/chip/bcmlrd_variant.h>

#define BCMLRD_VARIANT_ENTRY(_bd,_bu,_va,_ve,_vu,_vv,_vo,_vd,_r0,_r1) \
    &_bd##_vu##_va##_mirror_erspan_sn_t_figet,
static const bcmpkt_mirror_erspan_sn_t_figet_t *mirror_erspan_sn_t_figet[] = {
    NULL,
#include <bcmlrd/chip/bcmlrd_variant.h>
    NULL
};

#define BCMLRD_VARIANT_ENTRY(_bd,_bu,_va,_ve,_vu,_vv,_vo,_vd,_r0,_r1) \
    &_bd##_vu##_va##_mirror_erspan_sn_t_view_info_get,
static void (*view_info_get[])(bcmpkt_pmd_view_info_t *info) = {
    NULL,
#include <bcmlrd/chip/bcmlrd_variant.h>
    NULL
};

static const shr_enum_map_t field_names[] =
{
    BCMPKT_MIRROR_ERSPAN_SN_T_FIELD_NAME_MAP_INIT
};

int
bcmpkt_mirror_erspan_sn_t_is_supported(bcmlrd_variant_t variant, bool *is_supported)
{
    SHR_FUNC_ENTER(BSL_UNIT_UNKNOWN);
    SHR_NULL_CHECK(is_supported, SHR_E_PARAM);

    if (variant <= BCMLRD_VARIANT_T_NONE || variant >= BCMLRD_VARIANT_T_COUNT) {
        SHR_ERR_EXIT(SHR_E_PARAM);
    }

    if (mirror_erspan_sn_t_figet[variant] == NULL ||
        mirror_erspan_sn_t_figet[variant]->fget[BCMPKT_MIRROR_ERSPAN_SN_T_I_SUPPORT] == NULL) {
        *is_supported = false;
    } else {
        *is_supported = mirror_erspan_sn_t_figet[variant]->fget[BCMPKT_MIRROR_ERSPAN_SN_T_I_SUPPORT](NULL, NULL);
    }
exit:
    SHR_FUNC_EXIT();
}

int
bcmpkt_mirror_erspan_sn_t_field_get(bcmlrd_variant_t variant, uint32_t *mirror_erspan_sn_t,
                                     int fid, uint32_t *val)
{
    SHR_FUNC_ENTER(BSL_UNIT_UNKNOWN);
    SHR_NULL_CHECK(mirror_erspan_sn_t, SHR_E_PARAM);
    SHR_NULL_CHECK(val, SHR_E_PARAM);

    if (variant <= BCMLRD_VARIANT_T_NONE || variant >= BCMLRD_VARIANT_T_COUNT) {
        SHR_ERR_EXIT(SHR_E_PARAM);
    }

    if (fid <= BCMPKT_MIRROR_ERSPAN_SN_T_FID_INVALID || fid >= BCMPKT_MIRROR_ERSPAN_SN_T_FID_COUNT) {
        SHR_ERR_EXIT(SHR_E_PARAM);
    }

    if (mirror_erspan_sn_t_fget[variant] == NULL ||
        mirror_erspan_sn_t_fget[variant]->fget[fid] == NULL) {
        SHR_ERR_EXIT(SHR_E_UNAVAIL);
    }

    *val = mirror_erspan_sn_t_fget[variant]->fget[fid](mirror_erspan_sn_t);

exit:
    SHR_FUNC_EXIT();
}

int
bcmpkt_mirror_erspan_sn_t_field_set(bcmlrd_variant_t variant, uint32_t *mirror_erspan_sn_t,
                                     int fid, uint32_t val)
{
    SHR_FUNC_ENTER(BSL_UNIT_UNKNOWN);
    SHR_NULL_CHECK(mirror_erspan_sn_t, SHR_E_PARAM);

    if (variant <= BCMLRD_VARIANT_T_NONE || variant >= BCMLRD_VARIANT_T_COUNT) {
        SHR_ERR_EXIT(SHR_E_PARAM);
    }

    if (fid <= BCMPKT_MIRROR_ERSPAN_SN_T_FID_INVALID || fid >= BCMPKT_MIRROR_ERSPAN_SN_T_FID_COUNT) {
        SHR_ERR_EXIT(SHR_E_PARAM);
    }

    if (mirror_erspan_sn_t_fset[variant] == NULL ||
        mirror_erspan_sn_t_fset[variant]->fset[fid] == NULL) {
        SHR_ERR_EXIT(SHR_E_UNAVAIL);
    }

    mirror_erspan_sn_t_fset[variant]->fset[fid](mirror_erspan_sn_t, val);

exit:
    SHR_FUNC_EXIT();
}

int
bcmpkt_mirror_erspan_sn_t_field_name_get(int fid, char **name)
{
    SHR_FUNC_ENTER(BSL_UNIT_UNKNOWN);
    SHR_NULL_CHECK(name, SHR_E_PARAM);

    if (fid <= BCMPKT_MIRROR_ERSPAN_SN_T_FID_INVALID ||
        fid >= BCMPKT_MIRROR_ERSPAN_SN_T_FID_COUNT) {
        SHR_ERR_EXIT(SHR_E_PARAM);
    }

    *name = field_names[fid].name;

exit:
    SHR_FUNC_EXIT();
}

int
bcmpkt_mirror_erspan_sn_t_field_id_get(char *name, int *fid)
{
    int i;

    SHR_FUNC_ENTER(BSL_UNIT_UNKNOWN);
    SHR_NULL_CHECK(name, SHR_E_PARAM);
    SHR_NULL_CHECK(fid, SHR_E_PARAM);

    for (i = BCMPKT_MIRROR_ERSPAN_SN_T_FID_INVALID + 1; i < BCMPKT_MIRROR_ERSPAN_SN_T_FID_COUNT; i++) {
        if (sal_strcasecmp(field_names[i].name, name) == 0) {
            *fid = field_names[i].val;
            SHR_EXIT();
        }
    }
    SHR_ERR_EXIT(SHR_E_NOT_FOUND);

exit:
    SHR_FUNC_EXIT();
}

int
bcmpkt_mirror_erspan_sn_t_fid_support_get(bcmlrd_variant_t variant,
                          bcmpkt_mirror_erspan_sn_t_fid_support_t *support)
{
    int i;
    bcmpkt_pmd_view_info_t view_info;

    SHR_FUNC_ENTER(BSL_UNIT_UNKNOWN);

    if (variant <= BCMLRD_VARIANT_T_NONE || variant >= BCMLRD_VARIANT_T_COUNT) {
        SHR_ERR_EXIT(SHR_E_PARAM);
    }

    if (view_info_get[variant] == NULL) {
        SHR_ERR_EXIT(SHR_E_INTERNAL);
    }
    SHR_NULL_CHECK(support, SHR_E_PARAM);
    sal_memset(support, 0, sizeof(*support));

    view_info_get[variant](&view_info);
    if (!view_info.view_types || !view_info.view_infos) {
        SHR_VERBOSE_EXIT(SHR_E_UNAVAIL);
    }

    for (i = BCMPKT_MIRROR_ERSPAN_SN_T_FID_INVALID + 1; i < BCMPKT_MIRROR_ERSPAN_SN_T_FID_COUNT; i++) {
        if (view_info.view_infos[i] >= -1) {
            SHR_BITSET(support->fbits, i);
        }
    }

exit:
    SHR_FUNC_EXIT();
}

int
bcmpkt_mirror_erspan_sn_t_field_list_dump(bcmlrd_variant_t variant,
                           char *view_name, shr_pb_t *pb)
{
    int i, j;
    bcmpkt_pmd_view_info_t view_info;

    SHR_FUNC_ENTER(BSL_UNIT_UNKNOWN);

    if (variant <= BCMLRD_VARIANT_T_NONE || variant >= BCMLRD_VARIANT_T_COUNT) {
        SHR_ERR_EXIT(SHR_E_PARAM);
    }

    SHR_NULL_CHECK(pb, SHR_E_PARAM);
    if (view_info_get[variant] == NULL) {
        SHR_ERR_EXIT(SHR_E_INTERNAL);
    }

    view_info_get[variant](&view_info);
    SHR_NULL_CHECK(view_info.view_types, SHR_E_UNAVAIL);
    SHR_NULL_CHECK(view_info.view_infos, SHR_E_UNAVAIL);

    /* Print common fields. */
    for (i = BCMPKT_MIRROR_ERSPAN_SN_T_FID_INVALID + 1; i < BCMPKT_MIRROR_ERSPAN_SN_T_FID_COUNT; i++) {
        if (view_info.view_infos[i] == -1) {
            shr_pb_printf(pb, "    %s\n", field_names[i].name);
        }
    }

    /* Print view fields. */
    for (j = 0; view_info.view_types[j].name != NULL; j++) {
        if (view_name) {
            if (sal_strcasecmp(view_name, view_info.view_types[j].name)) {
                continue;
            }
        }
        for (i = BCMPKT_MIRROR_ERSPAN_SN_T_FID_INVALID + 1; i < BCMPKT_MIRROR_ERSPAN_SN_T_FID_COUNT; i++) {
            if (view_info.view_infos[i] == view_info.view_types[j].val) {
                shr_pb_printf(pb, "    %s\n", field_names[i].name);
            }
        }
    }

exit:
    SHR_FUNC_EXIT();
}

int
bcmpkt_mirror_erspan_sn_t_dump(bcmlrd_variant_t variant, uint32_t *mirror_erspan_sn_t,
                uint32_t flags, shr_pb_t *pb)
{
    int i;
    int view_enc, val;
    bcmpkt_pmd_view_info_t view_info;

    SHR_FUNC_ENTER(BSL_UNIT_UNKNOWN);
    SHR_NULL_CHECK(mirror_erspan_sn_t, SHR_E_PARAM);
    SHR_NULL_CHECK(pb, SHR_E_PARAM);

    if (variant <= BCMLRD_VARIANT_T_NONE || variant >= BCMLRD_VARIANT_T_COUNT) {
        SHR_ERR_EXIT(SHR_E_PARAM);
    }

    if (mirror_erspan_sn_t_fget[variant] == NULL ||
        view_info_get[variant] == NULL) {
        SHR_ERR_EXIT(SHR_E_INTERNAL);
    }

    view_info_get[variant](&view_info);
    SHR_NULL_CHECK(view_info.view_types, SHR_E_UNAVAIL);
    SHR_NULL_CHECK(view_info.view_infos, SHR_E_UNAVAIL);

    /* Print common fields. */
    for (i = BCMPKT_MIRROR_ERSPAN_SN_T_FID_INVALID + 1; i < BCMPKT_MIRROR_ERSPAN_SN_T_FID_COUNT; i++) {
        if (view_info.view_infos[i] == -1) {
            val = mirror_erspan_sn_t_fget[variant]->fget[i](mirror_erspan_sn_t);
            if ((val != 0) || (flags == BCMPKT_MIRROR_ERSPAN_SN_T_DUMP_F_ALL)) {
                shr_pb_printf(pb, "\t%-32s:0x%x(%d)\n",
                              field_names[i].name, val, val);
            }
        }
    }

    /* Print view fields. */
    if (view_info.view_type_get) {
        view_enc = view_info.view_type_get(mirror_erspan_sn_t);
        for (i = BCMPKT_MIRROR_ERSPAN_SN_T_FID_INVALID + 1; i < BCMPKT_MIRROR_ERSPAN_SN_T_FID_COUNT; i++) {
            if (view_info.view_infos[i] == view_enc) {
                val = mirror_erspan_sn_t_fget[variant]->fget[i](mirror_erspan_sn_t);
                if ((val != 0) || (flags == BCMPKT_MIRROR_ERSPAN_SN_T_DUMP_F_ALL)) {
                    shr_pb_printf(pb, "\t%-32s:0x%x(%d)\n",
                                  field_names[i].name, val, val);
                }
            }
        }
    }

exit:
    SHR_FUNC_EXIT();
}