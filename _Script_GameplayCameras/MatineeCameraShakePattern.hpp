#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\CameraShakePattern.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayCameras {
#pragma pack(push, 1)
struct MatineeCameraShakePattern : public _Script_Engine::CameraShakePattern {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
