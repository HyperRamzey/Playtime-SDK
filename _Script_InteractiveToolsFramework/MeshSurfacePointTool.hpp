#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SingleSelectionTool.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct MeshSurfacePointTool : public SingleSelectionTool {
    private: char pad_88[0x38]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
