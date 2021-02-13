/** \file dnx_data_max_stat.h
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
#ifndef _DNX_DATA_MAX_STAT_H_
/*{*/
#define _DNX_DATA_MAX_STAT_H_
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
 * max irpp profile size
 */
#define DNX_DATA_MAX_STAT_STAT_PP_MAX_IRPP_PROFILE_VALUE (31)

/**
 * \brief
 * max etpp profile size
 */
#define DNX_DATA_MAX_STAT_STAT_PP_MAX_ETPP_PROFILE_VALUE (31)

/**
 * \brief
 * max etpp counting profile size
 */
#define DNX_DATA_MAX_STAT_STAT_PP_MAX_ETPP_COUNTING_PROFILE_VALUE (3)

/**
 * \brief
 * max etpp metering profile size
 */
#define DNX_DATA_MAX_STAT_STAT_PP_MAX_ETPP_METERING_PROFILE_VALUE (31)

/**
 * \brief
 * max erpp profile size
 */
#define DNX_DATA_MAX_STAT_STAT_PP_MAX_ERPP_PROFILE_VALUE (8)

/**
 * \brief
 * ETPP statistics are built wrong in FWD, ENCAP
 */
#define DNX_DATA_MAX_STAT_STAT_PP_ETPP_REVERSED_STAT_CMD (1)

/**
 * \brief
 * ETPP statistics are built wrong in FWD, ENCAP (some devices reverse it themselves for the trap)
 */
#define DNX_DATA_MAX_STAT_STAT_PP_ETPP_ENC_STAT_CMD_IS_REVERSED (1)

/**
 * \brief
 * ETPP ENCAP stages push VSI stats entry regardless of use_vsd enabler
 */
#define DNX_DATA_MAX_STAT_STAT_PP_ETPP_EGRESS_VSI_ALWAYS_PUSHED (1)

/**
 * \brief
 * irpp profile first index
 */
#define DNX_DATA_MAX_STAT_STAT_PP_IRPP_START_PROFILE_VALUE (1)

/**
 * \brief
 * erpp profile first index
 */
#define DNX_DATA_MAX_STAT_STAT_PP_ERPP_START_PROFILE_VALUE (1)

/**
 * \brief
 * etpp profile first index
 */
#define DNX_DATA_MAX_STAT_STAT_PP_ETPP_START_PROFILE_VALUE (1)

/**
 * \brief
 * etpp counting profile first index
 */
#define DNX_DATA_MAX_STAT_STAT_PP_ETPP_COUNTING_START_PROFILE_VALUE (1)

/**
 * \brief
 * etpp metering profile first index
 */
#define DNX_DATA_MAX_STAT_STAT_PP_ETPP_METERING_START_PROFILE_VALUE (4)

/**
 * \brief
 * number of drop reasons
 */
#define DNX_DATA_MAX_STAT_DROP_REASONS_NOF_DROP_REASONS (47)

/*
 * }
 */

/*}*/
#endif /*_DNX_DATA_MAX_STAT_H_*/
/* *INDENT-ON* */