/** \file dnx_data_max_srv6.h
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
#ifndef _DNX_DATA_MAX_SRV6_H_
/*{*/
#define _DNX_DATA_MAX_SRV6_H_
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
 * Min number of SIDs that can be termianted in SRv6 PSP Egress node
 */
#define DNX_DATA_MAX_SRV6_TERMINATION_MIN_NOF_TERMINATED_SIDS_PSP (2)

/**
 * \brief
 * Max number of SIDs that can be termianted in SRv6 PSP Egress node
 */
#define DNX_DATA_MAX_SRV6_TERMINATION_MAX_NOF_TERMINATED_SIDS_PSP (11)

/**
 * \brief
 * Min number of SIDs that can be termianted in SRv6 USP Egress node
 */
#define DNX_DATA_MAX_SRV6_TERMINATION_MIN_NOF_TERMINATED_SIDS_USP (1)

/**
 * \brief
 * Max number of SIDs that can be termianted in SRv6 USP Egress node
 */
#define DNX_DATA_MAX_SRV6_TERMINATION_MAX_NOF_TERMINATED_SIDS_USP (23)

/**
 * \brief
 * Max number of SIDs that can be termianted in SRv6 USP Egress node in 1pass
 */
#define DNX_DATA_MAX_SRV6_TERMINATION_MAX_NOF_TERMINATED_SIDS_USP_1PASS (9)

/**
 * \brief
 * Max number of SIDs that can be Encapsulated in SRV6 tunnel, when building main headers (SRH, and IPv6 tunnel)
 */
#define DNX_DATA_MAX_SRV6_ENCAPSULATION_MAX_NOF_ENCAP_SIDS_MAIN_PASS (5)

/**
 * \brief
 * Number of SIDs that can be Encapsulated in SRV6 tunnel, extended pass - only SIDs are encapsulated
 */
#define DNX_DATA_MAX_SRV6_ENCAPSULATION_NOF_ENCAP_SIDS_EXTENDED_PASS (5)

/*
 * }
 */

/*}*/
#endif /*_DNX_DATA_MAX_SRV6_H_*/
/* *INDENT-ON* */