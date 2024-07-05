#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Info.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Lobby {
#pragma pack(push, 1)
struct LobbyBeaconState : public _Script_Engine::Info {
    private: char pad_220[0x1a8]; public:
    int32_t& get_MaxPlayers();
    void* get_LobbyBeaconPlayerStateClass();
    bool get_bLobbyStarted();
    void set_bLobbyStarted(bool value);
    float& get_WaitForPlayersTimeRemaining();
    void* get_Players();
    static _Script_CoreUObject::Class* static_class();
    void OnRep_WaitForPlayersTimeRemaining();
    void OnRep_LobbyStarted();
}; // Size: 0x3c8
#pragma pack(pop)
}
