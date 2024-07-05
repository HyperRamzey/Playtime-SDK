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
struct RigSpace : public RigElement {
    private: char pad_18[0x78]; public:
    void* get_SpaceType();
    void* get_ParentName();
    int32_t& get_ParentIndex();
    void* get_InitialTransform();
    void* get_LocalTransform();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
