#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InteractiveTool.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct SingleSelectionTool : public InteractiveTool {
    private: char pad_80[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
