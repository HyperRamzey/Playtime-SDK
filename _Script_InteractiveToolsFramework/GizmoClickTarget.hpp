#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct GizmoClickTarget : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void UpdateHoverState(bool bHovering);
}; // Size: 0x28
#pragma pack(pop)
}