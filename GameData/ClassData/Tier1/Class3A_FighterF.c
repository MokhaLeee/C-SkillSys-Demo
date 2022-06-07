#include "gbafe-chax.h"

extern const s8 FighterFAnims[];

const struct ClassData Class3A_FighterF = {
	
	// Journeyman
	.nameTextId = 0x2DC,
	.descTextId = 0x327,
	.number = 0x3A,
	.promotion = CLASS_PIRATE,
	.SMSId = 0x31,
	.slowWalking = 0,
	.defaultPortraitId = 0x74,
	._u0A = 0,
	
	.baseHP = 25,
	.basePow = 11,
	.baseSkl = 5,
	.baseSpd = 8,
	.baseDef = 5,
	.baseRes = 2,
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
	.growthPow = 60,
	.growthSkl = 30,
	.growthSpd = 40,
	.growthDef = 30,
	.growthRes = 20,
	.growthLck = 30,
	
	.promotionHp = 25,
	.promotionPow = 12,
	.promotionSkl = 3,
	.promotionSpd = 7,
	.promotionDef = 3,
	.promotionRes = 0,
	
	.attributes = CA_FEMALE,
	
	.baseRanks[ITYPE_SWORD] = 0,
	.baseRanks[ITYPE_LANCE] = 0,
	.baseRanks[ITYPE_AXE] = WPN_EXP_D,
	.baseRanks[ITYPE_BOW] = 0,
	.baseRanks[ITYPE_STAFF] = 0,
	.baseRanks[ITYPE_ANIMA] = 0,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY
	
	.pBattleAnimDef = FighterFAnims,
	.pMovCostTable[0] = (const s8*)0x880B8CB,
	.pMovCostTable[1] = (const s8*)0x880BD1C,
	.pMovCostTable[2] = (const s8*)0x880C12C,
	
	.pTerrainAvoidLookup = (const s8*)0x880C479,
	.pTerrainDefenseLookup = (const s8*)0x880C4BA,
	.pTerrainResistanceLookup = (const s8*)0x880C4FB,
	._pU50 = 0,
	
	
};