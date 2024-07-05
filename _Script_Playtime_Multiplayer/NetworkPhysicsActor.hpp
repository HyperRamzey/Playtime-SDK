#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct NetworkPhysicsActor : public _Script_Engine::Actor {
    private: char pad_220[0x48]; public:
    float& get_Tolerance();
    void* get_Position();
    void* get_Rotation();
    static _Script_CoreUObject::Class* static_class();
    void UpdateRotation();
    void UpdatePosition();
}; // Size: 0x268
#pragma pack(pop)
}
