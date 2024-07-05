#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ProjectileMovementComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NinjaCharacter {
#pragma pack(push, 1)
struct NinjaProjectileMovementComponent : public _Script_Engine::ProjectileMovementComponent {
    private: char pad_1d0[0x10]; public:
    bool get_bFollowGravityDirection();
    void set_bFollowGravityDirection(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1e0
#pragma pack(pop)
}
