#include "..\FUObjectArray.hpp"
#include "UI_LoadingScreen_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::OnFailure_F68ED22C430FAEAB863EDF93B38CF1AC() {
    return;
}
_Script_UMG::Image*& _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_Image_136() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
void _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::PreConstruct0(bool IsDesignTime) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_black_bg() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_Anim_Loading() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::Image*& _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_FadeInBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::Button*& _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_B_Cancel() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_Overlay() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Image*& _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_Image_2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_LoadingScreen() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::TextBlock*& _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_TextBlock_74() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::Image*& _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_P_Logo() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::TextBlock*& _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_T_LoadingMessage() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::TextBlock*& _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_T_TimeoutTime() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c0);
}
void* _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_Posters() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_LoadingMessage() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_TimeoutTimer() {
    return (void*)((uintptr_t)this + 0x2f0);
}
bool _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_IsConnecting() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f8 + 0)) & 1 != 0;
}
void _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::set_IsConnecting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::get_DisplayTimer() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f9 + 0)) & 1 != 0;
}
void _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::set_DisplayTimer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/UI_LoadingScreen.UI_LoadingScreen_C");
    return result;
}
void* _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::GetText_0() {
    return;
}
void _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::ClearTimer() {
    return;
}
void* _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::GetTimeoutText() {
    return;
}
void _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::OnSuccess_F68ED22C430FAEAB863EDF93B38CF1AC() {
    return;
}
void _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::BndEvt__UI_LoadingScreen_B_Cancel_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature() {
    return;
}
void _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::OnTimeout() {
    return;
}
void _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::Construct0() {
    return;
}
void _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::ClearLoadingMessage() {
    return;
}
void _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::ReconnectingLoadingMessage() {
    return;
}
void _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::OnGotInventory(void*& Inventory) {
    return;
}
void _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::ExecuteUbergraph_UI_LoadingScreen(int32_t EntryPoint) {
    return;
}
void _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C::SilentlyFail(void* ErrorMessage) {
    return;
}
