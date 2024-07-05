#include "..\FUObjectArray.hpp"
#include "..\_Game_Base_BP_MultiplayerPlayerController\BP_MultiplayerPlayerController_C.hpp"
#include "GM_Escape_C.hpp"
#include "..\_Game_Base_GS_Escape\GS_Escape_C.hpp"
#include "..\_Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot\BP_Lobby_PlayerSlot_C.hpp"
#include "..\_Game_Gameplay_Game_ToyData_BP_ToyPart\BP_ToyPart_C.hpp"
#include "..\_Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower\BP_DualSplineFollower_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\GameMode.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_Engine\PlayerState.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\Monster.hpp"
void* _Game_Base_GM_Escape::GM_Escape_C::get_GameTimer() {
    return (void*)((uintptr_t)this + 0x338);
}
void _Game_Base_GM_Escape::GM_Escape_C::set_Migrating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Actor* _Game_Base_GM_Escape::GM_Escape_C::FindPlayerStart(_Script_Engine::Controller* Player, void* IncomingName) {
    return;
}
_Script_Engine::SceneComponent*& _Game_Base_GM_Escape::GM_Escape_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x310);
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_MP_PlayerControllers() {
    return (void*)((uintptr_t)this + 0x390);
}
void _Game_Base_GM_Escape::GM_Escape_C::CheckIfGameCanContinue() {
    return;
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x308);
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_CheckForSpectators_Timer() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void _Game_Base_GM_Escape::GM_Escape_C::SetupMapsArray() {
    return;
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_Maps() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_ClassToSpawn() {
    return (void*)((uintptr_t)this + 0x320);
}
_Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C*& _Game_Base_GM_Escape::GM_Escape_C::get_MonsterSelection() {
    return *(_Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C**)((uintptr_t)this + 0x318);
}
void* _Game_Base_GM_Escape::GM_Escape_C::GenerateMatchID() {
    return;
}
_Game_Base_GS_Escape::GS_Escape_C*& _Game_Base_GM_Escape::GM_Escape_C::get_GS_Escape() {
    return *(_Game_Base_GS_Escape::GS_Escape_C**)((uintptr_t)this + 0x328);
}
float& _Game_Base_GM_Escape::GM_Escape_C::get_Escape_Duration() {
    return *(float*)((uintptr_t)this + 0x350);
}
bool _Game_Base_GM_Escape::GM_Escape_C::get_Won() {
    return (*(uint8_t*)((uintptr_t)this + 0x330 + 0)) & 1 != 0;
}
void _Game_Base_GM_Escape::GM_Escape_C::set_Won(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x330 + 0);
    *(uint8_t*)((uintptr_t)this + 0x330 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_NewGameTimer() {
    return (void*)((uintptr_t)this + 0x340);
}
void* _Game_Base_GM_Escape::GM_Escape_C::GetDefaultPawnClassForController(_Script_Engine::Controller* InController) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::printauthtoken() {
    return;
}
float& _Game_Base_GM_Escape::GM_Escape_C::get_Toy_Collection_Duration() {
    return *(float*)((uintptr_t)this + 0x348);
}
float& _Game_Base_GM_Escape::GM_Escape_C::get_Pipe_Pulldown_Duration() {
    return *(float*)((uintptr_t)this + 0x34c);
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_Cached_EndGame() {
    return (void*)((uintptr_t)this + 0x354);
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_EditorMonsterClass() {
    return (void*)((uintptr_t)this + 0x450);
}
void _Game_Base_GM_Escape::GM_Escape_C::GetLivingSurvivors(void*& LivingSurvivors) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::K2_OnSetMatchState0(void* NewState) {
    return;
}
bool _Game_Base_GM_Escape::GM_Escape_C::get_Ended() {
    return (*(uint8_t*)((uintptr_t)this + 0x355 + 0)) & 1 != 0;
}
void _Game_Base_GM_Escape::GM_Escape_C::set_Ended(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x355 + 0);
    *(uint8_t*)((uintptr_t)this + 0x355 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Base_GM_Escape::GM_Escape_C::SetPlayerAsWorldMonster(_Script_Engine::PlayerState* PlayerState, _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C* PlayerController, _Script_CoreUObject::Transform Transform, bool& Success_, _Script_Playtime_Multiplayer::Monster*& Monster) {
    return;
}
float& _Game_Base_GM_Escape::GM_Escape_C::get_NewGameDuration() {
    return *(float*)((uintptr_t)this + 0x358);
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_AutoStartTimer() {
    return (void*)((uintptr_t)this + 0x360);
}
float& _Game_Base_GM_Escape::GM_Escape_C::get_AutoStartDelay() {
    return *(float*)((uintptr_t)this + 0x368);
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_NetworkCharacters() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_MP_PlayerStates() {
    return (void*)((uintptr_t)this + 0x380);
}
bool _Game_Base_GM_Escape::GM_Escape_C::get_Migrating() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a0 + 0)) & 1 != 0;
}
bool _Game_Base_GM_Escape::GM_Escape_C::get_MatchStarted() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a1 + 0)) & 1 != 0;
}
void _Game_Base_GM_Escape::GM_Escape_C::AskToBeMonster() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::set_MatchStarted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_PlayersToBeMonster() {
    return (void*)((uintptr_t)this + 0x3a8);
}
bool _Game_Base_GM_Escape::GM_Escape_C::get_EarlyDepartureActivated_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f8 + 0)) & 1 != 0;
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_Timer_AskPlayerToBeMonster() {
    return (void*)((uintptr_t)this + 0x3b8);
}
int32_t& _Game_Base_GM_Escape::GM_Escape_C::get_MinNumberOfPlayersToStart() {
    return *(int32_t*)((uintptr_t)this + 0x3c0);
}
bool _Game_Base_GM_Escape::GM_Escape_C::get_SetupMaps_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d8 + 0)) & 1 != 0;
}
void _Game_Base_GM_Escape::GM_Escape_C::OnPlayerEnded() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::MonsterSelect() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::set_SetupMaps_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Base_GM_Escape::GM_Escape_C::get_TimeRemaining() {
    return *(float*)((uintptr_t)this + 0x3dc);
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_Cached_EagerPlayers() {
    return (void*)((uintptr_t)this + 0x3e0);
}
void _Game_Base_GM_Escape::GM_Escape_C::set_EarlyDepartureActivated_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Base_GM_Escape::GM_Escape_C::GetNextLevel(void*& LevelName) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::AllPlayersHavePawn_(bool& Valid) {
    return;
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_MonsterSpawn() {
    return (void*)((uintptr_t)this + 0x400);
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_T_MonsterSelectTimer() {
    return (void*)((uintptr_t)this + 0x430);
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_MatchID() {
    return (void*)((uintptr_t)this + 0x440);
}
int32_t& _Game_Base_GM_Escape::GM_Escape_C::get_SpawnedPlayers() {
    return *(int32_t*)((uintptr_t)this + 0x438);
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_MonsterStarts() {
    return (void*)((uintptr_t)this + 0x458);
}
void* _Game_Base_GM_Escape::GM_Escape_C::get_SpecialistStarts() {
    return (void*)((uintptr_t)this + 0x468);
}
bool _Game_Base_GM_Escape::GM_Escape_C::get_SkipIntro() {
    return (*(uint8_t*)((uintptr_t)this + 0x478 + 0)) & 1 != 0;
}
void _Game_Base_GM_Escape::GM_Escape_C::set_SkipIntro(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x478 + 0);
    *(uint8_t*)((uintptr_t)this + 0x478 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Base_GM_Escape::GM_Escape_C::SetupPlayerPawn(void* ID, _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C* Controller) {
    return;
}
_Script_CoreUObject::Class* _Game_Base_GM_Escape::GM_Escape_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Base/GM_Escape.GM_Escape_C");
    return result;
}
void _Game_Base_GM_Escape::GM_Escape_C::Check_End_Game_on_World(_Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C* DSF) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::PlayIntroSequence(bool& Valid) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::GetMonsterRowNameFromLobby(void*& RowName) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::PlaySpawnSequence() {
    return;
}
bool _Game_Base_GM_Escape::GM_Escape_C::ReadyToEndMatch0() {
    return;
}
void* _Game_Base_GM_Escape::GM_Escape_C::GetAlphaCharacter() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::DoAllPlayersHaveAPawn(bool& Value) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::RotateMaps(void*& NextMap, void*& NextMapName) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::PlayersInPlay(int32_t& Count) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::UpdatePlayers() {
    return;
}
bool _Game_Base_GM_Escape::GM_Escape_C::ReadyToStartMatch0() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::GetEndConditionResults(void*& EndGame, int32_t& PlayerWinCount, bool& Ended_) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::UpdatePlayerStates(bool Remove_, _Script_Engine::PlayerState* PlayerState) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::CreateCrosshairWidget(_Script_Engine::Controller* Controller) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::SpawnToyPart(_Script_CoreUObject::Vector Spawn_Location, _Script_CoreUObject::Rotator Spawn_Rotation, void* Collision_Handling_Override, _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C*& SpawnedToyPart) {
    return;
}
_Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C* _Game_Base_GM_Escape::GM_Escape_C::GetLobbyPreSlot(_Script_Engine::Pawn* Pawn) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::SetupPlayerHUD(_Script_Engine::PlayerController* PlayerController) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::SpawnMonsterWidget(_Script_Engine::PlayerController* PlayerController) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::Spawn_Monster() {
    return;
}
_Script_Engine::Actor* _Game_Base_GM_Escape::GM_Escape_C::ChoosePlayerStart(_Script_Engine::Controller* Player) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::Start_AskToBeMonster() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::DenyPlayerMonster() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::MakePlayerMonster(_Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C*& PlayerController) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::ReceiveBeginPlay() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::HandleStartingNewPlayer(_Script_Engine::PlayerController* NewPlayer) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::K2_OnLogout(_Script_Engine::Controller* ExitingController) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::OnIntroPlayed() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::StartEarlyDepartureTimer() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::EarlyDeparture() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::AddTime(float AddedTime) {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::StartNewGame() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::Start_NewGameTimer() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::StartEscapeTimer() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::StartPullDownTimer() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::Time_Ran_Out() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::StartToyCollectionTimer() {
    return;
}
void _Game_Base_GM_Escape::GM_Escape_C::ExecuteUbergraph_GM_Escape(int32_t EntryPoint) {
    return;
}
