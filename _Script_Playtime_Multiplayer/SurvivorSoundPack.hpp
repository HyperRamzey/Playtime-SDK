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
struct SurvivorSoundPack : public SoundPack {
    private: char pad_40[0x50]; public:
    _Script_Engine::SoundBase*& get_DefaultFootsteps();
    _Script_Engine::SoundBase*& get_CarpetFootsteps();
    _Script_Engine::SoundBase*& get_MetalFootsteps();
    _Script_Engine::SoundBase*& get_Jump();
    _Script_Engine::SoundBase*& get_DefaultLanding();
    _Script_Engine::SoundBase*& get_CarpetLanding();
    _Script_Engine::SoundBase*& get_MetalLanding();
    _Script_Engine::SoundBase*& get_Roll();
    _Script_Engine::SoundBase*& get_HeavyBreathing();
    _Script_Engine::SoundBase*& get_BigExhale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
