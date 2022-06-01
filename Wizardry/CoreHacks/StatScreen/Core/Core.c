#include "gbafe-chax.h"

void PrepareForMoreTextColor(){
	extern const u16 MSS_TEXT_PAL09[];
	
	ApplyPalettes(MSS_TEXT_PAL09, 0x8, 2);
};

void ResetTextPalInfo(){
	
	gCurrentFont->unk10 = gCurrentFont->unk10 & 0x0FFF;

}



void NewDrawTextInline(struct TextHandle* text, u16* dest, int colorId, int x, int tileWidth, const char* string){
	
	/*
	 *
	 * Dont forget put new palette bank to Pal-09 and Pal-0A
	 *
	 */
	
	int pal_bank = 0;
	
	switch (colorId){
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			pal_bank = 8;
			colorId -= 5;
			break;
			
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			pal_bank = 9;
			colorId -= 10;
			break;
		
		default:
			pal_bank = 0;
			colorId = 0;
	}
	
	
	gCurrentFont->unk10 = 
		(pal_bank << 12) +
		(gCurrentFont->unk10 & 0x0FFF);
	
	DrawTextInline(text, dest, colorId, x, tileWidth, string);
	
	
}


int GetNewTextColorByGrowth(int growth){
	
	growth = _lib_div(growth, 10);
	
	if( growth > 9 )
		growth = 9;
	
	return 9 - growth + 5;
	
}












// New Draw Bar
void NewDrawStatScreenBar(int num, int x, int y, int base, int total, int max){
	
	max = _lib_div(max - 1, 10) * 10 + 10;
	
	if( max < 20 )
		max = 20;
	
	DrawDecNumber(gBmFrameTmap0 + TILEMAP_INDEX(x, y),
		(base == max) ? TEXT_COLOR_GREEN : TEXT_COLOR_BLUE, base);
	
	
	
	switch( _lib_div(max, 10) ){
		
		case 6:
			base = (base * 3) / 6;
			total = (total * 3) / 6;
			max = 30;
			break;
		
		case 5:
			base = (base * 3) / 5;
			total = (total * 3) / 5;
			max = 30;
			break;
		
		case 4:
			base = (base * 3) / 4;
			total = (total * 3) / 4;
			max = 30;
			break;
		
		case 3:
		case 2:
		case 1:
		case 0:
			break;
			
		default:
			max = 30;
			base = base >= max ? 30 : base * 30 / max;
			total = total >= max ? 30 : total * 30 / max;
			break;
	}
	
	// DrawStatWithBar(BarId, x, y, base, total, max);
	int diff = total - base;

	sub_8004BF0(diff, gBmFrameTmap0 + TILEMAP_INDEX(x + 1, y));


	sub_8086B2C(
		0x401 + num*6, 6,
		gBmFrameTmap1 + TILEMAP_INDEX(x - 2, y + 1),
		TILEREF(0, STATSCREEN_BGPAL_6), 
		max * 41 / 30, 
		base * 41 / 30, 
		diff * 41 / 30
		);
}