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
struct RigUnit_TwoBoneIKSimple : public RigUnit_HighlevelBaseMutable {
    private: char pad_68[0x128]; public:
    void* get_BoneA();
    void* get_BoneB();
    void* get_EffectorBone();
    void* get_Effector();
    void* get_PrimaryAxis();
    void* get_SecondaryAxis();
    float& get_SecondaryAxisWeight();
    void* get_PoleVector();
    void* get_PoleVectorKind();
    void* get_PoleVectorSpace();
    bool get_bEnableStretch();
    void set_bEnableStretch(bool value);
    float& get_StretchStartRatio();
    float& get_StretchMaximumRatio();
    float& get_Weight();
    float& get_BoneALength();
    float& get_BoneBLength();
    bool get_bPropagateToChildren();
    void set_bPropagateToChildren(bool value);
    void* get_DebugSettings();
    void* get_CachedBoneAIndex();
    void* get_CachedBoneBIndex();
    void* get_CachedEffectorBoneIndex();
    void* get_CachedPoleVectorSpaceIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x190
#pragma pack(pop)
}
