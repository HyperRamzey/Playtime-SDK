#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_HighlevelBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_TwoBoneIKSimpleTransforms : public RigUnit_HighlevelBase {
    private: char pad_8[0xd8]; public:
    void* get_Root();
    void* get_PoleVector();
    void* get_Effector();
    void* get_PrimaryAxis();
    void* get_SecondaryAxis();
    float& get_SecondaryAxisWeight();
    bool get_bEnableStretch();
    void set_bEnableStretch(bool value);
    float& get_StretchStartRatio();
    float& get_StretchMaximumRatio();
    float& get_BoneALength();
    float& get_BoneBLength();
    void* get_Elbow();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
