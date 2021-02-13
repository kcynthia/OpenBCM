/** \file dnx_data_max_esb.h
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
#ifndef _DNX_DATA_MAX_ESB_H_
/*{*/
#define _DNX_DATA_MAX_ESB_H_
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
 * Number of ESB queue IDs, each queue represents an interface (NIFs or special)
 */
#define DNX_DATA_MAX_ESB_GENERAL_TOTAL_NOF_ESB_QUEUES (154)

/**
 * \brief
 * Number of ESB queue IDs that represent NIF ETH interfaces
 */
#define DNX_DATA_MAX_ESB_GENERAL_NOF_NIF_ETH_QUEUES (128)

/**
 * \brief
 * Number of ESB queue IDs that represent NIF ILKN interfaces
 */
#define DNX_DATA_MAX_ESB_GENERAL_NOF_NIF_ILKN_QUEUES (16)

/**
 * \brief
 * Number of ESB queue IDs dedicated for ILKN TDM interleave
 */
#define DNX_DATA_MAX_ESB_GENERAL_NOF_ILKN_TDM_QUEUES (4)

/**
 * \brief
 * Number of ESB queue IDs that represent FlexE interfaces
 */
#define DNX_DATA_MAX_ESB_GENERAL_NOF_FLEXE_QUEUES (82)

/**
 * \brief
 * Number of ESB queue IDs that represent special interfaces
 */
#define DNX_DATA_MAX_ESB_GENERAL_NOF_SPECIAL_QUEUES (10)

/**
 * \brief
 * Number of ESB queue IDs that are reserved(not used)
 */
#define DNX_DATA_MAX_ESB_GENERAL_NOF_RESERVED_QUEUES (2)

/**
 * \brief
 * Number of Free Pointer Controlers
 */
#define DNX_DATA_MAX_ESB_GENERAL_NOF_FPC (4)

/**
 * \brief
 * Number of buffers
 */
#define DNX_DATA_MAX_ESB_GENERAL_TOTAL_NOF_BUFFERS (4096)

/**
 * \brief
 * Calendar length for the ESB MUX calendar
 */
#define DNX_DATA_MAX_ESB_GENERAL_MUX_CAL_LEN (256)

/**
 * \brief
 * number of credits to add for each speed resolution
 */
#define DNX_DATA_MAX_ESB_GENERAL_ILKN_CREDITS_RESOLUTION (48)

/**
 * \brief
 * ilkn rate resolution (units: Mbps), for calculate the number of credits
 */
#define DNX_DATA_MAX_ESB_GENERAL_ILKN_CREDITS_RATE_RESOLUTION (50000)

/**
 * \brief
 * size of fpc ptr
 */
#define DNX_DATA_MAX_ESB_GENERAL_FPC_PTR_SIZE (10)

/**
 * \brief
 * Number of buffers per Free Pointer Controller
 */
#define DNX_DATA_MAX_ESB_GENERAL_NOF_BUFFERS_PER_FPC (1024)

/**
 * \brief
 * Resolution of the MUX calendar used for L1 ports. units: Mbps
 */
#define DNX_DATA_MAX_ESB_GENERAL_L1_MUX_CAL_RES (5000)

/**
 * \brief
 * Resolution of the MUX calendar used for TM Egr Queuing ports. units: Mbps
 */
#define DNX_DATA_MAX_ESB_GENERAL_TM_EGR_QUEUING_MUX_CAL_RES (7500)

/**
 * \brief
 * Size in bits of the port number internal to the port macro field in table for ESB queue to EGQ interface mapping
 */
#define DNX_DATA_MAX_ESB_DBAL_PM_INTERNAL_PORT_SIZE (7)

/**
 * \brief
 * Size in bits of the mask for ESB queues to display in the ESB debug counter
 */
#define DNX_DATA_MAX_ESB_DBAL_COUNTER_CONFIG_MASK_SIZE (8)

/*
 * }
 */

/*}*/
#endif /*_DNX_DATA_MAX_ESB_H_*/
/* *INDENT-ON* */