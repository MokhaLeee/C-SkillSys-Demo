#include "gbafe-chax.h"

static int (*PromoMenu_OnBPress)(struct MenuProc*, struct MenuItemProc*) = (const void*)0x80CDC15;

// =========================================================
//                             Menu
// =========================================================


// define a new B press
// before, we null the set action data routine
// so here we need to add it
int NewPromoMenu_OnBPress(struct MenuProc* menu, struct MenuItemProc* item){
	gActionData.unitActionType = 0;
	return PromoMenu_OnBPress(menu, item);
}


// Make a Help Box
void NewPromoMenu_HelpBox(struct MenuProc*, struct MenuItemProc* menu_item){
	
	// StartHelpBox(8 * menu_item->xTile, 8 * menu_item->yTile, 0x212;
	
	return;
}


static u8 NewPromoCmd_Usability(const struct MenuItemDef*, int number);
static int NewPromoCmd_DrawText(struct MenuProc*, struct MenuItemProc*);
static u8 NewPromoCmd_Effect(struct MenuProc*, struct MenuItemProc*);
static int NewPromoCmd_Hover(struct MenuProc*, struct MenuItemProc*);

const struct MenuItemDef MenuItems_NewPromotion[] = {
	
	#define PROMO_SELECT_ITEM(i) { \
		.name = 0, \
		.nameMsgId = 0, \
		.helpMsgId = 0, \
		.color = TEXT_COLOR_NORMAL, \
		.overrideId = i, \
		.isAvailable = NewPromoCmd_Usability, \
		.onDraw = NewPromoCmd_DrawText, \
		.onSelected = NewPromoCmd_Effect, \
		.onIdle = 0, \
		.onSwitchIn = NewPromoCmd_Hover, \
	}
	
	PROMO_SELECT_ITEM(0),
	PROMO_SELECT_ITEM(1),
	PROMO_SELECT_ITEM(2),
	PROMO_SELECT_ITEM(3),
	PROMO_SELECT_ITEM(4),
	PROMO_SELECT_ITEM(5),
	{0}
	
	#undef PROMO_SELECT_ITEM
};


u8 NewPromoCmd_Usability(const struct MenuItemDef*, int number){
	
	struct Proc_PromoInit* prom_init = Proc_Find(gProc_PromotionInit);
	u8 charId = prom_init->charId; 
	u8 classIdOld = prom_init->classOld; 
	u8 itemId = prom_init->item;
	u8 classPromo = GetUnitPromoList(charId, classIdOld, itemId)[number];
	struct Unit* unit = GetUnitFromCharId(charId);
	
	if( number >= prom_init->count )
		return MENU_NOTSHOWN;
	
	else if( 100 != GetPromoteRate(unit, classPromo) )
		return MENU_DISABLED;
	
	else
		return MENU_ENABLED;

}


int NewPromoCmd_DrawText(struct MenuProc* menu, struct MenuItemProc* menu_item){
	
	
	struct Proc_PromoMenuSelect* parent = menu->proc_parent;
	struct Proc_PromoDisp* proc_disp = parent->proc_parent;
	
	struct Proc_PromoInit* proc_init = Proc_Find(gProc_PromotionInit);
	const u8 *class_list = GetUnitPromoList(proc_disp->charId, proc_init->classOld, proc_init->item);
	
	u8 classId = class_list[menu_item->itemNumber];
	
	const struct ClassData *class = GetClassData(classId);
	
	char* str = GetStringFromIndex( class->nameTextId );
	
	Text_Clear(&menu_item->text);
	
	Text_SetColorId( 
		&menu_item->text, 
		MENU_ENABLED == menu_item->availability
			? TEXT_COLOR_NORMAL
			: TEXT_COLOR_GRAY );
	
	Text_AppendString(&menu_item->text, str);
	
	Text_Draw(
		&menu_item->text, 
		TILEMAP_LOCATED(gBG0TilemapBuffer, menu_item->xTile, menu_item->yTile) );
	
	return 0;
}



u8 NewPromoCmd_Effect(struct MenuProc* menu, struct MenuItemProc* menu_item){
	
	
	struct Proc_PromoMenuSelect* parent = menu->proc_parent;
	struct Proc_PromoDisp* procDisp = parent->proc_parent;
	struct Proc_PromoMain* procMain = procDisp->proc_parent;
	struct Proc_PromoInit* proc_init = Proc_Find(gProc_PromotionInit);
	const u8 *class_list = GetUnitPromoList(procDisp->charId, proc_init->classOld, proc_init->item);
	
	if( MENU_ENABLED != menu_item->availability )
		return MENU_ACT_SND6B;

	
	if( 0 != procDisp->state )
		return 0;
	
	struct Unit* unit = GetUnitFromCharId(procDisp->charId);
	procMain->promoClass = class_list[menu_item->itemNumber];
	
	
	// For Three Houses Style failed
	if( !IsUnitSucessfullyPromote(unit, procMain->promoClass) ){
		gActionData.unitActionType = 0x1E; // force wait, vanilla is in fog
		*gpFlagFailedPromote = 1;
		UnitUpdateUsedItem(unit, proc_init->promotionItemSlot);
		return PromoMenu_OnBPress(menu, menu_item);
	}
	
	switch(procMain->promoClass){
		case CLASS_RANGER:
		case CLASS_RANGER_F:
			TryRemoveUnitFromBallista(unit);
			break;
			
		default:
			break;
	}
	
	EndMenu(menu);
	
	extern void EndAllProcChildren(ProcPtr);
	extern void sub_80CCBD4();
	
	EndAllProcChildren(procMain);
	sub_80CCBD4();
	
	Proc_Goto(procMain, 0x5);
	return MENU_ACT_SKIPCURSOR | MENU_ACT_END | MENU_ACT_SND6A;
}



int NewPromoCmd_Hover(struct MenuProc* menu, struct MenuItemProc* menu_item){
	struct Proc_PromoMenuSelect* parent = menu->proc_parent;
	struct Proc_PromoDisp* procDisp = parent->proc_parent;
	extern void ChangePromotionClassDescText(u16 msg);
	extern void Dialogue_SetCharacterDisplayDelay(int time);
	
	struct Proc_PromoInit* proc_init = Proc_Find(gProc_PromotionInit);
	const u8 *class_list = GetUnitPromoList(procDisp->charId, proc_init->classOld, proc_init->item);
	u8 classId = class_list[menu_item->itemNumber];
	const struct ClassData *class_promo = GetClassData(classId);
	
	procDisp->state = 1;
	procDisp->selectedOptionIndex = menu_item->itemNumber;
	ChangePromotionClassDescText( class_promo->descTextId );
	Dialogue_SetCharacterDisplayDelay(-1);
	return 0;
}