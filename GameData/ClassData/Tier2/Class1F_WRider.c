#include "gbafe-chax.h"

extern const s8 WyvernRiderAnims[];

const struct ClassData Class1F_WRider = {
	
	// Journeyman
	.nameTextId = 0x2CE,
	.descTextId = 0x31A,
	.number = 0x1F,
	.promotion = CLASS_WYVERN_LORD,
	.SMSId = 0x19,
	.slowWalking = 0,
	.defaultPortraitId = 0x88,
	._u0A = 0,
	
	.baseHP = 26,
	.basePow = 13,
	.baseSkl = 9,
	.baseSpd = 8,
	.baseDef = 13,
	.baseRes = 4,
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
	
	.growthHP = 45,
	.growthPow = 45,
	.growthSkl = 35,
	.growthSpd = 30,
	.growthDef = 45,
	.growthRes = 20,
	.growthLck = 30,
	
	.promotionHp = 26,
	.promotionPow = 13,
	.promotionSkl = 9,
	.promotionSpd = 8,
	.promotionDef = 13,
	.promotionRes = 4,
	
	.attributes = CA_MOUNTEDAID + CA_CANTO + CA_WYVERN,
	
	.baseRanks[ITYPE_SWORD] = 0,
	.baseRanks[ITYPE_LANCE] = WPN_EXP_C,
	.baseRanks[ITYPE_AXE] = 0,
	.baseRanks[ITYPE_BOW] = 0,
	.baseRanks[ITYPE_STAFF] = 0,
	.baseRanks[ITYPE_ANIMA] = 0,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY
	
	.pBattleAnimDef = WyvernRiderAnims,
	.pMovCostTable[0] = (const s8*)0x880BB96,
	.pMovCostTable[1] = (const s8*)0x880BFE7,
	.pMovCostTable[2] = (const s8*)0x880C3F7,
	
	.pTerrainAvoidLookup = (const s8*)0x880C53C,
	.pTerrainDefenseLookup = (const s8*)0x880C57D,
	.pTerrainResistanceLookup = (const s8*)0x880C5BE,
	._pU50 = 0,
	
	
};