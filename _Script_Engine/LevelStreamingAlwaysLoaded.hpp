#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LevelStreaming.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LevelStreamingAlwaysLoaded : public LevelStreaming {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x150
#pragma pack(pop)
}