#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ClickDragInputBehavior.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct LocalClickDragInputBehavior : public ClickDragInputBehavior {
    private: char pad_140[0x140]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x280
#pragma pack(pop)
}
