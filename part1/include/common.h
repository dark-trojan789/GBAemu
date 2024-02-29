#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

//MACRO to set bit n in a to 1 and other to 0
#define BIT(a, n) ((a & (1<<n)) ? 1 : 0)

//MACRO to set nth bit of a to 1 or 0 depending on on
#define BIT_SET(a, n, on) (pn ? a |= (1<<n) : a &= ~(1<<n))

//MACRO to check of a is between b and c
#define BETWEEN(a, b, c) ((a>=b) && (a<=c))

void delay(u32 ms);