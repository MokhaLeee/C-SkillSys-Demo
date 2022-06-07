#include "gbafe-chax.h"

extern const s8 MercenaryFAnims[];

const struct ClassData Class10_MercenaryF = {
	
	// Journeyman
	.nameTextId = 0x2C6,
	.descTextId = 0x312,
	.number = 0x10,
	.promotion = CLASS_HERO_F,
	.SMSId = 0x0A,
	.slowWalking = 0,
	.defaultPortraitId = 0x90,
	._u0A = 0,
	
	.baseHP = 27,
	.basePow = 12,
	.baseSkl = 12,
	.baseSpd = 13,
	.baseDef = 9,
	.baseRes = 2,
	.baseCon = 5,
	.baseMov = 6,
	
	.maxHP = 60,
	.maxPow = 30,
	.maxSkl = 30,
	.maxSpd = 30,
	.maxDef = 30,
	.maxRes = 30,
	.maxCon = 30,
	
	.classRelativePower = 3,
	
	.growthHP = 50,
	.growthPow = 50,
	.growthSkl = 50,
	.growthSpd = 60,
	.growthDef = 40,
	.growthRes = 20,
	.growthLck = 30,
	
	.promotionHp = 27,
	.promotionPow = 12,
	.promotionSkl = 12,
	.promotionSpd = 13,
	.promotionDef = 9,
	.promotionRes = 2,
	
	.attributes = CA_FEMALE,
	
	.baseRanks[ITYPE_SWORD] = WPN_EXP_C,
	.baseRanks[ITYPE_LANCE] = 0,
	.baseRanks[ITYPE_AXE] = 0,
	.baseRanks[ITYPE_BOW] = 0,
	.baseRanks[ITYPE_STAFF] = 0,
	.baseRanks[ITYPE_ANIMA] = 0,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY
	
	.pBattleAnimDef = MercenaryFAnims,
	.pMovCostTable[0] = (const s8*)0x880B849,
	.pMovCostTable[1] = (const s8*)0x880BC9A,
	.pMovCostTable[2] = (const s8*)0x880C0AA,
	
	.pTerrainAvoidLookup = (const s8*)0x880C479,
	.pTerrainDefenseLookup = (const s8*)0x880C4BA,
	.pTerrainResistanceLookup = (const s8*)0x880C4FB,
	._pU50 = 0,
	
	
};