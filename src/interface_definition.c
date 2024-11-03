#ifndef INTERFACE_DEFINITION_C
#define INTERFACE_DEFINITION_C

#include "interface_definition.h"
#include "../include/agb_debug/debug.c"

const u16* (*get_bg_map(struct InterfaceDefinition *def, u8 bg_id))(void){
    if(bg_id == 0){
        return def->get_bg_0_map;
    }
    if(bg_id == 1){
        return def->get_bg_1_map;
    }
    if(bg_id == 2){
        return def->get_bg_2_map;
    }
    if(bg_id == 3){
        return def->get_bg_3_map;
    }
    return 0;
}

const u8 * (*get_bg_tilesets(struct InterfaceDefinition *def, u8 bg_id))(void){
    if(bg_id == 0){
        return def->get_bg_0_tilesets;
    }
    if(bg_id == 1){
        return def->get_bg_1_tilesets;
    }
    if(bg_id == 2){
        return def->get_bg_2_tilesets;
    }
    if(bg_id == 3){
        return def->get_bg_3_tilesets;
    }
    return 0;
}

const u8*  (*get_bg_pal(struct InterfaceDefinition *def, u8 bg_id))(void){
    if(bg_id == 0){
        return def->get_bg_0_pal;
    }
    if(bg_id == 1){
        return def->get_bg_1_pal;
    }
    if(bg_id == 2){
        return def->get_bg_2_pal;
    }
    if(bg_id == 3){
        return def->get_bg_3_pal;
    }
    return 0;
}

#endif