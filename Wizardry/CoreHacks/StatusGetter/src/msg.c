#include "gbafe-chax.h"

typedef s8(*MSG_Func)(struct Unit* unit, s8 status_cur);

extern MSG_Func HpMaxModify[];
extern MSG_Func PowModify[];
extern MSG_Func MagModify[];
extern MSG_Func SpdModify[];
extern MSG_Func SklModify[];
extern MSG_Func LckModify[];
extern MSG_Func DefModify[];
extern MSG_Func ResModify[];
extern MSG_Func ConModify[];
extern MSG_Func MovModify[];
extern MSG_Func AidModify[];


s8 HpMaxGetter(struct Unit* unit){
	s8 status = 
		unit->maxHP +
		GetItemHpBonus(GetUnitEquippedWeapon(unit));
	
	MSG_Func *it = HpMaxModify;
	
	while( *it )
		status = (*it++)(unit, status);
	
	return status > 0? status : 0;
}

s8 HpCurGetter(struct Unit* unit){
	if (unit->curHP > GetUnitMaxHp(unit))
		unit->curHP = GetUnitMaxHp(unit);

	return unit->curHP;
}

s8 PowGetter(struct Unit* unit){
	s8 status = 
		unit->pow + 
		GetItemPowBonus(GetUnitEquippedWeapon(unit));
	
	MSG_Func *it = PowModify;
	
	while( *it )
		status = (*it++)(unit, status);
	
	return status > 0? status : 0;

}

s8 MagGetter(struct Unit* unit){
	s8 status = 
		*GetMagAt(unit);
	
	MSG_Func *it = MagModify;
	
	while( *it )
		status = (*it++)(unit, status);
	
	return status > 0? status : 0;
}

s8 SklGetter(struct Unit* unit){
	s8 status;
	int item = GetUnitEquippedWeapon(unit);

	if (unit->state & US_RESCUING)
		status = unit->skl / 2 + GetItemSklBonus(item);
	else
		status = unit->skl + GetItemSklBonus(item);
	
	MSG_Func *it = SklModify;
	
	while( *it )
		status = (*it++)(unit, status);
	
	return status > 0? status : 0;
}

s8 SpdGetter(struct Unit* unit){
	s8 status;
	int item = GetUnitEquippedWeapon(unit);

	if (unit->state & US_RESCUING)
		status = unit->spd / 2 + GetItemSklBonus(item);
	else
		status = unit->spd + GetItemSklBonus(item);
	
	MSG_Func *it = SpdModify;
	
	while( *it )
		status = (*it++)(unit, status);
	
	return status > 0? status : 0;
}

s8 LckGetter(struct Unit* unit){
	s8 status = 
		unit->lck + 
		GetItemLckBonus(GetUnitEquippedWeapon(unit));
	
	MSG_Func *it = LckModify;
	
	while( *it )
		status = (*it++)(unit, status);
	
	return status > 0? status : 0;
}

s8 DefGetter(struct Unit* unit){
	s8 status = 
		unit->def + 
		GetItemDefBonus(GetUnitEquippedWeapon(unit));
	
	MSG_Func *it = DefModify;
	
	while( *it )
		status = (*it++)(unit, status);
		
	return status > 0? status : 0;	
}

s8 ResGetter(struct Unit* unit){
	s8 status = 
		unit->res + 
		GetItemResBonus(GetUnitEquippedWeapon(unit));
	
	MSG_Func *it = ResModify;
	
	while( *it )
		status = (*it++)(unit, status);
		
	return status > 0? status : 0;	
}

s8 ConGetter(struct Unit* unit){
	s8 status = 
		UNIT_CON(unit);
	
	MSG_Func *it = ConModify;
	
	while( *it )
		status = (*it++)(unit, status);
	
	return status > 0? status : 0;	
}

s8 MovGetter(struct Unit* unit){
	s8 status = 
		UNIT_MOV(unit);
	
	MSG_Func *it = MovModify;
	
	while( *it )
		status = (*it++)(unit, status);
	
	return status > 0? status : 0;	
}

s8 AidGetter(struct Unit* unit){
	s8 status;
	
	if (!(UNIT_CATTRIBUTES(unit) & CA_MOUNTEDAID))
		status = ConGetter(unit) - 1;
	else if (UNIT_CATTRIBUTES(unit) & CA_FEMALE)
		status = 20 - ConGetter(unit);
    else
		status = 25 - ConGetter(unit);
	
	MSG_Func *it = AidModify;
	
	while( *it )
		status = (*it++)(unit, status);
	
	return status > 0? status : 0;	
}
