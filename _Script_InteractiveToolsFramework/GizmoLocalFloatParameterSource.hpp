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
struct GizmoLocalFloatParameterSource : public GizmoBaseFloatParameterSource {
    private: char pad_48[0x10]; public:
    float& get_Value();
    void* get_LastChange();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
