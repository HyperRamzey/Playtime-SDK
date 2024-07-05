#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigElement.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigBone : public RigElement {
    private: char pad_18[0xc8]; public:
    void* get_ParentName();
    int32_t& get_ParentIndex();
    void* get_InitialTransform();
    void* get_GlobalTransform();
    void* get_LocalTransform();
    void* get_Dependents();
    void* get_Type();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
