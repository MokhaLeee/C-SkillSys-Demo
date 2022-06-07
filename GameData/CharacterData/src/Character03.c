#include "gbafe-chax.h"

// Unit_Eru
const struct CharacterData Char03 = {
	
	/* 00 */ .nameTextId = 0x214,
	/* 02 */ .descTextId = 0x270,
	/* 04 */ .number = 0x03,
	/* 05 */ .defaultClass = CLASS_RECRUIT,
	/* 06 */ .portraitId = UnitMug_Eru,
	/* 08 */ .miniPortrait = 0,
	/* 09 */ .affinity = 2,
	/* 0A */ ._u0A = 7,

	/* 0B */ .baseLevel = 1,
	/* 0C */ .baseHP = 18,
	/* 0D */ .basePow = 5,
	/* 0E */ .baseSkl = 4,
	/* 0F */ .baseSpd = 4,
	/* 10 */ .baseDef = 3,
	/* 11 */ .baseRes = 1,
	/* 12 */ .baseLck = 4,
	/* 13 */ .baseCon = 0,

	.baseRanks[ITYPE_SWORD] = WPN_EXP_D,
	.baseRanks[ITYPE_LANCE] = WPN_EXP_E,
	.baseRanks[ITYPE_AXE] = WPN_EXP_D,
	.baseRanks[ITYPE_BOW] = WPN_EXP_E,
	.baseRanks[ITYPE_STAFF] = WPN_EXP_E,
	.baseRanks[ITYPE_ANIMA] = WPN_EXP_E,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY

	/* 1C */ .growthHP = 50,
	/* 1D */ .growthPow = 40,
	/* 1E */ .growthSkl = 40,
	/* 1F */ .growthSpd = 40,
	/* 20 */ .growthDef = 35,
	/* 21 */ .growthRes = 20,
	/* 22 */ .growthLck = 40,

	/* 23 */ ._u23 = 0,
	/* 24 */ ._u24 = 0,
	/* 25 */ ._u25 = 0,
	/* 26 */ ._u26 = 0,
	/* 27 */ ._u27 = 0,

	/* 28 */ .attributes = CA_FEMALE,

	/* 2C */ .pSupportData = (struct SupportData const*const)0x88AEC0C,
	/* 30 */ ._pU30 = (u8*)4,
};