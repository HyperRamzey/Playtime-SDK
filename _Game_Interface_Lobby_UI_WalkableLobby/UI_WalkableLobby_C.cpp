#include "..\FUObjectArray.hpp"
#include "..\_Game_Interface_Content_UI_N_RadialProgressBar\UI_N_RadialProgressBar_C.hpp"
#include "..\_Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter\UI_CustomizeCharacter_C.hpp"
#include "..\_Game_Interface_Customization_Emotes_UI_EmoteHolder\UI_EmoteHolder_C.hpp"
#include "..\_Game_Interface_Lobby_UI_Ready_Indicator\UI_Ready_Indicator_C.hpp"
#include "UI_WalkableLobby_C.hpp"
#include "..\_Game_Interface_MainMenu_Components_T_CurrencyDisplay\T_CurrencyDisplay_C.hpp"
#include "..\_Game_Interface_MainMenu_UI_MP_N_MenuButton\UI_MP_N_MenuButton_C.hpp"
#include "..\_Game_Interface_UI_EarlyAccess_Overlay\UI_EarlyAccess_Overlay_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::ExecuteUbergraph_UI_WalkableLobby(int32_t EntryPoint) {
    return;
}
void* _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::Event_Show_Emotes() {
    return;
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_MainWidgetSwitcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::Image*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_CustomizeBackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_Open() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_GameStartingLoop() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
int32_t& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_GameStartCountdown() {
    return *(int32_t*)((uintptr_t)this + 0x338);
}
_Script_UMG::WidgetAnimation*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_GameStart() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_QueueDisplay() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2e0);
}
_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_CosmeticButton() {
    return *(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C**)((uintptr_t)this + 0x280);
}
_Script_UMG::TextBlock*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_CustomizeText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_Character() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x320);
}
_Script_UMG::TextBlock*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_GameStartingText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x298);
}
bool _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_Ready_() {
    return (*(uint8_t*)((uintptr_t)this + 0x318 + 0)) & 1 != 0;
}
_Script_UMG::Overlay*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_PlayersOverlay() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::Image*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_Image_100() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
_Script_UMG::Image*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_Image_183() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a8);
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::Destruct0() {
    return;
}
_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_LobbyCrosshair() {
    return *(_Game_Interface_Content_UI_N_RadialProgressBar::UI_N_RadialProgressBar_C**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::TextBlock*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_PlayersText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c8);
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::BndEvt__UI_WalkableLobby_UI_Customize_K2Node_ComponentBoundEvent_3_ChangedAppearance__DelegateSignature() {
    return;
}
_Script_UMG::Image*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_QueuedForMonsterBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::Image*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_QueuedForMonsterOutline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d8);
}
_Script_UMG::ScrollBox*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_ScrollBox_171() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x2e8);
}
void* _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_GameStartCountdownTimerHandle() {
    return (void*)((uintptr_t)this + 0x330);
}
_Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_T_CurrencyDisplay() {
    return *(_Game_Interface_MainMenu_Components_T_CurrencyDisplay::T_CurrencyDisplay_C**)((uintptr_t)this + 0x2f0);
}
_Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_UI_Customize() {
    return *(_Game_Interface_Customization_Cosmetics_UI_CustomizeCharacter::UI_CustomizeCharacter_C**)((uintptr_t)this + 0x2f8);
}
_Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_UI_EarlyAccess_Overlay() {
    return *(_Game_Interface_UI_EarlyAccess_Overlay::UI_EarlyAccess_Overlay_C**)((uintptr_t)this + 0x300);
}
_Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_UI_EmoteHolder() {
    return *(_Game_Interface_Customization_Emotes_UI_EmoteHolder::UI_EmoteHolder_C**)((uintptr_t)this + 0x308);
}
_Game_Interface_Lobby_UI_Ready_Indicator::UI_Ready_Indicator_C*& _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_UI_Ready_Indicator() {
    return *(_Game_Interface_Lobby_UI_Ready_Indicator::UI_Ready_Indicator_C**)((uintptr_t)this + 0x310);
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::set_Ready_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x318 + 0);
    *(uint8_t*)((uintptr_t)this + 0x318 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_PerkMenu() {
    return (*(uint8_t*)((uintptr_t)this + 0x319 + 0)) & 1 != 0;
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::set_PerkMenu(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x319 + 0);
    *(uint8_t*)((uintptr_t)this + 0x319 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::get_HidePlaycoins() {
    return (*(uint8_t*)((uintptr_t)this + 0x328 + 0)) & 1 != 0;
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::set_HidePlaycoins(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x328 + 0);
    *(uint8_t*)((uintptr_t)this + 0x328 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/Lobby/UI_WalkableLobby.UI_WalkableLobby_C");
    return result;
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::UpdateCrosshair() {
    return;
}
void* _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::Get_PlayersText_Text_0() {
    return;
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::UpdateQueueState(bool Monster_Queue__) {
    return;
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::Construct0() {
    return;
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::SetReady(bool Ready_) {
    return;
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::Update_Lobby() {
    return;
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::StartGameAnim() {
    return;
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::EventSwitchCustomization(bool NewCustomizing) {
    return;
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::BndEvt__UI_WalkableLobby_CosmeticButton_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature(_Game_Interface_MainMenu_UI_MP_N_MenuButton::UI_MP_N_MenuButton_C* Caller) {
    return;
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::OnInitialized0() {
    return;
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::BndEvt__UI_MP_Crosshair_UI_EmoteHolder_K2Node_ComponentBoundEvent_1_ClickedEmote__DelegateSignature(int32_t Index) {
    return;
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::UpdateQueueInfo() {
    return;
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::GameStartCountdownTimer() {
    return;
}
void _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C::PreConstruct0(bool IsDesignTime) {
    return;
}
