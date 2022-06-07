#include "gbafe-chax.h"

extern const s8 ShamanFAnims[];

const struct ClassData Class2E_ShamanF = {
	
	// Journeyman
	.nameTextId = 0x2E1,
	.descTextId = 0x32C,
	.number = 0x2E,
	.promotion = CLASS_SAGE_F,
	.SMSId = 0x26,
	.slowWalking = 0,
	.defaultPortraitId = 0x7E,
	._u0A = 0,
	
	.baseHP = 24,
	.basePow = 2,
	.baseSkl = 11,
	.baseSpd = 9,
	.baseDef = 6,
	.baseRes = 8,
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
	.growthSpd = 45,
	.growthDef = 30,
	.growthRes = 30,
	.growthLck = 30,
	
	.promotionHp = 24,
	.promotionPow = 2,
	.promotionSkl = 11,
	.promotionSpd = 9,
	.promotionDef = 6,
	.promotionRes = 8,
	
	.attributes = 0,
	
	.baseRanks[ITYPE_SWORD] = 0,
	.baseRanks[ITYPE_LANCE] = 0,
	.baseRanks[ITYPE_AXE] = 0,
	.baseRanks[ITYPE_BOW] = 0,
	.baseRanks[ITYPE_STAFF] = WPN_EXP_D,
	.baseRanks[ITYPE_ANIMA] = WPN_EXP_C,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY
	
	.pBattleAnimDef = ShamanFAnims,
	.pMovCostTable[0] = (const s8*)0x880BA10,
	.pMovCostTable[1] = (const s8*)0x880BE61,
	.pMovCostTable[2] = (const s8*)0x880C271,
	
	.pTerrainAvoidLookup = (const s8*)0x880C479,
	.pTerrainDefenseLookup = (const s8*)0x880C4BA,
	.pTerrainResistanceLookup = (const s8*)0x880C4FB,
	._pU50 = 0,
	
	
};