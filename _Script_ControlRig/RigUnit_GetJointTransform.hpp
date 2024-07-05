#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnitMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_GetJointTransform : public RigUnitMutable {
    private: char pad_68[0x88]; public:
    void* get_Joint();
    void* get_Type();
    void* get_TransformSpace();
    void* get_BaseTransform();
    void* get_BaseJoint();
    void* get_Output();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
