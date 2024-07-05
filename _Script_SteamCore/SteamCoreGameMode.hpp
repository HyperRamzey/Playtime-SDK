#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\GameMode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreGameMode : public _Script_Engine::GameMode {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x308
#pragma pack(pop)
}
