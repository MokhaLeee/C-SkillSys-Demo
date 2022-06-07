#include "gbafe-chax.h"

// Unit_Leonie
const struct CharacterData Char07 = {
	
	/* 00 */ .nameTextId = 0x218,
	/* 02 */ .descTextId = 0x274,
	/* 04 */ .number = 0x07,
	/* 05 */ .defaultClass = CLASS_RECRUIT,
	/* 06 */ .portraitId = UnitMug_Leonie,
	/* 08 */ .miniPortrait = 0,
	/* 09 */ .affinity = 1,
	/* 0A */ ._u0A = 10,

	/* 0B */ .baseLevel = 1,
	/* 0C */ .baseHP = 18,
	/* 0D */ .basePow = 5,
	/* 0E */ .baseSkl = 5,
	/* 0F */ .baseSpd = 5,
	/* 10 */ .baseDef = 5,
	/* 11 */ .baseRes = 0,
	/* 12 */ .baseLck = 2,
	/* 13 */ .baseCon = 1,

	.baseRanks[ITYPE_SWORD] = WPN_EXP_D,
	.baseRanks[ITYPE_LANCE] = WPN_EXP_D,
	.baseRanks[ITYPE_AXE] = WPN_EXP_E,
	.baseRanks[ITYPE_BOW] = WPN_EXP_E,
	.baseRanks[ITYPE_STAFF] = WPN_EXP_E,
	.baseRanks[ITYPE_ANIMA] = WPN_EXP_E,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY

	/* 1C */ .growthHP = 50,
	/* 1D */ .growthPow = 40,
	/* 1E */ .growthSkl = 40,
	/* 1F */ .growthSpd = 45,
	/* 20 */ .growthDef = 35,
	/* 21 */ .growthRes = 10,
	/* 22 */ .growthLck = 30,

	/* 23 */ ._u23 = 0,
	/* 24 */ ._u24 = 0,
	/* 25 */ ._u25 = 0,
	/* 26 */ ._u26 = 0,
	/* 27 */ ._u27 = 0,

	/* 28 */ .attributes = CA_FEMALE,

	/* 2C */ .pSupportData = (struct SupportData const*const)0x88AEC6C,
	/* 30 */ ._pU30 = (u8*)5,
};