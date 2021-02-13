/** \file dnx_data_max_pp.h
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
#ifndef _DNX_DATA_MAX_PP_H_
/*{*/
#define _DNX_DATA_MAX_PP_H_
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
 * number of bit needed to represent nof PEM blocks
 */
#define DNX_DATA_MAX_PP_PEM_NOF_PEM_BITS (3)

/**
 * \brief
 * Size in bits of the ETPS type field
 */
#define DNX_DATA_MAX_PP_ETPP_ETPS_TYPE_SIZE_BITS (7)

/**
 * \brief
 * number of original packet header data
 */
#define DNX_DATA_MAX_PP_DEBUG_PACKET_HEADER_DATA (512)

/**
 * \brief
 * Size of PTC field in debug register
 */
#define DNX_DATA_MAX_PP_DEBUG_PTC_SIZE  (10)

/**
 * \brief
 * valid bytes
 */
#define DNX_DATA_MAX_PP_DEBUG_VALID_BYTES (8)

/**
 * \brief
 * Time Stamp (only for packets received from NIF)
 */
#define DNX_DATA_MAX_PP_DEBUG_TIME_STAMP (34)

/*
 * }
 */

/*}*/
#endif /*_DNX_DATA_MAX_PP_H_*/
/* *INDENT-ON* */