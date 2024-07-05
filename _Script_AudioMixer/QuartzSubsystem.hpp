#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\QuartzClockSettings.hpp"
#include "..\_Script_Engine\QuartzTransportTimeStamp.hpp"
#include "..\_Script_Engine\TickableWorldSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_AudioMixer {
struct QuartzClockHandle;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct QuartzSubsystem : public _Script_Engine::TickableWorldSubsystem {
    private: char pad_40[0x110]; public:
    static _Script_CoreUObject::Class* static_class();
    bool IsQuartzEnabled();
    bool IsClockRunning(_Script_CoreUObject::Object* WorldContextObject, void* ClockName);
    float GetRoundTripMinLatency(_Script_CoreUObject::Object* WorldContextObject);
    float GetRoundTripMaxLatency(_Script_CoreUObject::Object* WorldContextObject);
    float GetRoundTripAverageLatency(_Script_CoreUObject::Object* WorldContextObject);
    _Script_AudioMixer::QuartzClockHandle* GetHandleForClock(_Script_CoreUObject::Object* WorldContextObject, void* ClockName);
    float GetGameThreadToAudioRenderThreadMinLatency(_Script_CoreUObject::Object* WorldContextObject);
    float GetGameThreadToAudioRenderThreadMaxLatency(_Script_CoreUObject::Object* WorldContextObject);
    float GetGameThreadToAudioRenderThreadAverageLatency(_Script_CoreUObject::Object* WorldContextObject);
    float GetEstimatedClockRunTime(_Script_CoreUObject::Object* WorldContextObject, void*& InClockName);
    float GetDurationOfQuantizationTypeInSeconds(_Script_CoreUObject::Object* WorldContextObject, void* ClockName, void*& QuantizationType, float Multiplier);
    _Script_Engine::QuartzTransportTimeStamp GetCurrentClockTimestamp(_Script_CoreUObject::Object* WorldContextObject, void*& InClockName);
    float GetAudioRenderThreadToGameThreadMinLatency();
    float GetAudioRenderThreadToGameThreadMaxLatency();
    float GetAudioRenderThreadToGameThreadAverageLatency();
    bool DoesClockExist(_Script_CoreUObject::Object* WorldContextObject, void* ClockName);
    void DeleteClockByName(_Script_CoreUObject::Object* WorldContextObject, void* ClockName);
    void DeleteClockByHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_AudioMixer::QuartzClockHandle*& InClockHandle);
    _Script_AudioMixer::QuartzClockHandle* CreateNewClock(_Script_CoreUObject::Object* WorldContextObject, void* ClockName, _Script_Engine::QuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager);
}; // Size: 0x150
#pragma pack(pop)
}
