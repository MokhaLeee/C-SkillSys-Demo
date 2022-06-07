#include "gbafe-chax.h"

const struct UnitRomDataExpa UnitRomDataExpaTable[0x100] = {
	
	[CHARACTER_NONE]         = {}, // 

    // Player Characters
	[Unit_Lysi]				= {
		.baseMag = 5,
		.growthMag = 60,
		.wexpBonus[ITYPE_SWORD] = 1,
		.wexpBonus[ITYPE_BMAG] = 1,
		.wexpBonus[ITYPE_WMAG] = 1,
	}, // 01,
	[Unit_Dimi]				= {
		.baseMag = 1,
		.growthMag = 20,
		.wexpBonus[ITYPE_SWORD] = 1,
		.wexpBonus[ITYPE_LANCE] = 1,
		.wexpBonus[ITYPE_HEAVY] = 1,
		.wexpBonus[ITYPE_RIDE] = 1,
	}, // 02,
	[Unit_Eru]				= {
		.baseMag = 2,
		.growthMag = 35,
		.wexpBonus[ITYPE_SWORD] = 1,
		.wexpBonus[ITYPE_AXE] = 1,
		.wexpBonus[ITYPE_HEAVY] = 1,
	}, // 03,
	[Unit_Flyan]			= {
		.baseMag = 4,
		.growthMag = 45,
		.wexpBonus[ITYPE_BOW] = 1,
		.wexpBonus[ITYPE_WMAG] = 1,
	}, // 04,
	[Unit_Ber]				= {
		.baseMag = 2,
		.growthMag = 35,
		.wexpBonus[ITYPE_BOW] = 1,
		.wexpBonus[ITYPE_LANCE] = 1,
	}, // 05,
	[Unit_Hapi]				= {
		.baseMag = 5,
		.growthMag = 45,
	}, // 06,
	[Unit_Leonie]			= {
		.baseMag = 1,
		.growthMag = 25,
	}, // 07,
	[Unit_Linhardt]			= {
		.baseMag = 5,
		.growthMag = 40,
		.wexpBonus[ITYPE_SWORD] = 1,
		.wexpBonus[ITYPE_WMAG] = 1,
	}, // 08,
	[Unit_Mercedes]			= {
		.baseMag = 4,
		.growthMag = 50,
		.wexpBonus[ITYPE_LANCE] = 1,
		.wexpBonus[ITYPE_BMAG] = 1,
		.wexpBonus[ITYPE_WMAG] = 1,
	}, // 09,
	[Unit_Shamir]			= {
		.baseMag = 5,
		.growthMag = 20,
		.wexpBonus[ITYPE_BOW] = 1,
	}, // 0A,
	[Unit_Sylvain]        	= {
		.baseMag = 2,
		.growthMag = 20,
		.wexpBonus[ITYPE_SWORD] = 1,
		.wexpBonus[ITYPE_AXE] = 1,
	}, // 0B,
	[Unit_Yuri]				= {
		.baseMag = 3,
		.growthMag = 35,
		.wexpBonus[ITYPE_SWORD] = 1,
		.wexpBonus[ITYPE_BMAG] = 1,
		.wexpBonus[ITYPE_BOW] = 1,
	}, // 0C,
	[Unit_Marianne] 		= {
		.baseMag = 6,
		.growthMag = 55,
		.wexpBonus[ITYPE_LANCE] = 1,
		.wexpBonus[ITYPE_BMAG] = 1,
		.wexpBonus[ITYPE_WMAG] = 1,
		.wexpBonus[ITYPE_RIDE] = 1,
	}, // 0D,
	[CHARACTER_CORMAG]       = {}, // 0E,
	[CHARACTER_EPHRAIM]      = {}, // 0F,
	[CHARACTER_FORDE]        = {}, // 10,
	[CHARACTER_KYLE]         = {}, // 11,
	[CHARACTER_AMELIA]       = {}, // 12,
	[CHARACTER_ARTUR]        = {}, // 13,
	[CHARACTER_GERIK]        = {}, // 14,
	[CHARACTER_TETHYS]       = {}, // 15,
	[CHARACTER_MARISA]       = {}, // 16,
	[CHARACTER_SALEH]        = {}, // 17,
	[CHARACTER_EWAN]         = {}, // 18,
	[CHARACTER_LARACHEL]     = {}, // 19,
	[CHARACTER_DOZLA]        = {}, // 1A,
	[CHARACTER_RENNAC]       = {}, // 1C,
	[CHARACTER_DUESSEL]      = {}, // 1D,
	[CHARACTER_MYRRH]        = {}, // 1E,
	[CHARACTER_KNOLL]        = {}, // 1F,
	[CHARACTER_JOSHUA]       = {}, // 20,
	[CHARACTER_SYRENE]       = {}, // 21,
	[CHARACTER_TANA]         = {}, // 22,
	[CHARACTER_LYON_CC]      = {}, // 23,
	[CHARACTER_ORSON_CC]     = {}, // 24,
	[CHARACTER_GLEN_CC]      = {}, // 25,
	[CHARACTER_SELENA_CC]    = {}, // 26,
	[CHARACTER_VALTER_CC]    = {}, // 27,
	[CHARACTER_RIEV_CC]      = {}, // 28,
	[CHARACTER_CAELLACH_CC]  = {}, // 29,
	[CHARACTER_FADO_CC]      = {}, // 2A,
	[CHARACTER_ISMAIRE_CC]   = {}, // 2B,
	[CHARACTER_HAYDEN_CC]    = {}, // 2C,

    // Summoned Characters
	[CHARACTER_SUMMON_LYON]  = {}, // 3B,
	[CHARACTER_SUMMON_KNOLL] = {}, // 3E,
	[CHARACTER_SUMMON_EWAN]  = {}, // 3F,

    // Boss/Unique Enemy Characters
	[CHARACTER_LYON]         = {}, // 40,
	[CHARACTER_MORVA]        = {}, // 41,
	[CHARACTER_ORSON_CH5X]   = {}, // 42,
	[CHARACTER_VALER]        = {}, // 43,
	[CHARACTER_SELENA]       = {}, // 44,
	[CHARACTER_VALTER_PROLOGUE] = {}, // 45,
	[CHARACTER_BREGUET]      = {}, // 46,
	[CHARACTER_BONE]         = {}, // 47,
	[CHARACTER_BAZBA]        = {}, // 48,
	[CHARACTER_ENTOUMBED_CH4] = {}, // 49,
	[CHARACTER_SAAR]         = {}, // 4A,
	[CHARACTER_NOVALA]       = {}, // 4B,
	[CHARACTER_MURRAY]       = {}, // 4C,
	[CHARACTER_TIRADO]       = {}, // 4D,
	[CHARACTER_BINKS]        = {}, // 4E,
	[CHARACTER_PABLO]        = {}, // 4F,
	[CHARACTER_MAELDUIN_CHUnk] = {}, // 50, // TODO: which chapter?
	[CHARACTER_AIAS]         = {}, // 51,
	[CHARACTER_CARLYLE]      = {}, // 52,
	[CHARACTER_CAELLACH]     = {}, // 53,
	[CHARACTER_PABLO_2]      = {}, // 54, // TODO: which chapter?
	[CHARACTER_GORGON_CHUnk] = {}, // 56, // TODO: which chapter?
	[CHARACTER_RIEV]         = {}, // 57,
	[CHARACTER_GHEB]         = {}, // 5A,
	[CHARACTER_BERAN]        = {}, // 5B,
	[CHARACTER_CYCLOPS_CHUnk] = {}, // 5C,
	[CHARACTER_WIGHT_CHUnk]  = {}, // 5D,
	[CHARACTER_DEATHGOYLE_CHUnk] = {}, // 5E,
	[CHARACTER_BANDIT_CH5]   = {}, // 66,
	[CHARACTER_ONEILL]       = {}, // 68,
	[CHARACTER_GLEN]         = {}, // 69,
	[CHARACTER_ZONTA]        = {}, // 6A,
	[CHARACTER_VIGARDE]      = {}, // 6B,
	[CHARACTER_LYON_FINAL]   = {}, // 6C,
	[CHARACTER_ORSON]	= {}, // 6D,

	[CHARACTER_FOMORTIIS]    = {}, // BE,

	[CHARACTER_WALL]         = {}, // FE,
	[CHARACTER_SNAG]         = {}, // FF,
};

