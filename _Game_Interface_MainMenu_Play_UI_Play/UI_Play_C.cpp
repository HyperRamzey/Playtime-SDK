#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_General_UI_BasicButton\UI_BasicButton_C.hpp"
#include "..\_Game_Interface_MainMenu_Play_UI_FindingGame\UI_FindingGame_C.hpp"
#include "UI_Play_C.hpp"
#include "..\_Game_Interface_MainMenu_Play_UI_PlayCard\UI_PlayCard_C.hpp"
#include "..\_Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser\UI_MP_ServerBrowser_C.hpp"
#include "..\_Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer\UI_MP_StartServer_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Timespan.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::BndEvt__UI_Play_Host_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature() {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_SelectPlayMode() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
void* _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_WidgetSwitcher_134() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_ShowSwitcher() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_3_BackPressed__DelegateSignature() {
    return;
}
_Game_Interface_General_UI_BasicButton::UI_BasicButton_C*& _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_Back() {
    return *(_Game_Interface_General_UI_BasicButton::UI_BasicButton_C**)((uintptr_t)this + 0x270);
}
_Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C*& _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_UI_MP_ServerBrowser() {
    return *(_Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C*& _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_ServerList() {
    return *(_Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C**)((uintptr_t)this + 0x290);
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::ExecuteUbergraph_UI_Play(int32_t EntryPoint) {
    return;
}
_Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C*& _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_Host() {
    return *(_Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C**)((uintptr_t)this + 0x278);
}
_Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C*& _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_Quickplay() {
    return *(_Game_Interface_MainMenu_Play_UI_PlayCard::UI_PlayCard_C**)((uintptr_t)this + 0x280);
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_TR() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x298);
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::GetPenaltiesSuccess(int32_t Value) {
    return;
}
_Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C*& _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_UI_FindingGame() {
    return *(_Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C**)((uintptr_t)this + 0x2a0);
}
_Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C*& _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_UI_MP_StartServer() {
    return *(_Game_Interface_MainMenu_ServerBrowser_UI_MP_StartServer::UI_MP_StartServer_C**)((uintptr_t)this + 0x2b0);
}
void* _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_HostReleased() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_ListReleased() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_QuickplayReleased() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_GoBack() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::QuickplayReleased__DelegateSignature() {
    return;
}
bool _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_Penalized() {
    return (*(uint8_t*)((uintptr_t)this + 0x300 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::set_Penalized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x300 + 0);
    *(uint8_t*)((uintptr_t)this + 0x300 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::get_PenaltySeconds() {
    return *(int32_t*)((uintptr_t)this + 0x304);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Play/UI_Play.UI_Play_C");
    return result;
}
int32_t _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::GetMinutesTimespan(_Script_CoreUObject::Timespan InTimespan) {
    return;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::OnFailure_0A33D4554B1C14C6362812B574431F02() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::OnSuccess_0A33D4554B1C14C6362812B574431F02() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_5_Back__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::BndEvt__UI_Play_UI_MP_ServerBrowser_K2Node_ComponentBoundEvent_4_Back__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::Update_Localization() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::GetPenaltiesFail(void* ErrorMessage) {
    return;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::Construct0() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::BndEvt__UI_Play_Back_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::BndEvt__UI_Play_UI_MP_StartServer_K2Node_ComponentBoundEvent_8_QuickplayHostFailed__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::BndEvt__UI_Play_ServerList_K2Node_ComponentBoundEvent_2_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::BndEvt__UI_Play_Quickplay_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::BndEvt__UI_Play_UI_FindingGame_K2Node_ComponentBoundEvent_7_WantsToTryHosting__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::GoBack__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::ListReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Play_UI_Play::UI_Play_C::HostReleased__DelegateSignature() {
    return;
}
