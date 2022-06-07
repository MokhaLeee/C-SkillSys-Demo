#include "gbafe-chax.h"

extern const s8 PegasusKnightAnims[];

const struct ClassData Class48_PKnight = {
	
	// Journeyman
	.nameTextId = 0x2E7,
	.descTextId = 0x333,
	.number = 0x48,
	.promotion = CLASS_FALCON_KNIGHT,
	.SMSId = 0x39,
	.slowWalking = 0,
	.defaultPortraitId = 0x86,
	._u0A = 0,
	
	.baseHP = 24,
	.basePow = 10,
	.baseSkl = 12,
	.baseSpd = 16,
	.baseDef = 6,
	.baseRes = 6,
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
	.growthPow = 35,
	.growthSkl = 40,
	.growthSpd = 60,
	.growthDef = 30,
	.growthRes = 30,
	.growthLck = 30,
	
	.promotionHp = 24,
	.promotionPow = 10,
	.promotionSkl = 12,
	.promotionSpd = 16,
	.promotionDef = 6,
	.promotionRes = 6,
	
	.attributes = CA_MOUNTEDAID + CA_CANTO + CA_PEGASUS,
	
	.baseRanks[ITYPE_SWORD] = WPN_EXP_C,
	.baseRanks[ITYPE_LANCE] = WPN_EXP_D,
	.baseRanks[ITYPE_AXE] = 0,
	.baseRanks[ITYPE_BOW] = 0,
	.baseRanks[ITYPE_STAFF] = 0,
	.baseRanks[ITYPE_ANIMA] = 0,
	.baseRanks[ITYPE_LIGHT] = 0,	// in c-Skillsys is ITYPE_RIDE
	.baseRanks[ITYPE_DARK] = 0,		// in c-Skillsys is ITYPE_FLY
	
	.pBattleAnimDef = PegasusKnightAnims,
	.pMovCostTable[0] = (const s8*)0x880BB96,
	.pMovCostTable[1] = (const s8*)0x880BFE7,
	.pMovCostTable[2] = (const s8*)0x880C3F7,
	
	.pTerrainAvoidLookup = (const s8*)0x880C53C,
	.pTerrainDefenseLookup = (const s8*)0x880C57D,
	.pTerrainResistanceLookup = (const s8*)0x880C5BE,
	._pU50 = 0,
	
	
};