#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ArchVisCharacter {
#pragma pack(push, 1)
struct ArchVisCharMovementComponent : public _Script_Engine::CharacterMovementComponent {
    private: char pad_af0[0x50]; public:
    void* get_RotationalAcceleration();
    void* get_RotationalDeceleration();
    void* get_MaxRotationalVelocity();
    float& get_MinPitch();
    float& get_MaxPitch();
    float& get_WalkingFriction();
    float& get_WalkingSpeed();
    float& get_WalkingAcceleration();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb40
#pragma pack(pop)
}
