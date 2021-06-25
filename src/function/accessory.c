/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 */

#include "usbg/usbg.h"
#include "usbg/usbg_internal.h"

#ifdef HAS_GADGET_SCHEMES
#include <libconfig.h>
#endif

struct usbg_f_accessory {
	struct usbg_function func;
};

GENERIC_ALLOC_INST(accessory, struct usbg_f_accessory, func);

GENERIC_FREE_INST(accessory, struct usbg_f_accessory, func);

#define ACCESSORY_FUNCTION_OPTS                                                \
	.alloc_inst = accessory_alloc_inst, .free_inst = accessory_free_inst

struct usbg_function_type usbg_f_type_accessory = { .name = "accessory",
						    ACCESSORY_FUNCTION_OPTS };
