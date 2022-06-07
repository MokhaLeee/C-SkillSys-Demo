#include "gbafe-chax.h"

// Unit_Linhardt
const struct CharacterData Char08 = {
	
	/* 00 */ .nameTextId = 0x219,
	/* 02 */ .descTextId = 0x275,
	/* 04 */ .number = 0x08,
	/* 05 */ .defaultClass = CLASS_JOURNEYMAN,
	/* 06 */ .portraitId = UnitMug_Linhardt,
	/* 08 */ .miniPortrait = 0,
	/* 09 */ .affinity = 6,
	/* 0A */ ._u0A = 1,

	/* 0B */ .baseLevel = 1,
	/* 0C */ .baseHP = 18,
	/* 0D */ .basePow = 0,
	/* 0E */ .baseSkl = 3,
	/* 0F */ .baseSpd = 3,
	/* 10 */ .baseDef = 1,
	/* 11 */ .baseRes = 4,
	/* 12 */ .baseLck = 3,
	/* 13 */ .baseCon = 0,

	.baseRanks[ITYPE_SWORD] = WPN_EXP_E,
	.baseRanks[ITYPE_LANCE] = WPN_EXP_E,
	.baseRanks[ITYPE_AXE] = WPN_EXP_E,
	.baseRanks[ITYPE_BOW] = WPN_EXP_E,
	.baseRanks[ITYPE_STAFF] = WPN_EXP_D,
	.baseRanks[ITYPE_ANIMA] = WPN_EXP_D,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY

	/* 1C */ .growthHP = 50,
	/* 1D */ .growthPow = 20,
	/* 1E */ .growthSkl = 40,
	/* 1F */ .growthSpd = 30,
	/* 20 */ .growthDef = 30,
	/* 21 */ .growthRes = 60,
	/* 22 */ .growthLck = 40,

	/* 23 */ ._u23 = 0,
	/* 24 */ ._u24 = 0,
	/* 25 */ ._u25 = 0,
	/* 26 */ ._u26 = 0,
	/* 27 */ ._u27 = 0,

	/* 28 */ .attributes = 0,

	/* 2C */ .pSupportData = (struct SupportData const*const)0x88AEC9C,
	/* 30 */ ._pU30 = (u8*)7,
};















