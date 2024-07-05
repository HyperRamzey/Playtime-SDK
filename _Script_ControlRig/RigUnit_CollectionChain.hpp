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
struct RigUnit_CollectionChain : public RigUnit_CollectionBase {
    private: char pad_8[0x48]; public:
    void* get_FirstItem();
    void* get_LastItem();
    bool get_Reverse();
    void set_Reverse(bool value);
    void* get_Collection();
    void* get_CachedCollection();
    int32_t& get_CachedHierarchyHash();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
