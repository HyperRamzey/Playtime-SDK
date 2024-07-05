#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PrimitiveComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct GizmoBaseComponent : public _Script_Engine::PrimitiveComponent {
    private: char pad_450[0x20]; public:
    void* get_Color();
    float& get_HoverSizeMultiplier();
    float& get_PixelHitDistanceThreshold();
    static _Script_CoreUObject::Class* static_class();
    void UpdateWorldLocalState(bool bWorldIn);
    void UpdateHoverState(bool bHoveringIn);
}; // Size: 0x470
#pragma pack(pop)
}
