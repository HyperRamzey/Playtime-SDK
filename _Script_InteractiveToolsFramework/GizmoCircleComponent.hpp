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
struct GizmoCircleComponent : public GizmoBaseComponent {
    private: char pad_470[0x20]; public:
    void* get_Normal();
    float& get_Radius();
    float& get_Thickness();
    int32_t& get_NumSides();
    bool get_bViewAligned();
    void set_bViewAligned(bool value);
    bool get_bOnlyAllowFrontFacingHits();
    void set_bOnlyAllowFrontFacingHits(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x490
#pragma pack(pop)
}
