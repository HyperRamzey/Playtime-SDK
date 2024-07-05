#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_HighlevelBaseMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_SpringIK : public RigUnit_HighlevelBaseMutable {
    private: char pad_68[0x168]; public:
    void* get_StartBone();
    void* get_EndBone();
    float& get_HierarchyStrength();
    float& get_EffectorStrength();
    float& get_EffectorRatio();
    float& get_RootStrength();
    float& get_RootRatio();
    float& get_Damping();
    void* get_PoleVector();
    bool get_bFlipPolePlane();
    void set_bFlipPolePlane(bool value);
    void* get_PoleVectorKind();
    void* get_PoleVectorSpace();
    void* get_PrimaryAxis();
    void* get_SecondaryAxis();
    bool get_bLiveSimulation();
    void set_bLiveSimulation(bool value);
    int32_t& get_Iterations();
    bool get_bLimitLocalPosition();
    void set_bLimitLocalPosition(bool value);
    bool get_bPropagateToChildren();
    void set_bPropagateToChildren(bool value);
    void* get_DebugSettings();
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1d0
#pragma pack(pop)
}
