#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapAudio {
#pragma pack(push, 1)
struct MagicLeapAudioFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool SetOnAudioJackUnpluggedDelegate(void*& ResultDelegate);
    bool SetOnAudioJackPluggedDelegate(void*& ResultDelegate);
    bool SetMicMute(bool IsMuted);
    bool IsMicMuted();
}; // Size: 0x28
#pragma pack(pop)
}
