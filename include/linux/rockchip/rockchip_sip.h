/* SPDX-License-Identifier: GPL-2.0-only */
#ifndef __LINUX_ROCKCHIP_SIP_COMPAT_H
#define __LINUX_ROCKCHIP_SIP_COMPAT_H

#include <soc/rockchip/rockchip_sip.h>

#define PSCI_SIP_VPU_RESET		0x8200000c

static inline void sip_smc_vpu_reset(u32 arg0, u32 arg1, u32 arg2)
{
}

#endif /* __LINUX_ROCKCHIP_SIP_COMPAT_H */
