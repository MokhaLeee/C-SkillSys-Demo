#include "gbafe-chax.h"

const struct LevelBasedSkillList_t LevelSkillSword_CharList[0x100] = {
	[0] = {
		.E[0] = 0,
		.E[1] = 0,
		.D[0] = SID_SwordLv1,
		.D[1] = 0,
		.C[0] = SID_SwordLv2,
		.C[1] = SID_AxeBreaker,
		.B[0] = SID_SwordLv3,
		.B[1] = 0,
		.A[0] = SID_CritSword,
		.A[1] = SID_SwordLv4,
		.S[0] = SID_FaireSword,
		.S[1] = SID_SwordLv5,
	},
}; 


const struct LevelBasedSkillList_t LevelSkillLance_CharList[0x100] = {
	[0] = {
		.E[0] = 0,
		.E[1] = 0,
		.D[0] = SID_LanceLv1,
		.D[1] = 0,
		.C[0] = SID_LanceLv2,
		.C[1] = SID_SwordBreaker,
		.B[0] = SID_LanceLv3,
		.B[1] = 0,
		.A[0] = SID_CritLance,
		.A[1] = SID_LanceLv4,
		.S[0] = SID_FaireLance,
		.S[1] = SID_LanceLv5,
	},
	
};
const struct LevelBasedSkillList_t LevelSkillAxe_CharList[0x100] = {
	[0] = {
		.E[0] = 0,
		.E[1] = 0,
		.D[0] = SID_AxeLv1,
		.D[1] = 0,
		.C[0] = SID_AxeLv2,
		.C[1] = SID_LanceBreaker,
		.B[0] = SID_AxeLv3,
		.B[1] = 0,
		.A[0] = SID_CritAxe,
		.A[1] = SID_AxeLv4,
		.S[0] = SID_FaireAxe,
		.S[1] = SID_AxeLv5,
	},
};

const struct LevelBasedSkillList_t LevelSkillBow_CharList[0x100] = {
	[0] = {
		.E[0] = 0,
		.E[1] = 0,
		.D[0] = SID_BowLv1,
		.D[1] = SID_RangeBonusBow1,
		.D[2] = SID_CloseCounter,
		.C[0] = SID_BowLv2,
		.C[1] = SID_TomeBreaker,
		.B[0] = SID_BowLv3,
		.B[1] = 0,
		.A[0] = SID_CritBow,
		.A[1] = 0,
		.A[2] = SID_BowLv4,
		.S[0] = SID_FaireBow,
		.S[1] = SID_BowLv5,
		.S[2] = SID_RangeBonusBow2,
	},
};
const struct LevelBasedSkillList_t LevelSkillBMag_CharList[0x100] = {
	[0] = {
		.E[0] = 0,
		.E[1] = 0,
		.D[0] = SID_RangeBonusBMag1,
		.D[1] = SID_BMagLv1,
		.C[0] = SID_BMagLv2,
		.C[1] = SID_BowBreaker,
		.B[0] = SID_BMagLv3,
		.B[1] = 0,
		.A[0] = SID_CritBMag,
		.A[1] = SID_BMagLv4,
		.S[0] = SID_FaireBMag,
		.S[1] = SID_BMagLv5,
		.S[2] = SID_RangeBonusBMag2,
	},
};
const struct LevelBasedSkillList_t LevelSkillWMag_CharList[0x100] = {
	[0] = {
		.E[0] = 0,
		.E[1] = 0,
		.D[0] = SID_WMagLv1,
		.D[1] = SID_Avoid,
		.C[0] = SID_Renewal,
		.C[1] = SID_WMagLv2,
		.B[0] = SID_WMagLv3,
		.B[1] = 0,
		.A[0] = SID_AlertStance,
		.A[1] = SID_WMagLv4,
		.S[0] = SID_WMagLv5,
		.S[1] = 0,
	},
}; 

const struct LevelBasedSkillList_t LevelSkillRide_CharList[0x100] = {
	[0] = {
		.E[0] = 0,
		.E[1] = 0,
		.D[0] = 0,
		.D[1] = 0,
		.C[0] = 0,
		.C[1] = 0,
		.B[0] = 0,
		.B[1] = 0,
		.A[0] = 0,
		.S[0] = 0,
		.S[1] = 0,
	},
};

const struct LevelBasedSkillList_t LevelSkillFly_CharList[0x100] = {
	[0] = {
		.E[0] = 0,
		.E[1] = 0,
		.D[0] = 0,
		.D[1] = 0,
		.C[0] = 0,
		.C[1] = 0,
		.B[0] = 0,
		.B[1] = 0,
		.A[0] = 0,
		.S[0] = 0,
		.S[1] = 0,
	},
};

const struct LevelBasedSkillList_t LevelSkillHeavy_CharList[0x100] = {
	[0] = {
		.E[0] = 0,
		.E[1] = 0,
		.D[0] = 0,
		.D[1] = 0,
		.C[0] = 0,
		.C[1] = 0,
		.B[0] = 0,
		.B[1] = 0,
		.A[0] = 0,
		.S[0] = 0,
		.S[1] = 0,
	},
};