#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundPack.hpp"
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct AmbiencePack : public SoundPack {
    private: char pad_40[0x18]; public:
    _Script_Engine::SoundBase*& get_TheaterAmbience();
    _Script_Engine::SoundBase*& get_FactoryAmbience();
    _Script_Engine::SoundBase*& get_DestroyAToyAmbience();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
