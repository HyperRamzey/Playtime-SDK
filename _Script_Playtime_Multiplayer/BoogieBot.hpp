#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct BoogieBot : public _Script_Engine::Character {
    private: char pad_4c0[0x10]; public:
    _Script_Playtime_Multiplayer::ANetworkCharacter*& get_PlayerCharacter();
    void* get_SpectateObject();
    static _Script_CoreUObject::Class* static_class();
    void SpectateHatch();
    void BreakBoogieBotFX();
    _Script_Engine::Pawn* BP_CreateSpectator();
}; // Size: 0x4d0
#pragma pack(pop)
}
