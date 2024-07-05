#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\ANetworkFist.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_Boxy_BP_NetworkFist {
#pragma pack(push, 1)
struct BP_NetworkFist_C : public _Script_Playtime_Multiplayer::ANetworkFist {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2f0
#pragma pack(pop)
}
