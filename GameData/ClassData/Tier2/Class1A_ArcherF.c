#include "gbafe-chax.h"

extern const s8 ArcherFAnims[];

const struct ClassData Class1A_ArcherF = {
	
	// Journeyman
	.nameTextId = 0x2CB,
	.descTextId = 0x317,
	.number = 0x1A,
	.promotion = CLASS_SNIPER_F,
	.SMSId = 0x14,
	.slowWalking = 0,
	.defaultPortraitId = 0x78,
	._u0A = 0,
	
	.baseHP = 24,
	.basePow = 12,
	.baseSkl = 14,
	.baseSpd = 8,
	.baseDef = 5,
	.baseRes = 1,
	.baseCon = 5,
	.baseMov = 5,
	
	.maxHP = 60,
	.maxPow = 30,
	.maxSkl = 30,
	.maxSpd = 30,
	.maxDef = 30,
	.maxRes = 30,
	.maxCon = 30,
	
	.classRelativePower = 3,
	
	.growthHP = 40,
	.growthPow = 40,
	.growthSkl = 50,
	.growthSpd = 30,
	.growthDef = 20,
	.growthRes = 10,
	.growthLck = 30,
	
	.promotionHp = 24,
	.promotionPow = 12,
	.promotionSkl = 15,
	.promotionSpd = 8,
	.promotionDef = 5,
	.promotionRes = 1,
	
	.attributes = CA_BALLISTAE + CA_FEMALE,
	
	.baseRanks[ITYPE_SWORD] = 0,
	.baseRanks[ITYPE_LANCE] = 0,
	.baseRanks[ITYPE_AXE] = 0,
	.baseRanks[ITYPE_BOW] = WPN_EXP_C,
	.baseRanks[ITYPE_STAFF] = 0,
	.baseRanks[ITYPE_ANIMA] = 0,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY
	
	.pBattleAnimDef = ArcherFAnims,
	.pMovCostTable[0] = (const s8*)0x880B849,
	.pMovCostTable[1] = (const s8*)0x880BC9A,
	.pMovCostTable[2] = (const s8*)0x880C0AA,
	
	.pTerrainAvoidLookup = (const s8*)0x880C479,
	.pTerrainDefenseLookup = (const s8*)0x880C4BA,
	.pTerrainResistanceLookup = (const s8*)0x880C4FB,
	._pU50 = 0,
	
	
};