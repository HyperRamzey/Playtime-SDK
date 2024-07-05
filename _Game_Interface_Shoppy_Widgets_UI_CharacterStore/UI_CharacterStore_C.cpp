#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter\BP_MonsterAndPlayerMenuCharacter_C.hpp"
#include "..\_Game_Interface_MainMenu_Widgets_UI_SubMenuButton\UI_SubMenuButton_C.hpp"
#include "UI_CharacterStore_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog\UI_CosmeticCatalog_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_PurchaseButton\UI_PurchaseButton_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_StoreTooltip\UI_StoreTooltip_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::set_ViewingFeaturedItem(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x318 + 0);
    *(uint8_t*)((uintptr_t)this + 0x318 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C*& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_RotateCharacterLeft() {
    return *(_Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C**)((uintptr_t)this + 0x288);
}
_Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C*& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_PlayCoinPurchase() {
    return *(_Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::PrimeStoreForBundle(int32_t ItemId) {
    return;
}
_Script_UMG::HorizontalBox*& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_CharacterSwitcher() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x268);
}
_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C*& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_UI_CosmeticCatalog() {
    return *(_Game_Interface_Shoppy_Widgets_UI_CosmeticCatalog::UI_CosmeticCatalog_C**)((uintptr_t)this + 0x2b8);
}
_Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C*& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_SwitchCharLeft() {
    return *(_Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_CheekyButtonCover() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::SizeBox* _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::CreateSizeBox(float MaxSize) {
    return;
}
_Script_UMG::Image*& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_Image_1015() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C*& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_RotateCharacterRight() {
    return *(_Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C**)((uintptr_t)this + 0x290);
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::ExecuteUbergraph_UI_CharacterStore(int32_t EntryPoint) {
    return;
}
_Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C*& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_SwitchCharRight() {
    return *(_Game_Interface_MainMenu_Widgets_UI_SubMenuButton::UI_SubMenuButton_C**)((uintptr_t)this + 0x2a0);
}
_Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C*& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_TicketPurchase() {
    return *(_Game_Interface_Shoppy_Widgets_UI_PurchaseButton::UI_PurchaseButton_C**)((uintptr_t)this + 0x2a8);
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/Widgets/UI_CharacterStore.UI_CharacterStore_C");
    return result;
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_TooltipContainer() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2b0);
}
_Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C*& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_UI_StoreTooltip() {
    return *(_Game_Interface_Shoppy_Widgets_UI_StoreTooltip::UI_StoreTooltip_C**)((uintptr_t)this + 0x2c0);
}
int32_t& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_Cached_Play_Coin_Price() {
    return *(int32_t*)((uintptr_t)this + 0x2c8);
}
int32_t& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_Cached_Ticket_Price() {
    return *(int32_t*)((uintptr_t)this + 0x2cc);
}
void* _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_CycleCharacterLeft() {
    return (void*)((uintptr_t)this + 0x2d0);
}
bool _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_ViewingBundle() {
    return (*(uint8_t*)((uintptr_t)this + 0x2fc + 0)) & 1 != 0;
}
void* _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_CycleCharacterRight() {
    return (void*)((uintptr_t)this + 0x2e0);
}
_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_SurvivorMonsterDisplayObject() {
    return *(_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C**)((uintptr_t)this + 0x2f0);
}
int32_t& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_CachedItemID() {
    return *(int32_t*)((uintptr_t)this + 0x2f8);
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::set_ViewingBundle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2fc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C*& _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_MonsterPlayerMenuCharacter() {
    return *(_Game_Gameplay_Character_Menu_BP_MonsterAndPlayerMenuCharacter::BP_MonsterAndPlayerMenuCharacter_C**)((uintptr_t)this + 0x300);
}
void* _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_Active_Grid_Name() {
    return (void*)((uintptr_t)this + 0x308);
}
bool _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::get_ViewingFeaturedItem() {
    return (*(uint8_t*)((uintptr_t)this + 0x318 + 0)) & 1 != 0;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::CycleCharacterRight__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::BndEvt__UI_CharacterStore_SwitchCharRight_K2Node_ComponentBoundEvent_5_ButtonRelease__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::BndEvt__UI_CharacterStore_SwitchCharLeft_K2Node_ComponentBoundEvent_0_ButtonRelease__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::HideTooltip() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::BndEvt__UI_CharacterStore_UI_CosmeticCatalog_K2Node_ComponentBoundEvent_1_ItemSelected__DelegateSignature(void* Name, int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ItemId) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::SwitchCharacterDisplay(void* NewType) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::SetSelectedItem(int32_t PlayCoinPrice, int32_t TicketPrice, int32_t ID) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::OnInitialized0() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::ResetRotation() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::PrimeStore(void* CharacterType, int32_t ItemId, void* FeaturedTab, bool IsFeaturedItem_) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::GetPlaycoins(int32_t Playcoins, int32_t Tickets) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::PrimeTooltip() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::BndEvt__UI_CharacterStore_PlayCoinPurchase_K2Node_ComponentBoundEvent_15_ButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::BndEvt__UI_CharacterStore_TicketPurchase_K2Node_ComponentBoundEvent_14_ButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::GetTicketsFailure(void* ErrorMessage) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::GetTickets(int32_t Playcoins, int32_t Tickets) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::GetCoinsFailure(void* ErrorMessage) {
    return;
}
void _Game_Interface_Shoppy_Widgets_UI_CharacterStore::UI_CharacterStore_C::CycleCharacterLeft__DelegateSignature() {
    return;
}
