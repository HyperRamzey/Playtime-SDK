#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LandscapeProxy.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct Landscape : public LandscapeProxy {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x598
#pragma pack(pop)
}
