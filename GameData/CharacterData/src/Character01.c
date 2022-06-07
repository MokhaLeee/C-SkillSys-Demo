#include "gbafe-chax.h"

// Lysithea
const struct CharacterData Char01 = {
	
	/* 00 */ .nameTextId = 0x212,
	/* 02 */ .descTextId = 0x26E,
	/* 04 */ .number = 0x01,
	/* 05 */ .defaultClass = CLASS_RECRUIT,
	/* 06 */ .portraitId = UnitMug_Lysi,
	/* 08 */ .miniPortrait = 0,
	/* 09 */ .affinity = 6,
	/* 0A */ ._u0A = 1,

	/* 0B */ .baseLevel = 1,
	/* 0C */ .baseHP = 15,
	/* 0D */ .basePow = 1,
	/* 0E */ .baseSkl = 5,
	/* 0F */ .baseSpd = 6,
	/* 10 */ .baseDef = 3,
	/* 11 */ .baseRes = 1,
	/* 12 */ .baseLck = 5,
	/* 13 */ .baseCon = 0,

	.baseRanks[ITYPE_SWORD] = WPN_EXP_D,
	.baseRanks[ITYPE_LANCE] = WPN_EXP_E,
	.baseRanks[ITYPE_AXE] = WPN_EXP_E,
	.baseRanks[ITYPE_BOW] = WPN_EXP_E,
	.baseRanks[ITYPE_STAFF] = WPN_EXP_E,
	.baseRanks[ITYPE_ANIMA] = WPN_EXP_D,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY

	/* 1C */ .growthHP = 50,
	/* 1D */ .growthPow = 20,
	/* 1E */ .growthSkl = 40,
	/* 1F */ .growthSpd = 50,
	/* 20 */ .growthDef = 20,
	/* 21 */ .growthRes = 15,
	/* 22 */ .growthLck = 60,

	/* 23 */ ._u23 = 0,
	/* 24 */ ._u24 = 0,
	/* 25 */ ._u25 = 0,
	/* 26 */ ._u26 = 0,
	/* 27 */ ._u27 = 0,

	/* 28 */ .attributes = CA_FEMALE,

	/* 2C */ .pSupportData = (struct SupportData const*const)0x88AEBAC,
	/* 30 */ ._pU30 = (u8*)7,
};