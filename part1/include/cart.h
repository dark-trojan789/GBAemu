#pragma once

#include <common.h>

typedef struct 
{
    u8 entry[4];
    u8 logo[0x30];

    char title[16];
    u16 new_lic_code;
    u8 sgb_flag;
    
} rom_header;
