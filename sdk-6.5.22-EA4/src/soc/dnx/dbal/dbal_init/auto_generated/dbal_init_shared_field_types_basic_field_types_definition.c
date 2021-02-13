/** \file dbal_init_shared_field_types_basic_field_types_definition.c
 * Logical DB enums \n 
 * DO NOT EDIT THIS FILE!\n 
 * This file is auto-generated.\n 
 * Edits to this file will be lost when it is regenerated.\n 
 * \n 
 */
/*
 * 
 This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 
 Copyright 2007-2021 Broadcom Inc. All rights reserved.
 */

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_uint_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_UINT];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "UINT" /* name*/, 32 /* size*/, is_valid /* is field valid*/, FALSE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_UINT32 /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** default restrict values  */
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_ushort_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_USHORT];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "USHORT" /* name*/, 16 /* size*/, is_valid /* is field valid*/, FALSE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_UINT32 /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** default restrict values  */
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_hexa_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_HEXA];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "HEXA" /* name*/, 32 /* size*/, is_valid /* is field valid*/, FALSE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_HEX /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** default restrict values  */
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_bool_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_BOOL];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "BOOL" /* name*/, 1 /* size*/, is_valid /* is field valid*/, FALSE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_BOOL /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** default restrict values  */
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_uint_inv_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_UINT_INV];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "UINT_INV" /* name*/, 32 /* size*/, is_valid /* is field valid*/, FALSE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_UINT32 /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** default restrict values  */
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    cur_field_types_info->encode_info.encode_mode = DBAL_VALUE_FIELD_ENCODE_BITWISE_NOT;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_string_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_STRING];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "STRING" /* name*/, 512 /* size*/, is_valid /* is field valid*/, FALSE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_STR /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** default restrict values  */
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_bool_inv_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_BOOL_INV];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "BOOL_INV" /* name*/, 1 /* size*/, is_valid /* is field valid*/, FALSE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_BOOL /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** default restrict values  */
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    cur_field_types_info->encode_info.encode_mode = DBAL_VALUE_FIELD_ENCODE_BITWISE_NOT;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_array32_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ARRAY32];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ARRAY32" /* name*/, 512 /* size*/, is_valid /* is field valid*/, FALSE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_ARRAY32 /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** default restrict values  */
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_array8_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ARRAY8];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ARRAY8" /* name*/, 512 /* size*/, is_valid /* is field valid*/, FALSE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_ARRAY8 /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** default restrict values  */
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_bitmap_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_BITMAP];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "BITMAP" /* name*/, 512 /* size*/, is_valid /* is field valid*/, FALSE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_BITMAP /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** default restrict values  */
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_core_id_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_CORE_ID];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "CORE_ID" /* name*/, dnx_data_device.general.core_max_nof_bits_get(unit) /* size*/, is_valid /* is field valid*/, FALSE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_SYSTEM_CORE /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** restrict value: max value  */
    cur_field_type_param->max_value = dnx_data_device.general.nof_cores_get(unit)-1;
    /** restrict value: min value  */
    cur_field_type_param->min_value = 0;
    /** restrict value: const value  */
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = DBAL_DB_INVALID;
    /** restrict value: illegal values  */
    cur_field_type_param->nof_illegal_value = 0;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_core_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_CORE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "CORE" /* name*/, dnx_data_device.general.core_max_nof_bits_get(unit) /* size*/, is_valid /* is field valid*/, FALSE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_UINT32 /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** restrict value: max value  */
    cur_field_type_param->max_value = dnx_data_device.general.nof_cores_get(unit)-1;
    /** restrict value: min value  */
    cur_field_type_param->min_value = 0;
    /** restrict value: const value  */
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = DBAL_DB_INVALID;
    /** restrict value: illegal values  */
    cur_field_type_param->nof_illegal_value = 0;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_result_type_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_RESULT_TYPE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "RESULT_TYPE" /* name*/, 32 /* size*/, is_valid /* is field valid*/, FALSE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_UINT32 /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** default restrict values  */
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_in_lif_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_IN_LIF];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "IN_LIF" /* name*/, 20 /* size*/, is_valid /* is field valid*/, TRUE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_UINT32 /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** default restrict values  */
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_dbal_table_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_DBAL_TABLE];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "DBAL_TABLE" /* name*/, 32 /* size*/, is_valid /* is field valid*/, FALSE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_DBAL_TABLE /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** default restrict values  */
    cur_field_type_param->nof_illegal_value = 0;
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    cur_field_type_param->const_value = DBAL_DB_INVALID;
    cur_field_type_param->default_val = 0;
    cur_field_type_param->default_val_valid = FALSE;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_zero_padding_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ZERO_PADDING];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ZERO_PADDING" /* name*/, 32 /* size*/, is_valid /* is field valid*/, FALSE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_UINT32 /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** restrict value: max value  */
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    /** restrict value: min value  */
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    /** restrict value: const value  */
    cur_field_type_param->const_value = 0;
    cur_field_type_param->default_val = DBAL_DB_INVALID;
    /** restrict value: illegal values  */
    cur_field_type_param->nof_illegal_value = 0;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_shared_field_types_basic_field_types_definition_zero_padding_array_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    dbal_field_types_basic_info_t * cur_field_types_info = field_types_info[DBAL_FIELD_TYPE_DEF_ZERO_PADDING_ARRAY];
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_field_type_db_struct_clear(unit, cur_field_type_param);
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_general_info_set(unit, cur_field_type_param, cur_field_types_info, "ZERO_PADDING_ARRAY" /* name*/, 256 /* size*/, is_valid /* is field valid*/, FALSE /* has resource name*/, DBAL_FIELD_PRINT_TYPE_ARRAY32 /* print*/, 0 /* is common*/, 1 /* is default*/, FALSE /* is_standard_1 is set by Autocoder*/));
    /** *********************  */
    /** field type interface  */
    /** *********************  */
    /** no interface  */
    /** ***********************  */
    /** field type phy mapping  */
    /** ***********************  */
    /** restrict value: max value  */
    cur_field_type_param->max_value = DBAL_DB_INVALID;
    /** restrict value: min value  */
    cur_field_type_param->min_value = DBAL_DB_INVALID;
    /** restrict value: const value  */
    cur_field_type_param->const_value = 0;
    cur_field_type_param->default_val = DBAL_DB_INVALID;
    /** restrict value: illegal values  */
    cur_field_type_param->nof_illegal_value = 0;
    /** add field type to dbal  */
    SHR_IF_ERR_EXIT(dbal_db_init_field_type_add(unit, cur_field_type_param, cur_field_types_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
dbal_init_shared_field_types_basic_field_types_definition_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    SHR_FUNC_INIT_VARS(unit);
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_uint_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_ushort_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_hexa_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_bool_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_uint_inv_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_string_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_bool_inv_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_array32_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_array8_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_bitmap_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_core_id_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_core_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_result_type_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_in_lif_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_dbal_table_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_zero_padding_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(_dbal_init_shared_field_types_basic_field_types_definition_zero_padding_array_init(unit, cur_field_type_param, field_types_info));
exit:
    SHR_FUNC_EXIT;
}