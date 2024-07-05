#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\NetConnection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamSockets {
#pragma pack(push, 1)
struct SteamSocketsNetConnection : public _Script_Engine::NetConnection {
    private: char pad_1ba8[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1bb8
#pragma pack(pop)
}
