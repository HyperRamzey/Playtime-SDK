#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InteractiveToolBuilder.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct MeshSurfacePointToolBuilder : public InteractiveToolBuilder {
    private: char pad_28[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
