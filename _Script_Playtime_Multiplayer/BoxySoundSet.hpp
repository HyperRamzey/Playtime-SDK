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
struct BoxySoundSet : public _Script_Engine::TableRowBase {
    private: char pad_8[0x70]; public:
    void* get_Name();
    _Script_Engine::SoundBase*& get_Footstep();
    _Script_Engine::SoundBase*& get_Crouch();
    _Script_Engine::SoundBase*& get_Punch();
    _Script_Engine::SoundBase*& get_PunchHit();
    _Script_Engine::SoundBase*& get_ChargingJump();
    _Script_Engine::SoundBase*& get_ReleasedCharge();
    _Script_Engine::SoundBase*& get_Land();
    _Script_Engine::SoundBase*& get_Jump();
    _Script_Engine::SoundBase*& get_GrabShoot();
    _Script_Engine::SoundBase*& get_GrabGrab();
    _Script_Engine::SoundBase*& get_Jumpscare();
    _Script_Engine::SoundBase*& get_SelectScreen();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
