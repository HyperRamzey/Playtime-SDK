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
struct RigUnit_SendEvent : public RigUnitMutable {
    private: char pad_68[0x18]; public:
    void* get_Event();
    void* get_Item();
    float& get_OffsetInSeconds();
    bool get_bEnable();
    void set_bEnable(bool value);
    bool get_bOnlyDuringInteraction();
    void set_bOnlyDuringInteraction(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
