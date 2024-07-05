#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_General_UI_BasicButton\UI_BasicButton_C.hpp"
#include "UI_PauseMenu_C.hpp"
#include "..\_Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif\UI_MP_Notif_C.hpp"
#include "..\_Game_Interface_Settings_UI_Settings_Menu\UI_Settings_Menu_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
void* _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_Text() {
    return (void*)((uintptr_t)this + 0x2c8);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_HideSettingsMenu() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_Continue_BasicButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x278);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_Settings_BasicButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x2b0);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_Challenges_BasicButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x270);
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::BndEvt__UI_PauseMenu_LeaveGame_BasicButton_1_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature() {
    return;
}
_Script_UMG::ScrollBox*& _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_FriendsList() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_Image_100() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_LeaveGame_BasicButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x290);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_Menu_BasicButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x298);
}
_Script_UMG::Overlay*& _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_PauseMenu() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_PrimaryWidgetSwitcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_SkipTutorial_BasicButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x2b8);
}
_Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C*& _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_UI_Settings_Menu() {
    return *(_Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C**)((uintptr_t)this + 0x2c0);
}
_Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C*& _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_W_Notif() {
    return *(_Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C**)((uintptr_t)this + 0x2e0);
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::BndEvt__UI_PauseMenu_Menu_BasicButton_K2Node_ComponentBoundEvent_7_OnReleased__DelegateSignature() {
    return;
}
_Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C*& _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_W_Settings() {
    return *(_Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C**)((uintptr_t)this + 0x2e8);
}
void* _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_OnUnpause() {
    return (void*)((uintptr_t)this + 0x2f0);
}
_Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C*& _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_W_Notif_SkipTutorial() {
    return *(_Game_Interface_MainMenu_ServerBrowser_UI_MP_Notif::UI_MP_Notif_C**)((uintptr_t)this + 0x300);
}
bool _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::get_EnableLeaverPenaltySystem() {
    return (*(uint8_t*)((uintptr_t)this + 0x308 + 0)) & 1 != 0;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::set_EnableLeaverPenaltySystem(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x308 + 0);
    *(uint8_t*)((uintptr_t)this + 0x308 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_PauseMenu.UI_PauseMenu_C");
    return result;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::OnFailure_D9C8593747F77C44853ACDB8F04BBFDC(void*& Results) {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::OnSuccess_D9C8593747F77C44853ACDB8F04BBFDC(void*& Results) {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::DontQuit() {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::BndEvt__UI_PauseMenu_Settings_BasicButton_K2Node_ComponentBoundEvent_4_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::BndEvt__UI_PauseMenu_Continue_BasicButton_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::BndEvt__UI_PauseMenu_LeaveGame_BasicButton_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::ForceUnpause() {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::DontSkip() {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::QuitToMenu() {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::Construct0() {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::BndEvt__UI_PauseMenu_UI_Settings_Menu_K2Node_ComponentBoundEvent_0_Back__DelegateSignature() {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::SkipTutorial() {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::Update_Localization() {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::Success() {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::Fail(void* ErrorMessage) {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::ExecuteUbergraph_UI_PauseMenu(int32_t EntryPoint) {
    return;
}
void _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C::OnUnpause__DelegateSignature() {
    return;
}
