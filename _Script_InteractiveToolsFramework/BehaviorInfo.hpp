#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_InteractiveToolsFramework {
struct InputBehavior;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct BehaviorInfo {
    private: char pad_0[0x20]; public:
    _Script_InteractiveToolsFramework::InputBehavior*& get_Behavior();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
