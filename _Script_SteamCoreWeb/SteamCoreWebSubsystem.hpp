#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\GameInstanceSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct SteamCoreWebSubsystem : public _Script_Engine::GameInstanceSubsystem {
    private: char pad_30[0x18]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
