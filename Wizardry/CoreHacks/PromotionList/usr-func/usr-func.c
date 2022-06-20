#include "gbafe-chax.h"


static const u8 PromoList_T1_M[7] = {
	CLASS_MYRMIDON,
	CLASS_SOLDIER,
	CLASS_FIGHTER,
	CLASS_MONK,
	0
};

static const u8 PromoList_T1_F[7] = {
	CLASS_MYRMIDON_F,
	Class_Soldier_F,
	Class_Fighter_F,
	CLASS_CLERIC,
	0
};

static const u8 PromoList_T2_M1[7] = {
	CLASS_MERCENARY,
	CLASS_THIEF,
	CLASS_ARMOR_KNIGHT,
	CLASS_PIRATE,
	CLASS_ARCHER,
};

static const u8 PromoList_T2_M2[7] = {
	CLASS_CAVALIER,
	CLASS_WYVERN_RIDER,
	CLASS_SHAMAN,
	CLASS_MAGE,
};

static const u8 PromoList_T2_F1[7] = {
	CLASS_MERCENARY_F,
	Class_Thief_F,
	CLASS_ARMOR_KNIGHT_F,
	Class_Pirate_F,
	CLASS_ARCHER_F,
};

static const u8 PromoList_T2_F2[7] = {
	CLASS_CAVALIER_F,
	CLASS_PEGASUS_KNIGHT,
	CLASS_SHAMAN_F,
	CLASS_MAGE_F,
	CLASS_TROUBADOUR,
};

static const u8 PromoList_T3_M1[7] = {
	CLASS_HERO,
	CLASS_SWORDMASTER,
	CLASS_WARRIOR,
	CLASS_ASSASSIN,
	CLASS_GENERAL,
	CLASS_BERSERKER,
	
};

static const u8 PromoList_T3_F1[7] = {
	CLASS_HERO_F,
	CLASS_SWORDMASTER_F,
	Class_Warrior_F,
	CLASS_ASSASSIN_F,
	CLASS_GENERAL_F,
	
};

static const u8 PromoList_T3_M2[7] = {
	CLASS_SNIPER,
	CLASS_PALADIN,
	CLASS_WYVERN_LORD,
	CLASS_SAGE,
	CLASS_BISHOP,
	
};

static const u8 PromoList_T3_F2[7] = {
	CLASS_SNIPER_F,
	CLASS_PALADIN_F,
	CLASS_FALCON_KNIGHT,
	CLASS_SAGE_F,
	CLASS_BISHOP_F,
	CLASS_VALKYRIE,
	
};



const u8 *GetUnitPromoList(u8 charId, u8 classId, u8 itemId){
	
	extern u8* gpRamPromoTmpList;
	
	struct Unit* unit = GetUnitFromCharId(charId);
	const struct CharacterData* character = GetCharacterData(charId);
	const int isMale = 0 == (character->attributes & CA_FEMALE);
	
	for(int i = 0; i < PROMO_CLASS_LIST_MAX; i++)
		gpRamPromoTmpList[i] = 0;
	
	switch( itemId ){
		
		case Item_PromoT1:
			if( unit->level < 5 && !gBoolDebug )
				return gpRamPromoTmpList;
			else
				return isMale ? PromoList_T1_M : PromoList_T1_F;
		
		case Item_PromoT2_1:
			if( unit->level < 15 )
				return gpRamPromoTmpList;
			else
				return isMale ? PromoList_T2_M1 : PromoList_T2_F1;
		
		case Item_PromoT2_2:
			if( unit->level < 15 )
				return gpRamPromoTmpList;
			else
				return isMale ? PromoList_T2_M2 : PromoList_T2_F2;
		
		case Item_PromoT3_1:
			if( unit->level < 25 )
				return gpRamPromoTmpList;
			else
				return isMale ? PromoList_T3_M1 : PromoList_T3_F1;
		
		case Item_PromoT3_2:
			if( unit->level < 25 )
				return gpRamPromoTmpList;
			else
				return isMale ? PromoList_T3_M2 : PromoList_T3_F2;
		
		default:
			return gpRamPromoTmpList;
	}
	

}



// For Three Houses style failed
int GetPromoteRate(struct Unit* unit, u8 classId){
	
	// Some Exception
	if( CLASS_CLERIC == classId || CLASS_MONK == classId ){
		if( GetWExp(unit, ITYPE_BMAG) >= WPN_EXP_D || GetWExp(unit, ITYPE_WMAG) >= WPN_EXP_D )
			return 100;
		
		else
			return 0;
	}
	
	#define AddWCount(wType) \
		if( GetClassBaseWLevel(classId, wType) > WPN_LEVEL_E ){ \
			int cWLv = GetWeaponLevelFromExp( GetClassBaseWExp(classId, wType) ) - WPN_LEVEL_E; \
			int uWLv = GetWeaponLevelFromExp( GetWExp(unit, wType) ) - WPN_LEVEL_E; \
			promoWRcount += cWLv; \
			unitWRcount += uWLv >= cWLv ? cWLv : uWLv; \
		}
	
	int promoWRcount = 0;
	int unitWRcount = 0;
	
	AddWCount(ITYPE_SWORD);
	AddWCount(ITYPE_LANCE);
	AddWCount(ITYPE_AXE);
	AddWCount(ITYPE_BOW);
	
	AddWCount(ITYPE_BMAG);
	AddWCount(ITYPE_WMAG);
	
	AddWCount(ITYPE_RIDE);
	AddWCount(ITYPE_FLY);
	AddWCount(ITYPE_HEAVY);

	
	return unitWRcount >= promoWRcount
		? 100
		: unitWRcount * 100 / promoWRcount;
	
	#undef AddWCount
}


int IsUnitSucessfullyPromote(struct Unit* unit, u8 classId){
	
	int count = 5 * (unit->pCharacterData->number + classId);
	
	return NextRNEs_100(count) < GetPromoteRate(unit, classId);
	
}



void PostAction_FailToPromote(ProcPtr proc){
	static ProcPtr (*Popup_VerySimple)(int msg, int voice, ProcPtr) = (const void*) 0x8011751;
	
	if( 0x1E == gActionData.unitActionType )
		if( 0 != *gpFlagFailedPromote )
			Popup_VerySimple(ENUM_msg_FailToPromote, 0x6C, proc);

	*gpFlagFailedPromote = 0;
}