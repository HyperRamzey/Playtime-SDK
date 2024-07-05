#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GizmoBaseComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct GizmoRectangleComponent : public GizmoBaseComponent {
    private: char pad_470[0x30]; public:
    void* get_DirectionX();
    void* get_DirectionY();
    float& get_OffsetX();
    float& get_OffsetY();
    float& get_LengthX();
    float& get_LengthY();
    float& get_Thickness();
    void* get_SegmentFlags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4a0
#pragma pack(pop)
}
