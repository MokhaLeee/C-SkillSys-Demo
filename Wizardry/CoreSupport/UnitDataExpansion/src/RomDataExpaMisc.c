#include "gbafe-chax.h"


int GrowthGetterHp_UnitExpa(struct Unit* unit){
	return GetClassRomDataExpa(unit->pClassData->number)->growthBonusHP;
}

int GrowthGetterPow_UnitExpa(struct Unit* unit){
	return GetClassRomDataExpa(unit->pClassData->number)->growthBonusPow;
}


int GrowthGetterMag_UnitExpa(struct Unit* unit){
	return GetClassRomDataExpa(unit->pClassData->number)->growthBonusMag;
}


int GrowthGetterSkl_UnitExpa(struct Unit* unit){
	return GetClassRomDataExpa(unit->pClassData->number)->growthBonusSkl;
}


int GrowthGetterSpd_UnitExpa(struct Unit* unit){
	return GetClassRomDataExpa(unit->pClassData->number)->growthBonusSpd;
}


int GrowthGetterLck_UnitExpa(struct Unit* unit){
	return GetClassRomDataExpa(unit->pClassData->number)->growthBonusDef;
}


int GrowthGetterDef_UnitExpa(struct Unit* unit){
	return GetClassRomDataExpa(unit->pClassData->number)->growthBonusRes;
}


int GrowthGetterRes_UnitExpa(struct Unit* unit){
	return GetClassRomDataExpa(unit->pClassData->number)->growthBonusLck;
}


