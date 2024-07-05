#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\JoinabilitySettings.hpp"
#include "..\_Script_Engine\UniqueNetIdRepl.hpp"
#include "LobbyBeaconClient.hpp"
#include "LobbyBeaconPlayerState.hpp"
#include "LobbyBeaconState.hpp"
#include "..\_Script_OnlineSubsystemUtils\OnlineBeaconClient.hpp"
_Script_Lobby::LobbyBeaconState*& _Script_Lobby::LobbyBeaconClient::get_LobbyState() {
    return *(_Script_Lobby::LobbyBeaconState**)((uintptr_t)this + 0x2b0);
}
_Script_Lobby::LobbyBeaconPlayerState*& _Script_Lobby::LobbyBeaconClient::get_PlayerState() {
    return *(_Script_Lobby::LobbyBeaconPlayerState**)((uintptr_t)this + 0x2b8);
}
void _Script_Lobby::LobbyBeaconClient::ServerKickPlayer(_Script_Engine::UniqueNetIdRepl& PlayerToKick, void*& Reason) {
    return;
}
void* _Script_Lobby::LobbyBeaconClient::get_LobbyJoinServerState() {
    return (void*)((uintptr_t)this + 0x2c1);
}
void _Script_Lobby::LobbyBeaconClient::ServerLoginPlayer(void* InSessionId, _Script_Engine::UniqueNetIdRepl& InUniqueId, void* UrlString) {
    return;
}
_Script_CoreUObject::Class* _Script_Lobby::LobbyBeaconClient::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Lobby.LobbyBeaconClient");
    return result;
}
void _Script_Lobby::LobbyBeaconClient::ServerSetPartyOwner(_Script_Engine::UniqueNetIdRepl& InUniqueId, _Script_Engine::UniqueNetIdRepl& InPartyOwnerId) {
    return;
}
void _Script_Lobby::LobbyBeaconClient::ServerNotifyJoiningServer() {
    return;
}
void _Script_Lobby::LobbyBeaconClient::ServerDisconnectFromLobby() {
    return;
}
void _Script_Lobby::LobbyBeaconClient::ServerCheat(void* Msg) {
    return;
}
void _Script_Lobby::LobbyBeaconClient::ClientWasKicked(void*& KickReason) {
    return;
}
void _Script_Lobby::LobbyBeaconClient::ClientSetInviteFlags(_Script_CoreUObject::JoinabilitySettings& Settings) {
    return;
}
void _Script_Lobby::LobbyBeaconClient::ClientPlayerLeft(_Script_Engine::UniqueNetIdRepl& InUniqueId) {
    return;
}
void _Script_Lobby::LobbyBeaconClient::ClientPlayerJoined(void*& NewPlayerName, _Script_Engine::UniqueNetIdRepl& InUniqueId) {
    return;
}
void _Script_Lobby::LobbyBeaconClient::ClientLoginComplete(_Script_Engine::UniqueNetIdRepl& InUniqueId, bool bWasSuccessful) {
    return;
}
void _Script_Lobby::LobbyBeaconClient::ClientJoinGame() {
    return;
}
void _Script_Lobby::LobbyBeaconClient::ClientAckJoiningServer() {
    return;
}
