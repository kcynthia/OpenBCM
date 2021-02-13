/** \file dbal_init_cb_tables_hard_logic_pp_kleap_hl_pp_kleap_epmf.c
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
kleap_e_pmf_ffc_instruction_epmf_ffc_instruction_dataoffset_0_cb(
int unit,
void * entry_handle,
dbal_fields_e current_mapped_field_id,
uint32 * offset)
{
    dbal_entry_handle_t *  eh = (dbal_entry_handle_t *) entry_handle;
    uint32 key_value__ffc_idx;
    /** size is calculated by the Autocoder  */
    uint32 result_size__epmf_ffc_instruction = 0;
    SHR_FUNC_INIT_VARS(unit);
    DBAL_FORMULA_CB_GET_KEY_VALUE(unit, eh, DBAL_FIELD_FFC_IDX, key_value__ffc_idx);
    /** size of EPMF_FFC_INSTRUCTION field  */
    result_size__epmf_ffc_instruction += 29;
    *offset = key_value__ffc_idx*result_size__epmf_ffc_instruction;
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}