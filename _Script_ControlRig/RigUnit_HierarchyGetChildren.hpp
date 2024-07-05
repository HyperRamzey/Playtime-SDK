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
struct RigUnit_HierarchyGetChildren : public RigUnit_HierarchyBase {
    private: char pad_8[0x48]; public:
    void* get_Parent();
    bool get_bIncludeParent();
    void set_bIncludeParent(bool value);
    bool get_bRecursive();
    void set_bRecursive(bool value);
    void* get_Children();
    void* get_CachedParent();
    void* get_CachedChildren();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
