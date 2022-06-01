#include "gbafe.h"
#include "str-mag.h"


// need LoadUnitHook
void LoadUnit_Mag(struct Unit* unit){
	
	*GetMagAt(unit) = 
		GetUnitMagBase(unit->pCharacterData->number) +
		GetClassMagBase(unit->pClassData->number);

}