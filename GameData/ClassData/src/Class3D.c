#include "gbafe-chax.h"

extern const s8 JourneymanAnims[];

const struct ClassData Class3D = {
	
	// Journeyman
	.nameTextId = 0x2D8,
	.descTextId = 0x324,
	.number = 0x3D,
	.promotion = CLASS_MYRMIDON,
	.SMSId = 0x2D,
	.slowWalking = 0,
	.defaultPortraitId = 0x74,
	._u0A = 0,
	
	.baseHP = 13,
	.basePow = 3,
	.baseSkl = 0,
	.baseSpd = 1,
	.baseDef = 1,
	.baseRes = 0,
	.baseCon = 5,
	.baseMov = 4,
	
	.maxHP = 60,
	.maxPow = 30,
	.maxSkl = 30,
	.maxSpd = 30,
	.maxDef = 30,
	.maxRes = 30,
	.maxCon = 30,
	
	.classRelativePower = 3,
	
	.growthHP = 75,
	.growthPow = 45,
	.growthSkl = 40,
	.growthSpd = 40,
	.growthDef = 30,
	.growthRes = 20,
	.growthLck = 40,
	
	.promotionHp = 0,
	.promotionPow = 0,
	.promotionSkl = 0,
	.promotionSpd = 0,
	.promotionDef = 0,
	.promotionRes = 0,
	
	.attributes = 0,
	
	.baseRanks[ITYPE_SWORD] = WPN_EXP_E,
	.baseRanks[ITYPE_LANCE] = WPN_EXP_E,
	.baseRanks[ITYPE_AXE] = WPN_EXP_E,
	.baseRanks[ITYPE_BOW] = WPN_EXP_E,
	.baseRanks[ITYPE_STAFF] = WPN_EXP_E,
	.baseRanks[ITYPE_ANIMA] = WPN_EXP_E,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY
	
	.pBattleAnimDef = JourneymanAnims,
	.pMovCostTable[0] = (const s8*)0x880B8CB,
	.pMovCostTable[1] = (const s8*)0x880BD1C,
	.pMovCostTable[2] = (const s8*)0x880C12C,
	
	.pTerrainAvoidLookup = (const s8*)0x880C479,
	.pTerrainDefenseLookup = (const s8*)0x880C4BA,
	.pTerrainResistanceLookup = (const s8*)0x880C4FB,
	._pU50 = 0,
	
	
};