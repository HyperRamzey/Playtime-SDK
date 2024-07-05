#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_OnlineSubsystemUtils\IpConnection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemSteam {
#pragma pack(push, 1)
struct SteamNetConnection : public _Script_OnlineSubsystemUtils::IpConnection {
    private: char pad_1c48[0x8]; public:
    bool get_bIsPassthrough();
    void set_bIsPassthrough(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c50
#pragma pack(pop)
}
