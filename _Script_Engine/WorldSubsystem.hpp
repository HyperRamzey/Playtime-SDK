#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Subsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct WorldSubsystem : public Subsystem {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
