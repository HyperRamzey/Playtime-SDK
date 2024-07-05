#include "..\FUObjectArray.hpp"
#include "UI_MatchmakingStatus_C.hpp"
#include "..\_Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface\UI_PrivateMatchCodeInterface_C.hpp"
#include "..\_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton\UI_StoreTooltipButton_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\Throbber.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_T_PlayerCount() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x298);
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::EnableMatchButton() {
    return;
}
void* _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_MapPreview() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_MapPreviewFrame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
_Script_UMG::Border*& _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_Players_Header() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x278);
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::StartQueue() {
    return;
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_PublicPrivate_Switcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x280);
}
_Script_UMG::HorizontalBox*& _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_Status_Searching() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x288);
}
_Script_UMG::WidgetSwitcher*& _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_Status_Switcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x290);
}
bool _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_StartedCountdownTimer() {
    return (*(uint8_t*)((uintptr_t)this + 0x31c + 0)) & 1 != 0;
}
_Script_UMG::Throbber*& _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_Throbber_122() {
    return *(_Script_UMG::Throbber**)((uintptr_t)this + 0x2a0);
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::EndQueueStatusTimer() {
    return;
}
_Script_UMG::TextBlock*& _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_Timer() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a8);
}
_Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C*& _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_UI_PrivateMatchCodeInterface() {
    return *(_Game_Interface_MainMenu_Widgets_UI_PrivateMatchCodeInterface::UI_PrivateMatchCodeInterface_C**)((uintptr_t)this + 0x2b0);
}
_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C*& _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_UI_StoreTooltipButton() {
    return *(_Game_Interface_Shoppy_Widgets_UI_StoreTooltipButton::UI_StoreTooltipButton_C**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::VerticalBox*& _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_VB_Players() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x2c0);
}
int32_t& _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_CurrentThumbnail() {
    return *(int32_t*)((uintptr_t)this + 0x2c8);
}
void* _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_OnQueueStarted() {
    return (void*)((uintptr_t)this + 0x2d0);
}
int32_t& _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_StartTime() {
    return *(int32_t*)((uintptr_t)this + 0x318);
}
void* _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_OnQueueStopped() {
    return (void*)((uintptr_t)this + 0x2e0);
}
bool _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_PrivateMatch() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f0 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::set_PrivateMatch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_MapPreviewMat() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2f8);
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::OnQueueStopped__DelegateSignature() {
    return;
}
bool _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_isQueued() {
    return (*(uint8_t*)((uintptr_t)this + 0x300 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::set_isQueued(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x300 + 0);
    *(uint8_t*)((uintptr_t)this + 0x300 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_RateLimited() {
    return (*(uint8_t*)((uintptr_t)this + 0x301 + 0)) & 1 != 0;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::set_RateLimited(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x301 + 0);
    *(uint8_t*)((uintptr_t)this + 0x301 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_QueueStatus_Timer() {
    return (void*)((uintptr_t)this + 0x308);
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::ToggleLobbyStatusWidgets(bool Visible) {
    return;
}
void* _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::get_Starting_Timer() {
    return (void*)((uintptr_t)this + 0x310);
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::set_StartedCountdownTimer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31c + 0);
    *(uint8_t*)((uintptr_t)this + 0x31c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Interface/MainMenu/Matchmaking/UI_MatchmakingStatus.UI_MatchmakingStatus_C");
    return result;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::GetUpdatedLobbyList(void*& List) {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::ExecuteUbergraph_UI_MatchmakingStatus(int32_t EntryPoint) {
    return;
}
void* _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::Get_T_PlayerCount_Text_0() {
    return;
}
void* _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::Get_T_QueueBanner_Text_0() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::ThumbnailSequence() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::StopQueue() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::BndEvt__UI_MatchmakingStatus_UI_StoreTooltipButton_K2Node_ComponentBoundEvent_0_ButtonReleased__DelegateSignature() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::RateLimit() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::UpdateQueueStatus() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::StartQueueStatusTimer() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::DecrementTimer() {
    return;
}
void _Game_Interface_MainMenu_Matchmaking_UI_MatchmakingStatus::UI_MatchmakingStatus_C::OnQueueStarted__DelegateSignature() {
    return;
}
