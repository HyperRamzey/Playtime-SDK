#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_General_UI_BasicButton\UI_BasicButton_C.hpp"
#include "UI_MP_StartServer_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_MP_N_MenuButton\UI_MP_N_MenuButton_C.hpp"
#include "..\_Game_Interface_UI_LoadingScreen\UI_LoadingScreen_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\CheckBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UniformGridPanel.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::BndEvt__UI_MP_StartServer_UI_BasicButton_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_ShowLoadingScreen() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_showdev() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Script_UMG::CheckBox*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_LanGame() {
    return *(_Script_UMG::CheckBox**)((uintptr_t)this + 0x288);
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::QuickplayHost() {
    return;
}
_Script_UMG::Button*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_Button() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x278);
}
_Script_UMG::CheckBox*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_FriendsOnly() {
    return *(_Script_UMG::CheckBox**)((uintptr_t)this + 0x280);
}
_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_Start() {
    return *(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C**)((uintptr_t)this + 0x298);
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_UI_BasicButton() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x2a0);
}
_Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_UI_LoadingScreen() {
    return *(_Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::UniformGridPanel*& _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_UniformGridPanel_0() {
    return *(_Script_UMG::UniformGridPanel**)((uintptr_t)this + 0x2b0);
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::CreateLevelButtons(void*& Levels) {
    return;
}
int32_t& _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_Level() {
    return *(int32_t*)((uintptr_t)this + 0x2b8);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_BackPressed() {
    return (void*)((uintptr_t)this + 0x2c0);
}
bool _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_CalledFromQuickplay() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::set_CalledFromQuickplay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_QuickplayHostFailed() {
    return (void*)((uintptr_t)this + 0x2d8);
}
bool _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_TryingToHost() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::set_TryingToHost(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::get_AddComingSoon() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e9 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::set_AddComingSoon(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/ServerBrowser/UI_MP_StartServer.UI_MP_StartServer_C");
    return result;
}
void* _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::GetAllPublicLevels() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::GetRandomLevel(int32_t& OutItem) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::OnFailure_8953034D42070F751E3C3A94F517334F() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::OnSuccess_8953034D42070F751E3C3A94F517334F() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::BndEvt__UI_MP_StartServer_Start_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C* Caller) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::BndEvt__UI_MP_StartServer_PublicGame_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::ExecuteUbergraph_UI_MP_StartServer(int32_t EntryPoint) {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::QuickplayHostFailed__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C::BackPressed__DelegateSignature() {
    return;
}
