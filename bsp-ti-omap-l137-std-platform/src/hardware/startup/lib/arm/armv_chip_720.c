/*
 * $QNXLicenseC:
 * Copyright 2008, QNX Software Systems. 
 * 
 * Licensed under the Apache License, Version 2.0 (the "License"). You 
 * may not reproduce, modify or distribute this software except in 
 * compliance with the License. You may obtain a copy of the License 
 * at: http://www.apache.org/licenses/LICENSE-2.0 
 * 
 * Unless required by applicable law or agreed to in writing, software 
 * distributed under the License is distributed on an "AS IS" basis, 
 * WITHOUT WARRANTIES OF ANY KIND, either express or implied.
 *
 * This file may contain contributions from others, either as 
 * contributors under the License or as licensors under other terms.  
 * Please review this entire file for other proprietary rights or license 
 * notices, as well as the QNX Development Suite License Guide at 
 * http://licensing.qnx.com/license-guide/ for other information.
 * $
 */




#include "startup.h"

const struct armv_chip armv_chip_720 = {
	0x7200,						// cpuid
	"arm720",					// name
	ARM_MMU_CR_S,				// mmu_cr
	0,							// mmu_cr_clr	FIXME
	0,							// cycles: must be statically defined
	&armv_cache_720,			// cache
	0,							// power: not supported by core
	&page_flush_720,			// flush
	&page_flush_deferred_720,	// deferred
	&armv_pte_v4wb,				// pte
	0,							// pte_wa: not supported by core
	&armv_pte_v4wb,				// pte_wb
	0,							// pte_wt: not supported by core
	0,							// setup
};

__SRCVERSION("armv_chip_720.c $Rev: 392398 $");
