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
struct CompositeCameraShakePattern : public _Script_Engine::CameraShakePattern {
    private: char pad_28[0x20]; public:
    void* get_ChildPatterns();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
