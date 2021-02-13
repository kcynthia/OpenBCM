/*
 * Configuration example start:
 *
 * TBD
*/

/* Global Vars */

/** EPMF EVPN Filtering by ESI Activation */
int EVPN_ESI_UDH_BASE_3 = 0x3;    /** UDH3 Type to active EVPN filtering by ESI (2/2 pass or 1/1 pass) */

/*
 * EPMF BTR Activation
 */
int EVPN_IDLE_UDH_BASE_3 = 0x1;   /** UDH3 Type to skip EVPN filtering (1/2 pass) */
int EVPN_LE_BTR_UDH_BASE_2 = 0x3; /** UDH2 Type to activate BTR compensation (1/2 pass currently for J2P) */

/** Size of egress additional termination in bytes */
int SRV6_TERMINATION_ARRAY_SIZE = 24;

int termination_size[SRV6_TERMINATION_ARRAY_SIZE] =
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 32, 48, 64, 80, 96, 112, 128, 144, 150, 150, 150, 150 };


/** List of 1st Pass Ingress FG types */
enum field_srv6_evpn_ipmf_1st_pass_e
{
    FIRST_PASS_IPV6,
    FIRST_PASS_SRV6
};

int NOF_FIRST_PASS_INSTANCES = FIRST_PASS_SRV6+1;

bcm_field_entry_t default_entry_handle;
int default_entry_priority = 50000;

bcm_field_entry_t entry_handle_esi_port;
bcm_field_entry_t entry_handle_esi;

bcm_field_entry_t entry_handle_esi_port_1;
bcm_field_group_t egress_fg_id;
bcm_field_group_t egress_btr_fg_id;
bcm_field_group_t ingress_2nd_pass_fg_id;
bcm_field_group_t ingress_1st_pass_ipv6_fg_id;
bcm_field_group_t ingress_1st_pass_srv6_fg_id;

bcm_field_group_info_t egress_fg_info;
bcm_field_group_info_t ingress_2nd_pass_fg_info;

bcm_field_context_t egress_context_id;
bcm_field_context_t egress_btr_context_id;
bcm_field_context_t ingress_context_2nd_pass_id;
bcm_field_context_t ingress_context_1st_pass_ipv6_id;
bcm_field_context_t ingress_context_1st_pass_srv6_id;

bcm_field_presel_t ingress_2nd_pass_presel_id = 61;
bcm_field_presel_t ingress_1st_pass_presel_ipv6_id = 64;
bcm_field_presel_t ingress_1st_pass_presel_srv6_id = 63;
bcm_field_presel_t egress_presel_id = 65;
bcm_field_presel_t egress_btr_presel_id = 67;

bcm_field_presel_entry_id_t ingress_2nd_pass_presel_entry_id;
bcm_field_presel_entry_id_t ingress_1st_pass_presel_ipv6_entry_id;
bcm_field_presel_entry_id_t ingress_1st_pass_presel_srv6_entry_id;
bcm_field_presel_entry_id_t egress_presel_entry_id;

bcm_field_qualify_t esi_qual = 0;
bcm_field_qualify_t esi_type_qual = 0;
bcm_field_action_t esi_action;

char *qual_udh_type_msb_name[NOF_FIRST_PASS_INSTANCES] = {"esi_typ_q_msb_ip", "esi_typ_q_msb_sr"};
char *qual_udh_type_lsb_name[NOF_FIRST_PASS_INSTANCES] = {"esi_typ_q_lsb_ip", "esi_typ_q_lsb_sr"};
char *qual_udh_data_name[NOF_FIRST_PASS_INSTANCES] = {"esi_dat_q_ip", "esi_dat_q_sr"};
char *user_action_name[NOF_FIRST_PASS_INSTANCES] = {"usr_act_ip_udh_esi", "usr_act_sr_udh_esi"};

/*
 * DirectExtract type of field group was used for constructing UDH and UDH-BASE.
 *     qual:{ESI_LABEL(16b)}
 *     action: {UDH4[19:0],UDH-BASE4[1:0]}
 */
int cint_field_srv6_evpn_ingress_2nd_pass_rch_fg_add(int unit, bcm_field_group_t *fg_id_p)
{
    char *proc_name;
    int rv = BCM_E_NONE;
    void *dest_char;
    int qual_idx = 0;
    int act_idx = 0;
    bcm_field_qualifier_info_create_t qual_info;
    bcm_field_action_info_t action_info;
    char *c_ptr;
    void *void_ptr;

    proc_name = "cint_field_srv6_evpn_ingress_2nd_pass_rch_fg_add";


    bcm_field_qualifier_info_create_t_init(&qual_info);
    qual_info.size = 2;
    void_ptr = qual_info.name;
    c_ptr = void_ptr;
    sal_strncpy_s(c_ptr, "esi_type_qual", sizeof(qual_info.name));
    rv = bcm_field_qualifier_create(unit, 0, &qual_info, &esi_type_qual);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_qualifier_create esi_type_qual\n", proc_name);
        return rv;
    }

    bcm_field_qualifier_info_create_t_init(&qual_info);
    qual_info.size = 16;
    void_ptr = qual_info.name;
    c_ptr = void_ptr;
    sal_strncpy_s(c_ptr, "esi_qual", sizeof(qual_info.name));
    rv = bcm_field_qualifier_create(unit, 0, &qual_info, &esi_qual);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_qualifier_create esi_qual\n", proc_name);
        return rv;
    }


    bcm_field_group_info_t_init(&ingress_2nd_pass_fg_info);
    ingress_2nd_pass_fg_info.fg_type = bcmFieldGroupTypeDirectExtraction;
    ingress_2nd_pass_fg_info.stage = bcmFieldStageIngressPMF2;

    /**Using the qual_idx so we can move qualifiers in key easy without modifying the index of qual*/
    qual_idx = 0;

    ingress_2nd_pass_fg_info.qual_types[qual_idx] = esi_type_qual;
    qual_idx++;

    ingress_2nd_pass_fg_info.qual_types[qual_idx] = esi_qual;
    qual_idx++;

    ingress_2nd_pass_fg_info.nof_quals = qual_idx;


    /* Create UDA for a 16-bit ESI. UDA is required as the default size of the UDHData3 is 32bit. */
    bcm_field_action_info_t_init(&action_info);
    /**
    * Fill the structure needed for bcm_field_qualifier_create API
    */
    action_info.stage = bcmFieldStageIngressPMF2;
    action_info.action_type = bcmFieldActionUDHData3;
    action_info.size = 16;
    action_info.prefix_size=16;
    action_info.prefix_value=0;
    void_ptr = action_info.name;
    c_ptr = void_ptr;
    sal_strncpy_s(c_ptr, "UDHData3", sizeof(action_info.name));
    /**
    * Calling the API bcm_field_action_create for positive case
    */
    bcm_field_action_create(unit, 0, &action_info, &esi_action);


    /**Same for the actions to move them*/
    act_idx = 0;
    /** Order of actions should be the same as order of qualifiers*/
    ingress_2nd_pass_fg_info.action_types[act_idx] = bcmFieldActionUDHBase3;
    ingress_2nd_pass_fg_info.action_with_valid_bit[act_idx] = FALSE;
    act_idx++;

    ingress_2nd_pass_fg_info.action_types[act_idx] = esi_action;
    ingress_2nd_pass_fg_info.action_with_valid_bit[act_idx] = FALSE;
    act_idx++;

    ingress_2nd_pass_fg_info.nof_actions = act_idx;

    rv = bcm_field_group_add(unit, 0, &ingress_2nd_pass_fg_info, fg_id_p);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_group_add\n", proc_name);
        return rv;
    }

    return rv;
}

/*
 * DirectExtract type of field group was used for constructing UDH and UDH-BASE.
 *     qual:{ESI_LABEL(16b)}
 *     action: {UDH4[19:0],UDH-BASE4[1:0]}
 */
int cint_field_srv6_evpn_ingress_1st_pass_fg_add(int unit, bcm_field_context_t context_id,
                                                     bcm_field_group_t *fg_id_p, int first_pass_case,
                                                     int btr_compensation)
{
    char *proc_name;
    int rv = BCM_E_NONE;
    void *dest_char;
    int qual_idx = 0;
    int act_idx = 0;
    bcm_field_qualifier_info_create_t qual_info;
    bcm_field_action_info_t action_info;
    bcm_field_group_info_t fg_info;
    bcm_field_action_t udh3_esi_data_user_action;
    bcm_field_action_t udh2_btr_le_data_user_action;
    bcm_field_qualify_t esi_udh3_data_qual = 0;
    bcm_field_qualify_t esi_type_msb_qual = 0;
    bcm_field_qualify_t esi_type_lsb_qual = 0;
    bcm_field_qualify_t btr_le_udh2_data_qual = 0;
    bcm_field_qualify_t btr_le_udh2_type_qual=0;
    char *c_ptr;
    void *void_ptr;

    int srv6_btr_compensation = btr_compensation && (first_pass_case == FIRST_PASS_SRV6);
    proc_name = "cint_field_srv6_evpn_ingress_1st_pass_fg_add";


    /*
     * The UDH type MSB bit which is always constant '1'
     */
    bcm_field_qualifier_info_create_t_init(&qual_info);
    qual_info.size = 1;
    void_ptr = qual_info.name;
    c_ptr = void_ptr;
    sal_strncpy_s(c_ptr, qual_udh_type_msb_name[first_pass_case], sizeof(qual_info.name));
    rv = bcm_field_qualifier_create(unit, 0, &qual_info, &esi_type_msb_qual);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_qualifier_create esi_type_msb_qual\n", proc_name);
        return rv;
    }


    /*
     * The UDH type LSB bit which:
     * - in IPv6 or in SRv6 with SRH 1-Pass process is '1'
     * - in SRv6 with SRH 2-pass process is '0'
     */
    bcm_field_qualifier_info_create_t_init(&qual_info);
    qual_info.size = 1;
    void_ptr = qual_info.name;
    c_ptr = void_ptr;
    sal_strncpy_s(c_ptr, qual_udh_type_lsb_name[first_pass_case], sizeof(qual_info.name));
    rv = bcm_field_qualifier_create(unit, 0, &qual_info, &esi_type_lsb_qual);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_qualifier_create esi_type_lsb_qual\n", proc_name);
        return rv;
    }

    /*
     * ESI qualifier
     */
    bcm_field_qualifier_info_create_t_init(&qual_info);
    qual_info.size = 16;
    void_ptr = qual_info.name;
    c_ptr = void_ptr;
    sal_strncpy_s(c_ptr, qual_udh_data_name[first_pass_case], sizeof(qual_info.name));
    rv = bcm_field_qualifier_create(unit, 0, &qual_info, &esi_udh3_data_qual);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_qualifier_create esi_udh3_data_qual\n", proc_name);
        return rv;
    }

    if (srv6_btr_compensation)
    {
        /*
         * SRH LE field, for BTR estimation in J2P
         */
        bcm_field_qualifier_info_create_t_init(&qual_info);
        qual_info.size = 8;
        void_ptr = qual_info.name;
        c_ptr = void_ptr;
        sal_strncpy_s(c_ptr, "srv6_evpn_ext_term_btr_data", sizeof(qual_info.name));
        rv = bcm_field_qualifier_create(unit, 0, &qual_info, &btr_le_udh2_data_qual);

        if(rv != BCM_E_NONE)
        {
            printf("%s Error in bcm_field_qualifier_create btr_le_udh2_data_qual\n", proc_name);
            return rv;
        }

        /*
         * UDH2 BaseType for SRH LE and BTR calculation
         */
        bcm_field_qualifier_info_create_t_init(&qual_info);
        qual_info.size = 2;
        void_ptr = qual_info.name;
        c_ptr = void_ptr;
        sal_strncpy_s(c_ptr, "srv6_evpn_ext_term_btr_type", sizeof(qual_info.name));
        rv = bcm_field_qualifier_create(unit, 0, &qual_info, &btr_le_udh2_type_qual);

        if(rv != BCM_E_NONE)
        {
            printf("%s Error in bcm_field_qualifier_create btr_le_udh2_type_qual\n", proc_name);
            return rv;
        }

    }

    bcm_field_group_info_t_init(&fg_info);
    fg_info.fg_type = bcmFieldGroupTypeDirectExtraction;
    fg_info.stage = bcmFieldStageIngressPMF2;

    /**Using the qual_idx so we can move qualifiers in key easy without modifying the index of qual*/
    qual_idx = 0;

    fg_info.qual_types[qual_idx] = esi_type_msb_qual;
    qual_idx++;

    fg_info.qual_types[qual_idx] = esi_type_lsb_qual;
    qual_idx++;

    fg_info.qual_types[qual_idx] = esi_udh3_data_qual;
    qual_idx++;

    if (srv6_btr_compensation)
    {
        fg_info.qual_types[qual_idx] = btr_le_udh2_data_qual;
        qual_idx++;

        fg_info.qual_types[qual_idx] = btr_le_udh2_type_qual;
        qual_idx++;
    }

    fg_info.nof_quals = qual_idx;


    /* Create UDA for a 16-bit ESI. UDA is required as the default size of the UDHData3 is 32bit. */
    bcm_field_action_info_t_init(&action_info);
    /**
    * Fill the structure needed for bcm_field_qualifier_create API
    */
    action_info.stage = bcmFieldStageIngressPMF2;
    action_info.action_type = bcmFieldActionUDHData3;
    action_info.size = 16;
    action_info.prefix_size=16;
    action_info.prefix_value=0;
    void_ptr = action_info.name;
    c_ptr = void_ptr;
    sal_strncpy_s(c_ptr, user_action_name[first_pass_case], sizeof(action_info.name));
    /**
    * Calling the API bcm_field_action_create for positive case
    */
    bcm_field_action_create(unit, 0, &action_info, &udh3_esi_data_user_action);

    if (srv6_btr_compensation)
    {
        /* Create UDA for a 8-bit LE. UDA is required as the default size of the UDHData3 is 32bit. */
        bcm_field_action_info_t_init(&action_info);
        /**
        * Fill the structure needed for bcm_field_qualifier_create API
        */
        action_info.stage = bcmFieldStageIngressPMF2;
        action_info.action_type = bcmFieldActionUDHData2;
        action_info.size = 8;
        action_info.prefix_size=24;
        action_info.prefix_value=0;
        void_ptr = action_info.name;
        c_ptr = void_ptr;
        sal_strncpy_s(c_ptr, "usr_act_sr_udh_le", sizeof(action_info.name));
        /**
        * Calling the API bcm_field_action_create for positive case
        */
        bcm_field_action_create(unit, 0, &action_info, &udh2_btr_le_data_user_action);
    }


    /**Same for the actions to move them*/
    act_idx = 0;
    /** Order of actions should be the same as order of qualifiers*/
    fg_info.action_types[act_idx] = bcmFieldActionUDHBase3;
    fg_info.action_with_valid_bit[act_idx] = FALSE;
    act_idx++;

    fg_info.action_types[act_idx] = udh3_esi_data_user_action;
    fg_info.action_with_valid_bit[act_idx] = FALSE;
    act_idx++;

    if (srv6_btr_compensation)
    {
        fg_info.action_types[act_idx] = udh2_btr_le_data_user_action;
        fg_info.action_with_valid_bit[act_idx] = FALSE;
        act_idx++;

        fg_info.action_types[act_idx] = bcmFieldActionUDHBase2;
        fg_info.action_with_valid_bit[act_idx] = FALSE;
        act_idx++;
    }

    fg_info.nof_actions = act_idx;

    rv = bcm_field_group_add(unit, 0, &fg_info, fg_id_p);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_group_add\n", proc_name);
        return rv;
    }



    qual_idx = 0;
    act_idx = 0;
    bcm_field_group_attach_info_t attach_info;

    bcm_field_group_attach_info_t_init(&attach_info);

    attach_info.key_info.nof_quals = fg_info.nof_quals;
    attach_info.payload_info.nof_actions = fg_info.nof_actions;

    for(qual_idx=0; qual_idx < fg_info.nof_quals; qual_idx++)
    {
        attach_info.key_info.qual_types[qual_idx] = fg_info.qual_types[qual_idx];
    }
    for(act_idx=0; act_idx < fg_info.nof_actions; act_idx++)
    {
        attach_info.payload_info.action_types[act_idx] = fg_info.action_types[act_idx];
    }

    qual_idx = 0;


    /** UDH Data Type MSB bit - '1' constant */
    attach_info.key_info.qual_info[qual_idx].input_type = bcmFieldInputTypeConst;
    attach_info.key_info.qual_info[qual_idx].input_arg = 1;
    attach_info.key_info.qual_info[qual_idx].offset = 0;
    qual_idx++;

    /*
     * UDH Data Type LSB bit - '1' constant for most cases
     * - only in case of SRv6 layer presense - look at SRv6 Lyr Qualifier[3] to set it
     */
    attach_info.key_info.qual_info[qual_idx].input_type = bcmFieldInputTypeConst;
    attach_info.key_info.qual_info[qual_idx].input_arg = 1;
    attach_info.key_info.qual_info[qual_idx].offset = 0;

    /** This is relevant only in devices that do ITPP cut and terminate SRv6 lyr as well (FWD Lyr = SRv6 + 1)*/
    if (first_pass_case == FIRST_PASS_SRV6)
    {
        /**Get the offset (within the layer record) of the layer offset (within the header).*/
        bcm_field_qualifier_info_get_t layer_qual_info;
        rv = bcm_field_qualifier_info_get(unit, bcmFieldQualifyLayerRecordQualifier, bcmFieldStageIngressPMF2, &layer_qual_info);
        if (rv != BCM_E_NONE)
        {
            printf("Error (%d), in bcm_field_qualifier_info_get\n", rv);
            return rv;
        }
        printf("\n\n layer_qual_info: offset = %d, size = %d\n\n", layer_qual_info.offset, layer_qual_info.size);

        attach_info.key_info.qual_info[qual_idx].input_type = bcmFieldInputTypeLayerRecordsFwd;
        attach_info.key_info.qual_info[qual_idx].input_arg = -1;
        attach_info.key_info.qual_info[qual_idx].offset = layer_qual_info.offset + 7;  /** take layer_qualifiers[fwd - 1][7] */
    }

    qual_idx++;

    /** Take the ESI from IPv6 DIP 16b LSB - header idx 1, and offset from MSB 320-16b */
    attach_info.key_info.qual_info[qual_idx].input_type = bcmFieldInputTypeLayerAbsolute;
    attach_info.key_info.qual_info[qual_idx].input_arg = 1;
    attach_info.key_info.qual_info[qual_idx].offset = 304;
    qual_idx++;

    if (srv6_btr_compensation)
    {
        /** Take the LE from SRH header, offset 32 from MSB */
        attach_info.key_info.qual_info[qual_idx].input_type = bcmFieldInputTypeLayerFwd;
        attach_info.key_info.qual_info[qual_idx].input_arg = -1;
        attach_info.key_info.qual_info[qual_idx].offset = 320 + 32;
        qual_idx++;

        attach_info.key_info.qual_info[qual_idx].input_type = bcmFieldInputTypeConst;
        attach_info.key_info.qual_info[qual_idx].input_arg = EVPN_LE_BTR_UDH_BASE_2;
        qual_idx++;
    }


    rv = bcm_field_group_context_attach(unit, 0, *fg_id_p, context_id, &attach_info);
    if(rv != BCM_E_NONE)
    {
        printf("Error in bcm_field_group_context_attach fg_id %d context_id %d\n", fg_id, context_id);
        return rv;
    }

    return rv;
}

int cint_field_srv6_evpn_ingress_2nd_pass_rch_fg_attach(int unit, bcm_field_context_t context_id, bcm_field_group_t fg_id)
{
    int rv = BCM_E_NONE;

    int qual_idx = 0;
    int act_idx = 0;
    bcm_field_group_attach_info_t attach_info;

    bcm_field_group_attach_info_t_init(&attach_info);

    attach_info.key_info.nof_quals = ingress_2nd_pass_fg_info.nof_quals;
    attach_info.payload_info.nof_actions = ingress_2nd_pass_fg_info.nof_actions;

    for(qual_idx=0; qual_idx < ingress_2nd_pass_fg_info.nof_quals; qual_idx++)
    {
        attach_info.key_info.qual_types[qual_idx] = ingress_2nd_pass_fg_info.qual_types[qual_idx];
    }
    for(act_idx=0; act_idx < ingress_2nd_pass_fg_info.nof_actions; act_idx++)
    {
        attach_info.payload_info.action_types[act_idx] = ingress_2nd_pass_fg_info.action_types[act_idx];
    }

    qual_idx = 0;


    /** UDH Data Type */
    attach_info.key_info.qual_info[qual_idx].input_type = bcmFieldInputTypeConst;
    attach_info.key_info.qual_info[qual_idx].input_arg = EVPN_ESI_UDH_BASE_3;
    attach_info.key_info.qual_info[qual_idx].offset = 0;
    qual_idx++;

    /**Destination 16 bits from ESI (in RCH header, from field type_specific_container) */
    attach_info.key_info.qual_info[qual_idx].input_type = bcmFieldInputTypeLayerAbsolute;
    attach_info.key_info.qual_info[qual_idx].input_arg = 0;
    attach_info.key_info.qual_info[qual_idx].offset = 176; /** offset of type_specific_container in RCH*/
    qual_idx++;

    rv = bcm_field_group_context_attach(unit, 0, fg_id, context_id, &attach_info);
    if(rv != BCM_E_NONE)
    {
        printf("Error in bcm_field_group_context_attach fg_id %d context_id %d\n", fg_id, context_id);
        return rv;
    }

    return rv;
}


/*
 * This context is created for the 2nd Pass flow in SRv6 USP termination, to copy ESI from RCH header.
 * Done in any device when does 2-Pass SRv6 USP termination.
 * Presel Qualifiers:
 *  - layer 0 is RCH
 *  - LIF (reclassified from 1st Pass) is EVPN
 */
int cint_field_srv6_evpn_ingress_2nd_pass_rch_context_create(int unit, bcm_field_context_t * context_id_p, int inlif_profile)
{
    bcm_field_context_info_t context_info;
    bcm_field_presel_entry_data_t presel_entry_data;
    bcm_field_context_param_info_t param_info;
    int rv= 0;
    void *dest_char;

    bcm_field_context_info_t_init(&context_info);

    dest_char = &(context_info.name[0]);
    sal_strncpy_s(dest_char, "srv6_evpn_2nd_pass_pmf1", sizeof(context_info.name));

    rv = bcm_field_context_create
                    (unit, 0, bcmFieldStageIngressPMF1, &context_info, context_id_p);
    if(rv != BCM_E_NONE)
    {
        printf("cint_field_srv6_evpn_ingress_2nd_pass_rch_context_create: Error in bcm_field_context_create context %d\n", *context_id_p);
        return rv;
    }

    bcm_field_context_param_info_t_init(&param_info);
    /** Context in IPMF2 stage will configure bytes to remove 1 layer. Context created for iPMF1 is also created for iPMF2*/
    param_info.param_type = bcmFieldContextParamTypeSystemHeaderStrip;
    param_info.param_val = BCM_FIELD_PACKET_STRIP(bcmFieldPacketRemoveLayerOffset1, 0);

    rv = bcm_field_context_param_set(unit, 0, bcmFieldStageIngressPMF2, *context_id_p, &param_info);
    if (rv != BCM_E_NONE)
    {
        printf("Error in bcm_field_context_param_set for context %d\n", *context_id_p);
        return rv;
    }

    bcm_field_presel_entry_id_info_init(&ingress_2nd_pass_presel_entry_id);
    /**For iPMF2, iPMF1 presel must be configured*/
    ingress_2nd_pass_presel_entry_id.presel_id = ingress_2nd_pass_presel_id;
    ingress_2nd_pass_presel_entry_id.stage = bcmFieldStageIngressPMF1;

    bcm_field_presel_entry_data_info_init(&presel_entry_data);

    /*
     * LIF of EVPN type is recognized by inlif_profile 2bits for PMF
     */

    presel_entry_data.nof_qualifiers = 2;
    presel_entry_data.context_id = *context_id_p;
    presel_entry_data.entry_valid = TRUE;

    presel_entry_data.qual_data[0].qual_type = bcmFieldQualifyInVportClass;
    presel_entry_data.qual_data[0].qual_arg = 0;
    presel_entry_data.qual_data[0].qual_value = inlif_profile;
    presel_entry_data.qual_data[0].qual_mask = 0xF;

    presel_entry_data.qual_data[1].qual_type = bcmFieldQualifyForwardingType;
    presel_entry_data.qual_data[1].qual_arg = -1;
    presel_entry_data.qual_data[1].qual_value = bcmFieldLayerTypeRch;
    presel_entry_data.qual_data[1].qual_mask = 0x1F;

    rv = bcm_field_presel_set(unit, 0, &ingress_2nd_pass_presel_entry_id, &presel_entry_data);
    if(rv != BCM_E_NONE)
    {
        printf("cint_field_srv6_evpn_ingress_2nd_pass_rch_context_create Error in bcm_field_presel_set  \n");
        return rv;
    }
    return rv;
}

/*
 * This context is created for the 1st Pass Ingress PMF for several cases:
 * 1. No SRH, IPv6 only (1-Pass IPv6 termination)
 *    - copy ESI from IPv6 DIP to UDH3
 *    - set UDH3 type to ESI (activate EPMF for ESI filtering)
 * 2. With SRH (1st pass, for devices that don't use IPMF for 2-pass USP in 2-pass termination)
 *    - copy ESI from IPv6 DIP to UDH3
 *    - set UDH3 type to regular Data Type (not activate EPMF in this pass for ESI filtering)
 *
 * Presel Qualifiers - 2 Presels would lead to same Context
 * 1.
 *  - (FWD-layer-1) is IPv6 (case of IPv6 termination 1-pass of 1-pass, no SRH)
 *  - LIF (reclassified from 1st Pass) is EVPN
 * 2.
 *  - (FWD-layer-1) is SRv6 (case of SRv6 termination 1-pass of 2-pass in devices that terminate SRv6 in VTT5)
 *  - LIF (reclassified from 1st Pass) is EVPN
 *
 * Actions
 * 1. In first case - UDH Type set to 3 (ESI type) cause it's 1-pass of 1-pass
 * 2. In 2nd case - UDH type set to 2 cause it's 1-pass of 2-pass
 * --- The difference would be chosen by EFES machine ----
 *  - If (FWD-Layer -1) == SRv6 && 2-Pass Qualifier set --> UDH Type = 2 (no ESI filtering)
 *    else: UDH Type = 3 (ESI filtering)
 */
int cint_field_srv6_evpn_ingress_1st_pass_context_create(int unit, bcm_field_context_t * context_id_p,
                                                         bcm_field_presel_t presel_id,
                                                         bcm_field_presel_entry_id_t *presel_entry_id_p,
                                                         int inlif_profile, int with_srh)
{
    bcm_field_context_info_t context_info;
    bcm_field_presel_entry_data_t presel_entry_data;
    bcm_field_context_param_info_t param_info;
    int rv= 0;
    void *dest_char;

    bcm_field_context_info_t_init(&context_info);

    dest_char = &(context_info.name[0]);

    if (with_srh == 0)
    {
        sal_strncpy_s(dest_char, "srv6_evpn_no_srh_one_pass_pmf1", sizeof(context_info.name));
    }
    else if (with_srh == 1)
    {
        sal_strncpy_s(dest_char, "srv6_evpn_with_srh_first_pass_pmf1", sizeof(context_info.name));
    }


    rv = bcm_field_context_create
                    (unit, 0, bcmFieldStageIngressPMF1, &context_info, context_id_p);
    if(rv != BCM_E_NONE)
    {
        printf("cint_field_srv6_evpn_ingress_1st_pass_context_create: Error in bcm_field_context_create context %d\n", *context_id_p);
        return rv;
    }

    bcm_field_context_param_info_t_init(&param_info);
    /** Context in IPMF2 stage will configure bytes to remove 1 layer. Context created for iPMF1 is also created for iPMF2*/
    param_info.param_type = bcmFieldContextParamTypeSystemHeaderStrip;
    param_info.param_val = BCM_FIELD_PACKET_STRIP(bcmFieldPacketRemoveLayerOffset1, 0);

    rv = bcm_field_context_param_set(unit, 0, bcmFieldStageIngressPMF2, *context_id_p, &param_info);
    if (rv != BCM_E_NONE)
    {
        printf("Error in bcm_field_context_param_set for context %d\n", *context_id_p);
        return rv;
    }

    bcm_field_presel_entry_id_info_init(presel_entry_id_p);
    /**For iPMF2, iPMF1 presel must be configured - Presel1 - FWD-1 is IPv6, LIF is EVPN */
    presel_entry_id_p->presel_id = presel_id;
    presel_entry_id_p->stage = bcmFieldStageIngressPMF1;

    bcm_field_presel_entry_data_info_init(&presel_entry_data);

    /*
     * LIF of EVPN type is recognized by inlif_profile 2bits for PMF
     */

    presel_entry_data.nof_qualifiers = 2;
    if (with_srh == 1)
    {
        presel_entry_data.nof_qualifiers = 3;
    }

    presel_entry_data.context_id = *context_id_p;
    presel_entry_data.entry_valid = TRUE;

    presel_entry_data.qual_data[0].qual_type = bcmFieldQualifyInVportClass;
    presel_entry_data.qual_data[0].qual_arg = 0;
    presel_entry_data.qual_data[0].qual_value = inlif_profile;
    presel_entry_data.qual_data[0].qual_mask = 0xF;

    presel_entry_data.qual_data[1].qual_type = bcmFieldQualifyForwardingType;
    presel_entry_data.qual_data[1].qual_arg = -1;
    presel_entry_data.qual_data[1].qual_value =  bcmFieldLayerTypeIp6;
    presel_entry_data.qual_data[1].qual_mask = 0x1F;
    if (with_srh == 1)
    {
        presel_entry_data.qual_data[2].qual_type = bcmFieldQualifyForwardingLayerQualifier;
        presel_entry_data.qual_data[2].qual_arg = -1;
        presel_entry_data.qual_data[2].qual_value =  0x2 | (0xb << 2);
        presel_entry_data.qual_data[2].qual_mask = 0x2 | (0x1f << 2);
    }

    rv = bcm_field_presel_set(unit, 0, presel_entry_id_p, &presel_entry_data);
    if(rv != BCM_E_NONE)
    {
        printf("cint_field_srv6_evpn_ingress_1st_pass_context_create presel:%d Error in bcm_field_presel_set\n", presel_id);
        return rv;
    }


    return rv;
}


int cint_field_srv6_evpn_ingress(int unit, int inlif_profile)
{
    char *proc_name;
    int rv = BCM_E_NONE;
    int btr_compensation = 0;

    proc_name = "cint_field_srv6_evpn_ingress";

    /*
     * Define Ingress PMF 2nd Pass Context
     * -copy ESI from RCH to UDH3
     * -set UDH3 type as ESI type (activate EPMF for ESI filtering)
     */
    rv = cint_field_srv6_evpn_ingress_2nd_pass_rch_context_create(unit, &ingress_context_2nd_pass_id, inlif_profile);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in cint_field_srv6_evpn_ingress_2nd_pass_rch_context_create\n", proc_name);
        return rv;
    }

    rv = cint_field_srv6_evpn_ingress_2nd_pass_rch_fg_add(unit, &ingress_2nd_pass_fg_id);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in cint_field_srv6_evpn_ingress_2nd_pass_rch_fg_add\n", proc_name);
        return rv;
    }

    rv = cint_field_srv6_evpn_ingress_2nd_pass_rch_fg_attach(unit, ingress_context_2nd_pass_id, ingress_2nd_pass_fg_id);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in cint_field_srv6_evpn_ingress_2nd_pass_rch_fg_attach\n", proc_name);
        return rv;
    }

    /*
     * Define Ingress PMF 1st Pass Context, for case:
     * 1. No SRH, IPv6 only (1-Pass)
     *    - copy ESI from IPv6 DIP to UDH3
     *    - set UDH3 type to ESI (activate EPMF for ESI filtering)
     */
    rv = cint_field_srv6_evpn_ingress_1st_pass_context_create(unit, &ingress_context_1st_pass_ipv6_id,
                                                             ingress_1st_pass_presel_ipv6_id,
                                                             &ingress_1st_pass_presel_ipv6_entry_id,
                                                             inlif_profile, 0);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in cint_field_srv6_evpn_ingress_1st_pass_context_create, IPv6\n", proc_name);
        return rv;
    }

   /*
    * Define Ingress PMF 1st Pass Context, for case:
    * 2. With SRH (1st pass in 1-pass process)
    *    - copy ESI from IPv6 DIP to UDH3
    *    - set UDH3 type to ESI (activate EPMF for ESI filtering)
    *    With SRH (1st pass in 2-pass process)
    *    - copy ESI from IPv6 DIP to UDH3
    *    - set UDH3 type to Normal mode (not set EPMF for ESI filtering)
    */
    rv = cint_field_srv6_evpn_ingress_1st_pass_context_create(unit, &ingress_context_1st_pass_srv6_id,
                                                             ingress_1st_pass_presel_srv6_id,
                                                             &ingress_1st_pass_presel_srv6_entry_id,
                                                             inlif_profile, 1);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in cint_field_srv6_evpn_ingress_1st_pass_context_create, SRv6\n", proc_name);
        return rv;
    }

    /** check if device requires estimated BTR */
    btr_compensation = *dnxc_data_get(unit, "dev_init", "general", "egress_estimated_bta_btr_config", NULL);


    rv = cint_field_srv6_evpn_ingress_1st_pass_fg_add(unit, ingress_context_1st_pass_ipv6_id,
                                                          &ingress_1st_pass_ipv6_fg_id, FIRST_PASS_IPV6, btr_compensation);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in cint_field_srv6_evpn_ingress_1st_pass_fg_add for IPv6\n", proc_name);
        return rv;
    }

    rv = cint_field_srv6_evpn_ingress_1st_pass_fg_add(unit, ingress_context_1st_pass_srv6_id,
                                                          &ingress_1st_pass_srv6_fg_id, FIRST_PASS_SRV6, btr_compensation);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in cint_field_srv6_evpn_ingress_1st_pass_fg_add for SRv6\n", proc_name);
        return rv;
    }


    return rv;
}

int cint_field_srv6_evpn_egress_context_create(int unit, bcm_field_context_t *context_id_p)
{
    bcm_field_context_info_t context_info;
    bcm_field_presel_entry_data_t presel_entry_data;
    bcm_field_context_param_info_t param_info;
    int rv= 0;


    bcm_field_context_info_t_init(&context_info);
    context_info.name[0] = 'E';
    context_info.name[1] = 'S';
    context_info.name[2] = 'I';
    context_info.name[3] = 0;
    rv = bcm_field_context_create
                    (unit, 0, bcmFieldStageEgress, &context_info, context_id_p);
    if(rv != BCM_E_NONE)
    {
        printf("cint_field_srv6_evpn_egress_context_create: Error in bcm_field_context_create\n");
        return rv;
    }

    /* Set the Presels: Current Layer Protocol and UDH Type*/
    bcm_field_presel_entry_id_info_init(&egress_presel_entry_id);
    egress_presel_entry_id.presel_id = egress_presel_id;
    egress_presel_entry_id.stage = bcmFieldStageEgress;

    bcm_field_presel_entry_data_info_init(&presel_entry_data);
    presel_entry_data.nof_qualifiers = 2;
    presel_entry_data.context_id = *context_id_p;
    presel_entry_data.entry_valid = TRUE;


    /** UDH Data Type */
    presel_entry_data.qual_data[0].qual_type = bcmFieldQualifyUDHBase3;
    presel_entry_data.qual_data[0].qual_arg = 0;
    presel_entry_data.qual_data[0].qual_value = EVPN_ESI_UDH_BASE_3;
    presel_entry_data.qual_data[0].qual_mask = 0x3;


    presel_entry_data.qual_data[1].qual_type = bcmFieldQualifyForwardingType;
    presel_entry_data.qual_data[1].qual_arg = 0;
    presel_entry_data.qual_data[1].qual_value = bcmFieldLayerTypeEth;
    presel_entry_data.qual_data[1].qual_mask = 0x1F;

    rv = bcm_field_presel_set(unit, 0, &egress_presel_entry_id, &presel_entry_data);
    if(rv != BCM_E_NONE)
    {
        printf("cint_field_evpn_context_create Error in Egress bcm_field_presel_set for context %d\n", *context_id_p);
        return rv;
    }

    return rv;
}

int cint_field_srv6_evpn_egress_btr_comp_context_create(int unit, bcm_field_context_t *context_id_p)
{
    bcm_field_context_info_t context_info;
    bcm_field_presel_entry_data_t presel_entry_data;
    bcm_field_context_param_info_t param_info;
    int rv= 0;


    bcm_field_context_info_t_init(&context_info);
    context_info.name[0] = 'B';
    context_info.name[1] = 'T';
    context_info.name[2] = 'R';
    context_info.name[3] = '\0';
    rv = bcm_field_context_create
                    (unit, 0, bcmFieldStageEgress, &context_info, context_id_p);
    if(rv != BCM_E_NONE)
    {
        printf("cint_field_srv6_evpn_egress_btr_comp_context_create: Error in bcm_field_context_create\n");
        return rv;
    }

    /*
     * Set the Presels: UDH2 is BTR compensation type; UDH3 is non ESI filtering type (not final pass); UDH1,2 off
     */
    bcm_field_presel_entry_id_info_init(&egress_presel_entry_id);
    egress_presel_entry_id.presel_id = egress_btr_presel_id;
    egress_presel_entry_id.stage = bcmFieldStageEgress;

    bcm_field_presel_entry_data_info_init(&presel_entry_data);
    presel_entry_data.nof_qualifiers = 4;
    presel_entry_data.context_id = *context_id_p;
    presel_entry_data.entry_valid = TRUE;


    /** UDH3 Type - Non ESI filtering (not final round of termination) */
    presel_entry_data.qual_data[0].qual_type = bcmFieldQualifyUDHBase3;
    presel_entry_data.qual_data[0].qual_arg = 0;
    presel_entry_data.qual_data[0].qual_value = EVPN_IDLE_UDH_BASE_3;
    presel_entry_data.qual_data[0].qual_mask = 0x3;

    /** UDH2 Type - BTR compensation */
    presel_entry_data.qual_data[1].qual_type = bcmFieldQualifyUDHBase2;
    presel_entry_data.qual_data[1].qual_arg = 0;
    presel_entry_data.qual_data[1].qual_value = EVPN_LE_BTR_UDH_BASE_2;
    presel_entry_data.qual_data[1].qual_mask = 0x3;

    /** UDH1 Type - NULL */
    presel_entry_data.qual_data[2].qual_type = bcmFieldQualifyUDHBase1;
    presel_entry_data.qual_data[2].qual_arg = 0;
    presel_entry_data.qual_data[2].qual_value = 0;
    presel_entry_data.qual_data[2].qual_mask = 0x3;

    /** UDH0 Type - NULL */
    presel_entry_data.qual_data[3].qual_type = bcmFieldQualifyUDHBase0;
    presel_entry_data.qual_data[3].qual_arg = 0;
    presel_entry_data.qual_data[3].qual_value = 0;
    presel_entry_data.qual_data[3].qual_mask = 0x3;


    rv = bcm_field_presel_set(unit, 0, &egress_presel_entry_id, &presel_entry_data);
    if(rv != BCM_E_NONE)
    {
        printf("cint_field_srv6_evpn_egress_btr_comp_context_create Error in Egress bcm_field_presel_set for context %d\n", *context_id_p);
        return rv;
    }

    return rv;
}


int cint_field_srv6_evpn_egress_fg_add(int unit, bcm_field_group_t *fg_id_p)
{
    char *proc_name;
    int rv = BCM_E_NONE;
    int qual_idx = 0;
    bcm_field_qualifier_info_create_t qual_info;
    bcm_field_action_info_t action_info;
    bcm_field_action_t bcm_action_id;

    proc_name = "cint_field_srv6_evpn_egress_fg_add";

    bcm_field_group_info_t_init(&egress_fg_info);
    egress_fg_info.fg_type = bcmFieldGroupTypeTcam;
    egress_fg_info.stage = bcmFieldStageEgress;

    egress_fg_info.qual_types[0] = bcmFieldQualifyUDHData3;

    egress_fg_info.qual_types[1] = bcmFieldQualifyOutPort;

    egress_fg_info.nof_quals = 2;

    /* Action - Drop */
    egress_fg_info.action_types[0] = bcmFieldActionDrop;
    egress_fg_info.action_with_valid_bit[0] = TRUE;

    egress_fg_info.nof_actions = 1;

    rv = bcm_field_group_add(unit, BCM_FIELD_FLAG_MSB_RESULT_ALIGN, &egress_fg_info, fg_id_p);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_group_add\n", proc_name);
        return rv;
    }

    return rv;
}

int cint_field_srv6_evpn_egress_btr_comp_fg_add_attach(int unit, bcm_field_context_t context_id)
{
    char *proc_name;
    int rv = BCM_E_NONE;
    int qual_idx = 0;
    bcm_field_qualifier_info_create_t qual_info;
    bcm_field_action_info_t action_info;
    bcm_field_action_t bcm_action_id;
    bcm_field_group_attach_info_t attach_info;
    bcm_field_group_info_t egress_btr_fg_info;
    bcm_field_group_t fg_id;
    bcm_field_entry_info_t ent_info;
    bcm_field_entry_t ent_id;

    int last_entry;

    proc_name = "cint_field_srv6_evpn_egress_btr_comp_fg_add_attach";

    bcm_field_group_info_t_init(&egress_btr_fg_info);
    egress_btr_fg_info.fg_type = bcmFieldGroupTypeTcam;
    egress_btr_fg_info.stage = bcmFieldStageEgress;

    /** Qual - the SRH LE is in the UDH2 */
    egress_btr_fg_info.qual_types[0] = bcmFieldQualifyUDHData2;
    egress_btr_fg_info.nof_quals = 1;

    /* Action - Drop */
    egress_btr_fg_info.action_types[0] = bcmFieldActionEstimatedStartPacketStrip;
    egress_btr_fg_info.nof_actions = 1;

    rv = bcm_field_group_add(unit, BCM_FIELD_FLAG_MSB_RESULT_ALIGN, &egress_btr_fg_info, &fg_id);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_group_add\n", proc_name);
        return rv;
    }


    /*
     * FG attach
     */
    bcm_field_group_attach_info_t_init(&attach_info);

    attach_info.key_info.nof_quals = egress_btr_fg_info.nof_quals;
    attach_info.payload_info.nof_actions = egress_btr_fg_info.nof_actions;
    attach_info.key_info.qual_types[0] = egress_btr_fg_info.qual_types[0];
    attach_info.payload_info.action_types[0] = egress_btr_fg_info.action_types[0];
    attach_info.key_info.qual_info[0].input_type = bcmFieldInputTypeMetaData;

    rv = bcm_field_group_context_attach(unit, 0, fg_id, context_id, &attach_info);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_group_context_attach fg_id %d context_id %d\n", proc_name, fg_id, context_id);
        return rv;
    }

    for (last_entry = 0; last_entry < SRV6_TERMINATION_ARRAY_SIZE; last_entry++)
    {
        /*
         * Add entry
         */
        bcm_field_entry_info_t_init(&ent_info);
        ent_info.priority = 1;

        ent_info.nof_entry_quals = 1;
        ent_info.entry_qual[0].type = egress_btr_fg_info.qual_types[0];
        ent_info.entry_qual[0].value[0] = last_entry;
        ent_info.entry_qual[0].mask[0] = 0x1F;

        ent_info.nof_entry_actions = 1;
        ent_info.entry_action[0].type = egress_btr_fg_info.action_types[0];
        ent_info.entry_action[0].value[0] = termination_size[last_entry];

        rv = bcm_field_entry_add(unit, 0, fg_id, &ent_info, &ent_id);
        if (rv != BCM_E_NONE)
        {
            printf("%s Error (%d), in bcm_field_entry_add for context %d, fg_id %d\n", proc_name, rv, context_id, fg_id);
            return rv;
        }
    }

    return rv;
}


int cint_field_srv6_evpn_egress_fg_attach(int unit, bcm_field_context_t context_id, bcm_field_group_t fg_id)
{
    int rv = BCM_E_NONE;

    int qual_idx = 0;
    int act_idx = 0;
    bcm_field_group_attach_info_t attach_info;

    bcm_field_group_attach_info_t_init(&attach_info);

    attach_info.key_info.nof_quals = egress_fg_info.nof_quals;
    attach_info.payload_info.nof_actions = egress_fg_info.nof_actions;

    for(qual_idx=0; qual_idx < egress_fg_info.nof_quals; qual_idx++)
    {
        attach_info.key_info.qual_types[qual_idx] = egress_fg_info.qual_types[qual_idx];
    }
    for(act_idx=0; act_idx < egress_fg_info.nof_actions; act_idx++)
    {
        attach_info.payload_info.action_types[act_idx] = egress_fg_info.action_types[act_idx];
    }

    qual_idx = 0;
    /** UDH Data Type */
    attach_info.key_info.qual_info[qual_idx].input_type = bcmFieldInputTypeMetaData;
    qual_idx++;

    /** Out Port */
    attach_info.key_info.qual_info[qual_idx].input_type = bcmFieldInputTypeMetaData;
    qual_idx++;

    rv = bcm_field_group_context_attach(unit, 0, fg_id, context_id, &attach_info);
    if(rv != BCM_E_NONE)
    {
        printf("Error in bcm_field_group_context_attach fg_id %d context_id %d\n", fg_id, context_id);
        return rv;
    }

    return rv;
}


int cint_field_srv6_evpn_egress_default_entry_add(
        int unit,
        bcm_field_context_t context_id,
        bcm_field_group_t fg_id,
        bcm_field_entry_t *entry_handle_p)
{
    char *proc_name;

    bcm_field_entry_info_t entry_in_info;
    int rv = BCM_E_NONE;

    proc_name = "cint_field_srv6_evpn_egress_default_entry_add";

    bcm_field_entry_info_t_init(&entry_in_info);

    entry_in_info.entry_qual[0].type = egress_fg_info.qual_types[0];
    entry_in_info.entry_qual[0].value[0] = 0;
    entry_in_info.entry_qual[0].mask[0] = 0;

    entry_in_info.entry_action[0].type = egress_fg_info.action_types[0];
    entry_in_info.entry_action[0].value[0] = 1;

    entry_in_info.priority = default_entry_priority;
    entry_in_info.nof_entry_quals = 1;
    entry_in_info.nof_entry_actions = 1;
    rv = bcm_field_entry_add(unit, 0, fg_id, &entry_in_info, entry_handle_p);
    if (rv != BCM_E_NONE)
    {
        printf("%s Error (%d), in bcm_field_entry_add for context %d, fg_id %d\n", proc_name, rv, context_id, fg_id);
        return rv;
    }
    return rv;
}

uint32 log2_round_up(uint32 x)
{
    uint32 msb_bit = 0;

    while (x > (1 << msb_bit))
    {
        msb_bit++;
    }

    return msb_bit;
}

int cint_field_srv6_evpn_egress_esi_port_entry_add(
        int unit,
        bcm_field_context_t context_id,
        bcm_field_group_t fg_id,
        bcm_field_entry_t *entry_handle_esi_port_p,
        int esi_label,
        int port)
{
    char *proc_name;

    bcm_field_entry_info_t entry_in_info;
    bcm_gport_t gport;
    int pp_port_size;
    int nof_pp_ports;
    int nof_cores;
    int rv = BCM_E_NONE;

    proc_name = "cint_field_srv6_evpn_egress_esi_port_entry_add";

    printf("Adding to EPMF Port:%d, ESI:%d\n",port, esi_label);

    if (BCM_GPORT_IS_SET(port))
    {
        gport = port;
    }
    else
    {
        BCM_GPORT_LOCAL_SET(gport, port);
    }

    printf("Adding to EPMF GPort:%d, ESI:%d\n",gport, esi_label);

    nof_pp_ports = *dnxc_data_get(unit, "port", "general", "nof_pp_ports", NULL);
    pp_port_size = log2_round_up(nof_pp_ports);

    /* Add the Entry (ESI + Port) --> Drop */
    bcm_field_entry_info_t_init(&entry_in_info);

    entry_in_info.entry_qual[0].type = egress_fg_info.qual_types[0];
    entry_in_info.entry_qual[0].value[0] = esi_label;
    entry_in_info.entry_qual[0].mask[0] = 0xfffff;

    entry_in_info.entry_qual[1].type = egress_fg_info.qual_types[1];
    entry_in_info.entry_qual[1].value[0] = gport;
    entry_in_info.entry_qual[1].mask[0] = (1 << pp_port_size) - 1;

    entry_in_info.entry_action[0].type = egress_fg_info.action_types[0];
    entry_in_info.entry_action[0].value[0] = 1;

    entry_in_info.priority = 10;
    entry_in_info.nof_entry_quals = 2;
    entry_in_info.nof_entry_actions = 1;
    if (BCM_GPORT_IS_TRUNK(gport))
    {
        entry_in_info.core = 0;
    }

    uint32 flags = 0;
    bcm_port_interface_info_t interface_info;
    bcm_port_mapping_info_t mapping_info;

    /** find the correct core for the Port, to not get duplication of PP_Port which can be same on different cores */
    rv = bcm_port_get(unit, port, &flags, &interface_info, &mapping_info);
    entry_in_info.core = mapping_info.core;

    /** since the qualifier to action bcmFieldQualifyOutPort that's used as qualifier, Gport is later converted to PP_Port */
    rv = bcm_field_entry_add(unit, 0, fg_id, &entry_in_info, entry_handle_esi_port_p);
    if (rv != BCM_E_NONE)
    {
        printf("%s Error (%d), in bcm_field_entry_add for context %d, fg_id %d\n", proc_name, rv, context_id, fg_id);
        return rv;
    }


    return rv;
}

int cint_field_srv6_evpn_egress_esi_entry_add(
        int unit,
        bcm_field_context_t context_id,
        bcm_field_group_t fg_id,
        bcm_field_entry_t *entry_handle_esi_p,
        int esi_label)
{
    char *proc_name;

    bcm_field_entry_info_t entry_in_info;
    bcm_field_group_info_t fg_info;
    int rv = BCM_E_NONE;

    proc_name = "cint_field_srv6_evpn_egress_esi_entry_add";
    bcm_field_group_info_get( unit, fg_id, &fg_info);

    /*
     * Add the Entry (ESI) --> Do Nothing.
     */
    bcm_field_entry_info_t_init(&entry_in_info);

    entry_in_info.entry_qual[0].type = fg_info.qual_types[0];
    entry_in_info.entry_qual[0].value[0] = esi_label;
    entry_in_info.entry_qual[0].mask[0] = 0xfffff;

    entry_in_info.entry_action[0].type = fg_info.action_types[0];
    entry_in_info.entry_action[0].value[0] = 0;

    entry_in_info.priority = 15;
    entry_in_info.nof_entry_quals = 1;
    entry_in_info.nof_entry_actions = 1;
    rv = bcm_field_entry_add(unit, 0, fg_id, &entry_in_info, entry_handle_esi_p);
    if (rv != BCM_E_NONE)
    {
        printf("%s Error (%d), in bcm_field_entry_add for context %d, fg_id %d\n", proc_name, rv, context_id, fg_id);
        return rv;
    }

    return rv;
}

int cint_field_srv6_evpn_egress(int unit)
{
    char *proc_name;
    int rv = BCM_E_NONE;

    int btr_compensation = 0;

    proc_name = "cint_field_srv6_evpn_egress";

    /*
     * configure EVPN filtering, that would occur on 1/1 or 2/2 pass, final round of termination
     */

    rv = cint_field_srv6_evpn_egress_context_create(unit, &egress_context_id);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in cint_field_srv6_evpn_egress_context_create\n", proc_name);
        return rv;
    }

    rv = cint_field_srv6_evpn_egress_fg_add(unit, &egress_fg_id);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in cint_field_srv6_evpn_egress_fg_add\n", proc_name);
        return rv;
    }

    rv = cint_field_srv6_evpn_egress_fg_attach(unit, egress_context_id, egress_fg_id);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in cint_field_srv6_evpn_egress_fg_attach\n", proc_name);
        return rv;
    }

    rv = cint_field_srv6_evpn_egress_default_entry_add(unit, egress_context_id, egress_fg_id, &default_entry_handle);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in cint_field_srv6_evpn_egress_default_entry_add\n", proc_name);
        return rv;
    }

    /*
     * configure BTR compensation for devices that need it, on 1/2 pass of extended termination
     */

    /** check if device requires estimated BTR */
    btr_compensation = *dnxc_data_get(unit, "dev_init", "general", "egress_estimated_bta_btr_config", NULL);

    if (btr_compensation)
    {

        rv = cint_field_srv6_evpn_egress_btr_comp_context_create(unit, &egress_btr_context_id);
        if(rv != BCM_E_NONE)
        {
            printf("%s Error in cint_field_srv6_evpn_egress_btr_comp_context_create\n", proc_name);
            return rv;
        }

        rv = cint_field_srv6_evpn_egress_btr_comp_fg_add_attach(unit, egress_btr_context_id);
        if(rv != BCM_E_NONE)
        {
            printf("%s Error in cint_field_srv6_evpn_egress_btr_comp_fg_add_attach\n", proc_name);
            return rv;
        }


    }




    return rv;
}



int cint_field_srv6_evpn_destroy_all_entries(int unit)
{
    char *proc_name;
    int rv = BCM_E_NONE;

    proc_name = "cint_field_srv6_evpn_destroy_all_entries";

    /* Destroy the default EVPN ESI entry */
    rv = bcm_field_entry_delete(unit,egress_fg_id, NULL, default_entry_handle);
    if (rv != BCM_E_NONE)
    {
        printf("%s Error (%d), in bcm_field_entry_delete for egress for fg_id %d for default entry %d\n", proc_name, rv, egress_fg_id, default_entry_handle);
        return rv;
    }

    if(entry_handle_esi_port != 0)
    {
        /* Destroy the entry */
        rv = bcm_field_entry_delete(unit,egress_fg_id, NULL, entry_handle_esi_port);
        if (rv != BCM_E_NONE)
        {
            printf("%s Error (%d), in bcm_field_entry_delete for egress for fg_id %d for entry %d\n", proc_name, rv, egress_fg_id, entry_handle_esi_port);
            return rv;
        }
    }
    if(entry_handle_esi != 0)
    {
        /* Destroy the entry */
        rv = bcm_field_entry_delete(unit,egress_fg_id, NULL, entry_handle_esi);
        if (rv != BCM_E_NONE)
        {
            printf("%s Error (%d), in bcm_field_entry_delete for egress for fg_id %d for entry %d\n", proc_name, rv, egress_fg_id, entry_handle_esi);
            return rv;
        }
    }
    if(entry_handle_esi_port_1 != 0)
    {
        /* Destroy the entry */
        rv = bcm_field_entry_delete(unit,egress_fg_id, NULL, entry_handle_esi_port_1);
        if (rv != BCM_E_NONE)
        {
            printf("%s Error (%d), in bcm_field_entry_delete for egress for fg_id %d for entry %d\n", proc_name, rv, egress_fg_id, entry_handle_esi_port_1);
            return rv;
        }
    }
    return rv;
}

int cint_field_evpn_destroy_ugq_and_uda(int unit)
{
    char *proc_name;
    int rv = BCM_E_NONE;

    proc_name = "cint_field_evpn_destroy_ugq_and_uda";

    rv = bcm_field_qualifier_destroy(unit, esi_type_qual);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_qualifier_destroy esi_type_qual %d\n", proc_name, esi_type_qual);
        return rv;
    }


    rv = bcm_field_qualifier_destroy(unit, esi_qual);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_qualifier_destroy esi_qual %d\n", proc_name, esi_qual);
        return rv;
    }

    rv = bcm_field_action_destroy(unit, esi_action);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_action_destroy esi_action %d\n", proc_name, esi_action);
        return rv;
    }

    return rv;
}

int cint_field_srv6_evpn_destroy_all(int unit)
{
    char *proc_name;
    int rv = BCM_E_NONE;
    bcm_field_presel_entry_data_t presel_entry_data;

    proc_name = "cint_field_srv6_evpn_destroy_all";

    /* Destroy Egress configuration */
    rv = cint_field_srv6_evpn_destroy_all_entries(unit);
    if (rv != BCM_E_NONE)
    {
        printf("%s Error (%d), in cint_field_srv6_evpn_destroy_all_entries for egress for fg_id %d for all entries\n", proc_name, rv, egress_fg_id);
        return rv;
    }

    rv = bcm_field_group_context_detach(unit, egress_fg_id, egress_context_id);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_group_context_detach for egress fg_id %d context_id %d\n", proc_name, egress_fg_id, egress_context_id);
        return rv;
    }

    rv = bcm_field_group_delete(unit, egress_fg_id);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_group_delete for egress fg_id \n", proc_name, egress_fg_id);
        return rv;
    }

    /* Destroy the preselector */
    bcm_field_presel_entry_data_info_init(&presel_entry_data);
    presel_entry_data.entry_valid = FALSE;
    presel_entry_data.context_id = 0;
    rv = bcm_field_presel_set(unit, 0, &egress_presel_entry_id, &presel_entry_data);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_presel_destroy for egress context %d presel_id %d \n", proc_name, egress_context_id, egress_presel_id);
        return rv;
    }


    rv = bcm_field_context_destroy
                    (unit, bcmFieldStageEgress, egress_context_id);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_context_destroy for egress context %d\n",proc_name, egress_context_id);
        return rv;
    }


    /* Destroy Ingress configuration */

    rv = bcm_field_group_context_detach(unit, ingress_2nd_pass_fg_id, ingress_context_2nd_pass_id);
    if(rv != BCM_E_NONE)
    {
        printf("Error in bcm_field_group_context_detach for ingress fg_id %d context_id %d\n", ingress_2nd_pass_fg_id, ingress_context_2nd_pass_id);
        return rv;
    }


    rv = bcm_field_group_delete(unit, ingress_2nd_pass_fg_id);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_group_delete for ingress fg_id \n", proc_name, egress_fg_id);
        return rv;
    }

    /* Destroy UDQ & UDA */
    rv = cint_field_evpn_destroy_ugq_and_uda(unit);
    if (rv != BCM_E_NONE)
    {
        printf("%s Error (%d), in cint_field_evpn_destroy_ugq_and_uda for ingress for fg_id %d for udq and uda\n", proc_name, rv, ingress_2nd_pass_fg_id);
        return rv;
    }


    rv = bcm_field_presel_set(unit, 0, &ingress_2nd_pass_presel_entry_id, &presel_entry_data);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_presel_destroy for ingress context %d presel %d \n", proc_name, ingress_context_2nd_pass_id, ingress_2nd_pass_presel_id);
        return rv;
    }

    rv = bcm_field_context_destroy
                    (unit, bcmFieldStageIngressPMF1, ingress_context_2nd_pass_id);
    if(rv != BCM_E_NONE)
    {
        printf("%s Error in bcm_field_context_destroy for ingress context %d\n",proc_name, ingress_context_2nd_pass_id);
        return rv;
    }

    return rv;
}
