#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LocalPlayerSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct LeadershipRegenSubsystem : public _Script_Engine::LocalPlayerSubsystem {
    private: char pad_30[0x18]; public:
    void* get_ActiveRegenZones();
    void* get_TimerHandle();
    static _Script_CoreUObject::Class* static_class();
    void SetTimer();
    void RegenPlayers();
    int32_t GetPlayerRegen(_Script_Playtime_Multiplayer::ANetworkCharacter* Player);
}; // Size: 0x48
#pragma pack(pop)
}
