#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_GameplayCameras\MatineeCameraShake.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_World_Effects_Camera_Shake_LandBob {
#pragma pack(push, 1)
struct LandBob_C : public _Script_GameplayCameras::MatineeCameraShake {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b0
#pragma pack(pop)
}
