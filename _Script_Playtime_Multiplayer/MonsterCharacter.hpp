#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct MonsterCharacter : public _Script_Engine::Character {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4c0
#pragma pack(pop)
}
