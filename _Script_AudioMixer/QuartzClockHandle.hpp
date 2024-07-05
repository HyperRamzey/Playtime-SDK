#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\QuartzQuantizationBoundary.hpp"
#include "..\_Script_Engine\QuartzTransportTimeStamp.hpp"
namespace _Script_AudioMixer {
struct QuartzSubsystem;
}
namespace _Script_Engine {
struct World;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct QuartzClockHandle : public _Script_CoreUObject::Object {
    private: char pad_28[0x168]; public:
    _Script_AudioMixer::QuartzSubsystem*& get_QuartzSubsystem();
    _Script_Engine::World*& get_WorldPtr();
    static _Script_CoreUObject::Class* static_class();
    void UnsubscribeFromTimeDivision(_Script_CoreUObject::Object* WorldContextObject, void* InQuantizationBoundary, _Script_AudioMixer::QuartzClockHandle*& ClockHandle);
    void UnsubscribeFromAllTimeDivisions(_Script_CoreUObject::Object* WorldContextObject, _Script_AudioMixer::QuartzClockHandle*& ClockHandle);
    void SubscribeToQuantizationEvent(_Script_CoreUObject::Object* WorldContextObject, void* InQuantizationBoundary, void*& OnQuantizationEvent, _Script_AudioMixer::QuartzClockHandle*& ClockHandle);
    void SubscribeToAllQuantizationEvents(_Script_CoreUObject::Object* WorldContextObject, void*& OnQuantizationEvent, _Script_AudioMixer::QuartzClockHandle*& ClockHandle);
    void StopClock(_Script_CoreUObject::Object* WorldContextObject, bool CancelPendingEvents, _Script_AudioMixer::QuartzClockHandle*& ClockHandle);
    void StartOtherClock(_Script_CoreUObject::Object* WorldContextObject, void* OtherClockName, _Script_Engine::QuartzQuantizationBoundary InQuantizationBoundary, void*& InDelegate);
    void StartClock(_Script_CoreUObject::Object* WorldContextObject, _Script_AudioMixer::QuartzClockHandle*& ClockHandle);
    void SetTicksPerSecond(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::QuartzQuantizationBoundary& QuantizationBoundary, void*& Delegate, _Script_AudioMixer::QuartzClockHandle*& ClockHandle, float TicksPerSecond);
    void SetThirtySecondNotesPerMinute(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::QuartzQuantizationBoundary& QuantizationBoundary, void*& Delegate, _Script_AudioMixer::QuartzClockHandle*& ClockHandle, float ThirtySecondsNotesPerMinute);
    void SetSecondsPerTick(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::QuartzQuantizationBoundary& QuantizationBoundary, void*& Delegate, _Script_AudioMixer::QuartzClockHandle*& ClockHandle, float SecondsPerTick);
    void SetMillisecondsPerTick(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::QuartzQuantizationBoundary& QuantizationBoundary, void*& Delegate, _Script_AudioMixer::QuartzClockHandle*& ClockHandle, float MillisecondsPerTick);
    void SetBeatsPerMinute(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::QuartzQuantizationBoundary& QuantizationBoundary, void*& Delegate, _Script_AudioMixer::QuartzClockHandle*& ClockHandle, float BeatsPerMinute);
    void ResumeClock(_Script_CoreUObject::Object* WorldContextObject, _Script_AudioMixer::QuartzClockHandle*& ClockHandle);
    void ResetTransportQuantized(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::QuartzQuantizationBoundary InQuantizationBoundary, void*& InDelegate, _Script_AudioMixer::QuartzClockHandle*& ClockHandle);
    void ResetTransport(_Script_CoreUObject::Object* WorldContextObject, void*& InDelegate);
    void PauseClock(_Script_CoreUObject::Object* WorldContextObject, _Script_AudioMixer::QuartzClockHandle*& ClockHandle);
    bool IsClockRunning(_Script_CoreUObject::Object* WorldContextObject);
    float GetTicksPerSecond(_Script_CoreUObject::Object* WorldContextObject);
    float GetThirtySecondNotesPerMinute(_Script_CoreUObject::Object* WorldContextObject);
    float GetSecondsPerTick(_Script_CoreUObject::Object* WorldContextObject);
    float GetMillisecondsPerTick(_Script_CoreUObject::Object* WorldContextObject);
    float GetEstimatedRunTime(_Script_CoreUObject::Object* WorldContextObject);
    float GetDurationOfQuantizationTypeInSeconds(_Script_CoreUObject::Object* WorldContextObject, void*& QuantizationType, float Multiplier);
    _Script_Engine::QuartzTransportTimeStamp GetCurrentTimestamp(_Script_CoreUObject::Object* WorldContextObject);
    float GetBeatsPerMinute(_Script_CoreUObject::Object* WorldContextObject);
}; // Size: 0x190
#pragma pack(pop)
}
