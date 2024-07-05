#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_HierarchyBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_HierarchyGetParent : public RigUnit_HierarchyBase {
    private: char pad_8[0x40]; public:
    void* get_Child();
    void* get_Parent();
    void* get_CachedChild();
    void* get_CachedParent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
