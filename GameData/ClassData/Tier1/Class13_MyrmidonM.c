#include "gbafe-chax.h"

extern const s8 MyrmidonAnims[];

const struct ClassData ClassMyrmidonM = {
	
	// Journeyman
	.nameTextId = 0x2C8,
	.descTextId = 0x314,
	.number = 0x13,
	.promotion = CLASS_MYRMIDON,
	.SMSId = 0x0E,
	.slowWalking = 0,
	.defaultPortraitId = 0x72,
	._u0A = 0,
	
	.baseHP = 23,
	.basePow = 8,
	.baseSkl = 10,
	.baseSpd = 10,
	.baseDef = 5,
	.baseRes = 0,
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
	
	.growthHP = 50,
	.growthPow = 45,
	.growthSkl = 60,
	.growthSpd = 60,
	.growthDef = 30,
	.growthRes = 20,
	.growthLck = 40,
	
	.promotionHp = 23,
	.promotionPow = 8,
	.promotionSkl = 10,
	.promotionSpd = 10,
	.promotionDef = 5,
	.promotionRes = 0,
	
	.attributes = CA_LOCK_2,
	
	.baseRanks[ITYPE_SWORD] = WPN_EXP_D,
	.baseRanks[ITYPE_LANCE] = 0,
	.baseRanks[ITYPE_AXE] = 0,
	.baseRanks[ITYPE_BOW] = 0,
	.baseRanks[ITYPE_STAFF] = 0,
	.baseRanks[ITYPE_ANIMA] = 0,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY
	
	.pBattleAnimDef = MyrmidonAnims,
	.pMovCostTable[0] = (const s8*)0x880B849,
	.pMovCostTable[1] = (const s8*)0x880BC9A,
	.pMovCostTable[2] = (const s8*)0x880C0AA,
	
	.pTerrainAvoidLookup = (const s8*)0x880C479,
	.pTerrainDefenseLookup = (const s8*)0x880C4BA,
	.pTerrainResistanceLookup = (const s8*)0x880C4FB,
	._pU50 = 0,
	
	
};