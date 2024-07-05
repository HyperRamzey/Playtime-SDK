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
struct RigUnit_TransformConstraintPerItem : public RigUnit_HighlevelBaseMutable {
    private: char pad_68[0xd8]; public:
    void* get_Item();
    void* get_BaseTransformSpace();
    void* get_BaseTransform();
    void* get_BaseItem();
    void* get_Targets();
    bool get_bUseInitialTransforms();
    void set_bUseInitialTransforms(bool value);
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
