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
struct GizmoLineHandleComponent : public GizmoBaseComponent {
    private: char pad_470[0x30]; public:
    void* get_Normal();
    float& get_HandleSize();
    float& get_Thickness();
    void* get_Direction();
    float& get_Length();
    bool get_bImageScale();
    void set_bImageScale(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4a0
#pragma pack(pop)
}
