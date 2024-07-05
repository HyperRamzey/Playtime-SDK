#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_ItemBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_ItemReplace : public RigUnit_ItemBase {
    private: char pad_8[0x28]; public:
    void* get_Item();
    void* get_Old();
    void* get_New();
    void* get_Result();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
