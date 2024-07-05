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
struct GizmoAxisTranslationParameterSource : public GizmoBaseFloatParameterSource {
    private: char pad_48[0xc8]; public:
    void* get_AxisSource();
    void* get_TransformSource();
    float& get_Parameter();
    void* get_LastChange();
    void* get_CurTranslationAxis();
    void* get_CurTranslationOrigin();
    void* get_InitialTransform();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x110
#pragma pack(pop)
}
