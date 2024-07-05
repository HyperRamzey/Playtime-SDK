#include "..\FUObjectArray.hpp"
#include "..\_Game_Base_BP_MultiplayerPlayerController\BP_MultiplayerPlayerController_C.hpp"
#include "..\_Game_Base_BP_MultiplayerPlayerState\BP_MultiplayerPlayerState_C.hpp"
#include "GS_Escape_C.hpp"
#include "..\_Game_Gameplay_Game_BP_Train\BP_Train_C.hpp"
#include "..\_Game_Gameplay_Game_ToyData_BP_ToyMachine\BP_ToyMachine_C.hpp"
#include "..\_Game_Gameplay_Puzzles_BP_PuzzlePillar\BP_PuzzlePillar_C.hpp"
#include "..\_Game_Gameplay_Puzzles_BP_ToyPuzzle\BP_ToyPuzzle_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_MissionResultScreen\UI_MissionResultScreen_C.hpp"
#include "..\_Game_Interface_IngameScreens_UI_WinScreen\UI_WinScreen_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Playtime_Multiplayer\HostMigrationData.hpp"
#include "..\_Script_Playtime_Multiplayer\PlaytimeGameState.hpp"
int32_t& _Game_Base_GS_Escape::GS_Escape_C::get_CachedXP() {
    return *(int32_t*)((uintptr_t)this + 0x424);
}
void _Game_Base_GS_Escape::GS_Escape_C::ReceiveBeginPlay() {
    return;
}
void* _Game_Base_GS_Escape::GS_Escape_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x330);
}
_Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C*& _Game_Base_GS_Escape::GS_Escape_C::get_W_EndScreen() {
    return *(_Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C**)((uintptr_t)this + 0x3a8);
}
bool _Game_Base_GS_Escape::GS_Escape_C::get_FriendsOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x490 + 0)) & 1 != 0;
}
int32_t& _Game_Base_GS_Escape::GS_Escape_C::get_MaxPlayers() {
    return *(int32_t*)((uintptr_t)this + 0x348);
}
void _Game_Base_GS_Escape::GS_Escape_C::EndGame() {
    return;
}
bool _Game_Base_GS_Escape::GS_Escape_C::get_StartedGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x340 + 0)) & 1 != 0;
}
void _Game_Base_GS_Escape::GS_Escape_C::GetLeadershipLocations(void*& Locations) {
    return;
}
void* _Game_Base_GS_Escape::GS_Escape_C::get_OnUpdatedPlayers() {
    return (void*)((uintptr_t)this + 0x3c0);
}
_Script_Engine::SceneComponent*& _Game_Base_GS_Escape::GS_Escape_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x338);
}
_Game_Gameplay_Game_ToyData_BP_ToyMachine::BP_ToyMachine_C*& _Game_Base_GS_Escape::GS_Escape_C::get_ToyMachine() {
    return *(_Game_Gameplay_Game_ToyData_BP_ToyMachine::BP_ToyMachine_C**)((uintptr_t)this + 0x3f8);
}
bool _Game_Base_GS_Escape::GS_Escape_C::get_EndedGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x341 + 0)) & 1 != 0;
}
void _Game_Base_GS_Escape::GS_Escape_C::set_StartedGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x340 + 0);
    *(uint8_t*)((uintptr_t)this + 0x340 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Base_GS_Escape::GS_Escape_C::set_EndedGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x341 + 0);
    *(uint8_t*)((uintptr_t)this + 0x341 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Base_GS_Escape::GS_Escape_C::get_PlayerCount() {
    return *(int32_t*)((uintptr_t)this + 0x344);
}
int32_t& _Game_Base_GS_Escape::GS_Escape_C::get_CurrentToyPartIndex() {
    return *(int32_t*)((uintptr_t)this + 0x34c);
}
void* _Game_Base_GS_Escape::GS_Escape_C::get_RewardableActionsList() {
    return (void*)((uintptr_t)this + 0x468);
}
void* _Game_Base_GS_Escape::GS_Escape_C::get_ToySelection() {
    return (void*)((uintptr_t)this + 0x350);
}
void _Game_Base_GS_Escape::GS_Escape_C::Open_Monster_Doors() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::set_LoadingScreenWidget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Base_GS_Escape::GS_Escape_C::get_PlayerAsMonster() {
    return *(int32_t*)((uintptr_t)this + 0x354);
}
void _Game_Base_GS_Escape::GS_Escape_C::set_FriendsOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x490 + 0);
    *(uint8_t*)((uintptr_t)this + 0x490 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Base_GS_Escape::GS_Escape_C::get_Players() {
    return (void*)((uintptr_t)this + 0x358);
}
bool _Game_Base_GS_Escape::GS_Escape_C::get_MonsterWin_() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 1 != 0;
}
bool _Game_Base_GS_Escape::GS_Escape_C::get_Ended() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b1 + 0)) & 1 != 0;
}
void* _Game_Base_GS_Escape::GS_Escape_C::get_LeadershipPerkPlayers() {
    return (void*)((uintptr_t)this + 0x428);
}
_Game_Gameplay_Game_BP_Train::BP_Train_C*& _Game_Base_GS_Escape::GS_Escape_C::get_Train() {
    return *(_Game_Gameplay_Game_BP_Train::BP_Train_C**)((uintptr_t)this + 0x400);
}
void _Game_Base_GS_Escape::GS_Escape_C::set_MonsterWin_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Base_GS_Escape::GS_Escape_C::get_PlayerWinCount() {
    return *(int32_t*)((uintptr_t)this + 0x36c);
}
void* _Game_Base_GS_Escape::GS_Escape_C::get_Cached_EndGame() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Game_Base_GS_Escape::GS_Escape_C::get_LivingPlayers() {
    return (void*)((uintptr_t)this + 0x370);
}
bool _Game_Base_GS_Escape::GS_Escape_C::get_NormalGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x380 + 0)) & 1 != 0;
}
bool _Game_Base_GS_Escape::GS_Escape_C::get_HasSetupMatch_() {
    return (*(uint8_t*)((uintptr_t)this + 0x478 + 0)) & 1 != 0;
}
void* _Game_Base_GS_Escape::GS_Escape_C::get_MatchCorrelation() {
    return (void*)((uintptr_t)this + 0x480);
}
void _Game_Base_GS_Escape::GS_Escape_C::set_NormalGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x380 + 0);
    *(uint8_t*)((uintptr_t)this + 0x380 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Base_GS_Escape::GS_Escape_C::get_TimeRemaining() {
    return *(float*)((uintptr_t)this + 0x384);
}
float& _Game_Base_GS_Escape::GS_Escape_C::get_AskToBeMonsterTimeRemaining() {
    return *(float*)((uintptr_t)this + 0x3b8);
}
bool _Game_Base_GS_Escape::GS_Escape_C::get_SkipLobby() {
    return (*(uint8_t*)((uintptr_t)this + 0x388 + 0)) & 1 != 0;
}
float& _Game_Base_GS_Escape::GS_Escape_C::get_TotalMatchTimeInSeconds() {
    return *(float*)((uintptr_t)this + 0x3e4);
}
void _Game_Base_GS_Escape::GS_Escape_C::set_SkipLobby(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x388 + 0);
    *(uint8_t*)((uintptr_t)this + 0x388 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C*& _Game_Base_GS_Escape::GS_Escape_C::get_LocalPuzzle() {
    return *(_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C**)((uintptr_t)this + 0x448);
}
_Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C*& _Game_Base_GS_Escape::GS_Escape_C::get_Monster() {
    return *(_Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C**)((uintptr_t)this + 0x390);
}
void* _Game_Base_GS_Escape::GS_Escape_C::get_EndGameCategory() {
    return (void*)((uintptr_t)this + 0x398);
}
int32_t& _Game_Base_GS_Escape::GS_Escape_C::get_StartingSurvivorCount() {
    return *(int32_t*)((uintptr_t)this + 0x494);
}
int32_t& _Game_Base_GS_Escape::GS_Escape_C::get_Cached_PlayerWinCount() {
    return *(int32_t*)((uintptr_t)this + 0x39c);
}
float& _Game_Base_GS_Escape::GS_Escape_C::get_NewGameTimeRemaining() {
    return *(float*)((uintptr_t)this + 0x3a0);
}
void* _Game_Base_GS_Escape::GS_Escape_C::get_NextLevel() {
    return (void*)((uintptr_t)this + 0x410);
}
float& _Game_Base_GS_Escape::GS_Escape_C::get_StartGameTimeInSeconds() {
    return *(float*)((uintptr_t)this + 0x3e0);
}
void _Game_Base_GS_Escape::GS_Escape_C::set_Ended(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Base_GS_Escape::GS_Escape_C::get_LoadingScreenWidget() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b2 + 0)) & 1 != 0;
}
float& _Game_Base_GS_Escape::GS_Escape_C::get_AutoStartTimeRemaing() {
    return *(float*)((uintptr_t)this + 0x3b4);
}
void _Game_Base_GS_Escape::GS_Escape_C::ServerSetup() {
    return;
}
void* _Game_Base_GS_Escape::GS_Escape_C::get_Survivors() {
    return (void*)((uintptr_t)this + 0x3d0);
}
_Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C*& _Game_Base_GS_Escape::GS_Escape_C::get_MissionResultScreenWidget() {
    return *(_Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C**)((uintptr_t)this + 0x3e8);
}
int32_t& _Game_Base_GS_Escape::GS_Escape_C::get_OldXP() {
    return *(int32_t*)((uintptr_t)this + 0x3f0);
}
void* _Game_Base_GS_Escape::GS_Escape_C::get_WorldMonster() {
    return (void*)((uintptr_t)this + 0x408);
}
void _Game_Base_GS_Escape::GS_Escape_C::set_isBadPillar(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x498 + 0);
    *(uint8_t*)((uintptr_t)this + 0x498 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Base_GS_Escape::GS_Escape_C::OnSaveMigrationData(_Script_Playtime_Multiplayer::HostMigrationData*& Data) {
    return;
}
bool _Game_Base_GS_Escape::GS_Escape_C::get_EarlyDeparture() {
    return (*(uint8_t*)((uintptr_t)this + 0x409 + 0)) & 1 != 0;
}
void _Game_Base_GS_Escape::GS_Escape_C::set_EarlyDeparture(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x409 + 0);
    *(uint8_t*)((uintptr_t)this + 0x409 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Base_GS_Escape::GS_Escape_C::set_MatchEnded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x499 + 0);
    *(uint8_t*)((uintptr_t)this + 0x499 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Base_GS_Escape::GS_Escape_C::get_MonsterSelectTime() {
    return *(float*)((uintptr_t)this + 0x420);
}
_Script_CoreUObject::Class* _Game_Base_GS_Escape::GS_Escape_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Base/GS_Escape.GS_Escape_C");
    return result;
}
void* _Game_Base_GS_Escape::GS_Escape_C::get_LocalPuzzles() {
    return (void*)((uintptr_t)this + 0x438);
}
void* _Game_Base_GS_Escape::GS_Escape_C::get_MatchSummary() {
    return (void*)((uintptr_t)this + 0x450);
}
int32_t& _Game_Base_GS_Escape::GS_Escape_C::get_TicketAmount() {
    return *(int32_t*)((uintptr_t)this + 0x460);
}
void _Game_Base_GS_Escape::GS_Escape_C::set_HasSetupMatch_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x478 + 0);
    *(uint8_t*)((uintptr_t)this + 0x478 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Base_GS_Escape::GS_Escape_C::get_isBadPillar() {
    return (*(uint8_t*)((uintptr_t)this + 0x498 + 0)) & 1 != 0;
}
bool _Game_Base_GS_Escape::GS_Escape_C::get_MatchEnded() {
    return (*(uint8_t*)((uintptr_t)this + 0x499 + 0)) & 1 != 0;
}
void _Game_Base_GS_Escape::GS_Escape_C::OnRep_MatchEnded() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::RemoveOpenWidgets() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::PointsToXP(float Points, int32_t& XP) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::GetLeadershipCount(int32_t& Count) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::UpdateLeadershipPerkPlayers() {
    return;
}
bool _Game_Base_GS_Escape::GS_Escape_C::IsPlayerInSession(void* PlayerID, _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C*& PlayerController, _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C*& PlayerState) {
    return;
}
void* _Game_Base_GS_Escape::GS_Escape_C::GetMonsterType() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::GetDepositedToyParts(int32_t& DepositedParts) {
    return;
}
bool _Game_Base_GS_Escape::GS_Escape_C::IsXP_EnoughToReward(int32_t GainedXP) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::IsHostStillHere(bool& Value) {
    return;
}
_Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C* _Game_Base_GS_Escape::GS_Escape_C::CreateMissionResultScreenWidget() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::OnRep_ClearWidgets() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::CanDisplayEndScreen_(bool& CanEnd_) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::OnRep_EndGameCategory() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::TryToStartGame() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::Update_Living_Players() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::OnRep_EndedGame() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::TryLoadReady() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::OnRep_StartedGame() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::OnRep_PlayerAsMonster() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::GetToyPartMeshFromIndex(int32_t Index, void* Status, bool UseOverride_, void* Override, bool Held, _Script_Engine::StaticMesh*& Output) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::OnRep_PlayerCount() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::SaveMigrationData0(_Script_Playtime_Multiplayer::HostMigrationData* Data) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::OnLoadMigrationData(_Script_Playtime_Multiplayer::HostMigrationData*& Data) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::Multi_MigrateTrain() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::SetTrain() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::Client_SetTrain(float Distance, int32_t Index, _Script_Engine::SplineComponent* Track) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::LoadMigrationData0(_Script_Playtime_Multiplayer::HostMigrationData* Data) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::SetIndividualPuzzleData(_Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C*& PuzzlePillar, void*& Solved, void*& Progress, void*& PuzzleTypes, int32_t Final_Puzzle_Solved) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::SetupMonsterPlayer() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::StartGame() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::OnEndGame(void* HeadingText, void* SubheadingText, bool GivePoints_, void* PlayerType) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::CheckEndConditions() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::UpdateLobby() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::ReturnToMainMenu() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::UpdatedPlayers() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::MatchSummaryError(void* ErrorMessage) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::MatchSummaryResponse(int32_t MatchXP, bool WasMatchXPDoubled, int32_t DailyFirstGameBonus, int32_t Tickets) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::RewardEndGamePoints() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::CreateMatchSummary() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::UITicketAmount() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::Multicast_SubmitMatchSummary(void* MatchID, void*& Results) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::Multi_RemoveLoadingScreen() {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::DisplayMissionResults(void* MatchID) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::ClientUpdateTickets(int32_t Tickets, void*& RewardableActions) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::SubmitMatchSummary(void* MatchID, void*& Results) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::ExecuteUbergraph_GS_Escape(int32_t EntryPoint) {
    return;
}
void _Game_Base_GS_Escape::GS_Escape_C::OnUpdatedPlayers__DelegateSignature() {
    return;
}
