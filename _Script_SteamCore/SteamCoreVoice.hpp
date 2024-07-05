#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SoundWaveProcedural.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreVoice : public _Script_Engine::SoundWaveProcedural {
    static _Script_CoreUObject::Class* static_class();
    void DestroySteamCoreVoice(_Script_SteamCore::SteamCoreVoice* Obj);
    _Script_SteamCore::SteamCoreVoice* ConstructSteamCoreVoice(int32_t AudioSampleRate);
    void AddAudioBuffer(void*& Buffer);
}; // Size: 0x3c0
#pragma pack(pop)
}
