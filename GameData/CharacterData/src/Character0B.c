#include "gbafe-chax.h"
// UnitMug_Sylvain
const struct CharacterData Char0B = {
	
	/* 00 */ .nameTextId = 0x21C,
	/* 02 */ .descTextId = 0x278,
	/* 04 */ .number = 0x0B,
	/* 05 */ .defaultClass = CLASS_RECRUIT,
	/* 06 */ .portraitId = UnitMug_Sylvain,
	/* 08 */ .miniPortrait = 0,
	/* 09 */ .affinity = 1,
	/* 0A */ ._u0A = 4,

	/* 0B */ .baseLevel = 5,
	/* 0C */ .baseHP = 25,
	/* 0D */ .basePow = 10,
	/* 0E */ .baseSkl = 10,
	/* 0F */ .baseSpd = 10,
	/* 10 */ .baseDef = 5,
	/* 11 */ .baseRes = 3,
	/* 12 */ .baseLck = 3,
	/* 13 */ .baseCon = 2,

	.baseRanks[ITYPE_SWORD] = WPN_EXP_C,
	.baseRanks[ITYPE_LANCE] = WPN_EXP_E,
	.baseRanks[ITYPE_AXE] = WPN_EXP_D,
	.baseRanks[ITYPE_BOW] = WPN_EXP_E,
	.baseRanks[ITYPE_STAFF] = WPN_EXP_E,
	.baseRanks[ITYPE_ANIMA] = WPN_EXP_E,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY

	/* 1C */ .growthHP = 60,
	/* 1D */ .growthPow = 45,
	/* 1E */ .growthSkl = 45,
	/* 1F */ .growthSpd = 45,
	/* 20 */ .growthDef = 40,
	/* 21 */ .growthRes = 30,
	/* 22 */ .growthLck = 30,

	/* 23 */ ._u23 = 0,
	/* 24 */ ._u24 = 0,
	/* 25 */ ._u25 = 0,
	/* 26 */ ._u26 = 0,
	/* 27 */ ._u27 = 0,

	/* 28 */ .attributes = CA_FEMALE,

	/* 2C */ .pSupportData = (struct SupportData const*const)0x88AED5C,
	/* 30 */ ._pU30 = (u8*)0,
};