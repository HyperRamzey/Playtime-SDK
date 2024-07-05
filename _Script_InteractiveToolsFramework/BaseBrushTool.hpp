#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MeshSurfacePointTool.hpp"
namespace _Script_InteractiveToolsFramework {
struct BrushBaseProperties;
}
namespace _Script_InteractiveToolsFramework {
struct BrushStampIndicator;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct BaseBrushTool : public MeshSurfacePointTool {
    private: char pad_c0[0xf8]; public:
    _Script_InteractiveToolsFramework::BrushBaseProperties*& get_BrushProperties();
    bool get_bInBrushStroke();
    void set_bInBrushStroke(bool value);
    float& get_WorldToLocalScale();
    void* get_LastBrushStamp();
    void* get_PropertyClass();
    _Script_InteractiveToolsFramework::BrushStampIndicator*& get_BrushStampIndicator();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b8
#pragma pack(pop)
}
