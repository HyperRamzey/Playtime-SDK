#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_OnlineSubsystemUtils\IpNetDriver.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemSteam {
#pragma pack(push, 1)
struct SteamNetDriver : public _Script_OnlineSubsystemUtils::IpNetDriver {
    private: char pad_7d0[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x7d8
#pragma pack(pop)
}
