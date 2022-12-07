/**
 ****************************************************************************************
 *
 * @file ecrnx_mesh.h
 *
 * @brief VHT Beamformer function declarations
 *
 * Copyright (C) ESWIN 2015-2020
 *
 ****************************************************************************************
 */

#ifndef _ECRNX_MESH_H_
#define _ECRNX_MESH_H_

/**
 * INCLUDE FILES
 ****************************************************************************************
 */

#include "ecrnx_defs.h"

/**
 * DEFINES
 ****************************************************************************************
 */

/**
 * TYPE DEFINITIONS
 ****************************************************************************************
 */

/**
 * FUNCTION DECLARATIONS
 ****************************************************************************************
 */

/**
 ****************************************************************************************
 * @brief TODO [LT]
 ****************************************************************************************
 */
struct ecrnx_mesh_proxy *ecrnx_get_mesh_proxy_info(struct ecrnx_vif *p_ecrnx_vif, u8 *p_sta_addr, bool local);

#endif /* _ECRNX_MESH_H_ */