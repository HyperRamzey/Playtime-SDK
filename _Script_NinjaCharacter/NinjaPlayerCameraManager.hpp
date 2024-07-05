#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PlayerCameraManager.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NinjaCharacter {
#pragma pack(push, 1)
struct NinjaPlayerCameraManager : public _Script_Engine::PlayerCameraManager {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2810
#pragma pack(pop)
}
