#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_General_UI_BackButton\UI_BackButton_C.hpp"
#include "..\_Game_Interface_General_UI_BasicButton\UI_BasicButton_C.hpp"
#include "..\_Game_Interface_General_UI_KeyBind\UI_KeyBind_C.hpp"
#include "..\_Game_Interface_General_UI_ResetToDefaults\UI_ResetToDefaults_C.hpp"
#include "..\_Game_Interface_General_UI_Setting\UI_Setting_C.hpp"
#include "..\_Game_Interface_General_UI_WhiteBGButton\UI_WhiteBGButton_C.hpp"
#include "..\_Game_Interface_Settings_UI_FloatSliderSetting\UI_FloatSliderSetting_C.hpp"
#include "..\_Game_Interface_Settings_UI_IntSliderSetting\UI_IntSliderSetting_C.hpp"
#include "..\_Game_Interface_Settings_UI_ScrollerSetting\UI_ScrollerSetting_C.hpp"
#include "UI_Settings_Menu_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\PlaytimeSettings.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_MinimalHUD() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x350);
}
void* _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::ExecuteUbergraph_UI_Settings_Menu(int32_t EntryPoint) {
    return;
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Resolution() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x378);
}
_Script_UMG::ScrollBox*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Audio() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x280);
}
_Game_Interface_General_UI_Setting::UI_Setting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_MovementLabel() {
    return *(_Game_Interface_General_UI_Setting::UI_Setting_C**)((uintptr_t)this + 0x358);
}
_Game_Interface_General_UI_Setting::UI_Setting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_ActionsLabel() {
    return *(_Game_Interface_General_UI_Setting::UI_Setting_C**)((uintptr_t)this + 0x268);
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::CreateUserSuccess() {
    return;
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_ShouldLimitFPS() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x3d0);
}
_Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_IntSFXVolume() {
    return *(_Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C**)((uintptr_t)this + 0x330);
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Anti_Aliasing() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x270);
}
_Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_backward() {
    return *(_Game_Interface_General_UI_KeyBind::UI_KeyBind_C**)((uintptr_t)this + 0x290);
}
_Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Jump() {
    return *(_Game_Interface_General_UI_KeyBind::UI_KeyBind_C**)((uintptr_t)this + 0x338);
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_ScreenMode() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x3a8);
}
_Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Right() {
    return *(_Game_Interface_General_UI_KeyBind::UI_KeyBind_C**)((uintptr_t)this + 0x390);
}
_Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Left() {
    return *(_Game_Interface_General_UI_KeyBind::UI_KeyBind_C**)((uintptr_t)this + 0x348);
}
_Game_Interface_General_UI_WhiteBGButton::UI_WhiteBGButton_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Apply() {
    return *(_Game_Interface_General_UI_WhiteBGButton::UI_WhiteBGButton_C**)((uintptr_t)this + 0x278);
}
_Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_FOV() {
    return *(_Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C**)((uintptr_t)this + 0x2d0);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_AudioButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x288);
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Bobbing() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x298);
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_ShaderQuality() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x3c0);
}
_Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_IntMusicVolume() {
    return *(_Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C**)((uintptr_t)this + 0x328);
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_ColorblindMode() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::ScrollBox*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Controls() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_TextChat() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x408);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_ControlsButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x2b0);
}
_Game_Interface_Settings_UI_FloatSliderSetting::UI_FloatSliderSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Sensitivity() {
    return *(_Game_Interface_Settings_UI_FloatSliderSetting::UI_FloatSliderSetting_C**)((uintptr_t)this + 0x3b0);
}
_Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Crouch() {
    return *(_Game_Interface_General_UI_KeyBind::UI_KeyBind_C**)((uintptr_t)this + 0x2b8);
}
_Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Sprint() {
    return *(_Game_Interface_General_UI_KeyBind::UI_KeyBind_C**)((uintptr_t)this + 0x3e0);
}
_Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Emote() {
    return *(_Game_Interface_General_UI_KeyBind::UI_KeyBind_C**)((uintptr_t)this + 0x2c0);
}
_Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Forward() {
    return *(_Game_Interface_General_UI_KeyBind::UI_KeyBind_C**)((uintptr_t)this + 0x2c8);
}
_Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Interact() {
    return *(_Game_Interface_General_UI_KeyBind::UI_KeyBind_C**)((uintptr_t)this + 0x310);
}
_Script_UMG::ScrollBox*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Gameplay() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x2d8);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_GameplayButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x2e0);
}
_Game_Interface_Settings_UI_FloatSliderSetting::UI_FloatSliderSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Gamma() {
    return *(_Game_Interface_Settings_UI_FloatSliderSetting::UI_FloatSliderSetting_C**)((uintptr_t)this + 0x2e8);
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_ShadowQuality() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x3c8);
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::Back__DelegateSignature() {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ControlsButton_K2Node_ComponentBoundEvent_11_OnReleased__DelegateSignature() {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_GPUDisplay() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2f0);
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Subtitles() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x3f0);
}
_Script_UMG::ScrollBox*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Graphics() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x2f8);
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_PostProcessQuality() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x360);
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_ViewDistanceQuality() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x438);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_GraphicsButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x300);
}
_Script_UMG::Image*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Image_14() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x308);
}
_Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_IntGrabpackVolume() {
    return *(_Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C**)((uintptr_t)this + 0x318);
}
_Game_Interface_General_UI_WhiteBGButton::UI_WhiteBGButton_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_UI_WhiteBGButton() {
    return *(_Game_Interface_General_UI_WhiteBGButton::UI_WhiteBGButton_C**)((uintptr_t)this + 0x428);
}
void* _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_UserCorrelation() {
    return (void*)((uintptr_t)this + 0x478);
}
_Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_IntMainVolume() {
    return *(_Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C**)((uintptr_t)this + 0x320);
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ResolutionScale_K2Node_ComponentBoundEvent_2_ValueChanged__DelegateSignature(int32_t Value) {
    return;
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Language() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x340);
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_ReflectionQuality() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x368);
}
_Game_Interface_General_UI_ResetToDefaults::UI_ResetToDefaults_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_RESETTODEFAULTS() {
    return *(_Game_Interface_General_UI_ResetToDefaults::UI_ResetToDefaults_C**)((uintptr_t)this + 0x370);
}
_Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_ResolutionScale() {
    return *(_Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C**)((uintptr_t)this + 0x380);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_RestorePurchasesButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x388);
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::Construct0() {
    return;
}
_Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Roll() {
    return *(_Game_Interface_General_UI_KeyBind::UI_KeyBind_C**)((uintptr_t)this + 0x398);
}
_Game_Interface_General_UI_KeyBind::UI_KeyBind_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Sabotage() {
    return *(_Game_Interface_General_UI_KeyBind::UI_KeyBind_C**)((uintptr_t)this + 0x3a0);
}
_Game_Interface_Settings_UI_FloatSliderSetting::UI_FloatSliderSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Severity() {
    return *(_Game_Interface_Settings_UI_FloatSliderSetting::UI_FloatSliderSetting_C**)((uintptr_t)this + 0x3b8);
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_SkipCinematic() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x3d8);
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_StreamerMode() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x3e8);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Switcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x3f8);
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_UI_BackButton_K2Node_ComponentBoundEvent_23_Released__DelegateSignature() {
    return;
}
_Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_TargetFPS() {
    return *(_Game_Interface_Settings_UI_IntSliderSetting::UI_IntSliderSetting_C**)((uintptr_t)this + 0x400);
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_TextureQuality() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x410);
}
_Game_Interface_General_UI_BackButton::UI_BackButton_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_UI_BackButton() {
    return *(_Game_Interface_General_UI_BackButton::UI_BackButton_C**)((uintptr_t)this + 0x418);
}
_Game_Interface_General_UI_ResetToDefaults::UI_ResetToDefaults_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_UI_ResetToDefaults() {
    return *(_Game_Interface_General_UI_ResetToDefaults::UI_ResetToDefaults_C**)((uintptr_t)this + 0x420);
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_PostProcessQuality_K2Node_ComponentBoundEvent_28_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_VFXQuality() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x430);
}
_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_VSYNC() {
    return *(_Game_Interface_Settings_UI_ScrollerSetting::UI_ScrollerSetting_C**)((uintptr_t)this + 0x440);
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_PlayerStatusPerks_K2Node_ComponentBoundEvent_36_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
int32_t& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_CurrentTab() {
    return *(int32_t*)((uintptr_t)this + 0x448);
}
void* _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_Back() {
    return (void*)((uintptr_t)this + 0x450);
}
void* _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_AvailableResolutions() {
    return (void*)((uintptr_t)this + 0x460);
}
_Script_Playtime_Multiplayer::PlaytimeSettings*& _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_LocalSettings() {
    return *(_Script_Playtime_Multiplayer::PlaytimeSettings**)((uintptr_t)this + 0x470);
}
void* _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::get_SteamCorrelation() {
    return (void*)((uintptr_t)this + 0x488);
}
_Script_CoreUObject::Class* _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Settings/UI_Settings_Menu.UI_Settings_Menu_C");
    return result;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::Update_Localization() {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ViewDistanceQuality_K2Node_ComponentBoundEvent_30_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::MinimalHUD_OnValueChanged(void* Selection) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::UpdateVisuals() {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::Set_Current_Tab(int32_t CurrentTab) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::LoadSettings() {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_Resolution_K2Node_ComponentBoundEvent_0_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_Anti_Aliasing_K2Node_ComponentBoundEvent_1_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ScreenMode_K2Node_ComponentBoundEvent_3_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ShaderQuality_K2Node_ComponentBoundEvent_4_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ShadowQuality_K2Node_ComponentBoundEvent_5_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_TargetFPS_K2Node_ComponentBoundEvent_6_ValueChanged__DelegateSignature(int32_t Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_TextureQuality_K2Node_ComponentBoundEvent_7_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_VSYNC_K2Node_ComponentBoundEvent_8_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_Apply_K2Node_ComponentBoundEvent_9_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_Severity_K2Node_ComponentBoundEvent_21_ValueChanged__DelegateSignature(float Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_GraphicsButton_K2Node_ComponentBoundEvent_10_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_RESETTODEFAULTS_K2Node_ComponentBoundEvent_12_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_AudioButton_K2Node_ComponentBoundEvent_14_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_Sensitivity_K2Node_ComponentBoundEvent_15_ValueChanged__DelegateSignature(float Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_GameplayButton_K2Node_ComponentBoundEvent_16_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_IntSFXVolume_K2Node_ComponentBoundEvent_20_ValueChanged__DelegateSignature(int32_t Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_IntMusicVolume_K2Node_ComponentBoundEvent_22_ValueChanged__DelegateSignature(int32_t Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_IntMainVolume_K2Node_ComponentBoundEvent_24_ValueChanged__DelegateSignature(int32_t Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_Bobbing_K2Node_ComponentBoundEvent_18_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ColorblindMode_K2Node_ComponentBoundEvent_19_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_SkipCinematic_K2Node_ComponentBoundEvent_13_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ReflectionQuality_K2Node_ComponentBoundEvent_25_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::CloseMenu() {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::ForceCloseMenu() {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_UI_WhiteBGButton_K2Node_ComponentBoundEvent_26_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_ShouldLimitFPS_K2Node_ComponentBoundEvent_27_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_FOV_K2Node_ComponentBoundEvent_29_ValueChanged__DelegateSignature(int32_t Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_Language_K2Node_ComponentBoundEvent_31_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_Subtitles_K2Node_ComponentBoundEvent_32_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::SaveSettingsOnDelay() {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_IntGrabpackVolume_K2Node_ComponentBoundEvent_33_ValueChanged__DelegateSignature(int32_t Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_TextChat_K2Node_ComponentBoundEvent_34_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_VFXQuality_K2Node_ComponentBoundEvent_35_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_StreamerMode_K2Node_ComponentBoundEvent_37_ValueChanged__DelegateSignature(int32_t Index, void* Value) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::Destruct0() {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_RestorePurchasesButton_K2Node_ComponentBoundEvent_17_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::BndEvt__UI_Settings_Menu_UI_ResetToDefaults_K2Node_ComponentBoundEvent_38_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::CreateUserError(void* ErrorMessage) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::Fail(void* ErrorMessage) {
    return;
}
void _Game_Interface_Settings_UI_Settings_Menu::UI_Settings_Menu_C::MigrationSuccess() {
    return;
}
