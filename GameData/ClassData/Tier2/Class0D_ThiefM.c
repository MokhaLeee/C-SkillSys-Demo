#include "gbafe-chax.h"

extern const s8 ThiefAnims[];

const struct ClassData Class0D_ThiefM = {
	
	// Journeyman
	.nameTextId = 0x2C5,
	.descTextId = 0x311,
	.number = 0x0D,
	.promotion = CLASS_ASSASSIN,
	.SMSId = 0x08,
	.slowWalking = 0,
	.defaultPortraitId = 0x8E,
	._u0A = 0,
	
	.baseHP = 24,
	.basePow = 9,
	.baseSkl = 10,
	.baseSpd = 16,
	.baseDef = 5,
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
	.growthPow = 35,
	.growthSkl = 50,
	.growthSpd = 60,
	.growthDef = 30,
	.growthRes = 20,
	.growthLck = 30,
	
	.promotionHp = 24,
	.promotionPow = 9,
	.promotionSkl = 10,
	.promotionSpd = 16,
	.promotionDef = 5,
	.promotionRes = 2,
	
	.attributes = CA_STEAL + CA_THIEF,
	
	.baseRanks[ITYPE_SWORD] = WPN_EXP_C,
	.baseRanks[ITYPE_LANCE] = 0,
	.baseRanks[ITYPE_AXE] = 0,
	.baseRanks[ITYPE_BOW] = WPN_EXP_D,
	.baseRanks[ITYPE_STAFF] = 0,
	.baseRanks[ITYPE_ANIMA] = 0,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY
	
	.pBattleAnimDef = ThiefAnims,
	.pMovCostTable[0] = (const s8*)0x880B9CF,
	.pMovCostTable[1] = (const s8*)0x880BE20,
	.pMovCostTable[2] = (const s8*)0x880C230,
	
	.pTerrainAvoidLookup = (const s8*)0x880C479,
	.pTerrainDefenseLookup = (const s8*)0x880C4BA,
	.pTerrainResistanceLookup = (const s8*)0x880C4FB,
	._pU50 = 0,
	
	
};