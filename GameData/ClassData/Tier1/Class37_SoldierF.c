#include "gbafe-chax.h"

extern const s8 SoldierFAnims[];

const struct ClassData Class37_SoldierF = {
	
	// Journeyman
	.nameTextId = 0x2ED,
	.descTextId = 0x339,
	.number = 0x37,
	.promotion = CLASS_ARMOR_KNIGHT,
	.SMSId = 0x3F,
	.slowWalking = 0,
	.defaultPortraitId = 0x6A,
	._u0A = 0,
	
	.baseHP = 25,
	.basePow = 8,
	.baseSkl = 10,
	.baseSpd = 7,
	.baseDef = 7,
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
	.growthPow = 50,
	.growthSkl = 50,
	.growthSpd = 30,
	.growthDef = 40,
	.growthRes = 20,
	.growthLck = 30,
	
	.promotionHp = 25,
	.promotionPow = 8,
	.promotionSkl = 10,
	.promotionSpd = 3,
	.promotionDef = 7,
	.promotionRes = 0,
	
	.attributes = CA_FEMALE,
	
	.baseRanks[ITYPE_SWORD] = 0,
	.baseRanks[ITYPE_LANCE] = WPN_EXP_D,
	.baseRanks[ITYPE_AXE] = 0,
	.baseRanks[ITYPE_BOW] = 0,
	.baseRanks[ITYPE_STAFF] = 0,
	.baseRanks[ITYPE_ANIMA] = 0,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY
	
	.pBattleAnimDef = SoldierFAnims,
	.pMovCostTable[0] = (const s8*)0x880B849,
	.pMovCostTable[1] = (const s8*)0x880BC9A,
	.pMovCostTable[2] = (const s8*)0x880C0AA,
	
	.pTerrainAvoidLookup = (const s8*)0x880C479,
	.pTerrainDefenseLookup = (const s8*)0x880C4BA,
	.pTerrainResistanceLookup = (const s8*)0x880C4FB,
	._pU50 = 0,
	
	
};