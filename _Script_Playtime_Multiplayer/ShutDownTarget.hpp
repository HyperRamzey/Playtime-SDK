#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct ShutDownTarget : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void Sabotage();
    void Re_Activate(float FixDuration);
}; // Size: 0x28
#pragma pack(pop)
}
