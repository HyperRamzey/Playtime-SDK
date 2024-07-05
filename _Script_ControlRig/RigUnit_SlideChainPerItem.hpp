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
struct RigUnit_SlideChainPerItem : public RigUnit_HighlevelBaseMutable {
    private: char pad_68[0x60]; public:
    void* get_Items();
    float& get_SlideAmount();
    bool get_bPropagateToChildren();
    void set_bPropagateToChildren(bool value);
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
