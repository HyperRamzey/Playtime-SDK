#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_OnlineSubsystemUtils\OnlineBeaconHostObject.hpp"
namespace _Script_Lobby {
struct LobbyBeaconState;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Lobby {
#pragma pack(push, 1)
struct LobbyBeaconHost : public _Script_OnlineSubsystemUtils::OnlineBeaconHostObject {
    private: char pad_248[0x38]; public:
    void* get_LobbyStateClass();
    _Script_Lobby::LobbyBeaconState*& get_LobbyState();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x280
#pragma pack(pop)
}
