#pragma once

enum{
	
	// Size of each unit-ext data
	UNIT_EXPA_SIZE = 0x10,
	
	// number of unit-ext data
	UNIT_EXPA_MAX = 0x46,
	
	
};



struct UnitExpa{
	
	/* 00 */ u8 MasterClassList[0xA];	// in ClassRank
	/* 0A */ u8 pad_0A[0x10 - 0x0A];
};

extern struct UnitExpa *gpUnitExpaData;



int UnitHasExpaData(struct Unit*);
struct UnitExpa* GetUnitExpa(struct Unit*);




// Rom Data Expa


struct UnitRomDataExpa{
	u8 rank_ride;
	u8 rank_fly;
	u8 rank_heavy;
	
	s8 wexpBonus[0x11];
	
	// Str/Mag
	s8 growthMag;
	s8 baseMag;
	
};


struct ClassRomDataExpa{
	u8 rank_ride;
	u8 rank_fly;
	u8 rank_heavy;
	
	s8 wexpBonus[0x11];
	
	s16 growthMag;
	s16 baseMag;
	s16 maxMag;
	s16 magPromoBonus;
	s8 magic_tier;	// 0, 1, 2, 3 = cannot, can a little, can, master
	
	s8 tier;		// 0, 1, 2, 3, -1
	
	// Bonus
	s8 growthBonusHP;
	s8 growthBonusPow;
	s8 growthBonusMag;
	s8 growthBonusSkl;
	s8 growthBonusSpd;
	s8 growthBonusDef;
	s8 growthBonusRes;
	s8 growthBonusLck;
	s8 growthBonusCharm;
	
	
	
	
};


const struct UnitRomDataExpa *GetUnitRomDataExpa(u8 char_id);
const struct ClassRomDataExpa *GetClassRomDataExpa(u8 class_id);
