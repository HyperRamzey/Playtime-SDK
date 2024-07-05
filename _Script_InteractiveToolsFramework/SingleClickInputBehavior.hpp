#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnyButtonInputBehavior.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_InteractiveToolsFramework {
#pragma pack(push, 1)
struct SingleClickInputBehavior : public AnyButtonInputBehavior {
    private: char pad_80[0xb0]; public:
    bool get_HitTestOnRelease();
    void set_HitTestOnRelease(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
