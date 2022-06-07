#include "gbafe-chax.h"

extern const s8 PirateFAnims[];

const struct ClassData Class41_PirateF = {
	
	// Journeyman
	.nameTextId = 0x2EE,
	.descTextId = 0x33A,
	.number = 0x41,
	.promotion = Class_Warrior_F,
	.SMSId = 0x34,
	.slowWalking = 0,
	.defaultPortraitId = 0x8C,
	._u0A = 0,
	
	.baseHP = 25,
	.basePow = 16,
	.baseSkl = 9,
	.baseSpd = 12,
	.baseDef = 7,
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
	
	.growthHP = 40,
	.growthPow = 60,
	.growthSkl = 35,
	.growthSpd = 40,
	.growthDef = 35,
	.growthRes = 10,
	.growthLck = 30,
	
	.promotionHp = 25,
	.promotionPow = 16,
	.promotionSkl = 9,
	.promotionSpd = 12,
	.promotionDef = 7,
	.promotionRes = 2,
	
	.attributes = CA_FEMALE,
	
	.baseRanks[ITYPE_SWORD] = 0,
	.baseRanks[ITYPE_LANCE] = 0,
	.baseRanks[ITYPE_AXE] = WPN_EXP_C,
	.baseRanks[ITYPE_BOW] = 0,
	.baseRanks[ITYPE_STAFF] = 0,
	.baseRanks[ITYPE_ANIMA] = 0,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY
	
	.pBattleAnimDef = PirateFAnims,
	.pMovCostTable[0] = (const s8*)0x880B94D,
	.pMovCostTable[1] = (const s8*)0x880BD9E,
	.pMovCostTable[2] = (const s8*)0x880C1AE,
	
	.pTerrainAvoidLookup = (const s8*)0x880C479,
	.pTerrainDefenseLookup = (const s8*)0x880C4BA,
	.pTerrainResistanceLookup = (const s8*)0x880C4FB,
	._pU50 = 0,
	
	
};