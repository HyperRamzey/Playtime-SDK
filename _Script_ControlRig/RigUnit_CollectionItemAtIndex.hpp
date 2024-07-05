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
struct RigUnit_CollectionItemAtIndex : public RigUnit_CollectionBase {
    private: char pad_8[0x20]; public:
    void* get_Collection();
    int32_t& get_Index();
    void* get_Item();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
