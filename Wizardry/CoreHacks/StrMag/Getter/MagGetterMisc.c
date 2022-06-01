#include "gbafe-chax.h"

int CheckMagAttack(struct BattleUnit* bu){
	
	return 0 != ((IA_MAGICDAMAGE | IA_MAGIC) & bu->weaponAttributes);
	
}

s8* GetMagAt(struct Unit* unit){
	return (s8*)unit + MAG_OFFSET;
}

s8* GetBu_ChangeMagAt(struct BattleUnit* bu){
	return (s8*)bu + MAG_UP_OFFSET;
}

// Get Mag Unit Base
int GetUnitMagBase(u8 charId){
	// return UnitMagicTable[charId].base;
	return GetUnitRomDataExpa(charId)->baseMag;
}

// Get Mag class Base
int GetClassMagBase(u8 classId){
	// return ClassMagicTable[classId].base;
	return GetClassRomDataExpa(classId)->baseMag;
}

int GetClassMagCap(u8 classId){
	// return ClassMagicTable[classId].cap;
	return GetClassRomDataExpa(classId)->maxMag;
}

int GetClassPromoBonusMag(u8 classId){
	// return ClassMagicTable[classId].promo_bonus;
	return GetClassRomDataExpa(classId)->magPromoBonus;
}

int GetClassMagicGrowth(u8 classId){
	// return ClassMagicTable[classId].growth;
	return GetClassRomDataExpa(classId)->growthMag;
}

int GetUnitMagGrowth(struct Unit* unit){
	// return UnitMagicTable[unit->pCharacterData->number].growth;
	return GetUnitRomDataExpa(unit->pCharacterData->number)->growthMag;
}