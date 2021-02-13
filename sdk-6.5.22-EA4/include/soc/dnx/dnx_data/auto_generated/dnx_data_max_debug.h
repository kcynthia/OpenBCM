/** \file dnx_data_max_debug.h
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
#ifndef _DNX_DATA_MAX_DEBUG_H_
/*{*/
#define _DNX_DATA_MAX_DEBUG_H_
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
 * FWD1 general data size, used to find the const values
 */
#define DNX_DATA_MAX_DEBUG_KLEAP_FWD1_GEN_DATA_SIZE (2743)

/**
 * \brief
 * FWD2 general data size, used to find the const values
 */
#define DNX_DATA_MAX_DEBUG_KLEAP_FWD2_GEN_DATA_SIZE (3175)

/**
 * \brief
 *  visibility global enabler
 */
#define DNX_DATA_MAX_DEBUG_GENERAL_GLOBAL_VISIBILITY (1)

/**
 * \brief
 * eop/sop decrement above threshold signal
 */
#define DNX_DATA_MAX_DEBUG_GENERAL_ETPP_EOP_AND_SOP_DEC_ABOVE_THRESHOLD (1)

/**
 * \brief
 * port-visibility control at egress MC
 */
#define DNX_DATA_MAX_DEBUG_GENERAL_EGRESS_PORT_MC_VISIBILITY (1)

/**
 * \brief
 * Indicates whether debug signals are accessible.
 */
#define DNX_DATA_MAX_DEBUG_GENERAL_MDB_DEBUG_SIGNALS (1)

/**
 * \brief
 * Indicates LBP debug signals are register based, LBP signals are always show the last packet when it's register based.
 */
#define DNX_DATA_MAX_DEBUG_GENERAL_LBP_DEBUG_SIGNALS_REGISTER_BASED (1)

/*
 * }
 */

/*}*/
#endif /*_DNX_DATA_MAX_DEBUG_H_*/
/* *INDENT-ON* */