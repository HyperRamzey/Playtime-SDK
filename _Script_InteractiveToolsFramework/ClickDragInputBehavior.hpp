#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnyButtonInputBehavior.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct ClickDragInputBehavior : public AnyButtonInputBehavior {
    private: char pad_80[0xc0]; public:
    bool get_bUpdateModifiersDuringDrag();
    void set_bUpdateModifiersDuringDrag(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
