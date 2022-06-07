#include "gbafe-chax.h"

extern const s8 MageFAnims[];

const struct ClassData Class26_MageF = {
	
	// Journeyman
	.nameTextId = 0x2D1,
	.descTextId = 0x31D,
	.number = 0x26,
	.promotion = CLASS_BISHOP,
	.SMSId = 0x1F,
	.slowWalking = 0,
	.defaultPortraitId = 0x7C,
	._u0A = 0,
	
	.baseHP = 25,
	.basePow = 2,
	.baseSkl = 9,
	.baseSpd = 7,
	.baseDef = 3,
	.baseRes = 14,
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
	.growthPow = 20,
	.growthSkl = 40,
	.growthSpd = 35,
	.growthDef = 20,
	.growthRes = 65,
	.growthLck = 30,
	
	.promotionHp = 25,
	.promotionPow = 2,
	.promotionSkl = 9,
	.promotionSpd = 7,
	.promotionDef = 3,
	.promotionRes = 14,
	
	.attributes = CA_FEMALE,
	
	.baseRanks[ITYPE_SWORD] = 0,
	.baseRanks[ITYPE_LANCE] = 0,
	.baseRanks[ITYPE_AXE] = 0,
	.baseRanks[ITYPE_BOW] = 0,
	.baseRanks[ITYPE_STAFF] = WPN_EXP_C,
	.baseRanks[ITYPE_ANIMA] = WPN_EXP_D,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY
	
	.pBattleAnimDef = MageFAnims,
	.pMovCostTable[0] = (const s8*)0x880BA10,
	.pMovCostTable[1] = (const s8*)0x880BE61,
	.pMovCostTable[2] = (const s8*)0x880C271,
	
	.pTerrainAvoidLookup = (const s8*)0x880C479,
	.pTerrainDefenseLookup = (const s8*)0x880C4BA,
	.pTerrainResistanceLookup = (const s8*)0x880C4FB,
	._pU50 = 0,
	
	
};