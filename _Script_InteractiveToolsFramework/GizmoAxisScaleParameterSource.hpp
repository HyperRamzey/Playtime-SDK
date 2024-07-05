#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GizmoBaseFloatParameterSource.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct GizmoAxisScaleParameterSource : public GizmoBaseFloatParameterSource {
    private: char pad_48[0x78]; public:
    void* get_AxisSource();
    void* get_TransformSource();
    float& get_ScaleMultiplier();
    float& get_Parameter();
    void* get_LastChange();
    void* get_CurScaleAxis();
    void* get_CurScaleOrigin();
    void* get_InitialTransform();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
