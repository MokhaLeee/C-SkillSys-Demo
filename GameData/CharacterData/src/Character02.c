#include "gbafe-chax.h"

// Dimi
const struct CharacterData Char02 = {
	
	/* 00 */ .nameTextId = 0x213,
	/* 02 */ .descTextId = 0x26F,
	/* 04 */ .number = 0x02,
	/* 05 */ .defaultClass = CLASS_JOURNEYMAN,
	/* 06 */ .portraitId = UnitMug_Dimi,
	/* 08 */ .miniPortrait = 0,
	/* 09 */ .affinity = 7,
	/* 0A */ ._u0A = 3,

	/* 0B */ .baseLevel = 1,
	/* 0C */ .baseHP = 19,
	/* 0D */ .basePow = 6,
	/* 0E */ .baseSkl = 5,
	/* 0F */ .baseSpd = 3,
	/* 10 */ .baseDef = 4,
	/* 11 */ .baseRes = 1,
	/* 12 */ .baseLck = 3,
	/* 13 */ .baseCon = 2,

	.baseRanks[ITYPE_SWORD] = WPN_EXP_E,
	.baseRanks[ITYPE_LANCE] = WPN_EXP_D,
	.baseRanks[ITYPE_AXE] = WPN_EXP_D,
	.baseRanks[ITYPE_BOW] = WPN_EXP_E,
	.baseRanks[ITYPE_STAFF] = WPN_EXP_E,
	.baseRanks[ITYPE_ANIMA] = WPN_EXP_E,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY

	/* 1C */ .growthHP = 50,
	/* 1D */ .growthPow = 60,
	/* 1E */ .growthSkl = 45,
	/* 1F */ .growthSpd = 35,
	/* 20 */ .growthDef = 40,
	/* 21 */ .growthRes = 20,
	/* 22 */ .growthLck = 35,

	/* 23 */ ._u23 = 0,
	/* 24 */ ._u24 = 0,
	/* 25 */ ._u25 = 0,
	/* 26 */ ._u26 = 0,
	/* 27 */ ._u27 = 0,

	/* 28 */ .attributes = 0,

	/* 2C */ .pSupportData = (struct SupportData const*const)0x88AEBDC,
	/* 30 */ ._pU30 = (u8*)3,
};