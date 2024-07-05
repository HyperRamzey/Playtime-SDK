#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AdvancedSessions\BPUniqueNetId.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_Playtime_Multiplayer\PlaytimePlayerController.hpp"
#include "..\_Script_Playtime_Multiplayer\QueueData.hpp"
namespace _Script_AudioCapture {
struct AudioCaptureComponent;
}
namespace _Game_Interface_Lobby_UI_WalkableLobby {
struct UI_WalkableLobby_C;
}
namespace _Game_Interface_HUDComponents_UI_SurvivorHUD {
struct UI_SurvivorHUD_C;
}
namespace _Game_Interface_MonsterHUDs_UI_MonsterHUD {
struct UI_MonsterHUD_C;
}
namespace _Game_Interface_Chat_UI_Chat {
struct UI_Chat_C;
}
namespace _Game_Interface_IngameScreens_UI_PauseMenu {
struct UI_PauseMenu_C;
}
namespace _Game_Interface_UI_LoadingScreen {
struct UI_LoadingScreen_C;
}
namespace _Game_Interface_UI_AskToBeMonster {
struct UI_AskToBeMonster_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Playtime_Multiplayer {
struct PlaytimePlayerState;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Game_Base_BP_MultiplayerPlayerController {
#pragma pack(push, 1)
struct BP_MultiplayerPlayerController_C : public _Script_Playtime_Multiplayer::PlaytimePlayerController {
    private: char pad_570[0xa8]; public:
    void* get_UberGraphFrame();
    _Script_AudioCapture::AudioCaptureComponent*& get_AudioCapture();
    _Game_Interface_HUDComponents_UI_SurvivorHUD::UI_SurvivorHUD_C*& get_Crosshair();
    _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C*& get_LobbyUI();
    bool get_ShouldStillLookForLobby();
    void set_ShouldStillLookForLobby(bool value);
    _Game_Interface_Chat_UI_Chat::UI_Chat_C*& get_Chat();
    _Game_Interface_IngameScreens_UI_PauseMenu::UI_PauseMenu_C*& get_W_PauseMenu();
    _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C*& get_LoadingScreen();
    _Game_Interface_UI_AskToBeMonster::UI_AskToBeMonster_C*& get_W_AskToBeMonster();
    _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C*& get_MonsterHUD();
    int32_t& get_SampleRate();
    bool get_IsScoreboardOpen();
    void set_IsScoreboardOpen(bool value);
    bool get_MakingPreset();
    void set_MakingPreset(bool value);
    void* get_MapNameToLobbyReference();
    static _Script_CoreUObject::Class* static_class();
    void InLobby_(bool& Value);
    void SpawnAndPossess(void* Class, _Script_Engine::PlayerController* Player, void* SpawnTag);
    void InpActEvt_Scoreboard_K2Node_InputActionEvent_1(_Script_InputCore::Key Key);
    void InpActEvt_B_K2Node_InputKeyEvent_0(_Script_InputCore::Key Key);
    void InpActEvt_Pause_K2Node_InputActionEvent_0(_Script_InputCore::Key Key);
    void Fail(void* ErrorMessage);
    void Client_EndGame(void* MatchID);
    void SetSessionName(void* SessionName);
    void Success();
    void NetSpawnMonster(void* ClassToSpawn, _Script_Engine::PlayerController* Player);
    void CreateMonsterWidget();
    void NetAddVelocityToGrabbedActor(_Script_Engine::StaticMeshComponent* StaticMesh, _Script_CoreUObject::Vector Velocity);
    void Owner_ApplySettings();
    void Client_DisplayMigrationScreen(void* LoadingMessage);
    void Client_RemoveAllWidgets();
    void BeginPlay_Widgets();
    void HideMigrationWidget();
    void StartGameAnim();
    void SetUIMode();
    void Owner_UnloadLobby();
    void SetupLobby();
    void RemoveLoadingScreen();
    void CreateLoadingScreen();
    void ClearLobbyUI();
    void DestroyLobbyUI();
    void CreateCrosshairWidget(void* ToySelection);
    void Client_ReadyToStart();
    void OnUnpause();
    void CreateChatWidget();
    void Server_ReadyToStart(void* ID, _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C* Controller);
    void ReceiveTick(float DeltaSeconds);
    void DeliverMessage(void* Comm, void* Location, _Script_AdvancedSessions::BPUniqueNetId SenderID, _Script_Playtime_Multiplayer::PlaytimePlayerState* Sending_Player);
    void ReceiveMessage(void* Comm, void* Location, _Script_AdvancedSessions::BPUniqueNetId SenderID, _Script_Playtime_Multiplayer::PlaytimePlayerState* Sending_Player);
    void SendMessage(void* Comm, void* Location);
    void ReceiveBeginPlay();
    void ReceivePossess(_Script_Engine::Pawn* PossessedPawn);
    void Client_ResetHostMigration();
    void Server_No();
    void Server_Yes(_Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C* PlayerController);
    void No();
    void Yes();
    void Remove_AskToBeMonster();
    void Create_AskToBeMonster();
    void Tick_VoiceChat();
    void SendAudioData(void*& CompressedBuffer);
    void BeginPlay_VoiceChat();
    void Server_RecieveQueueData(int32_t PlayerID, _Script_Playtime_Multiplayer::QueueData Data);
    void Owner_RequestQueueData();
    void ExecuteUbergraph_BP_MultiplayerPlayerController(int32_t EntryPoint);
}; // Size: 0x618
#pragma pack(pop)
}
