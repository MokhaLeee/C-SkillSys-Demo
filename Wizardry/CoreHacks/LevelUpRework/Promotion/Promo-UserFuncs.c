#include "gbafe-chax.h"

// (802BD50) ApplyUnitPromotion
void MLU_PromoGain_Vanilla(struct Unit* unit, u8 classId) {
	const struct ClassData* promotedClass = GetClassData(classId);

	// int baseClassId = unit->pClassData->number;
	// int promClassId = promotedClass->number;
	// int i;

	// Apply stat ups
	
	if( unit->maxHP < promotedClass->promotionHp ){
		unit->curHP += promotedClass->promotionHp - unit->maxHP;
		unit->maxHP = promotedClass->promotionHp;
	}
	
	if( unit->pow < promotedClass->promotionPow )
		unit->pow = promotedClass->promotionPow;
	
	// Need UnitExpa
	if( *GetMagAt(unit) < GetClassPromoBonusMag(classId) )
		*GetMagAt(unit) = GetClassPromoBonusMag(classId);
	
	if( unit->pow < promotedClass->promotionPow )
		unit->pow = promotedClass->promotionPow;
	
	if( unit->skl < promotedClass->promotionSkl )
		unit->skl = promotedClass->promotionSkl;
	
	if( unit->spd < promotedClass->promotionSpd )
		unit->spd = promotedClass->promotionSpd;
	
	if( unit->def < promotedClass->promotionDef )
		unit->def = promotedClass->promotionDef;
	
	if( unit->res < promotedClass->promotionRes )
		unit->res = promotedClass->promotionRes;
	

	if (unit->curHP > GetUnitMaxHp(unit))
		unit->curHP = GetUnitMaxHp(unit);
}


// GenerateBattleUnitStatGainsComparatively
void MLU_PromoDiff_Vanilla(struct BattleUnit* bu, struct Unit* unit) {
	bu->changeHP  = bu->unit.maxHP > unit->maxHP ? bu->unit.maxHP > unit->maxHP : 0;
	bu->changePow = bu->unit.pow > unit->pow ? bu->unit.pow - unit->pow : 0;
	*GetBu_ChangeMagAt(bu) = *GetMagAt(&bu->unit) > *GetMagAt(unit) ? *GetMagAt(&bu->unit) - *GetMagAt(unit) : 0;
	bu->changeSkl = bu->unit.skl > unit->skl ? bu->unit.skl - unit->skl : 0;
	bu->changeSpd = bu->unit.spd > unit->spd ? bu->unit.spd - unit->spd : 0;
	bu->changeDef = bu->unit.def > unit->def ? bu->unit.def - unit->def : 0;
	bu->changeRes = bu->unit.res > unit->res ? bu->unit.res - unit->res : 0;
	bu->changeLck = bu->unit.lck > unit->lck ? bu->unit.lck - unit->lck : 0;

	if (bu->unit.conBonus != unit->conBonus)
        bu->changeCon = bu->unit.conBonus - unit->conBonus;
	else {
		bu->changeCon = 0;
		bu->unit.conBonus = unit->conBonus;
	}
}