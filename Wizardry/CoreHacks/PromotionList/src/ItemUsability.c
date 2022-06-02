#include "gbafe-chax.h"


s8 CanUnitUsePromotionItem(struct Unit* unit, int item){
	
	const u8 *class_list = GetUnitPromoList(
		unit->pCharacterData->number, 
		unit->pClassData->number, 
		item & 0xFF);
	
	int count = 0;
	
	for( int i = 0; i < PROMO_CLASS_LIST_MAX; i++ )
		if( class_list[i] != 0 )
			count++;
	
	if( (count > 0) )
		return 1;
	
	return 0;
}