#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AdvancedSessions\BPUniqueNetId.hpp"
#include "..\_Script_Playtime_Multiplayer\PlaytimeGameInstance.hpp"
#include "..\_Script_SteamCore\LobbyDataUpdate.hpp"
#include "..\_Script_SteamCore\SteamID.hpp"
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser {
struct UI_MP_ServerBrowser_C;
}
namespace _Game_Interface_UI_LoadingScreen {
struct UI_LoadingScreen_C;
}
namespace _Script_Playtime_Multiplayer {
struct TooltipSaveGame;
}
namespace _Game_Interface_MainMenu_ServerBrowser_UI_ErrorList {
struct UI_ErrorList_C;
}
namespace _Game_Interface_MainMenu_Play_UI_FindingGame {
struct UI_FindingGame_C;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
struct LobbyChatUpdate;
}
namespace _Game_Interface_Shoppy_UI_ShopItem {
struct UI_ShopItem_C;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Game_Interface_MainMenu_Matchmaking_UI_MapVote {
struct UI_MapVote_C;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
struct CreateLobbyData;
}
namespace _Script_SteamCore {
struct LobbyMatchList;
}
namespace _Script_SteamCore {
struct JoinLobbyData;
}
namespace _Script_SteamCore {
struct LobbyEnterData;
}
namespace _Script_SteamCore {
struct LobbyKickedData;
}
namespace _Script_OnlineSubsystemUtils {
struct BlueprintSessionResult;
}
namespace _Game_Base_MultiplayerGameInstance {
#pragma pack(push, 1)
struct MultiplayerGameInstance_C : public _Script_Playtime_Multiplayer::PlaytimeGameInstance {
    private: char pad_2f0[0x200]; public:
    void* get_UberGraphFrame();
    _Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C*& get_ServerBrowser();
    void* get_FriendSessions();
    void* get_Maps();
    bool get_MapsSetup_();
    void set_MapsSetup_(bool value);
    void* get_SteamSessionSettings();
    void* get_SessionName();
    _Script_Playtime_Multiplayer::TooltipSaveGame*& get_SaveTooltips_Instance();
    void* get_EOS_SessionName();
    _Script_CoreUObject::Object*& get_EOSOnlineSearch();
    void* get_AdvancedSessionSettings();
    _Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C*& get_Shop_Item();
    bool get_HostLeft();
    void set_HostLeft(bool value);
    _Script_Engine::AudioComponent*& get_Music();
    bool get_SearchingForGame_();
    void set_SearchingForGame_(bool value);
    void* get_QuickplaySessions();
    int32_t& get_QuickplaySearchIndex();
    _Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C*& get_MigrationScreen();
    _Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C*& get_FindingGameScreen();
    _Game_Interface_MainMenu_ServerBrowser_UI_ErrorList::UI_ErrorList_C*& get_ErrorList();
    void* get_CurrentLobby();
    void* get_CheckLobbyStatusTimer();
    void* get_GameServer_Timer();
    void* get_GameName();
    void* get_OnEnteredGameLevel();
    int32_t& get_MinRequiredPlayers();
    void* get_QueueType();
    void* get_MapVotes();
    void* get_MapVoteOptions();
    void* get_CurrentMap();
    void* get_LobbyState();
    _Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C*& get_W_MapVote();
    bool get_UseMatchmaking();
    void set_UseMatchmaking(bool value);
    _Script_UMG::UserWidget*& get_LoadingScreen();
    void* get_MatchCharacter();
    void* get_LobbyTimer();
    float& get_StartCountdown();
    void* get_MyPrivateCode();
    void* get_SearchPrivateCode();
    static _Script_CoreUObject::Class* static_class();
    bool CanStartMatch();
    void GetLobbyStateAsString(void* LobbyState, void*& Output);
    void ReadyToMapVote();
    void ReadyToCountdown();
    void MultiplayerGameInstance_AutoGenFunc(_Script_SteamCore::LobbyChatUpdate& Data);
    void LeaveLobby();
    void GetLobbyReadyStatus(bool& Ready);
    void RemoveLoadingScreen();
    void DisplayLoadingScreen(void* Message);
    void IsLobbyHost(bool& Value);
    void UpdateMapOptions();
    void Set_Map_Options();
    void LobbyLogs();
    void EndQueue();
    void BeginQueue();
    void DetermineMapIndex(void*& Array, int32_t RandomInt, int32_t& Index);
    void SendMapVote(void* MapID);
    void SetMapVoteWidget();
    void SetLobbyState(void*& State);
    void SetupMapVoteOptions();
    void ClearMapVotes(_Script_SteamCore::SteamID& SteamID);
    void AddMapVote(_Script_SteamCore::SteamID SteamID);
    void ClearMatchmakingTimers();
    void GetMapVote(void*& MapVote);
    void ResetMaps();
    void RotateMaps(void*& NextMap);
    void SetupMapsArray();
    void OnCallback_8B8E99A1429CAFDCD19F70B49D33CA9F();
    void OnCallback_77F3C54C43EEE89F489EFEBCBFC93A9A();
    void OnCallback_E6A409774BE8D7966FE5C4980AEA9BD0(_Script_SteamCore::CreateLobbyData& Data, bool bWasSuccessful);
    void OnCallback_E4FAF8334CFDC6CBF1CF959D1D20E197(_Script_SteamCore::LobbyMatchList& Data, bool bWasSuccessful);
    void OnCallback_A4A94D6E4B7ACAF4C349EA9985A97BE7(_Script_SteamCore::JoinLobbyData& Data, bool bWasSuccessful);
    void OnCallback_62079A364D969584CEDCFD99FC59A3B5();
    void OnCallback_DA2F4B4F4FDBCDBAF3A4CC8C3A244BAA(_Script_SteamCore::JoinLobbyData& Data, bool bWasSuccessful);
    void OnFailure_F3C5C61446E9B68CAA8A0DBA974615EA();
    void OnSuccess_F3C5C61446E9B68CAA8A0DBA974615EA();
    void OnCallback_AC5022514E5563A35427C0A3F2B2AAD7(void*& Results);
    void OnFailure_8F1FECCF40A31BCEB5F7379F4DA702D5();
    void OnSuccess_8F1FECCF40A31BCEB5F7379F4DA702D5();
    void OnCallback_559C155742B5D576C94A04A11F3E41DC(void*& Results);
    void OnFailure_9994764946AE5A8A9EAA0ABCF23AF456();
    void OnSuccess_9994764946AE5A8A9EAA0ABCF23AF456();
    void FindLobby(void* Code);
    void HostLobby(bool Private, void* Code);
    void StartGame();
    void AttempJoinLobby(int32_t LobbyIndex, int32_t TotalLobbies);
    void OnMapLoaded();
    void OnLobbyEnter(_Script_SteamCore::LobbyEnterData& Data);
    void OnLobbyKicked(_Script_SteamCore::LobbyKickedData& Data);
    void CheckForGameServer();
    void OnLobbyUpdate(_Script_SteamCore::LobbyDataUpdate Data);
    void StartMapVoting();
    void EndMapVoting();
    void ToggleReady_Private(bool Ready);
    void StartLobbyTimer(void* FunctionName, float Time, bool Looping);
    void OnGetFeaturedItemsSuccess(void*& Inventory);
    void OnGetFeaturedItemsFailure(void* ErrorMessage);
    void OnGetBundleItemsSuccess(void*& Inventory);
    void OnGetBundleItemsFailure(void* ErrorMessage);
    void OnGetSaleItemsSuccess(void*& Inventory);
    void OnGetSaleItemsFailure(void* ErrorMessage);
    void OnGetFeaturedPageItems(void*& Featured, void*& Bundle, void*& Sale);
    void OnClientCountdown();
    void ReceiveInit();
    void ReceiveShutdown();
    void OnSessionInviteAccepted(int32_t LocalPlayerNum, _Script_AdvancedSessions::BPUniqueNetId PersonInvited, _Script_OnlineSubsystemUtils::BlueprintSessionResult& SessionToJoin);
    void GetSteamHandle();
    void OnSessionInviteReceived(int32_t LocalPlayerNum, _Script_AdvancedSessions::BPUniqueNetId PersonInviting, void* AppID, _Script_OnlineSubsystemUtils::BlueprintSessionResult& SessionToJoin);
    void QuickplayStartSearch();
    void AttemptJoinCurrentGame();
    void SuccessfullyJoinedGame();
    void DisplayMigrationScreen(void* LoadingMessage, bool DisplayTimer);
    void HideMigrationScreen();
    void AddError(void* Text, bool Error, _Script_CoreUObject::Object* From);
    void Success();
    void Fail(void* ErrorMessage);
    void FindServers(void* Selection);
    void HandleTravelError(void* FailureType);
    void HandleNetworkError(void* FailureType, bool bIsServer);
    void CreateServer(void*& ExtraSettings, _Script_Engine::PlayerController* PlayerController, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, void* Level);
    void UpdateSteamCoreSession(void* Key, bool Value);
    void UpdateSessionSettings(void*& New_Session_Settings);
    void UpdateMatchStarted(bool MatchStarted);
    void ExecuteUbergraph_MultiplayerGameInstance(int32_t EntryPoint);
    void OnEnteredGameLevel__DelegateSignature();
}; // Size: 0x4f0
#pragma pack(pop)
}
