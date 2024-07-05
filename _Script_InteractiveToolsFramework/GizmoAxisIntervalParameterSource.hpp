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
struct GizmoAxisIntervalParameterSource : public GizmoBaseFloatParameterSource {
    private: char pad_48[0x18]; public:
    void* get_FloatParameterSource();
    float& get_MinParameter();
    float& get_MaxParameter();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
