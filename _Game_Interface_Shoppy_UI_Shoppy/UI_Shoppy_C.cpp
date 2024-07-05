#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Content_UI_N_Loading\UI_N_Loading_C.hpp"
#include "..\_Game_Interface_General_UI_BackButton\UI_BackButton_C.hpp"
#include "..\_Game_Interface_MainMenu_BP_CameraMoverMain\BP_CameraMoverMain_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_MP_N_MenuButton_New\UI_MP_N_MenuButton_New_C.hpp"
#include "..\_Game_Interface_Shoppy_UI_ShopItem\UI_ShopItem_C.hpp"
#include "UI_Shoppy_C.hpp"
#include "..\_Game_Interface_Shoppy_UI_Shoppy_Button\UI_Shoppy_Button_C.hpp"
#include "..\_Game_Interface_Shoppy_UI_Shoppy_Preview\UI_Shoppy_Preview_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Timespan.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UniformGridPanel.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
#include "..\_Script_VaRest\VaRestRequestJSON.hpp"
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::RandomlyRetrieveItems(void*& ShopItems) {
    return;
}
void* _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_closeButton_1() {
    return *(_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C**)((uintptr_t)this + 0x280);
}
_Script_UMG::CanvasPanel*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_Shop() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x2f0);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_Init() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_Clock() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x270);
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::Load_Items(void* EventName) {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_ClockText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
void* _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_API_DateTime() {
    return (void*)((uintptr_t)this + 0x338);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_Image_112() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_HolidayGridItems() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x290);
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::Update_Localization() {
    return;
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_EventSplash() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_UI_Shoppy_Button_Event() {
    return *(_Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C**)((uintptr_t)this + 0x310);
}
_Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_Item0() {
    return *(_Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C**)((uintptr_t)this + 0x2a0);
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::LoadShop() {
    return;
}
_Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_Item1() {
    return *(_Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C**)((uintptr_t)this + 0x2a8);
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::SetThingsEnabled(bool bInIsEnabled) {
    return;
}
_Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_Item2() {
    return *(_Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C**)((uintptr_t)this + 0x2b0);
}
_Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_Item3() {
    return *(_Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C**)((uintptr_t)this + 0x2b8);
}
_Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_Item4() {
    return *(_Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C**)((uintptr_t)this + 0x2c0);
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::set_NewVar_0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x370 + 0);
    *(uint8_t*)((uintptr_t)this + 0x370 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::Image*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_ItemLoading() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::HorizontalBox*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_ItemPanel() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::HorizontalBox*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_ItemPanel_Holiday() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x2d8);
}
_Script_UMG::Overlay*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_LoadOverlay() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::TextBlock*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_PageTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_ShopWidgetSwitcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2f8);
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::LoadSuccess(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
_Game_Interface_General_UI_BackButton::UI_BackButton_C*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_UI_BackButton() {
    return *(_Game_Interface_General_UI_BackButton::UI_BackButton_C**)((uintptr_t)this + 0x300);
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::ShopItemSelected(int32_t ItemId) {
    return;
}
_Game_Interface_Content_UI_N_Loading::UI_N_Loading_C*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_UI_N_Loading() {
    return *(_Game_Interface_Content_UI_N_Loading::UI_N_Loading_C**)((uintptr_t)this + 0x308);
}
_Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_UI_Shoppy_Button_Featured() {
    return *(_Game_Interface_Shoppy_UI_Shoppy_Button::UI_Shoppy_Button_C**)((uintptr_t)this + 0x318);
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::BndEvt__UI_Shoppy_UI_BackButton_K2Node_ComponentBoundEvent_0_Released__DelegateSignature() {
    return;
}
_Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_UI_Shoppy_Preview() {
    return *(_Game_Interface_Shoppy_UI_Shoppy_Preview::UI_Shoppy_Preview_C**)((uintptr_t)this + 0x320);
}
void* _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_TopButtons() {
    return (void*)((uintptr_t)this + 0x328);
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::GetTimeToDisplay(bool ShowEventTime, void*& Time) {
    return;
}
int32_t& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_TimeExposed() {
    return *(int32_t*)((uintptr_t)this + 0x348);
}
void* _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_ShopStream() {
    return (void*)((uintptr_t)this + 0x34c);
}
void* _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_BackReleased() {
    return (void*)((uintptr_t)this + 0x358);
}
void* _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_Date_Time_Object() {
    return (void*)((uintptr_t)this + 0x368);
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::LoadFail(_Script_VaRest::VaRestRequestJSON* Request) {
    return;
}
bool _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_NewVar_0() {
    return (*(uint8_t*)((uintptr_t)this + 0x370 + 0)) & 1 != 0;
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::LoadEventItems() {
    return;
}
_Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C*& _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::get_CameraManager() {
    return *(_Game_Interface_MainMenu_BP_CameraMoverMain::BP_CameraMoverMain_C**)((uintptr_t)this + 0x378);
}
_Script_CoreUObject::Class* _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Shoppy/UI_Shoppy.UI_Shoppy_C");
    return result;
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::FormatTime(_Script_CoreUObject::Timespan Timespan) {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::CacheStockParents() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::CheckTime(bool ShowEventTime) {
    return;
}
void* _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::GetFeaturedTimeLeft() {
    return;
}
int32_t _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::GetSeedFromDateTime() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::CacheTopButtons() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::CloseShoppyPreviewLoading() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::Construct0() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::LoadItemsFor(void* Label) {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::TimeUp() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::BndEvt__UI_Shoppy_closeButton_1_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton_New::UI_MP_N_MenuButton_New_C* Caller) {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::Refresh() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::CallCheckTime() {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::ExecuteUbergraph_UI_Shoppy(int32_t EntryPoint) {
    return;
}
void _Game_Interface_Shoppy_UI_Shoppy::UI_Shoppy_C::BackReleased__DelegateSignature() {
    return;
}
