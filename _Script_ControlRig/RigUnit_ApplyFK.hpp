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
struct RigUnit_ApplyFK : public RigUnitMutable {
    private: char pad_68[0x88]; public:
    void* get_Joint();
    void* get_Transform();
    void* get_Filter();
    void* get_ApplyTransformMode();
    void* get_ApplyTransformSpace();
    void* get_BaseTransform();
    void* get_BaseJoint();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
