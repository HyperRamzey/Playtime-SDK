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
struct GizmoPlaneTranslationParameterSource : public GizmoBaseVec2ParameterSource {
    private: char pad_48[0xe8]; public:
    void* get_AxisSource();
    void* get_TransformSource();
    void* get_Parameter();
    void* get_LastChange();
    void* get_CurTranslationOrigin();
    void* get_CurTranslationNormal();
    void* get_CurTranslationAxisX();
    void* get_CurTranslationAxisY();
    void* get_InitialTransform();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
