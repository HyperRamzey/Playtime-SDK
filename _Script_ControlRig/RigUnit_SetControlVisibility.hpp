#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnitMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_SetControlVisibility : public RigUnitMutable {
    private: char pad_68[0x38]; public:
    void* get_Item();
    void* get_Pattern();
    bool get_bVisible();
    void set_bVisible(bool value);
    void* get_CachedControlIndices();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
