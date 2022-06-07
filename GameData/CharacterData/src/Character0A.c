#include "gbafe-chax.h"
// Unit_Shamir
const struct CharacterData Char0A = {
	
	/* 00 */ .nameTextId = 0x21B,
	/* 02 */ .descTextId = 0x277,
	/* 04 */ .number = 0x0A,
	/* 05 */ .defaultClass = CLASS_RECRUIT,
	/* 06 */ .portraitId = UnitMug_Shamir,
	/* 08 */ .miniPortrait = 0,
	/* 09 */ .affinity = 1,
	/* 0A */ ._u0A = 0xD,

	/* 0B */ .baseLevel = 1,
	/* 0C */ .baseHP = 17,
	/* 0D */ .basePow = 4,
	/* 0E */ .baseSkl = 6,
	/* 0F */ .baseSpd = 4,
	/* 10 */ .baseDef = 2,
	/* 11 */ .baseRes = 1,
	/* 12 */ .baseLck = 3,
	/* 13 */ .baseCon = 1,

	.baseRanks[ITYPE_SWORD] = WPN_EXP_E,
	.baseRanks[ITYPE_LANCE] = WPN_EXP_E,
	.baseRanks[ITYPE_AXE] = WPN_EXP_E,
	.baseRanks[ITYPE_BOW] = WPN_EXP_C,
	.baseRanks[ITYPE_STAFF] = WPN_EXP_E,
	.baseRanks[ITYPE_ANIMA] = WPN_EXP_E,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY

	/* 1C */ .growthHP = 50,
	/* 1D */ .growthPow = 40,
	/* 1E */ .growthSkl = 55,
	/* 1F */ .growthSpd = 40,
	/* 20 */ .growthDef = 30,
	/* 21 */ .growthRes = 30,
	/* 22 */ .growthLck = 40,

	/* 23 */ ._u23 = 0,
	/* 24 */ ._u24 = 0,
	/* 25 */ ._u25 = 0,
	/* 26 */ ._u26 = 0,
	/* 27 */ ._u27 = 0,

	/* 28 */ .attributes = CA_FEMALE,

	/* 2C */ .pSupportData = (struct SupportData const*const)0x88AEC54,
	/* 30 */ ._pU30 = (u8*)1,
};
