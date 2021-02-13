/** \file dnx_data_fifodma.h
 * 
 * MODULE DATA INTERFACE - 
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
#ifndef _DNX_DATA_FIFODMA_H_
/*{*/
#define _DNX_DATA_FIFODMA_H_
/*
 * INCLUDE FILES:
 * {
 */
#include <sal/limits.h>
#include <soc/property.h>
#include <shared/shrextend/shrextend_debug.h>
#include <shared/utilex/utilex_framework.h>
#include <soc/dnxc/dnxc_data/dnxc_data_utils.h>
#include <soc/dnxc/dnxc_data/dnxc_data_mgmt.h>
#include <soc/dnx/dnx_fifodma.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_max_fifodma.h>
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
 * MODULE FUNCTIONS:
 * {
 */
/**
 * \brief Init default data structure - dnx_data_if_fifodma
 * 
 * \param [in] unit - Unit #
 * 
 * \return
 *     rv - see 'shr_error_e
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
shr_error_e dnx_data_if_fifodma_init(
    int unit);

/*
 * }
 */

/*
 * SUBMODULE  - GENERAL:
 * fifodma general data
 * {
 */
/*
 * Table value structure
 */
/**
 * \brief Holds values of submodule general table fifodma_map
 * Table info:
 * 1-1 map between fifodma channel id and fifodma source
 */
typedef struct
{
    /**
     * fifodma channel id
     */
    int fifodma_channel;
} dnx_data_fifodma_general_fifodma_map_t;

/*
 * Feature enum
 */
/**
 * \brief 
 * Submodule features
 */
typedef enum
{

    /**
     * Must be last one!
     */
    _dnx_data_fifodma_general_feature_nof
} dnx_data_fifodma_general_feature_e;

/*
 * Submodule functions typedefs
 */
/**
 * \brief get submodule feature - disabled/enabled
 * 
 * \param [in] unit - Unit #
 * \param [in] feature - feature to get (see enum definition for more details
 * 
 * \return
 *     is_supported - returns 1 if and only if supported and 0 otherwise
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef int(
    *dnx_data_fifodma_general_feature_get_f) (
    int unit,
    dnx_data_fifodma_general_feature_e feature);

/**
 * \brief returns define data of nof_fifodma_channels
 * Module - 'fifodma', Submodule - 'general', data - 'nof_fifodma_channels'
 * number of fifodma channels supported
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     nof_fifodma_channels - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_fifodma_general_nof_fifodma_channels_get_f) (
    int unit);

/**
 * \brief returns define data of min_nof_host_entries
 * Module - 'fifodma', Submodule - 'general', data - 'min_nof_host_entries'
 * minimum number of host entries supported
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     min_nof_host_entries - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_fifodma_general_min_nof_host_entries_get_f) (
    int unit);

/**
 * \brief returns define data of max_nof_host_entries
 * Module - 'fifodma', Submodule - 'general', data - 'max_nof_host_entries'
 * maximum number of host entries supported
 * 
 * \param [in] unit - unit #
 * 
 * \return
 *     max_nof_host_entries - the required data value
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef uint32(
    *dnx_data_fifodma_general_max_nof_host_entries_get_f) (
    int unit);

/**
 * \brief get table fifodma_map entry 
 * 1-1 map between fifodma channel id and fifodma source
 * 
 * \param [in] unit - unit #
 * \param [in] fifodma_source - fifodma source
 * 
 * \return
 *     fifodma_map - returns the relevant entry values grouped in struct - see dnx_data_fifodma_general_fifodma_map_t
 * \remark
 *   * Auto-generated using device data autocoder
 * \see
 *   * None
 */
typedef const dnx_data_fifodma_general_fifodma_map_t *(
    *dnx_data_fifodma_general_fifodma_map_get_f) (
    int unit,
    int fifodma_source);

/*
 * SUBMODULE INTERFACE DNX_DATA_IF_FIFODMA - GENERAL:
 * {
 */
/**
 * \brief Interface for fifodma general data
 */
typedef struct
{
    /**
     * get submodule feature - disabled/enabled
     */
    dnx_data_fifodma_general_feature_get_f feature_get;
    /**
     * returns define data of nof_fifodma_channels
     */
    dnx_data_fifodma_general_nof_fifodma_channels_get_f nof_fifodma_channels_get;
    /**
     * returns define data of min_nof_host_entries
     */
    dnx_data_fifodma_general_min_nof_host_entries_get_f min_nof_host_entries_get;
    /**
     * returns define data of max_nof_host_entries
     */
    dnx_data_fifodma_general_max_nof_host_entries_get_f max_nof_host_entries_get;
    /**
     * get table fifodma_map entry 
     */
    dnx_data_fifodma_general_fifodma_map_get_f fifodma_map_get;
    /**
     * get general info table about table (for example key size)fifodma_map info
     */
    dnxc_data_table_info_get_f fifodma_map_info_get;
} dnx_data_if_fifodma_general_t;

/*
 * }
 */

/*
 * MODULE INTERFACE DNX_DATA_IF_FIFODMA:
 * {
 */
/**
 * \brief Interface for fifodma data
 */
typedef struct
{
    /**
     * Interface for fifodma general data
     */
    dnx_data_if_fifodma_general_t general;
} dnx_data_if_fifodma_t;

/*
 * }
 */
/*
 * Extern:
 * {
 */
/**
 * \brief
 * Module structured interface - used to get the required data stored in dnx data
 */
extern dnx_data_if_fifodma_t dnx_data_fifodma;
/*
 * }
 */
/*}*/
#endif /*_DNX_DATA_FIFODMA_H_*/
/* *INDENT-ON* */