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
struct RigUnit_TransformConstraint : public RigUnit_HighlevelBaseMutable {
    private: char pad_68[0xc8]; public:
    void* get_Bone();
    void* get_BaseTransformSpace();
    void* get_BaseTransform();
    void* get_BaseBone();
    void* get_Targets();
    bool get_bUseInitialTransforms();
    void set_bUseInitialTransforms(bool value);
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
