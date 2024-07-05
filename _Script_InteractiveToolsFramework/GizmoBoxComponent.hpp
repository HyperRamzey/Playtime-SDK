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
struct GizmoBoxComponent : public GizmoBaseComponent {
    private: char pad_470[0x40]; public:
    void* get_Origin();
    void* get_Rotation();
    void* get_Dimensions();
    float& get_LineThickness();
    bool get_bRemoveHiddenLines();
    void set_bRemoveHiddenLines(bool value);
    bool get_bEnableAxisFlip();
    void set_bEnableAxisFlip(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4b0
#pragma pack(pop)
}
