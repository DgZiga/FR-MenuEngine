#ifndef CONFIG_H
#define CONFIG_H

#define OAM_TABLE_START 0x83A3BB0 		//Default BPRE
#define OAM_TABLE_SIZE 0x99 			//Default BPRE
#define OAM_PAL_TABLE_START 0x83A5158 	//Default BPRE
#define OAM_PAL_TABLE_SIZE 18 			//Default BPRE

const struct InterfaceDefinition* const IMPLEMENTED_INTERFACES[] = {};

#define TOOL_COUNT sizeof(IMPLEMENTED_INTERFACES)/sizeof(IMPLEMENTED_INTERFACES[0])

#include "engine/engine_main.h"

#endif