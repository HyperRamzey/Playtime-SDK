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
struct RigUnit_HierarchyGetParents : public RigUnit_HierarchyBase {
    private: char pad_8[0x48]; public:
    void* get_Child();
    bool get_bIncludeChild();
    void set_bIncludeChild(bool value);
    bool get_bReverse();
    void set_bReverse(bool value);
    void* get_Parents();
    void* get_CachedChild();
    void* get_CachedParents();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
