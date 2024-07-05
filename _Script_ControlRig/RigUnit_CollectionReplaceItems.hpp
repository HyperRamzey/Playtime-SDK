#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_CollectionBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_CollectionReplaceItems : public RigUnit_CollectionBase {
    private: char pad_8[0x50]; public:
    void* get_Items();
    void* get_Old();
    void* get_New();
    bool get_RemoveInvalidItems();
    void set_RemoveInvalidItems(bool value);
    void* get_Collection();
    void* get_CachedCollection();
    int32_t& get_CachedHierarchyHash();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
