#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\PlaytimeGameState.hpp"
namespace _Game_Gameplay_Game_ToyData_BP_ToyMachine {
struct BP_ToyMachine_C;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Base_BP_MultiplayerPlayerState {
struct BP_MultiplayerPlayerState_C;
}
namespace _Game_Gameplay_Puzzles_BP_ToyPuzzle {
struct BP_ToyPuzzle_C;
}
namespace _Game_Interface_IngameScreens_UI_WinScreen {
struct UI_WinScreen_C;
}
namespace _Game_Interface_IngameScreens_UI_MissionResultScreen {
struct UI_MissionResultScreen_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Game_BP_Train {
struct BP_Train_C;
}
namespace _Game_Base_BP_MultiplayerPlayerController {
struct BP_MultiplayerPlayerController_C;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_Playtime_Multiplayer {
struct HostMigrationData;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Game_Gameplay_Puzzles_BP_PuzzlePillar {
struct BP_PuzzlePillar_C;
}
namespace _Game_Base_GS_Escape {
#pragma pack(push, 1)
struct GS_Escape_C : public _Script_Playtime_Multiplayer::PlaytimeGameState {
    private: char pad_330[0x170]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    bool get_StartedGame();
    void set_StartedGame(bool value);
    bool get_EndedGame();
    void set_EndedGame(bool value);
    int32_t& get_PlayerCount();
    int32_t& get_MaxPlayers();
    int32_t& get_CurrentToyPartIndex();
    void* get_ToySelection();
    int32_t& get_PlayerAsMonster();
    void* get_Players();
    bool get_MonsterWin_();
    void set_MonsterWin_(bool value);
    int32_t& get_PlayerWinCount();
    void* get_LivingPlayers();
    bool get_NormalGame();
    void set_NormalGame(bool value);
    float& get_TimeRemaining();
    bool get_SkipLobby();
    void set_SkipLobby(bool value);
    _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C*& get_Monster();
    void* get_EndGameCategory();
    int32_t& get_Cached_PlayerWinCount();
    float& get_NewGameTimeRemaining();
    _Game_Interface_IngameScreens_UI_WinScreen::UI_WinScreen_C*& get_W_EndScreen();
    void* get_Cached_EndGame();
    bool get_Ended();
    void set_Ended(bool value);
    bool get_LoadingScreenWidget();
    void set_LoadingScreenWidget(bool value);
    float& get_AutoStartTimeRemaing();
    float& get_AskToBeMonsterTimeRemaining();
    void* get_OnUpdatedPlayers();
    void* get_Survivors();
    float& get_StartGameTimeInSeconds();
    float& get_TotalMatchTimeInSeconds();
    _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C*& get_MissionResultScreenWidget();
    int32_t& get_OldXP();
    _Game_Gameplay_Game_ToyData_BP_ToyMachine::BP_ToyMachine_C*& get_ToyMachine();
    _Game_Gameplay_Game_BP_Train::BP_Train_C*& get_Train();
    void* get_WorldMonster();
    bool get_EarlyDeparture();
    void set_EarlyDeparture(bool value);
    void* get_NextLevel();
    float& get_MonsterSelectTime();
    int32_t& get_CachedXP();
    void* get_LeadershipPerkPlayers();
    void* get_LocalPuzzles();
    _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C*& get_LocalPuzzle();
    void* get_MatchSummary();
    int32_t& get_TicketAmount();
    void* get_RewardableActionsList();
    bool get_HasSetupMatch_();
    void set_HasSetupMatch_(bool value);
    void* get_MatchCorrelation();
    bool get_FriendsOnly();
    void set_FriendsOnly(bool value);
    int32_t& get_StartingSurvivorCount();
    bool get_isBadPillar();
    void set_isBadPillar(bool value);
    bool get_MatchEnded();
    void set_MatchEnded(bool value);
    static _Script_CoreUObject::Class* static_class();
    void OnRep_MatchEnded();
    void RemoveOpenWidgets();
    void PointsToXP(float Points, int32_t& XP);
    void GetLeadershipLocations(void*& Locations);
    void GetLeadershipCount(int32_t& Count);
    void UpdateLeadershipPerkPlayers();
    bool IsPlayerInSession(void* PlayerID, _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C*& PlayerController, _Game_Base_BP_MultiplayerPlayerState::BP_MultiplayerPlayerState_C*& PlayerState);
    void* GetMonsterType();
    void GetDepositedToyParts(int32_t& DepositedParts);
    bool IsXP_EnoughToReward(int32_t GainedXP);
    void IsHostStillHere(bool& Value);
    _Game_Interface_IngameScreens_UI_MissionResultScreen::UI_MissionResultScreen_C* CreateMissionResultScreenWidget();
    void OnRep_ClearWidgets();
    void CanDisplayEndScreen_(bool& CanEnd_);
    void OnRep_EndGameCategory();
    void TryToStartGame();
    void Update_Living_Players();
    void OnRep_EndedGame();
    void TryLoadReady();
    void OnRep_StartedGame();
    void Open_Monster_Doors();
    void OnRep_PlayerAsMonster();
    void GetToyPartMeshFromIndex(int32_t Index, void* Status, bool UseOverride_, void* Override, bool Held, _Script_Engine::StaticMesh*& Output);
    void OnRep_PlayerCount();
    void SaveMigrationData0(_Script_Playtime_Multiplayer::HostMigrationData* Data);
    void OnLoadMigrationData(_Script_Playtime_Multiplayer::HostMigrationData*& Data);
    void OnSaveMigrationData(_Script_Playtime_Multiplayer::HostMigrationData*& Data);
    void Multi_MigrateTrain();
    void SetTrain();
    void Client_SetTrain(float Distance, int32_t Index, _Script_Engine::SplineComponent* Track);
    void LoadMigrationData0(_Script_Playtime_Multiplayer::HostMigrationData* Data);
    void SetIndividualPuzzleData(_Game_Gameplay_Puzzles_BP_PuzzlePillar::BP_PuzzlePillar_C*& PuzzlePillar, void*& Solved, void*& Progress, void*& PuzzleTypes, int32_t Final_Puzzle_Solved);
    void SetupMonsterPlayer();
    void ServerSetup();
    void StartGame();
    void OnEndGame(void* HeadingText, void* SubheadingText, bool GivePoints_, void* PlayerType);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void CheckEndConditions();
    void EndGame();
    void UpdateLobby();
    void ReturnToMainMenu();
    void UpdatedPlayers();
    void MatchSummaryError(void* ErrorMessage);
    void MatchSummaryResponse(int32_t MatchXP, bool WasMatchXPDoubled, int32_t DailyFirstGameBonus, int32_t Tickets);
    void RewardEndGamePoints();
    void CreateMatchSummary();
    void UITicketAmount();
    void Multicast_SubmitMatchSummary(void* MatchID, void*& Results);
    void Multi_RemoveLoadingScreen();
    void DisplayMissionResults(void* MatchID);
    void ClientUpdateTickets(int32_t Tickets, void*& RewardableActions);
    void SubmitMatchSummary(void* MatchID, void*& Results);
    void ExecuteUbergraph_GS_Escape(int32_t EntryPoint);
    void OnUpdatedPlayers__DelegateSignature();
}; // Size: 0x4a0
#pragma pack(pop)
}
