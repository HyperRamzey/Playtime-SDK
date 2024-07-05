#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_InteractiveToolsFramework {
struct InteractiveTool;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct InteractiveToolManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x110]; public:
    _Script_InteractiveToolsFramework::InteractiveTool*& get_ActiveLeftTool();
    _Script_InteractiveToolsFramework::InteractiveTool*& get_ActiveRightTool();
    void* get_ToolBuilders();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x138
#pragma pack(pop)
}
