#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_InteractiveToolsFramework {
struct InputRouter;
}
namespace _Script_InteractiveToolsFramework {
struct InteractiveGizmoManager;
}
namespace _Script_InteractiveToolsFramework {
struct InteractiveToolManager;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct InteractiveToolsContext : public _Script_CoreUObject::Object {
    private: char pad_28[0x70]; public:
    _Script_InteractiveToolsFramework::InputRouter*& get_InputRouter();
    _Script_InteractiveToolsFramework::InteractiveToolManager*& get_ToolManager();
    _Script_InteractiveToolsFramework::InteractiveGizmoManager*& get_GizmoManager();
    void* get_ToolManagerClass();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
