#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GizmoBaseVec2ParameterSource.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct GizmoUniformScaleParameterSource : public GizmoBaseVec2ParameterSource {
    private: char pad_48[0xa8]; public:
    void* get_AxisSource();
    void* get_TransformSource();
    float& get_ScaleMultiplier();
    void* get_Parameter();
    void* get_LastChange();
    void* get_CurScaleOrigin();
    void* get_CurScaleNormal();
    void* get_CurScaleAxisX();
    void* get_CurScaleAxisY();
    void* get_InitialTransform();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
