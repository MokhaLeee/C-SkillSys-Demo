#include "gbafe-chax.h"

// Unit_Flyan
const struct CharacterData Char04 = {
	
	/* 00 */ .nameTextId = 0x215,
	/* 02 */ .descTextId = 0x271,
	/* 04 */ .number = 0x04,
	/* 05 */ .defaultClass = CLASS_RECRUIT,
	/* 06 */ .portraitId = UnitMug_Flyan,
	/* 08 */ .miniPortrait = 0,
	/* 09 */ .affinity = 6,
	/* 0A */ ._u0A = 6,

	/* 0B */ .baseLevel = 1,
	/* 0C */ .baseHP = 3,
	/* 0D */ .basePow = 1,
	/* 0E */ .baseSkl = 2,
	/* 0F */ .baseSpd = 2,
	/* 10 */ .baseDef = 0,
	/* 11 */ .baseRes = 3,
	/* 12 */ .baseLck = 6,
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
	/* 1F */ .growthSpd = 35,
	/* 20 */ .growthDef = 20,
	/* 21 */ .growthRes = 65,
	/* 22 */ .growthLck = 80,

	/* 23 */ ._u23 = 0,
	/* 24 */ ._u24 = 0,
	/* 25 */ ._u25 = 0,
	/* 26 */ ._u26 = 0,
	/* 27 */ ._u27 = 0,

	/* 28 */ .attributes = CA_FEMALE,

	/* 2C */ .pSupportData = (struct SupportData const*const)0x88AEBF4,
	/* 30 */ ._pU30 = (u8*)3,
};