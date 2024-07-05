#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_HighlevelBaseMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_AimItem : public RigUnit_HighlevelBaseMutable {
    private: char pad_68[0xe8]; public:
    void* get_Item();
    void* get_Primary();
    void* get_Secondary();
    float& get_Weight();
    void* get_DebugSettings();
    void* get_CachedItem();
    void* get_PrimaryCachedSpace();
    void* get_SecondaryCachedSpace();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x150
#pragma pack(pop)
}
