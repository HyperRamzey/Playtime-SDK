#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\NetDriver.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamSockets {
#pragma pack(push, 1)
struct SteamSocketsNetDriver : public _Script_Engine::NetDriver {
    private: char pad_760[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x770
#pragma pack(pop)
}
