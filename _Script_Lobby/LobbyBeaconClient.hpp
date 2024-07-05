#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_OnlineSubsystemUtils\OnlineBeaconClient.hpp"
namespace _Script_Lobby {
struct LobbyBeaconState;
}
namespace _Script_Lobby {
struct LobbyBeaconPlayerState;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct UniqueNetIdRepl;
}
namespace _Script_CoreUObject {
struct JoinabilitySettings;
}
namespace _Script_Lobby {
#pragma pack(push, 1)
struct LobbyBeaconClient : public _Script_OnlineSubsystemUtils::OnlineBeaconClient {
    private: char pad_2b0[0x88]; public:
    _Script_Lobby::LobbyBeaconState*& get_LobbyState();
    _Script_Lobby::LobbyBeaconPlayerState*& get_PlayerState();
    void* get_LobbyJoinServerState();
    static _Script_CoreUObject::Class* static_class();
    void ServerSetPartyOwner(_Script_Engine::UniqueNetIdRepl& InUniqueId, _Script_Engine::UniqueNetIdRepl& InPartyOwnerId);
    void ServerNotifyJoiningServer();
    void ServerLoginPlayer(void* InSessionId, _Script_Engine::UniqueNetIdRepl& InUniqueId, void* UrlString);
    void ServerKickPlayer(_Script_Engine::UniqueNetIdRepl& PlayerToKick, void*& Reason);
    void ServerDisconnectFromLobby();
    void ServerCheat(void* Msg);
    void ClientWasKicked(void*& KickReason);
    void ClientSetInviteFlags(_Script_CoreUObject::JoinabilitySettings& Settings);
    void ClientPlayerLeft(_Script_Engine::UniqueNetIdRepl& InUniqueId);
    void ClientPlayerJoined(void*& NewPlayerName, _Script_Engine::UniqueNetIdRepl& InUniqueId);
    void ClientLoginComplete(_Script_Engine::UniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
    void ClientJoinGame();
    void ClientAckJoiningServer();
}; // Size: 0x338
#pragma pack(pop)
}
