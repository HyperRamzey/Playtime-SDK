#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InteractiveGizmo.hpp"
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct BrushStampIndicator : public InteractiveGizmo {
    private: char pad_38[0x78]; public:
    float& get_BrushRadius();
    float& get_BrushFalloff();
    void* get_BrushPosition();
    void* get_BrushNormal();
    bool get_bDrawIndicatorLines();
    void set_bDrawIndicatorLines(bool value);
    bool get_bDrawRadiusCircle();
    void set_bDrawRadiusCircle(bool value);
    int32_t& get_SampleStepCount();
    void* get_LineColor();
    float& get_LineThickness();
    bool get_bDepthTested();
    void set_bDepthTested(bool value);
    bool get_bDrawSecondaryLines();
    void set_bDrawSecondaryLines(bool value);
    float& get_SecondaryLineThickness();
    void* get_SecondaryLineColor();
    _Script_Engine::PrimitiveComponent*& get_AttachedComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
