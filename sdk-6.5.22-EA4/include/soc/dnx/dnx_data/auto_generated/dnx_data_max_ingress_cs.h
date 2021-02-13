/** \file dnx_data_max_ingress_cs.h
 * 
 * MODULE DATA MAX - 
 * Maintain max value (of all devices) per define
 * 
 * Device Data
 * SW component that maintains per device data
 * For additional details about Device Data Component goto 'dnxc_data_mgmt.h'
 *        
 *     
 * 
 * AUTO-GENERATED BY AUTOCODER!
 * DO NOT EDIT THIS FILE!
 */
/* *INDENT-OFF* */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2021 Broadcom Inc. All rights reserved.
 */
#ifndef _DNX_DATA_MAX_INGRESS_CS_H_
/*{*/
#define _DNX_DATA_MAX_INGRESS_CS_H_
/*
 * INCLUDE FILES:
 * {
 */
/*
 * }
 */

/*!
* \brief This file is only used by DNX (JR2 family). Including it by
* software that is not specific to DNX is an error.
*/
#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX (JR2) family only!"
#endif

/*
 * MAX DEFINES:
 * {
 */
/**
 * \brief
 * Length in bits of the Context Selection TCAM buffer for qualifiers or masks, the maximum of all ingress CS TCAMs.
 */
#define DNX_DATA_MAX_INGRESS_CS_PROPERTIES_CS_BUFFER_NOF_BITS_MAX (200)

/**
 * \brief
 * Number of bits used in the prefix indicating half key or full key. Expected to be used for each half key at the lsb for tables that support half entries.
 */
#define DNX_DATA_MAX_INGRESS_CS_PROPERTIES_NOF_BITS_ENTRY_SIZE_PREFIX (1)

/*
 * }
 */

/*}*/
#endif /*_DNX_DATA_MAX_INGRESS_CS_H_*/
/* *INDENT-ON* */