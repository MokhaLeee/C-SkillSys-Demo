#include "gbafe-chax.h"

const struct ClassRomDataExpa ClassRomDataExpaTable[0x100] = {	
	[CLASS_MAGE_F] = {
		.rank_ride = 0,
		.rank_fly = 0,
		.rank_heavy = 0,
		.maxMag = 0,
	},
	
	[CLASS_EPHRAIM_LORD]        = {
		.maxMag = 30,
	},
	[CLASS_EIRIKA_LORD]         = {
		.maxMag = 30,
	},
	[CLASS_EPHRAIM_MASTER_LORD] = {
		.maxMag = 30,
	},
	[CLASS_EIRIKA_MASTER_LORD]  = {
		.maxMag = 30,
	},
	[CLASS_CAVALIER]            = {
		.maxMag = 30,
	},
	[CLASS_CAVALIER_F]          = {
		.maxMag = 30,
	},
	[CLASS_PALADIN]             = {
		.rank_ride = WPN_EXP_B,
		.maxMag = 30,
	},
	[CLASS_PALADIN_F]           = {
		.rank_ride = WPN_EXP_B,
		.maxMag = 30,
	},
	[CLASS_ARMOR_KNIGHT]        = {
		.rank_heavy = WPN_EXP_E,
		.maxMag = 30,
	},
	[CLASS_ARMOR_KNIGHT_F]      = {
		.rank_heavy = WPN_EXP_E,
		.maxMag = 30,
	},
	[CLASS_GENERAL]             = {
		.rank_heavy = WPN_EXP_B,
		.maxMag = 30,
	},
	[CLASS_GENERAL_F]           = {
		.rank_heavy = WPN_EXP_B,
		.maxMag = 30,
	},
	[CLASS_THIEF]               = {
		.maxMag = 30,
	},
    [CLASS_MANAKETE]            = {
		.maxMag = 30,
	},
	[CLASS_MERCENARY]           = {
		.maxMag = 30,
	},
	[CLASS_MERCENARY_F]         = {
		.maxMag = 30,
	},
	[CLASS_HERO]                = {
		.maxMag = 30,
	},
	[CLASS_HERO_F]              = {
		.maxMag = 30,
	},
	[CLASS_MYRMIDON]            = {
		.maxMag = 30,
	},
	[CLASS_MYRMIDON_F]          = {
		.maxMag = 30,
	},
	[CLASS_SWORDMASTER]         = {
		.maxMag = 30,
	},
	[CLASS_SWORDMASTER_F]       = {
		.maxMag = 30,
	},
	[CLASS_ASSASSIN]            = {
		.maxMag = 30,
	},
	[CLASS_ASSASSIN_F]          = {
		.maxMag = 30,
	},
	[CLASS_ARCHER]              = {
		.maxMag = 30,
	},
	[CLASS_ARCHER_F]            = {
		.maxMag = 30,
	},
	[CLASS_SNIPER]              = {
		.maxMag = 30,
	},
	[CLASS_SNIPER_F]            = {
		.maxMag = 30,
	},
	[CLASS_RANGER]              = {
		.maxMag = 30,
	},
	[CLASS_RANGER_F]            = {
		.maxMag = 30,
	},
	[CLASS_WYVERN_RIDER]        = {
		.maxMag = 30,
	},
	[CLASS_WYVERN_RIDER_F]      = {
		.maxMag = 30,
	},
	[CLASS_WYVERN_LORD]         = {
		.maxMag = 30,
	},
	[CLASS_WYVERN_LORD_F]       = {
		.maxMag = 30,
	},
	[CLASS_WYVERN_KNIGHT]       = {
		.maxMag = 30,
	},
	[CLASS_WYVERN_KNIGHT_F]     = {
		.maxMag = 30,
	}
	,
	[CLASS_MAGE]                = {
		.maxMag = 30,
	},
	[CLASS_MAGE_F]              = {
		.maxMag = 30,
	},
	[CLASS_SAGE]                = {
		.maxMag = 30,
	},
	[CLASS_SAGE_F]              = {
		.maxMag = 30,
	},
	[CLASS_MAGE_KNIGHT]         = {
		.maxMag = 30,
	},
	[CLASS_MAGE_KNIGHT_F]       = {
		.maxMag = 30,
	},
	[CLASS_BISHOP]              = {
		.maxMag = 30,
	},
	[CLASS_BISHOP_F]            = {
		.maxMag = 30,
	},
	[CLASS_SHAMAN]              = {
		.maxMag = 30,
	},
	[CLASS_SHAMAN_F]            = {
		.maxMag = 30,
	},
	[CLASS_DRUID]               = {
		.maxMag = 30,
	},
	[CLASS_DRUID_F]             = {
		.maxMag = 30,
	},
	[CLASS_SUMMONER]            = {
		.maxMag = 30,
	},
 	[CLASS_SUMMONER_F]          = {
		.maxMag = 30,
	},
 	[CLASS_ROGUE]               = {
		.maxMag = 30,
	},
 	[CLASS_GORGONEGG2]          = {
		.maxMag = 30,
	},
 	[CLASS_GREAT_KNIGHT]        = {
		.rank_ride = WPN_EXP_C,
		.rank_heavy = WPN_EXP_C,
		.maxMag = 30,
	},
 	[CLASS_GREAT_KNIGHT_F]      = {
		.rank_ride = WPN_EXP_C,
		.rank_heavy = WPN_EXP_C,
		.maxMag = 30,
		
	},
 	[CLASS_RECRUIT_T1]          = {
		.maxMag = 30,
	},
 	[CLASS_JOURNEYMAN_T2]       = {
		.maxMag = 30,
	},
 	[CLASS_PUPIL_T2]            = {
		.maxMag = 30,
	},
 	[CLASS_RECRUIT_T2]          = {
		.maxMag = 30,
	},
 	[CLASS_MANAKETE_2]          = {
		.maxMag = 30,
	},
 	[CLASS_MANAKETE_MYRRH]      = {
		.maxMag = 30,
	},
 	[CLASS_JOURNEYMAN]          = {
		.tier = 0,
		.wexpBonus[ITYPE_CLASS] = 32,
		.maxMag = 30,
		
	},
 	[CLASS_PUPIL]               = {
		.tier = 0,
		.wexpBonus[ITYPE_CLASS] = 32,
		.maxMag = 30,
		
	},
 	[CLASS_FIGHTER]             = {
		.maxMag = 30,
	},
 	[CLASS_WARRIOR]             = {
		.maxMag = 30,
	},
 	[CLASS_BRIGAND]             = {
		.maxMag = 30,
	},
 	[CLASS_PIRATE]              = {
		.maxMag = 30,
	},
 	[CLASS_BERSERKER]           = {
		.maxMag = 30,
	},
 	[CLASS_MONK]                = {
		.maxMag = 30,
	},
 	[CLASS_PRIEST]              = {
		.maxMag = 30,
	},
 	[CLASS_BARD]                = {
		.maxMag = 30,
	},
 	[CLASS_RECRUIT]             = {
		.tier = 0,
		.wexpBonus[ITYPE_CLASS] = 32,
		.maxMag = 30,
	},
 	[CLASS_PEGASUS_KNIGHT]      = {
		.rank_fly = WPN_EXP_E,
		.maxMag = 30,
	},
 	[CLASS_FALCON_KNIGHT]       = {
		.rank_fly = WPN_EXP_E,
		.maxMag = 30,
	},
 	[CLASS_CLERIC]              = {
		.maxMag = 30,
	},
 	[CLASS_TROUBADOUR]          = {
		.rank_ride = WPN_EXP_E,
		.maxMag = 30,
	},
 	[CLASS_VALKYRIE]            = {
		.maxMag = 30,
	},
 	[CLASS_DANCER]              = {
		.maxMag = 30,
	},
 	[CLASS_SOLDIER]             = {
		.maxMag = 30,
	},
 	[CLASS_NECROMANCER]         = {
		.maxMag = 30,
	},
 	[CLASS_FLEET]               = {
		.maxMag = 30,
	},
 	[CLASS_PHANTOM]             = {
		.maxMag = 30,
	},
 	[CLASS_REVENANT]            = {
		.maxMag = 30,
	},
 	[CLASS_ENTOUMBED]           = {
		.maxMag = 30,
	},
 	[CLASS_BONEWALKER]          = {
		.maxMag = 30,
	},
 	[CLASS_BONEWALKER_BOW]      = {
		.maxMag = 30,
	},
 	[CLASS_WIGHT]               = {
		.maxMag = 30,
	},
 	[CLASS_WIGHT_BOW]           = {
		.maxMag = 30,
	},
 	[CLASS_BAEL]                = {
		.maxMag = 30,
	},
 	[CLASS_ELDER_BAEL]          = {
		.maxMag = 30,
	},
 	[CLASS_CYCLOPS]             = {
		.maxMag = 30,
	},
 	[CLASS_MAUTHEDOOG]          = {
		.maxMag = 30,
	},
 	[CLASS_GWYLLGI]             = {
		.maxMag = 30,
	},
 	[CLASS_TARVOS]              = {
		.maxMag = 30,
	},
 	[CLASS_MAELDUIN]            = {
		.maxMag = 30,
	},
 	[CLASS_MOGALL]              = {
		.maxMag = 30,
	},
 	[CLASS_ARCH_MOGALL]         = {
		.maxMag = 30,
	},
 	[CLASS_GORGON]              = {
		.maxMag = 30,
	},
 	[CLASS_GORGONEGG]           = {
		.maxMag = 30,
	},
 	[CLASS_GARGOYLE]            = {
		.maxMag = 30,
	},
 	[CLASS_DEATHGOYLE]          = {
		.maxMag = 30,
	},
 	[CLASS_DRACO_ZOMBIE]        = {
		.maxMag = 30,
	},
 	[CLASS_DEMON_KING]          = {
		.maxMag = 30,
	},
 	[CLASS_BLST_REGULAR_USED]   = {
		.maxMag = 30,
	},
 	[CLASS_BLST_LONG_USED]      = {
		.maxMag = 30,
	},
 	[CLASS_BLST_KILLER_USED]    = {
		.maxMag = 30,
	},
 	[CLASS_BLST_REGULAR_EMPTY]  = {
		.maxMag = 30,
	},
 	[CLASS_BLST_LONG_EMPTY]     = {
		.maxMag = 30,
	},
 	[CLASS_BLST_KILLER_EMPTY]   = {
		.maxMag = 30,
	},
 	[CLASS_CIVILIAN_M1]         = {
		.maxMag = 30,
	},
 	[CLASS_CIVILIAN_F1]         = {
		.maxMag = 30,
	},
 	[CLASS_CIVILIAN_M2]         = {
		.maxMag = 30,
	},
 	[CLASS_CIVILIAN_F2]         = {
		.maxMag = 30,
	},
 	[CLASS_CIVILIAN_M3]         = {
		.maxMag = 30,
	},
 	[CLASS_CIVILIAN_F3]         = {
		.maxMag = 30,
	},
 	[CLASS_PEER]                = {
		.maxMag = 30,
	},
 	[CLASS_QUEEN]               = {
		.maxMag = 30,
	},
 	[CLASS_PRINCE]              = {
		.maxMag = 30,
	},
 	[CLASS_QUEEN_2]             = {
		.maxMag = 30,
	},
 	[CLASS_UNK78]               = {
		.maxMag = 30,
	},
 	[CLASS_FALLEN_PRINCE]       = {
		.maxMag = 30,
	},
 	[CLASS_TENT]                = {
		.maxMag = 30,
	},
 	[CLASS_PONTIFEX]            = {
		.maxMag = 30,
	},
 	[CLASS_FALLEN_PEER]         = {
		.maxMag = 30,
	},
 	[CLASS_CYCLOPS_2]           = {
		.maxMag = 30,
	},
 	[CLASS_ELDER_BAEL_2]        = {
		.maxMag = 30,
	},
 	[CLASS_JOURNEYMAN_T1]       = {
		.maxMag = 30,
	},
 	[CLASS_PUPIL_T1]            = {
		.maxMag = 30,
	},
};