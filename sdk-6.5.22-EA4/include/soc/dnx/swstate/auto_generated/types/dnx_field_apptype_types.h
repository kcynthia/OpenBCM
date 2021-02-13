/** \file dnx/swstate/auto_generated/types/dnx_field_apptype_types.h
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

#ifndef __DNX_FIELD_APPTYPE_TYPES_H__
#define __DNX_FIELD_APPTYPE_TYPES_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <include/soc/dnx/dbal/dbal_structures.h>
#include <soc/dnxc/swstate/types/sw_state_string.h>
/*
 * ENUMs
 */

/**
 * Holds possible flags for User Apptype Creation
 */
typedef enum {
    /**
     * Apptype is creaated WITH_ID,
     * I.e. user sepcifies which ID should be allocated
     */
    DNX_FIELD_APPTYPE_FLAG_WITH_ID = 0x1,
    DNX_FIELD_APPTYPE_FLAG_NOF
} dnx_field_apptype_flags_e;

/*
 * STRUCTs
 */

/**
 * Structure holds info of predefined Apptypes
 */
typedef struct {
    /**
     * The number of contexts in context_ids.
     */
    uint8 nof_context_ids;
    /**
     * The FWD/ACL context IDs used by the Apptype.
     */
    uint8 context_ids[DNX_DATA_MAX_FIELD_KBP_MAX_FWD_CONTEXT_NUM_FOR_ONE_APPTYPE];
    /**
     * If the Apptype is used as a valid opcode for KBP.
     */
    uint8 valid_for_kbp;
} dnx_field_predef_apptype_info_t;

/**
 * Structure holds info of user defined Apptypes
 */
typedef struct {
    /**
     * The opcode ID of the Apptype.
     */
    uint8 opcode_id;
    /**
     * The ACL context ID (in iFWD2) used by the apptype
     */
    uint8 acl_context;
    /**
     * The static apptype based on which we create the dynamic apptype.
     */
    uint8 base_apptype;
    /**
     * DNX level flags. Saved for Get function to return all configured flags
     */
    dnx_field_apptype_flags_e flags;
    /**
     * Apptype name.
     */
    sw_state_string_t name[DBAL_MAX_STRING_LENGTH];
    /**
     * Apptype CS profile.
     */
    uint8 profile_id;
} dnx_field_user_apptype_info_t;

/**
 * Sw State DB for user Aptypes
 */
typedef struct {
    /**
     * Information about predefined qualifiers.
     */
    dnx_field_predef_apptype_info_t predef_info[bcmFieldAppTypeCount];
    /**
     * Information about user_defined qualifiers.
     */
    dnx_field_user_apptype_info_t user_def_info[DNX_DATA_MAX_FIELD_KBP_APPTYPE_USER_NOF];
} dnx_field_apptype_sw_t;


#endif /* __DNX_FIELD_APPTYPE_TYPES_H__ */