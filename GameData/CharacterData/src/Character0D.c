#include "gbafe-chax.h"

// Unit_Marianne
const struct CharacterData Char0D = {
	
	/* 00 */ .nameTextId = 0x21D,
	/* 02 */ .descTextId = 0x279,
	/* 04 */ .number = 0x0D,
	/* 05 */ .defaultClass = CLASS_RECRUIT,
	/* 06 */ .portraitId = UnitMug_Marianne,
	/* 08 */ .miniPortrait = 0,
	/* 09 */ .affinity = 4,
	/* 0A */ ._u0A = 0xA,

	/* 0B */ .baseLevel = 1,
	/* 0C */ .baseHP = 17,
	/* 0D */ .basePow = 2,
	/* 0E */ .baseSkl = 6,
	/* 0F */ .baseSpd = 3,
	/* 10 */ .baseDef = 0,
	/* 11 */ .baseRes = 3,
	/* 12 */ .baseLck = 5,
	/* 13 */ .baseCon = 0,

	.baseRanks[ITYPE_SWORD] = WPN_EXP_E,
	.baseRanks[ITYPE_LANCE] = WPN_EXP_D,
	.baseRanks[ITYPE_AXE] = WPN_EXP_E,
	.baseRanks[ITYPE_BOW] = WPN_EXP_E,
	.baseRanks[ITYPE_STAFF] = WPN_EXP_D,
	.baseRanks[ITYPE_ANIMA] = WPN_EXP_E,
	.baseRanks[ITYPE_LIGHT] = 0,	// Unused
	.baseRanks[ITYPE_DARK] = 0,

	/* 1C */ .growthHP = 40,
	/* 1D */ .growthPow = 20,
	/* 1E */ .growthSkl = 55,
	/* 1F */ .growthSpd = 30,
	/* 20 */ .growthDef = 10,
	/* 21 */ .growthRes = 40,
	/* 22 */ .growthLck = 40,

	/* 23 */ ._u23 = 0,
	/* 24 */ ._u24 = 0,
	/* 25 */ ._u25 = 0,
	/* 26 */ ._u26 = 0,
	/* 27 */ ._u27 = 0,

	/* 28 */ .attributes = CA_FEMALE,

	/* 2C */ .pSupportData = (struct SupportData const*const)0x88AECE4,
	/* 30 */ ._pU30 = (u8*)0xA,
};