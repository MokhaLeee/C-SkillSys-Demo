#pragma once

#define UNIT_VAILD_MOKHA_JUDGE(aUnit)	( 0x2020000 != (0x2020000 & (uint32_t)aUnit) )

// A debug bool byte, if 1 then in debug mode
extern u8 gBoolDebug;

// judge whether a value is pointer
int _IsPointer(u32 it);

// simple mod a%b
int _lib_mod(int a, int b);

// simple div a/b
int _lib_div(int a, int b);

const void* GetIconGfx(unsigned icon);

// New draw abs number
void NewDrawAbsDecNumber(u16 *dest, int color, int number);


// ====================================================
//                     Map Misc
// ====================================================

int IsPositionVaild(s8 x, s8 y);
struct Unit* GetUnitByLoc(s8 x, s8 y);