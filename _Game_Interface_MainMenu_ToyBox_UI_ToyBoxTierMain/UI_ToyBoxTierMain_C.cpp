#include "..\FUObjectArray.hpp"
#include "UI_ToyBoxTierMain_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\LevelResponse.hpp"
#include "..\_Script_Playtime_Multiplayer\ToyBoxResponse.hpp"
#include "..\_Script_Playtime_Multiplayer\ToyBoxResponseItem.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Color_Index_Rare() {
    return (void*)((uintptr_t)this + 0x468);
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::ExecuteUbergraph_UI_ToyBoxTierMain(int32_t EntryPoint) {
    return;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Check() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_HoverAnim() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Button_78() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x278);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::SetSelected(bool Condition) {
    return;
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Fail() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_CheckOutline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Content() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x290);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::DisplayContent() {
    return;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Free() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::ToyboxTierClicked__DelegateSignature(int32_t ItemId, int32_t Level) {
    return;
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Index() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a8);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::SetPage(int32_t Page, _Script_Playtime_Multiplayer::ToyBoxResponse ToyBox) {
    return;
}
_Script_UMG::Overlay*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Loading() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Lock() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b8);
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_UserLevelResponse() {
    return (void*)((uintptr_t)this + 0x32c);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Locked() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Overlay() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_TBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d0);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Text_Free() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d8);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Thumbnail() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::ProgressBar*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Tier_ProgressBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_TierText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2f0);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_WidgetSwitcher_36() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2f8);
}
int32_t& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_UserLevel() {
    return *(int32_t*)((uintptr_t)this + 0x300);
}
bool _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Selected() {
    return (*(uint8_t*)((uintptr_t)this + 0x304 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::set_Selected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x304 + 0);
    *(uint8_t*)((uintptr_t)this + 0x304 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_ToyboxTierClicked() {
    return (void*)((uintptr_t)this + 0x308);
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_ToyboxTierOnHovered() {
    return (void*)((uintptr_t)this + 0x318);
}
int32_t& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_LevelOffset() {
    return *(int32_t*)((uintptr_t)this + 0x328);
}
int32_t& _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_ActualLevel() {
    return *(int32_t*)((uintptr_t)this + 0x340);
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Item() {
    return (void*)((uintptr_t)this + 0x344);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Color_BG_Coin() {
    return (void*)((uintptr_t)this + 0x350);
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Color_BG_Common() {
    return (void*)((uintptr_t)this + 0x378);
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Color_BG_Rare() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Color_BG_Epic() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Found_Widgets() {
    return (void*)((uintptr_t)this + 0x4e0);
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Color_BG_Legendary() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Color_Index_Coin() {
    return (void*)((uintptr_t)this + 0x418);
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Color_Index_Common() {
    return (void*)((uintptr_t)this + 0x440);
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Color_Index_Epic() {
    return (void*)((uintptr_t)this + 0x490);
}
void* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::get_Color_Index_Legendary() {
    return (void*)((uintptr_t)this + 0x4b8);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/ToyBox/UI_ToyBoxTierMain.UI_ToyBoxTierMain_C");
    return result;
}
bool _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::IsCoins() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::BndEvt__UI_N_BattlePassTierMain_Button_78_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::SetupLevels(_Script_Playtime_Multiplayer::LevelResponse& LevelResponse) {
    return;
}
void _Game_Interface_MainMenu_ToyBox_UI_ToyBoxTierMain::UI_ToyBoxTierMain_C::ToyboxTierOnHovered__DelegateSignature(_Script_Playtime_Multiplayer::ToyBoxResponseItem Item) {
    return;
}
