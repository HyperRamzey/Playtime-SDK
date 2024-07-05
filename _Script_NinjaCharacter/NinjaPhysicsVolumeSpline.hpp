#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NinjaPhysicsVolume.hpp"
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NinjaCharacter {
#pragma pack(push, 1)
struct NinjaPhysicsVolumeSpline : public NinjaPhysicsVolume {
    private: char pad_2c0[0x8]; public:
    _Script_Engine::SplineComponent*& get_SplineComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c8
#pragma pack(pop)
}
