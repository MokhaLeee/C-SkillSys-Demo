#include "gbafe-chax.h"


typedef int(*MSG_Func)(struct Unit* unit, u16 item, int cur);
extern MSG_Func RangeMaxModify[];
extern MSG_Func RangeMinModify[];


int RangeMinGetter(u16 item, struct Unit* unit){
	
	int rng = GetItemMinRange(item);
	
	MSG_Func *it = RangeMinModify;
	
	while( *it )
		rng = (*it++)(unit, item, rng);
	
	if ( rng > 0xF )
		rng = 0xF;
	
	if ( rng < 0 )
		rng = 0;
	
	return rng;
}

int RangeMaxGetter(u16 item, struct Unit* unit){
	
	int rng = GetItemMaxRange(item);
	
	// to judge for unit mag when using staff
	if ( 0 == rng )
		return 0;
	
	MSG_Func *it = RangeMaxModify;
	
	while( *it )
		rng = (*it++)(unit, item, rng);
	
	
	if ( rng > 0xF )
		rng = 0xF;
	
	if ( rng < 0 )
		rng = 0;
	
	return rng;
}


int GetUnitMagBy2Range(struct Unit* unit){
	
	if (unit->pCharacterData->number == CHARACTER_FOMORTIIS)
		return GetItemMaxRange(ITEM_NIGHTMARE);
	
	else {
		int max = MagGetter(unit) / 2;
		
		MSG_Func *it = RangeMaxModify;
		
		// W.I.P. just give a magic weapon
		while( *it )
			max = (*it++)(unit, ITEM_ANIMA_FIRE, max);

		
		if ( max > 0xF )
			max = 0xF;
		
		if ( max < 5 )
			max = 5;

		return max;
	}
}