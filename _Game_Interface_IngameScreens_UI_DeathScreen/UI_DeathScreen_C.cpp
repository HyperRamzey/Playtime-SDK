#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Content_UI_N_RadialProgressBar\UI_N_RadialProgressBar_C.hpp"
#include "UI_DeathScreen_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MediaAssets\MediaPlayer.hpp"
#include "..\_Script_UMG\BackgroundBlur.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::get_Loop() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x280);
}
void* _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::get_UpdateScaryText() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::get_CancelAutoRevive() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
void _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::ExecuteUbergraph_UI_DeathScreen(int32_t EntryPoint) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::get_BeginAutoRevive() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x278);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::get_Anim() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::get_Auto_ReviveTimer() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Script_UMG::BackgroundBlur*& _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::get_BackgroundBlur_52() {
    return *(_Script_UMG::BackgroundBlur**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::get_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::CanvasPanel*& _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::get_CanvasPanel_0() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Image*& _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::get_JumpscareScreen() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::get_ScaryText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::TextBlock*& _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::get_TextBlock() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c0);
}
_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::get_UI_N_RadialProgressBar() {
    return *(_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C**)((uintptr_t)this + 0x2c8);
}
_Script_MediaAssets::MediaPlayer*& _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::get_JumpscareMovie() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x2d0);
}
void* _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::get_MonsterName() {
    return (void*)((uintptr_t)this + 0x2d8);
}
_Script_CoreUObject::Class* _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/IngameScreens/UI_DeathScreen.UI_DeathScreen_C");
    return result;
}
void _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::SetScaryText(void* SuffixText, bool Direct_) {
    return;
}
void _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::StartSelfReviveTimer() {
    return;
}
void _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::EndSelfReviveTimer() {
    return;
}
void _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::CancelSelfReviveTimer() {
    return;
}
void _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::SetSelfReviveProgress(float Progress, float TimeLeft) {
    return;
}
void _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::StartCarried() {
    return;
}
void _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::StartHooked() {
    return;
}
void _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::Construct0() {
    return;
}
void _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::KilledEvent(void* Spectated_Player) {
    return;
}
void _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C::ChangeSpectatedPlayerEvent(void* Spectated_Player) {
    return;
}
