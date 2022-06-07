#include "gbafe-chax.h"

void EventCh0_SetAlly1Skills(struct EventEngineProc* proc){
	
	struct Unit* unit;
	
	// Lysithea
	unit = GetUnitFromCharId(Unit_Lysi);
	ResetUnitRamSkillsList(unit);
	ResetUnitCombatArts(unit);
	
	// AddSkill(unit, SID_RangeBonusBMag1);
	AddSkill(unit, SID_BMagLv1);
	AddSkill(unit, SID_WMagLv1);
	AddSkill(unit, SID_Avoid);
	AddSkill(unit, SID_SwordLv1);
	AddCombatArt(unit, CA_Soulblade);
	
	
	// Unit_Dimi
	unit = GetUnitFromCharId(Unit_Dimi);
	
	ResetUnitRamSkillsList(unit);
	ResetUnitCombatArts(unit);
	
	AddSkill(unit, SID_AxeLv1);
	AddSkill(unit, SID_LanceLv1);
	AddCombatArt(unit, CA_TempestLance);
	AddCombatArt(unit, CA_ShatterSlash);
	AddCombatArt(unit, CA_Smash);
	unit->maxHP = 25;
	unit->curHP = 25;
	
	
	// Unit_Eru
	unit = GetUnitFromCharId(Unit_Eru);
	ResetUnitRamSkillsList(unit);
	ResetUnitCombatArts(unit);
	
	AddSkill(unit, SID_AxeLv1);
	AddSkill(unit, SID_LanceLv1);
	AddCombatArt(unit, CA_TempestLance);
	AddCombatArt(unit, CA_ShatterSlash);
	AddCombatArt(unit, CA_Smash);
	
	
	// Unit_Shamir
	unit = GetUnitFromCharId(Unit_Shamir);
	ResetUnitRamSkillsList(unit);
	ResetUnitCombatArts(unit);
	unit->ranks[ITYPE_SWORD] = WPN_EXP_D;
	AddSkill(unit, SID_SwordLv2);
	AddSkill(unit, SID_BowLv1);
	AddCombatArt(unit, CA_WrathStrike);
	AddCombatArt(unit, CA_Grounder);
	AddCombatArt(unit, CA_CurvedShot);
	AddCombatArt(unit, CA_WardArrow);
	
	
	// Unit_Ber
	unit = GetUnitFromCharId(Unit_Ber);
	ResetUnitRamSkillsList(unit);
	ResetUnitCombatArts(unit);
	
	AddSkill(unit, SID_LanceLv1);
	AddSkill(unit, SID_BowLv1);
	AddCombatArt(unit, CA_Vengeance);
	AddCombatArt(unit, CA_TempestLance);
	AddCombatArt(unit, CA_CurvedShot);
	AddCombatArt(unit, CA_Encloser);
	
	
	// Unit_Flyan
	unit = GetUnitFromCharId(Unit_Flyan);
	ResetUnitRamSkillsList(unit);
	ResetUnitCombatArts(unit);
	
	AddSkill(unit, SID_WMagLv1);
	AddSkill(unit, SID_BowLv1);
	AddCombatArt(unit, CA_CurvedShot);
	AddCombatArt(unit, CA_WardArrow);
}



void EventCh0_SetAlly2Skills(struct EventEngineProc* proc){
	
	struct Unit* unit;
	
	// Unit_Yuri
	unit = GetUnitFromCharId(Unit_Yuri);
	ResetUnitRamSkillsList(unit);
	ResetUnitCombatArts(unit);
	
	unit->ranks[ITYPE_SWORD] = WPN_EXP_C;
	unit->maxHP = 18;
	unit->curHP = 18;
	unit->pow = 5;
	unit->spd = 6;
	unit->skl = 7;
	unit->def = 3;
	unit->res = 2;
	unit->level = 5;
	
	AddSkill(unit, SID_SwordLv2);
	AddSkill(unit, SID_AxeBreaker);
	AddSkill(unit, SID_RuinedBlade);
	AddCombatArt(unit, CA_Grounder);
	AddCombatArt(unit, CA_WrathStrike);
}



void EventCh0_SetEnemy1Skills(struct EventEngineProc* proc){
	
	struct Unit* unit;
	
	// Left Soldiers
	unit = GetUnitByLoc(8, 11);
	ResetUnitRamSkillsList(unit);
	ResetUnitCombatArts(unit);
	AddSkill(unit, SID_SwordBreaker);
	AddSkill(unit, SID_LanceLv3);
	unit->def = 5;
	unit->spd = 8;
	unit->ranks[ITYPE_LANCE] = WPN_EXP_C;
	
	unit = GetUnitByLoc(3, 8);
	ResetUnitRamSkillsList(unit);
	ResetUnitCombatArts(unit);
	AddSkill(unit, SID_SwordBreaker);
	AddSkill(unit, SID_LanceLv3);
	unit->def = 5;
	unit->spd = 8;
	unit->ranks[ITYPE_LANCE] = WPN_EXP_C;
	
	unit = GetUnitByLoc(1, 9);
	ResetUnitRamSkillsList(unit);
	ResetUnitCombatArts(unit);
	AddSkill(unit, SID_SwordBreaker);
	AddSkill(unit, SID_LanceLv3);
	unit->def = 10;
	unit->spd = 3;
	unit->ranks[ITYPE_LANCE] = WPN_EXP_C;
	
	
	// Left Fighters
	unit = GetUnitByLoc(2, 9);
	ResetUnitRamSkillsList(unit);
	ResetUnitCombatArts(unit);
	AddSkill(unit, SID_AxeLv3);
	unit->pow = 10;
	unit->spd = 9;
	unit->skl = 4;
	unit->def = 5;
	unit->ranks[ITYPE_AXE] = WPN_EXP_C;
	
	unit = GetUnitByLoc(1, 8);
	ResetUnitRamSkillsList(unit);
	ResetUnitCombatArts(unit);
	AddSkill(unit, SID_AxeLv3);
	unit->pow = 10;
	unit->spd = 9;
	unit->skl = 4;
	unit->def = 5;
	unit->ranks[ITYPE_AXE] = WPN_EXP_C;
	
	unit = GetUnitByLoc(2, 6);
	ResetUnitRamSkillsList(unit);
	ResetUnitCombatArts(unit);
	AddSkill(unit, SID_AxeLv3);
	unit->pow = 10;
	unit->spd = 9;
	unit->skl = 4;
	unit->def = 5;
	unit->ranks[ITYPE_AXE] = WPN_EXP_C;
	
	
	// Right 
	unit = GetUnitByLoc(15, 8);
	ResetUnitRamSkillsList(unit);
	ResetUnitCombatArts(unit);
	AddSkill(unit, SID_AxeLv3);
	unit->pow = 10;
	unit->spd = 9;
	unit->skl = 4;
	unit->def = 3;
	unit->ranks[ITYPE_AXE] = WPN_EXP_C;
	
	
	unit = GetUnitByLoc(15, 4);
	ResetUnitRamSkillsList(unit);
	ResetUnitCombatArts(unit);
	AddSkill(unit, SID_BMagLv5);
	*GetMagAt(unit) = 10;
	unit->maxHP = 35;
	unit->curHP = 35;
	unit->pow = 0;
	unit->spd = 4;
	unit->skl = 9;
	unit->def = 6;
	unit->res = 4;
	unit->ranks[ITYPE_BMAG] = WPN_EXP_S;
	
	
	// Boss
	unit = GetUnitFromCharId(CHARACTER_BREGUET);
	ResetUnitRamSkillsList(unit);
	ResetUnitCombatArts(unit);
	AddSkill(unit, SID_QuickRiposte);
	AddSkill(unit, SID_AxeLv4);
	AddSkill(unit, SID_LanceBreaker);
	AddSkill(unit, SID_StanceMirror);
	AddSkill(unit, SID_DoubleLion);
	unit->maxHP = 40;
	unit->curHP = 40;
	unit->pow = 8;
	unit->spd = 3;
	unit->skl = 7;
	unit->def = 22;
	unit->res = 3;
	unit->ranks[ITYPE_AXE] = WPN_EXP_A;
}




void EventCh0_CheckSoldierAI(struct EventEngineProc* proc){
	
	extern int CanUnitUseAttack();
	
	
	struct Unit* unit1 = 
		(*SkillTester)(GetUnitByLoc(1, 9), SID_SwordBreaker)
		? GetUnitByLoc(1, 9)
		: NULL;
		
	struct Unit* unit2 = 
		(*SkillTester)(GetUnitByLoc(3, 8), SID_SwordBreaker)
		? GetUnitByLoc(3, 8)
		: NULL;
		
	struct Unit* unit3 = 
		(*SkillTester)(GetUnitByLoc(8, 11), SID_SwordBreaker)
		? GetUnitByLoc(8, 11)
		: NULL;
	
	
	if( NULL != unit1 ){
		gActiveUnit = unit1;
		GenerateUnitMovementMap(unit1);
		
		if( CanUnitUseAttack() )
			goto goto_updateAI;
	}
	
	if( NULL != unit2 ){
		gActiveUnit = unit2;
		GenerateUnitMovementMap(unit2);
		
		if( CanUnitUseAttack() )
			goto goto_updateAI;
	}
	
	if( NULL != unit3 ){
		gActiveUnit = unit3;
		GenerateUnitMovementMap(unit3);
		
		if( CanUnitUseAttack() )
			goto goto_updateAI;
	}
	
	return;
	
goto_updateAI:
	if( NULL != unit1 ){
		unit1->ai3And4 = 4;
		unit1->ai1 = 0;
		unit1->ai1data = 0;
		unit1->ai2 = 0;
		unit1->ai2data = 0;
	}
	
	if( NULL != unit2 ){
		unit2->ai3And4 = 4;
		unit2->ai1 = 0;
		unit2->ai1data = 0;
		unit2->ai2 = 0;
		unit2->ai2data = 0;
	}
	
	if( NULL != unit3 ){
		unit3->ai3And4 = 4;
		unit3->ai1 = 0;
		unit3->ai1data = 0;
		unit3->ai2 = 0;
		unit3->ai2data = 0;
	}
}
