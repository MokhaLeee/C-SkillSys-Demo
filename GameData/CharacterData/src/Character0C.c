#include "gbafe-chax.h"

// UnitMug_Yuri
const struct CharacterData Char0C = {
	
	
	/* 00 */ .nameTextId = 0x21D,
	/* 02 */ .descTextId = 0x279,
	/* 04 */ .number = 0x0C,
	/* 05 */ .defaultClass = CLASS_JOURNEYMAN,
	/* 06 */ .portraitId = UnitMug_Yuri,
	/* 08 */ .miniPortrait = 0,
	/* 09 */ .affinity = 2,
	/* 0A */ ._u0A = 0xF,

	/* 0B */ .baseLevel = 1,
	/* 0C */ .baseHP = 18,
	/* 0D */ .basePow = 4,
	/* 0E */ .baseSkl = 5,
	/* 0F */ .baseSpd = 5,
	/* 10 */ .baseDef = 3,
	/* 11 */ .baseRes = 1,
	/* 12 */ .baseLck = 5,
	/* 13 */ .baseCon = 1,

	.baseRanks[ITYPE_SWORD] = WPN_EXP_D,
	.baseRanks[ITYPE_LANCE] = WPN_EXP_E,
	.baseRanks[ITYPE_AXE] = WPN_EXP_E,
	.baseRanks[ITYPE_BOW] = WPN_EXP_D,
	.baseRanks[ITYPE_STAFF] = WPN_EXP_E,
	.baseRanks[ITYPE_ANIMA] = WPN_EXP_E,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY

	/* 1C */ .growthHP = 50,
	/* 1D */ .growthPow = 40,
	/* 1E */ .growthSkl = 50,
	/* 1F */ .growthSpd = 55,
	/* 20 */ .growthDef = 30,
	/* 21 */ .growthRes = 20,
	/* 22 */ .growthLck = 40,

	/* 23 */ ._u23 = 0,
	/* 24 */ ._u24 = 0,
	/* 25 */ ._u25 = 0,
	/* 26 */ ._u26 = 0,
	/* 27 */ ._u27 = 0,

	/* 28 */ .attributes = 0,

	/* 2C */ .pSupportData = (struct SupportData const*const)0x88AECCC,
	/* 30 */ ._pU30 = (u8*)7,
};