/** \file dnx_data_max_failover.h
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
#ifndef _DNX_DATA_MAX_FAILOVER_H_
/*{*/
#define _DNX_DATA_MAX_FAILOVER_H_
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
 * size of egress path select table
 */
#define DNX_DATA_MAX_FAILOVER_PATH_SELECT_EGRESS_SIZE (131072)

/**
 * \brief
 * size of ingress path select table
 */
#define DNX_DATA_MAX_FAILOVER_PATH_SELECT_INGRESS_SIZE (16384)

/**
 * \brief
 * size of fec path select table
 */
#define DNX_DATA_MAX_FAILOVER_PATH_SELECT_FEC_SIZE (262144)

/**
 * \brief
 * protection path select pointer dedicate for no egress protection
 */
#define DNX_DATA_MAX_FAILOVER_PATH_SELECT_EGR_NO_PROTECTION (0)

/**
 * \brief
 * protection path select pointer dedicate for no ingress protection
 */
#define DNX_DATA_MAX_FAILOVER_PATH_SELECT_ING_NO_PROTECTION (0)

/**
 * \brief
 * protection path select pointer dedicate for no fec protection
 */
#define DNX_DATA_MAX_FAILOVER_PATH_SELECT_FEC_NO_PROTECTION (262143)

/**
 * \brief
 * protection path select pointer dedicate for fec facility protection
 */
#define DNX_DATA_MAX_FAILOVER_PATH_SELECT_FEC_FACILITY_PROTECTION (262142)

/**
 * \brief
 * number of banks included in fec protection path select table
 */
#define DNX_DATA_MAX_FAILOVER_PATH_SELECT_NOF_FEC_PATH_SELECT_BANKS (16)

/**
 * \brief
 * failover fec bank size
 */
#define DNX_DATA_MAX_FAILOVER_PATH_SELECT_FEC_BANK_SIZE (16384)

/**
 * \brief
 * Number MS bits from protection pointer used for HW access to the fields(0-3) of memory IPPA_VTT_PATH_SELECT.
 */
#define DNX_DATA_MAX_FAILOVER_PATH_SELECT_IN_LIF_PROTECTION_POINTER_NOF_MSB (2)

/**
 * \brief
 * Number LS bits from protection pointer used for HW access to the entries (0-4095) of memory IPPA_VTT_PATH_SELECT.
 */
#define DNX_DATA_MAX_FAILOVER_PATH_SELECT_IN_LIF_PROTECTION_POINTER_NOF_LSB (12)

/*
 * }
 */

/*}*/
#endif /*_DNX_DATA_MAX_FAILOVER_H_*/
/* *INDENT-ON* */