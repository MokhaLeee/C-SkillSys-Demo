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
	
	const struct CharacterData* character = GetCharacterData(charId);
	const int isMale = 0 == (character->attributes & CA_FEMALE);
	
	for(int i = 0; i < PROMO_CLASS_LIST_MAX; i++)
		gpRamPromoTmpList[i] = 0;
	
	switch( itemId ){
		
		case Item_PromoT1:
			return isMale ? PromoList_T1_M : PromoList_T1_F;
		
		case Item_PromoT2_1:
			return isMale ? PromoList_T2_M1 : PromoList_T2_F1;
		
		case Item_PromoT2_2:
			return isMale ? PromoList_T2_M2 : PromoList_T2_F2;
		
		case Item_PromoT3_1:
			return isMale ? PromoList_T3_M1 : PromoList_T3_F1;
		
		case Item_PromoT3_2:
			return isMale ? PromoList_T3_M2 : PromoList_T3_F2;
		
		default:
			return gpRamPromoTmpList;
	}
	

}



// For Three Houses style failed
int GetPromoteRate(struct Unit*, u8 classId){
	return 100;
}
int IsUnitSucessfullyPromote(struct Unit*, u8 classId){
	// W.I.P.
	// this will be judged inside menu effect
	return 1;
}



void PostAction_FailToPromote(ProcPtr proc){
	static ProcPtr (*Popup_VerySimple)(int msg, int voice, ProcPtr) = (const void*) 0x8011751;
	
	if( 0x1E == gActionData.unitActionType )
		if( 0 != *gpFlagFailedPromote )
			Popup_VerySimple(ENUM_msg_FailToPromote, 0x6C, proc);

	*gpFlagFailedPromote = 0;
}