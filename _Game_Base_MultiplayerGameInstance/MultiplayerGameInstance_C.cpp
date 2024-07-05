#include "..\FUObjectArray.hpp"
#include "MultiplayerGameInstance_C.hpp"
#include "..\_Game_Interface_MainMenu_Matchmaking_UI_MapVote\UI_MapVote_C.hpp"
#include "..\_Game_Interface_MainMenu_Play_UI_FindingGame\UI_FindingGame_C.hpp"
#include "..\_Game_Interface_MainMenu_ServerBrowser_UI_ErrorList\UI_ErrorList_C.hpp"
#include "..\_Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser\UI_MP_ServerBrowser_C.hpp"
#include "..\_Game_Interface_Shoppy_UI_ShopItem\UI_ShopItem_C.hpp"
#include "..\_Game_Interface_UI_LoadingScreen\UI_LoadingScreen_C.hpp"
#include "..\_Script_AdvancedSessions\BPUniqueNetId.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_OnlineSubsystemUtils\BlueprintSessionResult.hpp"
#include "..\_Script_Playtime_Multiplayer\PlaytimeGameInstance.hpp"
#include "..\_Script_Playtime_Multiplayer\TooltipSaveGame.hpp"
#include "..\_Script_SteamCore\CreateLobbyData.hpp"
#include "..\_Script_SteamCore\JoinLobbyData.hpp"
#include "..\_Script_SteamCore\LobbyChatUpdate.hpp"
#include "..\_Script_SteamCore\LobbyDataUpdate.hpp"
#include "..\_Script_SteamCore\LobbyEnterData.hpp"
#include "..\_Script_SteamCore\LobbyKickedData.hpp"
#include "..\_Script_SteamCore\LobbyMatchList.hpp"
#include "..\_Script_SteamCore\SteamID.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_FriendSessions() {
    return (void*)((uintptr_t)this + 0x300);
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::Success() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::RemoveLoadingScreen() {
    return;
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2f0);
}
_Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C*& _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_ServerBrowser() {
    return *(_Game_Interface_MainMenu_ServerBrowser_UI_MP_ServerBrowser::UI_MP_ServerBrowser_C**)((uintptr_t)this + 0x2f8);
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::LeaveLobby() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::SetupMapsArray() {
    return;
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_Maps() {
    return (void*)((uintptr_t)this + 0x310);
}
bool _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_MapsSetup_() {
    return (*(uint8_t*)((uintptr_t)this + 0x320 + 0)) & 1 != 0;
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_SessionName() {
    return (void*)((uintptr_t)this + 0x378);
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::ReadyToMapVote() {
    return;
}
_Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C*& _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_MigrationScreen() {
    return *(_Game_Interface_UI_LoadingScreen::UI_LoadingScreen_C**)((uintptr_t)this + 0x3e8);
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::set_MapsSetup_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x320 + 0);
    *(uint8_t*)((uintptr_t)this + 0x320 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnCallback_62079A364D969584CEDCFD99FC59A3B5() {
    return;
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_SteamSessionSettings() {
    return (void*)((uintptr_t)this + 0x328);
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::BeginQueue() {
    return;
}
_Script_Playtime_Multiplayer::TooltipSaveGame*& _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_SaveTooltips_Instance() {
    return *(_Script_Playtime_Multiplayer::TooltipSaveGame**)((uintptr_t)this + 0x388);
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_EOS_SessionName() {
    return (void*)((uintptr_t)this + 0x390);
}
_Script_CoreUObject::Object*& _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_EOSOnlineSearch() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x398);
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::AddMapVote(_Script_SteamCore::SteamID SteamID) {
    return;
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_AdvancedSessionSettings() {
    return (void*)((uintptr_t)this + 0x3a0);
}
_Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C*& _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_Shop_Item() {
    return *(_Game_Interface_Shoppy_UI_ShopItem::UI_ShopItem_C**)((uintptr_t)this + 0x3b0);
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::RotateMaps(void*& NextMap) {
    return;
}
bool _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_HostLeft() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b8 + 0)) & 1 != 0;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnCallback_559C155742B5D576C94A04A11F3E41DC(void*& Results) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::set_HostLeft(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_UseMatchmaking() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a8 + 0)) & 1 != 0;
}
_Script_Engine::AudioComponent*& _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_Music() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x3c0);
}
bool _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_SearchingForGame_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c8 + 0)) & 1 != 0;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::set_SearchingForGame_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_MapVoteOptions() {
    return (void*)((uintptr_t)this + 0x470);
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::CreateServer(void*& ExtraSettings, _Script_Engine::PlayerController* PlayerController, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, void* Level) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::GetLobbyStateAsString(void* LobbyState, void*& Output) {
    return;
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_QuickplaySessions() {
    return (void*)((uintptr_t)this + 0x3d0);
}
bool _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::CanStartMatch() {
    return;
}
int32_t& _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_QuickplaySearchIndex() {
    return *(int32_t*)((uintptr_t)this + 0x3e0);
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnCallback_DA2F4B4F4FDBCDBAF3A4CC8C3A244BAA(_Script_SteamCore::JoinLobbyData& Data, bool bWasSuccessful) {
    return;
}
_Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C*& _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_FindingGameScreen() {
    return *(_Game_Interface_MainMenu_Play_UI_FindingGame::UI_FindingGame_C**)((uintptr_t)this + 0x3f0);
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_LobbyTimer() {
    return (void*)((uintptr_t)this + 0x4c0);
}
_Game_Interface_MainMenu_ServerBrowser_UI_ErrorList::UI_ErrorList_C*& _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_ErrorList() {
    return *(_Game_Interface_MainMenu_ServerBrowser_UI_ErrorList::UI_ErrorList_C**)((uintptr_t)this + 0x3f8);
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_CurrentLobby() {
    return (void*)((uintptr_t)this + 0x400);
}
_Script_CoreUObject::Class* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Base/MultiplayerGameInstance.MultiplayerGameInstance_C");
    return result;
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_CheckLobbyStatusTimer() {
    return (void*)((uintptr_t)this + 0x408);
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_GameServer_Timer() {
    return (void*)((uintptr_t)this + 0x410);
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_GameName() {
    return (void*)((uintptr_t)this + 0x418);
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::ReceiveInit() {
    return;
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_OnEnteredGameLevel() {
    return (void*)((uintptr_t)this + 0x428);
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnLobbyKicked(_Script_SteamCore::LobbyKickedData& Data) {
    return;
}
int32_t& _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_MinRequiredPlayers() {
    return *(int32_t*)((uintptr_t)this + 0x438);
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_QueueType() {
    return (void*)((uintptr_t)this + 0x43c);
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_MapVotes() {
    return (void*)((uintptr_t)this + 0x440);
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_CurrentMap() {
    return (void*)((uintptr_t)this + 0x488);
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_LobbyState() {
    return (void*)((uintptr_t)this + 0x498);
}
_Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C*& _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_W_MapVote() {
    return *(_Game_Interface_MainMenu_Matchmaking_UI_MapVote::UI_MapVote_C**)((uintptr_t)this + 0x4a0);
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::set_UseMatchmaking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::UserWidget*& _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_LoadingScreen() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0x4b0);
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::GetLobbyReadyStatus(bool& Ready) {
    return;
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_MatchCharacter() {
    return (void*)((uintptr_t)this + 0x4b8);
}
float& _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_StartCountdown() {
    return *(float*)((uintptr_t)this + 0x4c8);
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::MultiplayerGameInstance_AutoGenFunc(_Script_SteamCore::LobbyChatUpdate& Data) {
    return;
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_MyPrivateCode() {
    return (void*)((uintptr_t)this + 0x4d0);
}
void* _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::get_SearchPrivateCode() {
    return (void*)((uintptr_t)this + 0x4e0);
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::ReadyToCountdown() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::UpdateMapOptions() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::DisplayLoadingScreen(void* Message) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::IsLobbyHost(bool& Value) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::Set_Map_Options() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::LobbyLogs() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::EndQueue() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::SetupMapVoteOptions() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::DetermineMapIndex(void*& Array, int32_t RandomInt, int32_t& Index) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::SendMapVote(void* MapID) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::SetMapVoteWidget() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::SetLobbyState(void*& State) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnGetBundleItemsFailure(void* ErrorMessage) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::ClearMapVotes(_Script_SteamCore::SteamID& SteamID) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::ClearMatchmakingTimers() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::GetMapVote(void*& MapVote) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::ResetMaps() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnCallback_8B8E99A1429CAFDCD19F70B49D33CA9F() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnCallback_77F3C54C43EEE89F489EFEBCBFC93A9A() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnCallback_E6A409774BE8D7966FE5C4980AEA9BD0(_Script_SteamCore::CreateLobbyData& Data, bool bWasSuccessful) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnCallback_E4FAF8334CFDC6CBF1CF959D1D20E197(_Script_SteamCore::LobbyMatchList& Data, bool bWasSuccessful) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnCallback_A4A94D6E4B7ACAF4C349EA9985A97BE7(_Script_SteamCore::JoinLobbyData& Data, bool bWasSuccessful) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::UpdateSteamCoreSession(void* Key, bool Value) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnFailure_F3C5C61446E9B68CAA8A0DBA974615EA() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnSuccess_F3C5C61446E9B68CAA8A0DBA974615EA() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::UpdateMatchStarted(bool MatchStarted) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnCallback_AC5022514E5563A35427C0A3F2B2AAD7(void*& Results) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::EndMapVoting() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnFailure_8F1FECCF40A31BCEB5F7379F4DA702D5() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnSuccess_8F1FECCF40A31BCEB5F7379F4DA702D5() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnGetBundleItemsSuccess(void*& Inventory) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnFailure_9994764946AE5A8A9EAA0ABCF23AF456() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnSuccess_9994764946AE5A8A9EAA0ABCF23AF456() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::FindLobby(void* Code) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::HostLobby(bool Private, void* Code) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::StartGame() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::AttempJoinLobby(int32_t LobbyIndex, int32_t TotalLobbies) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnMapLoaded() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnLobbyEnter(_Script_SteamCore::LobbyEnterData& Data) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::CheckForGameServer() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnLobbyUpdate(_Script_SteamCore::LobbyDataUpdate Data) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::StartMapVoting() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::ToggleReady_Private(bool Ready) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::StartLobbyTimer(void* FunctionName, float Time, bool Looping) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnGetFeaturedItemsSuccess(void*& Inventory) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnGetFeaturedItemsFailure(void* ErrorMessage) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnGetSaleItemsSuccess(void*& Inventory) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnGetSaleItemsFailure(void* ErrorMessage) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnGetFeaturedPageItems(void*& Featured, void*& Bundle, void*& Sale) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnClientCountdown() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::ReceiveShutdown() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnSessionInviteAccepted(int32_t LocalPlayerNum, _Script_AdvancedSessions::BPUniqueNetId PersonInvited, _Script_OnlineSubsystemUtils::BlueprintSessionResult& SessionToJoin) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::GetSteamHandle() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnSessionInviteReceived(int32_t LocalPlayerNum, _Script_AdvancedSessions::BPUniqueNetId PersonInviting, void* AppID, _Script_OnlineSubsystemUtils::BlueprintSessionResult& SessionToJoin) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::QuickplayStartSearch() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::AttemptJoinCurrentGame() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::SuccessfullyJoinedGame() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::DisplayMigrationScreen(void* LoadingMessage, bool DisplayTimer) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::HideMigrationScreen() {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::AddError(void* Text, bool Error, _Script_CoreUObject::Object* From) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::Fail(void* ErrorMessage) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::FindServers(void* Selection) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::HandleTravelError(void* FailureType) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::HandleNetworkError(void* FailureType, bool bIsServer) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::UpdateSessionSettings(void*& New_Session_Settings) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::ExecuteUbergraph_MultiplayerGameInstance(int32_t EntryPoint) {
    return;
}
void _Game_Base_MultiplayerGameInstance::MultiplayerGameInstance_C::OnEnteredGameLevel__DelegateSignature() {
    return;
}
