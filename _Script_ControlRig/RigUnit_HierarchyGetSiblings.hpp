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
struct RigUnit_HierarchyGetSiblings : public RigUnit_HierarchyBase {
    private: char pad_8[0x48]; public:
    void* get_Item();
    bool get_bIncludeItem();
    void set_bIncludeItem(bool value);
    void* get_Siblings();
    void* get_CachedItem();
    void* get_CachedSiblings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
