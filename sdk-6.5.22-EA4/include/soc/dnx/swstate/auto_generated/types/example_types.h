/** \file dnx/swstate/auto_generated/types/example_types.h
 *
 * sw state types (structs/enums/typedefs)
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2021 Broadcom Inc. All rights reserved.
 */

#ifndef __EXAMPLE_TYPES_H__
#define __EXAMPLE_TYPES_H__

#if defined(INCLUDE_CTEST)
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_module_testing.h>
#include <soc/dnxc/swstate/callbacks/sw_state_htb_callbacks.h>
#include <soc/dnxc/swstate/callbacks/sw_state_ll_callbacks.h>
#include <soc/dnxc/swstate/dnx_sw_state_pretty_dump.h>
#include <soc/dnxc/swstate/types/sw_state_binary_tree.h>
#include <soc/dnxc/swstate/types/sw_state_bitmap.h>
#include <soc/dnxc/swstate/types/sw_state_cb.h>
#include <soc/dnxc/swstate/types/sw_state_defragmented_chunk.h>
#include <soc/dnxc/swstate/types/sw_state_hash_table.h>
#include <soc/dnxc/swstate/types/sw_state_linked_list.h>
#include <soc/dnxc/swstate/types/sw_state_mutex.h>
#include <soc/dnxc/swstate/types/sw_state_occupation_bitmap.h>
#include <soc/dnxc/swstate/types/sw_state_pbmp.h>
#include <soc/dnxc/swstate/types/sw_state_sem.h>
#include <soc/dnxc/swstate/types/sw_state_string.h>
/*
 * MACROs
 */

#define SW_STATE_EXAMPLE_DEFINITION 10

/*
 * TYPEDEFs
 */

typedef uint8 (*dnx_sw_state_callback_test_function_cb) (int unit)  ;

/*
 * ENUMs
 */

/**
 * Enum used to test and demonstrate usage of enum get_name function
 */
typedef enum {
    /**
     * Example where enum has negative value
     */
    DNX_EXAMPLE_ENUM_NEGATIVE = -1,
    /**
     * Example where enum has zero value
     */
    DNX_EXAMPLE_ENUM_ZERO = 0,
    /**
     * Example where enum has value of 1
     */
    DNX_EXAMPLE_ENUM_ONE
} dnx_example_name_e;

/*
 * CALLBACK's
 */

/*
 * STRUCTs
 */

typedef struct {
    int var;
    DNX_SW_STATE_BUFF buff_variable[10];
} sw_state_leaf_struct;

typedef struct {
    /**
     * example variable with default value
     */
    uint32 my_variable;
} sw_state_default_value;

typedef struct {
    /**
     * static array of default variable type
     */
    sw_state_default_value array_static_static[SW_STATE_EXAMPLE_DEFINITION][10];
    /**
     * example variable
     */
    sw_state_default_value default_value_l3;
    /**
     * example pointer variable
     */
    uint32* pointer;
    /**
     * dynamic array of default variable type
     */
    sw_state_default_value** array_dynamic_dynamic;
} sw_state_default_l3;

typedef struct {
    /**
     * dynamic array of l3
     */
    sw_state_default_l3* array_dynamic;
    /**
     * dynamic array of l3
     */
    sw_state_default_l3* array_pointer;
    /**
     * example variable
     */
    sw_state_default_value default_value_l2;
} sw_state_default_l2;

typedef struct {
    /**
     * static array of default variable type
     */
    sw_state_default_l2* array_dnxdata;
    /**
     * example variable
     */
    sw_state_default_value default_value_l1;
} sw_state_default_l1;

typedef struct {
    char expecto_patronum;
    int my_integer;
} __ATTRIBUTE_PACKED__ sw_state_packed;

typedef union {
    int my_integer;
    char my_char;
} sw_state_example_union;

typedef struct {
    int* static_array_of_p[10000];
    int static_array[20000];
    int integer_variable;
} sw_state_example_child_size_check_t;

typedef struct {
    sw_state_htbl_t large_htb[2];
    sw_state_htbl_t large_index_htb;
    sw_state_occ_bm_t large_occ;
} sw_state_example_large_DS_allocations_t;

typedef struct {
    /**
     * example variable
     */
    uint32 my_variable;
    /**
     * variable used for testing permanent rollback and comparison journal exclusions
     */
    uint32 rollback_comparison_excluded;
    /**
     * example 10 cell array
     */
    uint32 my_array[10];
    /**
     * example two dimentional array
     */
    uint32 two_dimentional_array[10][10];
    /**
     * example dynamic array
     */
    uint32* dynamic_array;
    /**
     * example dynamic array with zero size
     */
    uint32* dynamic_array_zero_size;
    /**
     * example 2d dynamic array
     */
    uint32** dynamic_dynamic_array;
    /**
     * example dynamic array of static array
     */
    uint32 (*dynamic_array_static)[5];
    uint32 counter_test;
    /**
     * example mutex variable
     */
    sw_state_mutex_t mutex_test;
    /**
     * example semapthore variable
     */
    sw_state_sem_t sem_test;
    /**
     * Example of dynamic array with alloc exception.
     */
    uint32* DNXData_array_alloc_exception;
    /**
     * Example DNXData array.
     */
    uint32* DNXData_array;
    /**
     * Example two dimension DNXData array, second dimension is DNX Data.
     */
    uint32** DNXData_array_dyn_dnxdata;
    /**
     * Example two dimension DNXData array, first dimension is DNX Data.
     */
    uint32** DNXData_array_dnxdata_dyn;
    /**
     * Example two dimension DNXData array, both dimensions are DNX Data.
     */
    uint32** DNXData_array_dnxdata_dnxdata;
    /**
     * Example three dimension DNXData array, first static, second is DNX Data and third dynamic.
     */
    uint32** DNXData_array_static_dnxdata_dyn[3];
    /**
     * Example three dimension DNXData array, first static, third is DNX Data and third dynamic.
     */
    uint32** DNXData_array_static_dyn_dnxdata[3];
    /**
     * Example three dimension DNXData array, first static, second and third is DNX Data.
     */
    uint32** DNXData_array_static_dnxdata_dnxdata[3];
    /**
     * Example DNXData array that uses data from DNX table.
     */
    uint32* DNXData_array_table_data;
    int value_range_test;
    /**
     * example  array with label=ARRAY_RANGE_FUNCTIONS
     */
    uint32 array_range_example[10];
    /**
     * alloc after init test variable
     */
    uint32* alloc_after_init_variable;
    /**
     * alloc after init test variable
     */
    uint32* alloc_after_init_test;
    /**
     * example pointer variable
     */
    uint32* pointer;
    /**
     * Bitmap variable example.
     */
    SHR_BITDCL* bitmap_variable;
    /**
     * Port bitmap variable example.
     */
    bcm_pbmp_t pbmp_variable;
    /**
     * Bitmap fixed example.
     */
    SHR_BITDCL bitmap_fixed[((1024)/SHR_BITWID)+1];
    /**
     * Bitmap dnx data example.
     */
    SHR_BITDCL* bitmap_dnx_data;
    /**
     * buffer variable
     */
    DNX_SW_STATE_BUFF* buffer;
    /**
     * fixed buffer variable
     */
    DNX_SW_STATE_BUFF buffer_fixed[1024];
    /**
     * Bitmap variable example.
     */
    SHR_BITDCL* bitmap_exclude_example;
    /**
     * default value tree.
     */
    sw_state_default_l1 default_value_tree;
    /**
     * Linked List example.
     */
    sw_state_ll_t ll;
    /**
     * MultiHead Linked List example.
     */
    sw_state_multihead_ll_t multihead_ll;
    /**
     * Sorted Linked List example.
     */
    sw_state_sorted_ll_t sorted_ll;
    /**
     * Binary Tree example.
     */
    sw_state_bt_t bt;
    /**
     * Hash Table example.
     */
    sw_state_htbl_t htb[2];
    /**
     * array of hash tables with different key/value sizes
     */
    sw_state_htbl_t htb_arr[2];
    /**
     * Index Hash Table example.
     */
    sw_state_htbl_t index_htb;
    /**
     * Occupation Bitmap example.
     */
    sw_state_occ_bm_t occ;
    /**
     * Occupation Bitmap another example.
     */
    sw_state_occ_bm_t occ2;
    /**
     * Callback example.
     */
    sw_state_cb_t cb;
    /**
     * Sw State leaf struct.
     */
    sw_state_leaf_struct leaf_struct;
    sw_state_defragmented_chunk_t defragmented_chunk_example[6];
    sw_state_packed packed;
    sw_state_example_union my_union;
    sw_state_string_t string[100];
    sw_state_example_child_size_check_t* alloc_child_check;
    int write_during_wb_example;
    sw_state_example_large_DS_allocations_t large_DS_examples;
    dnx_sw_state_pretty_print_example_t pretty_print_example;
    /**
     * buffer array variable
     */
    DNX_SW_STATE_BUFF** buffer_array;
    /**
     * Bitmap array example.
     */
    SHR_BITDCL** bitmap_array;
} sw_state_example;

#endif /* defined(INCLUDE_CTEST)*/ 

#endif /* __EXAMPLE_TYPES_H__ */