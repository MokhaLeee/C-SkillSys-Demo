#include "gbafe-chax.h"

// Unit_Ber
const struct CharacterData Char05 = {
	
	/* 00 */ .nameTextId = 0x216,
	/* 02 */ .descTextId = 0x272,
	/* 04 */ .number = 0x05,
	/* 05 */ .defaultClass = CLASS_RECRUIT,
	/* 06 */ .portraitId = UnitMug_Ber,
	/* 08 */ .miniPortrait = 0,
	/* 09 */ .affinity = 7,
	/* 0A */ ._u0A = 8,

	/* 0B */ .baseLevel = 1,
	/* 0C */ .baseHP = 3,
	/* 0D */ .basePow = 2,
	/* 0E */ .baseSkl = 4,
	/* 0F */ .baseSpd = 3,
	/* 10 */ .baseDef = 0,
	/* 11 */ .baseRes = 0,
	/* 12 */ .baseLck = 3,
	/* 13 */ .baseCon = 0,

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
	/* 1E */ .growthSkl = 40,
	/* 1F */ .growthSpd = 50,
	/* 20 */ .growthDef = 25,
	/* 21 */ .growthRes = 15,
	/* 22 */ .growthLck = 45,

	/* 23 */ ._u23 = 0,
	/* 24 */ ._u24 = 0,
	/* 25 */ ._u25 = 0,
	/* 26 */ ._u26 = 0,
	/* 27 */ ._u27 = 0,

	/* 28 */ .attributes = CA_FEMALE,

	/* 2C */ .pSupportData = (struct SupportData const*const)0x88AEC24,
	/* 30 */ ._pU30 = (u8*)4,
};