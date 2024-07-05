#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_InteractiveToolsFramework {
struct InputBehaviorSet;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct InteractiveTool : public _Script_CoreUObject::Object {
    private: char pad_28[0x58]; public:
    _Script_InteractiveToolsFramework::InputBehaviorSet*& get_InputBehaviors();
    void* get_ToolPropertyObjects();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
