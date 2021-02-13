/** \file dbal_init_tables_sw_state_pp_l2_sw_pp_l2.c
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
_dbal_init_tables_sw_state_pp_l2_sw_pp_l2_l2_learning_general_info_sw_init(
int unit,
table_db_struct_t * cur_table_param,
dbal_logical_table_t * table_info)
{
    dbal_logical_table_t * table_entry = table_info + DBAL_TABLE_L2_LEARNING_GENERAL_INFO_SW;
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_table_db_struct_clear(cur_table_param);
    SHR_IF_ERR_EXIT(dbal_db_init_general_info_set(unit, table_entry, DBAL_TABLE_L2_LEARNING_GENERAL_INFO_SW /* table id*/, is_valid /* is valid*/, "L2_LEARNING_GENERAL_INFO_SW" /* table name*/, DBAL_ACCESS_METHOD_SW_STATE /* access method*/));
    /** maturity level  */
    /** default maturity level  */
    table_entry->maturity_level = DBAL_MATURITY_HIGH;
    /** *************  */
    /** set interface  */
    /** *************  */
    /** set type  */
    table_entry->table_type = DBAL_TABLE_TYPE_DIRECT;
    /** set labels  */
    /** nof labels  */
    table_entry->nof_labels = 1;
    SHR_ALLOC_SET_ZERO(table_entry->table_labels, table_entry->nof_labels * sizeof(dbal_labels_e), "table labels allocation", "%s%s%s\r\n", table_entry->table_name, EMPTY, EMPTY);
    table_entry->table_labels[0] = DBAL_LABEL_L2;
    /** no interface keys  */
    /** interface results  */
    {
        int field_index = 0;
        int result_type_counter = 0;
        dbal_table_field_info_t * dbal_db_field;
        table_db_field_params_struct_t db_field;
        DBAL_DB_INIT_TABLE_NOF_RESULT_TYPES_SET(table_entry, 1);
        SHR_IF_ERR_EXIT(dbal_db_init_table_db_interface_results_alloc(unit, table_entry));
        /** interface single result  */
        DBAL_DB_INIT_TABLE_NOF_RESULT_FIELDS_SET(table_entry, (table_entry->multi_res_info[result_type_counter]), 2);
        DBAL_DB_INIT_TABLE_INTERFACE_RESULT_FIELDS_ALLOC(table_entry, table_entry->multi_res_info[result_type_counter]);
        /** interface result fields init  */
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_LEARNING_MODE /* field id*/, DBAL_FIELD_TYPE_DEF_UINT /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 32;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_ROUTED_LEARNING /* field id*/, DBAL_FIELD_TYPE_DEF_UINT /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 32;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
    }
    /** *************  */
    /** app to phy db  */
    /** *************  */
    /** clear access section  */
    dbal_db_init_table_db_struct_access_clear(cur_table_param, table_entry);
    /** image infos  */
    {
        /** is_standard_1_table is set by Autocoder  */
        uint8 is_standard_1 = FALSE;
        /** is_compatible_with_all_images is set by Autocoder  */
        uint8 is_compatible_with_all_images = TRUE;
        DBAL_DB_INIT_TABLE_IMAGE_SPECIFIC_TABLE_INDICATION_SET(table_entry, is_standard_1, is_compatible_with_all_images);
        SHR_IF_ERR_EXIT(dbal_db_init_table_set_table_incompatible_image_sw_state_indication(unit, DBAL_TABLE_L2_LEARNING_GENERAL_INFO_SW, is_standard_1, is_compatible_with_all_images));
    }
    /** core mode  */
    table_entry->core_mode = DBAL_CORE_MODE_SBC;
    /** result type hw value by index  */
    dbal_db_init_table_add_result_type_physical_values_by_result_type_index(table_entry);
    /** set app to phy db for sw access  */
    dbal_db_init_sw_state_set_indirect_table_size(unit, table_entry, NULL /* table property size*/, DBAL_DB_INVALID /* table property size as int*/);
    SHR_IF_ERR_EXIT(dbal_db_init_table_add(unit, cur_table_param, DBAL_TABLE_L2_LEARNING_GENERAL_INFO_SW, table_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_tables_sw_state_pp_l2_sw_pp_l2_l2_dma_dsp_command_init(
int unit,
table_db_struct_t * cur_table_param,
dbal_logical_table_t * table_info)
{
    dbal_logical_table_t * table_entry = table_info + DBAL_TABLE_L2_DMA_DSP_COMMAND;
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_table_db_struct_clear(cur_table_param);
    SHR_IF_ERR_EXIT(dbal_db_init_general_info_set(unit, table_entry, DBAL_TABLE_L2_DMA_DSP_COMMAND /* table id*/, is_valid /* is valid*/, "L2_DMA_DSP_COMMAND" /* table name*/, DBAL_ACCESS_METHOD_SW_STATE /* access method*/));
    /** maturity level  */
    /** default maturity level  */
    table_entry->maturity_level = DBAL_MATURITY_HIGH;
    /** *************  */
    /** set interface  */
    /** *************  */
    /** set type  */
    table_entry->table_type = DBAL_TABLE_TYPE_DIRECT;
    /** set labels  */
    /** nof labels  */
    table_entry->nof_labels = 1;
    SHR_ALLOC_SET_ZERO(table_entry->table_labels, table_entry->nof_labels * sizeof(dbal_labels_e), "table labels allocation", "%s%s%s\r\n", table_entry->table_name, EMPTY, EMPTY);
    table_entry->table_labels[0] = DBAL_LABEL_L2;
    /** no interface keys  */
    /** interface results  */
    {
        int field_index = 0;
        int result_type_counter = 0;
        dbal_table_field_info_t * dbal_db_field;
        table_db_field_params_struct_t db_field;
        DBAL_DB_INIT_TABLE_NOF_RESULT_TYPES_SET(table_entry, 1);
        SHR_IF_ERR_EXIT(dbal_db_init_table_db_interface_results_alloc(unit, table_entry));
        /** interface single result  */
        DBAL_DB_INIT_TABLE_NOF_RESULT_FIELDS_SET(table_entry, (table_entry->multi_res_info[result_type_counter]), 9);
        DBAL_DB_INIT_TABLE_INTERFACE_RESULT_FIELDS_ALLOC(table_entry, table_entry->multi_res_info[result_type_counter]);
        /** interface result fields init  */
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_EXCEED_LIMIT /* field id*/, DBAL_FIELD_TYPE_DEF_UINT /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 2;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_LEM_APP_DB /* field id*/, DBAL_FIELD_TYPE_DEF_LEM_APP_DB /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 6;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_KEY /* field id*/, DBAL_FIELD_TYPE_DEF_ARRAY8 /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 80;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_OLP_COMMAND /* field id*/, DBAL_FIELD_TYPE_DEF_OLP_COMMAND /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_ACK_INFO /* field id*/, DBAL_FIELD_TYPE_DEF_UINT /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 13;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_AGE /* field id*/, DBAL_FIELD_TYPE_DEF_UINT /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 4;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_PAYLOAD /* field id*/, DBAL_FIELD_TYPE_DEF_ARRAY8 /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 64;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_VMV /* field id*/, DBAL_FIELD_TYPE_DEF_UINT /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 6;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_VALID /* field id*/, DBAL_FIELD_TYPE_DEF_BOOL /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
    }
    /** *************  */
    /** app to phy db  */
    /** *************  */
    /** clear access section  */
    dbal_db_init_table_db_struct_access_clear(cur_table_param, table_entry);
    /** image infos  */
    {
        /** is_standard_1_table is set by Autocoder  */
        uint8 is_standard_1 = FALSE;
        /** is_compatible_with_all_images is set by Autocoder  */
        uint8 is_compatible_with_all_images = TRUE;
        DBAL_DB_INIT_TABLE_IMAGE_SPECIFIC_TABLE_INDICATION_SET(table_entry, is_standard_1, is_compatible_with_all_images);
        SHR_IF_ERR_EXIT(dbal_db_init_table_set_table_incompatible_image_sw_state_indication(unit, DBAL_TABLE_L2_DMA_DSP_COMMAND, is_standard_1, is_compatible_with_all_images));
    }
    /** core mode  */
    table_entry->core_mode = DBAL_CORE_MODE_SBC;
    /** result type hw value by index  */
    dbal_db_init_table_add_result_type_physical_values_by_result_type_index(table_entry);
    /** set app to phy db for sw access  */
    dbal_db_init_sw_state_set_indirect_table_size(unit, table_entry, NULL /* table property size*/, DBAL_DB_INVALID /* table property size as int*/);
    SHR_IF_ERR_EXIT(dbal_db_init_table_add(unit, cur_table_param, DBAL_TABLE_L2_DMA_DSP_COMMAND, table_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
_dbal_init_tables_sw_state_pp_l2_sw_pp_l2_vsi_type_sw_init(
int unit,
table_db_struct_t * cur_table_param,
dbal_logical_table_t * table_info)
{
    dbal_logical_table_t * table_entry = table_info + DBAL_TABLE_VSI_TYPE_SW;
    int is_valid = TRUE;
    SHR_FUNC_INIT_VARS(unit);
    dbal_init_table_db_struct_clear(cur_table_param);
    SHR_IF_ERR_EXIT(dbal_db_init_general_info_set(unit, table_entry, DBAL_TABLE_VSI_TYPE_SW /* table id*/, is_valid /* is valid*/, "VSI_TYPE_SW" /* table name*/, DBAL_ACCESS_METHOD_SW_STATE /* access method*/));
    /** maturity level  */
    /** default maturity level  */
    table_entry->maturity_level = DBAL_MATURITY_HIGH;
    /** *************  */
    /** set interface  */
    /** *************  */
    /** set type  */
    table_entry->table_type = DBAL_TABLE_TYPE_DIRECT;
    /** set labels  */
    /** nof labels  */
    table_entry->nof_labels = 3;
    SHR_ALLOC_SET_ZERO(table_entry->table_labels, table_entry->nof_labels * sizeof(dbal_labels_e), "table labels allocation", "%s%s%s\r\n", table_entry->table_name, EMPTY, EMPTY);
    table_entry->table_labels[0] = DBAL_LABEL_L2;
    table_entry->table_labels[1] = DBAL_LABEL_L3;
    table_entry->table_labels[2] = DBAL_LABEL_MPLS;
    /** interface keys  */
    {
        int field_index = 0;
        dbal_table_field_info_t * dbal_db_field;
        table_db_field_params_struct_t db_field;
        SHR_ALLOC_SET_ZERO(table_entry->keys_info, 1 * sizeof(dbal_table_field_info_t), "key fields info allocation", "%s%s%s\r\n", "VSI_TYPE_SW" /* table name*/, EMPTY, EMPTY);
        /** interface key fields init  */
        {
            dbal_db_field = &table_entry->keys_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_VSI /* field id*/, DBAL_FIELD_TYPE_DEF_VSI /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, TRUE));
            field_index += dbal_db_field->nof_instances;
        }
        table_entry->nof_key_fields = field_index;
        dbal_db_init_table_calculate_key_size(table_entry);
    }
    /** interface results  */
    {
        int field_index = 0;
        int result_type_counter = 0;
        dbal_table_field_info_t * dbal_db_field;
        table_db_field_params_struct_t db_field;
        DBAL_DB_INIT_TABLE_NOF_RESULT_TYPES_SET(table_entry, 1);
        SHR_IF_ERR_EXIT(dbal_db_init_table_db_interface_results_alloc(unit, table_entry));
        /** interface single result  */
        DBAL_DB_INIT_TABLE_NOF_RESULT_FIELDS_SET(table_entry, (table_entry->multi_res_info[result_type_counter]), 9);
        DBAL_DB_INIT_TABLE_INTERFACE_RESULT_FIELDS_ALLOC(table_entry, table_entry->multi_res_info[result_type_counter]);
        /** interface result fields init  */
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_VSI_TYPE_MPLS /* field id*/, DBAL_FIELD_TYPE_DEF_UINT /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 1;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_VSI_TYPE_VSWITCH /* field id*/, DBAL_FIELD_TYPE_DEF_UINT /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 1;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_VSI_TYPE_MIM /* field id*/, DBAL_FIELD_TYPE_DEF_UINT /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 1;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_VSI_TYPE_L2GRE /* field id*/, DBAL_FIELD_TYPE_DEF_UINT /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 1;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_VSI_TYPE_VxLAN /* field id*/, DBAL_FIELD_TYPE_DEF_UINT /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 1;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_VSI_TYPE_RES0 /* field id*/, DBAL_FIELD_TYPE_DEF_UINT /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 1;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_VSI_TYPE_RES1 /* field id*/, DBAL_FIELD_TYPE_DEF_UINT /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 1;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_VSI_TYPE_RES2 /* field id*/, DBAL_FIELD_TYPE_DEF_UINT /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            db_field.size = 1;
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
        {
            dbal_db_field = &table_entry->multi_res_info[result_type_counter].results_info[field_index];
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_mandatory_values(unit, DBAL_FIELD_VXLAN_VPN_MAPPING_CREATED_BY_API /* field id*/, DBAL_FIELD_TYPE_DEF_VXLAN_VPN_MAPPING_CREATED_BY_API /* Type*/, dbal_db_field));
            dbal_db_init_table_field_params_init(&db_field);
            SHR_IF_ERR_EXIT(dbal_db_init_table_field_set_optional_or_default_values(unit, table_entry, dbal_db_field, &db_field, FALSE));
            field_index += dbal_db_field->nof_instances;
        }
    }
    /** *************  */
    /** app to phy db  */
    /** *************  */
    /** clear access section  */
    dbal_db_init_table_db_struct_access_clear(cur_table_param, table_entry);
    /** image infos  */
    {
        /** is_standard_1_table is set by Autocoder  */
        uint8 is_standard_1 = FALSE;
        /** is_compatible_with_all_images is set by Autocoder  */
        uint8 is_compatible_with_all_images = TRUE;
        DBAL_DB_INIT_TABLE_IMAGE_SPECIFIC_TABLE_INDICATION_SET(table_entry, is_standard_1, is_compatible_with_all_images);
        SHR_IF_ERR_EXIT(dbal_db_init_table_set_table_incompatible_image_sw_state_indication(unit, DBAL_TABLE_VSI_TYPE_SW, is_standard_1, is_compatible_with_all_images));
    }
    /** core mode  */
    table_entry->core_mode = DBAL_CORE_MODE_SBC;
    /** result type hw value by index  */
    dbal_db_init_table_add_result_type_physical_values_by_result_type_index(table_entry);
    /** set app to phy db for sw access  */
    dbal_db_init_sw_state_set_indirect_table_size(unit, table_entry, NULL /* table property size*/, DBAL_DB_INVALID /* table property size as int*/);
    SHR_IF_ERR_EXIT(dbal_db_init_table_add(unit, cur_table_param, DBAL_TABLE_VSI_TYPE_SW, table_info));
exit:
    SHR_FUNC_EXIT;
}

shr_error_e
dbal_init_tables_sw_state_pp_l2_sw_pp_l2_init(
int unit,
table_db_struct_t * cur_table_param,
dbal_logical_table_t * table_info)
{
    SHR_FUNC_INIT_VARS(unit);
    SHR_IF_ERR_EXIT(_dbal_init_tables_sw_state_pp_l2_sw_pp_l2_l2_learning_general_info_sw_init(unit, cur_table_param, table_info));
    SHR_IF_ERR_EXIT(_dbal_init_tables_sw_state_pp_l2_sw_pp_l2_l2_dma_dsp_command_init(unit, cur_table_param, table_info));
    SHR_IF_ERR_EXIT(_dbal_init_tables_sw_state_pp_l2_sw_pp_l2_vsi_type_sw_init(unit, cur_table_param, table_info));
exit:
    SHR_FUNC_EXIT;
}