#include "gbafe-chax.h"

extern const s8 KnightAnims[];

const struct ClassData Class09_Knight = {
	
	// Journeyman
	.nameTextId = 0x2C3,
	.descTextId = 0x30F,
	.number = 0x09,
	.promotion = CLASS_GENERAL,
	.SMSId = 0x06,
	.slowWalking = 1,
	.defaultPortraitId = 0x76,
	._u0A = 0,
	
	.baseHP = 30,
	.basePow = 15,
	.baseSkl = 12,
	.baseSpd = 5,
	.baseDef = 15,
	.baseRes = 3,
	.baseCon = 10,
	.baseMov = 5,
	
	.maxHP = 60,
	.maxPow = 30,
	.maxSkl = 30,
	.maxSpd = 30,
	.maxDef = 30,
	.maxRes = 30,
	.maxCon = 30,
	
	.classRelativePower = 3,
	
	.growthHP = 60,
	.growthPow = 50,
	.growthSkl = 40,
	.growthSpd = 20,
	.growthDef = 60,
	.growthRes = 30,
	.growthLck = 30,
	
	.promotionHp = 30,
	.promotionPow = 15,
	.promotionSkl = 12,
	.promotionSpd = 5,
	.promotionDef = 15,
	.promotionRes = 3,
	
	.attributes = 0,
	
	.baseRanks[ITYPE_SWORD] = 0,
	.baseRanks[ITYPE_LANCE] = WPN_EXP_C,
	.baseRanks[ITYPE_AXE] = 0,
	.baseRanks[ITYPE_BOW] = 0,
	.baseRanks[ITYPE_STAFF] = 0,
	.baseRanks[ITYPE_ANIMA] = 0,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY
	
	.pBattleAnimDef = KnightAnims,
	.pMovCostTable[0] = (const s8*)0x880B88A,
	.pMovCostTable[1] = (const s8*)0x880BCDB,
	.pMovCostTable[2] = (const s8*)0x880C0EB,
	
	.pTerrainAvoidLookup = (const s8*)0x880C479,
	.pTerrainDefenseLookup = (const s8*)0x880C4BA,
	.pTerrainResistanceLookup = (const s8*)0x880C4FB,
	._pU50 = 0,
	
	
};