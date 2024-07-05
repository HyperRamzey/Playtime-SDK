#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PowerIKRuntime {
#pragma pack(push, 1)
struct PowerIKGroundCollision {
    private: char pad_0[0x14]; public:
    void* get_CollisionChannel();
    bool get_TraceComplex();
    void set_TraceComplex(bool value);
    float& get_RayCastUp();
    float& get_RayCastDown();
    bool get_EnableWallCollision();
    void set_EnableWallCollision(bool value);
    float& get_WallOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
