#include "gbafe-chax.h"

extern const s8 ClericAnims[];

const struct ClassData Class4A_Cleric = {
		
	// Recruit
	.nameTextId = 0x2E9,
	.descTextId = 0x335,
	.number = 0x4A,
	.promotion = CLASS_SHAMAN,
	.SMSId = 0x3B,
	.slowWalking = 0,
	.defaultPortraitId = 0x7A,
	._u0A = 0,
	
	.baseHP = 24,
	.basePow = 0,
	.baseSkl = 8,
	.baseSpd = 8,
	.baseDef = 4,
	.baseRes = 12,
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
	
	.growthHP = 40,
	.growthPow = 15,
	.growthSkl = 35,
	.growthSpd = 35,
	.growthDef = 20,
	.growthRes = 50,
	.growthLck = 30,
	
	.promotionHp = 24,
	.promotionPow = 0,
	.promotionSkl = 9,
	.promotionSpd = 9,
	.promotionDef = 3,
	.promotionRes = 5,
	
	.attributes = CA_FEMALE,
	
	.baseRanks[ITYPE_SWORD] = 0,
	.baseRanks[ITYPE_LANCE] = 0,
	.baseRanks[ITYPE_AXE] = 0,
	.baseRanks[ITYPE_BOW] = 0,
	.baseRanks[ITYPE_STAFF] = WPN_EXP_D,
	.baseRanks[ITYPE_ANIMA] = WPN_EXP_D,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY
	
	.pBattleAnimDef = ClericAnims,
	.pMovCostTable[0] = (const s8*)0x880BA10,
	.pMovCostTable[1] = (const s8*)0x880BE61,
	.pMovCostTable[2] = (const s8*)0x880C271,
	
	.pTerrainAvoidLookup = (const s8*)0x880C479,
	.pTerrainDefenseLookup = (const s8*)0x880C4BA,
	.pTerrainResistanceLookup = (const s8*)0x880C4FB,
	._pU50 = 0,
	
	
};