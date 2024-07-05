#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_SimBaseMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_PointSimulation : public RigUnit_SimBaseMutable {
    private: char pad_68[0x198]; public:
    void* get_Points();
    void* get_Links();
    void* get_Forces();
    void* get_CollisionVolumes();
    float& get_SimulatedStepsPerSecond();
    void* get_IntegratorType();
    float& get_VerletBlend();
    void* get_BoneTargets();
    bool get_bLimitLocalPosition();
    void set_bLimitLocalPosition(bool value);
    bool get_bPropagateToChildren();
    void set_bPropagateToChildren(bool value);
    void* get_PrimaryAimAxis();
    void* get_SecondaryAimAxis();
    void* get_DebugSettings();
    void* get_Bezier();
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x200
#pragma pack(pop)
}
