#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Info.hpp"
namespace _Script_OnlineSubsystemUtils {
struct OnlineBeaconClient;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Lobby {
#pragma pack(push, 1)
struct LobbyBeaconPlayerState : public _Script_Engine::Info {
    private: char pad_220[0xc0]; public:
    void* get_DisplayName();
    void* get_UniqueId();
    void* get_PartyOwnerUniqueId();
    bool get_bInLobby();
    void set_bInLobby(bool value);
    _Script_OnlineSubsystemUtils::OnlineBeaconClient*& get_ClientActor();
    static _Script_CoreUObject::Class* static_class();
    void OnRep_UniqueId();
    void OnRep_PartyOwner();
    void OnRep_InLobby();
}; // Size: 0x2e0
#pragma pack(pop)
}
