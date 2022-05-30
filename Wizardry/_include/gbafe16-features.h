#pragma once

#define SKILL_ICON(index) ((1 << 8) + (index))
#define MASTERY_ICON(index) ((2 << 8) + (index))
#define COMBAT_ART_ICON(index) ((3 << 8) + (index))

enum{
	MASTERY_ICON_SWORD = 0x00,
	MASTERY_ICON_LANCE = 0x01,
	MASTERY_ICON_AXE = 0x02,
	MASTERY_ICON_BOW = 0x03,
	MASTERY_ICON_FAITH = 0x04,
	
	MASTERY_ICON_REASON = 0x05,
	MASTERY_ICON_AUTH = 0x06,
	MASTERY_ICON_RIDE = 0x07,
	MASTERY_ICON_FLY = 0x08,
	MASTERY_ICON_HEAVY = 0x09,
	MASTERY_ICON_BRAWL = 0x0A,
	
	MASTERY_ICON_MONSTER = 0x0B,
	MASTERY_ICON_DRAGON = 0x0C,
	
	MASTERY_ICON_STAR = 0x0D,
	
	MASTERY_ICON_MAX,
	MASTERY_ICON_NULL = 0xFF,
};




// Map Anims
void StartMapAnim_Gravity(struct Unit*, ProcPtr);