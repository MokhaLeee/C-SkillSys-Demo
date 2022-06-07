#include "gbafe-chax.h"

// Unit_Felix
const struct CharacterData Char0E = {
	
	/* 00 */ .nameTextId = 0x21F,
	/* 02 */ .descTextId = 0x27B,
	/* 04 */ .number = 0x0E,
	/* 05 */ .defaultClass = CLASS_JOURNEYMAN,
	/* 06 */ .portraitId = UnitMug_Felix,
	/* 08 */ .miniPortrait = 0,
	/* 09 */ .affinity = 1,
	/* 0A */ ._u0A = 0x1D,

	/* 0B */ .baseLevel = 1,
	/* 0C */ .baseHP = 18,
	/* 0D */ .basePow = 5,
	/* 0E */ .baseSkl = 5,
	/* 0F */ .baseSpd = 5,
	/* 10 */ .baseDef = 2,
	/* 11 */ .baseRes = 0,
	/* 12 */ .baseLck = 4,
	/* 13 */ .baseCon = 1,

	.baseRanks[ITYPE_SWORD] = WPN_EXP_D,
	.baseRanks[ITYPE_LANCE] = WPN_EXP_E,
	.baseRanks[ITYPE_AXE] = WPN_EXP_D,
	.baseRanks[ITYPE_BOW] = WPN_EXP_D,
	.baseRanks[ITYPE_STAFF] = WPN_EXP_E,
	.baseRanks[ITYPE_ANIMA] = WPN_EXP_E,
	.baseRanks[ITYPE_LIGHT] = 0,	// Unused
	.baseRanks[ITYPE_DARK] = 0,

	/* 1C */ .growthHP = 50,
	/* 1D */ .growthPow = 55,
	/* 1E */ .growthSkl = 45,
	/* 1F */ .growthSpd = 50,
	/* 20 */ .growthDef = 30,
	/* 21 */ .growthRes = 10,
	/* 22 */ .growthLck = 40,

	/* 23 */ ._u23 = 0,
	/* 24 */ ._u24 = 0,
	/* 25 */ ._u25 = 0,
	/* 26 */ ._u26 = 0,
	/* 27 */ ._u27 = 0,

	/* 28 */ .attributes = 0,

	/* 2C */ .pSupportData = (struct SupportData const*const)0x88AEE1C,
	/* 30 */ ._pU30 = (u8*)0x0,
};