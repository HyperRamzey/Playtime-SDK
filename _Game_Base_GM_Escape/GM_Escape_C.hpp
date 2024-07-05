#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\GameMode.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Game_Base_BP_MultiplayerPlayerController {
struct BP_MultiplayerPlayerController_C;
}
namespace _Script_Engine {
struct PlayerState;
}
namespace _Game_Base_GS_Escape {
struct GS_Escape_C;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower {
struct BP_DualSplineFollower_C;
}
namespace _Script_Playtime_Multiplayer {
struct Monster;
}
namespace _Game_Gameplay_Game_ToyData_BP_ToyPart {
struct BP_ToyPart_C;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot {
struct BP_Lobby_PlayerSlot_C;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Game_Base_GM_Escape {
#pragma pack(push, 1)
struct GM_Escape_C : public _Script_Engine::GameMode {
    private: char pad_308[0x178]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C*& get_MonsterSelection();
    void* get_ClassToSpawn();
    _Game_Base_GS_Escape::GS_Escape_C*& get_GS_Escape();
    bool get_Won();
    void set_Won(bool value);
    void* get_GameTimer();
    void* get_NewGameTimer();
    float& get_Toy_Collection_Duration();
    float& get_Pipe_Pulldown_Duration();
    float& get_Escape_Duration();
    void* get_Cached_EndGame();
    bool get_Ended();
    void set_Ended(bool value);
    float& get_NewGameDuration();
    void* get_AutoStartTimer();
    float& get_AutoStartDelay();
    void* get_NetworkCharacters();
    void* get_MP_PlayerStates();
    void* get_MP_PlayerControllers();
    bool get_Migrating();
    void set_Migrating(bool value);
    bool get_MatchStarted();
    void set_MatchStarted(bool value);
    void* get_PlayersToBeMonster();
    void* get_Timer_AskPlayerToBeMonster();
    int32_t& get_MinNumberOfPlayersToStart();
    void* get_Maps();
    bool get_SetupMaps_();
    void set_SetupMaps_(bool value);
    float& get_TimeRemaining();
    void* get_Cached_EagerPlayers();
    void* get_CheckForSpectators_Timer();
    bool get_EarlyDepartureActivated_();
    void set_EarlyDepartureActivated_(bool value);
    void* get_MonsterSpawn();
    void* get_T_MonsterSelectTimer();
    int32_t& get_SpawnedPlayers();
    void* get_MatchID();
    void* get_EditorMonsterClass();
    void* get_MonsterStarts();
    void* get_SpecialistStarts();
    bool get_SkipIntro();
    void set_SkipIntro(bool value);
    static _Script_CoreUObject::Class* static_class();
    void Check_End_Game_on_World(_Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C* DSF);
    void OnPlayerEnded();
    void PlayIntroSequence(bool& Valid);
    void GetMonsterRowNameFromLobby(void*& RowName);
    void AllPlayersHavePawn_(bool& Valid);
    void PlaySpawnSequence();
    bool ReadyToEndMatch0();
    _Script_Engine::Actor* FindPlayerStart(_Script_Engine::Controller* Player, void* IncomingName);
    void* GetDefaultPawnClassForController(_Script_Engine::Controller* InController);
    void GetNextLevel(void*& LevelName);
    void printauthtoken();
    void* GetAlphaCharacter();
    void* GenerateMatchID();
    void CheckIfGameCanContinue();
    void SetPlayerAsWorldMonster(_Script_Engine::PlayerState* PlayerState, _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C* PlayerController, _Script_CoreUObject::Transform Transform, bool& Success_, _Script_Playtime_Multiplayer::Monster*& Monster);
    void SetupPlayerPawn(void* ID, _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C* Controller);
    void GetLivingSurvivors(void*& LivingSurvivors);
    void DoAllPlayersHaveAPawn(bool& Value);
    void RotateMaps(void*& NextMap, void*& NextMapName);
    void SetupMapsArray();
    void PlayersInPlay(int32_t& Count);
    void UpdatePlayers();
    bool ReadyToStartMatch0();
    void GetEndConditionResults(void*& EndGame, int32_t& PlayerWinCount, bool& Ended_);
    void UpdatePlayerStates(bool Remove_, _Script_Engine::PlayerState* PlayerState);
    void CreateCrosshairWidget(_Script_Engine::Controller* Controller);
    void SpawnToyPart(_Script_CoreUObject::Vector Spawn_Location, _Script_CoreUObject::Rotator Spawn_Rotation, void* Collision_Handling_Override, _Game_Gameplay_Game_ToyData_BP_ToyPart::BP_ToyPart_C*& SpawnedToyPart);
    _Game_Gameplay_Game_Lobby_BP_Lobby_PlayerSlot::BP_Lobby_PlayerSlot_C* GetLobbyPreSlot(_Script_Engine::Pawn* Pawn);
    void SetupPlayerHUD(_Script_Engine::PlayerController* PlayerController);
    void SpawnMonsterWidget(_Script_Engine::PlayerController* PlayerController);
    void Spawn_Monster();
    _Script_Engine::Actor* ChoosePlayerStart(_Script_Engine::Controller* Player);
    void Start_AskToBeMonster();
    void AskToBeMonster();
    void DenyPlayerMonster();
    void MakePlayerMonster(_Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C*& PlayerController);
    void ReceiveBeginPlay();
    void K2_OnSetMatchState0(void* NewState);
    void HandleStartingNewPlayer(_Script_Engine::PlayerController* NewPlayer);
    void ReceiveTick(float DeltaSeconds);
    void K2_OnLogout(_Script_Engine::Controller* ExitingController);
    void OnIntroPlayed();
    void StartEarlyDepartureTimer();
    void EarlyDeparture();
    void MonsterSelect();
    void AddTime(float AddedTime);
    void StartNewGame();
    void Start_NewGameTimer();
    void StartEscapeTimer();
    void StartPullDownTimer();
    void Time_Ran_Out();
    void StartToyCollectionTimer();
    void ExecuteUbergraph_GM_Escape(int32_t EntryPoint);
}; // Size: 0x480
#pragma pack(pop)
}
