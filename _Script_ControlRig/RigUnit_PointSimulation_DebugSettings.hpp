#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_PointSimulation_DebugSettings {
    private: char pad_0[0x50]; public:
    bool get_bEnabled();
    void set_bEnabled(bool value);
    float& get_Scale();
    float& get_CollisionScale();
    bool get_bDrawPointsAsSpheres();
    void set_bDrawPointsAsSpheres(bool value);
    void* get_Color();
    void* get_WorldOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
