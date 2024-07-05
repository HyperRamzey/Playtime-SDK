#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\PlaytimePlayerState.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Interface_HUDComponents_UI_InGameNotificationList {
struct UI_InGameNotificationList_C;
}
namespace _Game_Base_BP_MultiplayerPlayerController {
struct BP_MultiplayerPlayerController_C;
}
namespace _Script_SteamCore {
struct SteamCoreVoice;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PlayerState;
}
namespace _Game_Base_BP_MultiplayerPlayerState {
#pragma pack(push, 1)
struct BP_MultiplayerPlayerState_C : public _Script_Playtime_Multiplayer::PlaytimePlayerState {
    private: char pad_380[0xd0]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_Gestures();
    void* get_Clothes();
    void* get_Emote();
    void* get_Skins();
    bool get_Ready_();
    void set_Ready_(bool value);
    bool get_Won_();
    void set_Won_(bool value);
    bool get_Down_();
    void set_Down_(bool value);
    bool get_HasSavedProperties();
    void set_HasSavedProperties(bool value);
    void* get_LastTransform();
    bool get_InWuggyHole_();
    void set_InWuggyHole_(bool value);
    int32_t& get_CurrentTrainCart();
    void* get_PlayerStatus();
    _Game_Interface_HUDComponents_UI_InGameNotificationList::UI_InGameNotificationList_C*& get_UI_in_Game_Notification_List();
    _Script_SteamCore::SteamCoreVoice*& get_SoundObj();
    bool get_LoadingScreen();
    void set_LoadingScreen(bool value);
    void* get_MatchCorrelation();
    int32_t& get_TicketAmount();
    void* get_RewardableActionsList();
    static _Script_CoreUObject::Class* static_class();
    void OnRep_Down_();
    void OnRep_Won_();
    void OnRep_Ready_();
    void OnRep_Clothes();
    void OnRep_Emote();
    void OnRep_Skins();
    void OnRep_Gestures();
    void Server_ReadyToStart(void* ID, _Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C* Controller);
    void Client_ReadyToStart();
    void BP_DisplayTicketCollectionNotification0(void*& NotificationText, int32_t TicketsReward);
    void Client_RewardsUI(int32_t TicketAmount, void*& RewardableActions);
    void ReceiveDestroyed();
    void Client_ToggleLoadingScreen(bool Display);
    void ReplicateAudioData(void*& CompressedBuffer, int32_t DesiredSampleRate);
    void BeginPlay_VoiceChat();
    void UpdateSavedProperties();
    void Server_ToggleLoadingScreen(bool Display_);
    void TryReady(bool Ready_);
    void ReceiveBeginPlay();
    void ReceiveOverrideWith(_Script_Engine::PlayerState* OldPlayerState);
    void ReceiveCopyProperties(_Script_Engine::PlayerState* NewPlayerState);
    void Client_SubmitMatchSummary(void* MatchID, void*& Results);
    void MatchSummaryError(void* ErrorMessage);
    void MatchSummaryResponse(int32_t MatchXP, bool WasMatchXPDoubled, int32_t DailyFirstGameBonus, int32_t Tickets);
    void ExecuteUbergraph_BP_MultiplayerPlayerState(int32_t EntryPoint);
}; // Size: 0x450
#pragma pack(pop)
}
