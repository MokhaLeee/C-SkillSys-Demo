#include "gbafe-chax.h"

extern const s8 CavalierFAnims[];

const struct ClassData Class06_CavalierF = {
	
	// Journeyman
	.nameTextId = 0x2C1,
	.descTextId = 0x30D,
	.number = 0x06,
	.promotion = CLASS_PALADIN_F,
	.SMSId = 0x04,
	.slowWalking = 0,
	.defaultPortraitId = 0x80,
	._u0A = 0,
	
	.baseHP = 26,
	.basePow = 11,
	.baseSkl = 11,
	.baseSpd = 11,
	.baseDef = 10,
	.baseRes = 3,
	.baseCon = 5,
	.baseMov = 7,
	
	.maxHP = 60,
	.maxPow = 30,
	.maxSkl = 30,
	.maxSpd = 30,
	.maxDef = 30,
	.maxRes = 30,
	.maxCon = 30,
	
	.classRelativePower = 3,
	
	.growthHP = 40,
	.growthPow = 40,
	.growthSkl = 40,
	.growthSpd = 40,
	.growthDef = 40,
	.growthRes = 20,
	.growthLck = 30,
	
	.promotionHp = 26,
	.promotionPow = 11,
	.promotionSkl = 11,
	.promotionSpd = 11,
	.promotionDef = 10,
	.promotionRes = 3,
	
	.attributes = CA_MOUNTEDAID + CA_CANTO + CA_MOUNTED,
	
	.baseRanks[ITYPE_SWORD] = WPN_EXP_D,
	.baseRanks[ITYPE_LANCE] = WPN_EXP_D,
	.baseRanks[ITYPE_AXE] = 0,
	.baseRanks[ITYPE_BOW] = 0,
	.baseRanks[ITYPE_STAFF] = 0,
	.baseRanks[ITYPE_ANIMA] = 0,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY
	
	.pBattleAnimDef = CavalierFAnims,
	.pMovCostTable[0] = (const s8*)0x880BA92,
	.pMovCostTable[1] = (const s8*)0x880BEE3,
	.pMovCostTable[2] = (const s8*)0x880C2F3,
	
	.pTerrainAvoidLookup = (const s8*)0x880C479,
	.pTerrainDefenseLookup = (const s8*)0x880C4BA,
	.pTerrainResistanceLookup = (const s8*)0x880C4FB,
	._pU50 = 0,
	
	
};