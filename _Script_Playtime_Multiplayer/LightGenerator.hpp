#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct LightGenerator : public _Script_Engine::Actor {
    private: char pad_220[0x28]; public:
    void* get_CachedLightComponents();
    void* get_CachedLightGenerators();
    static _Script_CoreUObject::Class* static_class();
    void FixGenerator();
    void BrakeGenerator();
}; // Size: 0x248
#pragma pack(pop)
}
