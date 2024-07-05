#include "..\FUObjectArray.hpp"
#include "..\_Game_Base_BP_MultiplayerPlayerController\BP_MultiplayerPlayerController_C.hpp"
#include "BP_MultiplayerPlayerState_C.hpp"
#include "..\_Game_Interface_HUDComponents_UI_InGameNotificationList\UI_InGameNotificationList_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PlayerState.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\PlaytimePlayerState.hpp"
#include "..\_Script_SteamCore\SteamCoreVoice.hpp"
void* _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_Gestures() {
    return (void*)((uintptr_t)this + 0x390);
}
_Script_Engine::SceneComponent*& _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x388);
}
void* _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x380);
}
bool _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_LoadingScreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x420 + 0)) & 1 != 0;
}
void* _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_Emote() {
    return (void*)((uintptr_t)this + 0x3a8);
}
bool _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_Won_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c1 + 0)) & 1 != 0;
}
void* _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_Clothes() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::BeginPlay_VoiceChat() {
    return;
}
void* _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_Skins() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::set_Ready_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_Ready_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c0 + 0)) & 1 != 0;
}
_Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C*& _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_UI_in_Game_Notification_List() {
    return *(_Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C**)((uintptr_t)this + 0x410);
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::set_Won_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_Down_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c2 + 0)) & 1 != 0;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::set_HasSavedProperties(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::set_Down_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_HasSavedProperties() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c3 + 0)) & 1 != 0;
}
void* _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_LastTransform() {
    return (void*)((uintptr_t)this + 0x3d0);
}
bool _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_InWuggyHole_() {
    return (*(uint8_t*)((uintptr_t)this + 0x400 + 0)) & 1 != 0;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::Client_SubmitMatchSummary(void* MatchID, void*& Results) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::set_InWuggyHole_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x400 + 0);
    *(uint8_t*)((uintptr_t)this + 0x400 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::ReplicateAudioData(void*& CompressedBuffer, int32_t DesiredSampleRate) {
    return;
}
int32_t& _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_CurrentTrainCart() {
    return *(int32_t*)((uintptr_t)this + 0x404);
}
void* _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_PlayerStatus() {
    return (void*)((uintptr_t)this + 0x408);
}
_Script_SteamCore::SteamCoreVoice*& _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_SoundObj() {
    return *(_Script_SteamCore::SteamCoreVoice**)((uintptr_t)this + 0x418);
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::set_LoadingScreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x420 + 0);
    *(uint8_t*)((uintptr_t)this + 0x420 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_MatchCorrelation() {
    return (void*)((uintptr_t)this + 0x428);
}
int32_t& _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_TicketAmount() {
    return *(int32_t*)((uintptr_t)this + 0x438);
}
void* _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::get_RewardableActionsList() {
    return (void*)((uintptr_t)this + 0x440);
}
_Script_CoreUObject::Class* _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Base/BP_MultiplayerPlayerState.BP_MultiplayerPlayerState_C");
    return result;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::OnRep_Down_() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::OnRep_Won_() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::OnRep_Ready_() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::ReceiveCopyProperties(_Script_Engine::PlayerState* NewPlayerState) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::OnRep_Clothes() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::OnRep_Emote() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::OnRep_Gestures() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::OnRep_Skins() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::Server_ReadyToStart(void* ID, _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C* Controller) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::Client_ReadyToStart() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::BP_DisplayTicketCollectionNotification0(void*& NotificationText, int32_t TicketsReward) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::ReceiveBeginPlay() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::Client_RewardsUI(int32_t TicketAmount, void*& RewardableActions) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::ReceiveDestroyed() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::ExecuteUbergraph_BP_MultiplayerPlayerState(int32_t EntryPoint) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::Client_ToggleLoadingScreen(bool Display) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::UpdateSavedProperties() {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::Server_ToggleLoadingScreen(bool Display_) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::TryReady(bool Ready_) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::ReceiveOverrideWith(_Script_Engine::PlayerState* OldPlayerState) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::MatchSummaryError(void* ErrorMessage) {
    return;
}
void _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C::MatchSummaryResponse(int32_t MatchXP, bool WasMatchXPDoubled, int32_t DailyFirstGameBonus, int32_t Tickets) {
    return;
}
