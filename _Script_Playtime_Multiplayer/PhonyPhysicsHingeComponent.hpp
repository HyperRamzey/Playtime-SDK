#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PhonyPhysicsComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PhonyPhysicsHingeComponent : public PhonyPhysicsComponent {
    private: char pad_280[0x20]; public:
    void* get_RotatorAxis();
    float& get_TargetAngle();
    void* get_CurrentRotation();
    void* get_NetRotation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2a0
#pragma pack(pop)
}
