#pragma once

#include "gbafe.h"

enum{	
	// Max number of unit promotion class list
	PROMO_CLASS_LIST_MAX = 0x6,
};


const u8 *GetUnitPromoList(u8 charId, u8 classId, u8 itemId);

// For Three Houses
extern u8 *gpFlagFailedPromote;
int GetPromoteRate(struct Unit*, u8 classId);
int IsUnitSucessfullyPromote(struct Unit*, u8 classId);
