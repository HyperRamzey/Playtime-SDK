#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct HuggySoundSet : public _Script_Engine::TableRowBase {
    private: char pad_8[0x58]; public:
    void* get_Name();
    _Script_Engine::SoundBase*& get_Footstep();
    _Script_Engine::SoundBase*& get_Crouch();
    _Script_Engine::SoundBase*& get_Punch();
    _Script_Engine::SoundBase*& get_PunchHit();
    _Script_Engine::SoundBase*& get_ChargeAttack();
    _Script_Engine::SoundBase*& get_ChargeAttackHit();
    _Script_Engine::SoundBase*& get_PlaceMiniHuggy();
    _Script_Engine::SoundBase*& get_Jumpscare();
    _Script_Engine::SoundBase*& get_SelectScreen();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
