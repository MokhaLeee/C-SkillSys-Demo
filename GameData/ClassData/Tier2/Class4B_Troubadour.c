
#include "gbafe-chax.h"

extern const s8 TroubadourAnims[];

const struct ClassData Class4B_Troubadour = {
	
	.nameTextId = 0x2EA,
	.descTextId = 0x336,
	.number = 0x4B,
	.promotion = CLASS_VALKYRIE,
	.SMSId = 0x3C,
	.slowWalking = 0,
	.defaultPortraitId = 0x82,
	._u0A = 0,
	
	.baseHP = 24,
	.basePow = 2,
	.baseSkl = 8,
	.baseSpd = 12,
	.baseDef = 3,
	.baseRes = 4,
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
	
	.promotionHp = 24,
	.promotionPow = 2,
	.promotionSkl = 8,
	.promotionSpd = 12,
	.promotionDef = 3,
	.promotionRes = 4,
	
	.attributes = CA_FEMALE,
	
	.baseRanks[ITYPE_SWORD] = 0,
	.baseRanks[ITYPE_LANCE] = 0,
	.baseRanks[ITYPE_AXE] = 0,
	.baseRanks[ITYPE_BOW] = 0,
	.baseRanks[ITYPE_STAFF] = WPN_EXP_C,
	.baseRanks[ITYPE_ANIMA] = WPN_EXP_D,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY
	
	.pBattleAnimDef = TroubadourAnims,
	.pMovCostTable[0] = (const s8*)0x880BA92,
	.pMovCostTable[1] = (const s8*)0x880BEE3,
	.pMovCostTable[2] = (const s8*)0x880C2F3,
	
	.pTerrainAvoidLookup = (const s8*)0x880C479,
	.pTerrainDefenseLookup = (const s8*)0x880C4BA,
	.pTerrainResistanceLookup = (const s8*)0x880C4FB,
	._pU50 = 0,
	
	
};