#include "..\FUObjectArray.hpp"
#include "QuartzClockHandle.hpp"
#include "QuartzSubsystem.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\QuartzQuantizationBoundary.hpp"
#include "..\_Script_Engine\QuartzTransportTimeStamp.hpp"
#include "..\_Script_Engine\World.hpp"
_Script_AudioMixer::QuartzSubsystem*& _Script_AudioMixer::QuartzClockHandle::get_QuartzSubsystem() {
    return *(_Script_AudioMixer::QuartzSubsystem**)((uintptr_t)this + 0x168);
}
_Script_Engine::World*& _Script_AudioMixer::QuartzClockHandle::get_WorldPtr() {
    return *(_Script_Engine::World**)((uintptr_t)this + 0x188);
}
_Script_CoreUObject::Class* _Script_AudioMixer::QuartzClockHandle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioMixer.QuartzClockHandle");
    return result;
}
void _Script_AudioMixer::QuartzClockHandle::SubscribeToAllQuantizationEvents(_Script_CoreUObject::Object* WorldContextObject, void*& OnQuantizationEvent, _Script_AudioMixer::QuartzClockHandle*& ClockHandle) {
    return;
}
void _Script_AudioMixer::QuartzClockHandle::UnsubscribeFromTimeDivision(_Script_CoreUObject::Object* WorldContextObject, void* InQuantizationBoundary, _Script_AudioMixer::QuartzClockHandle*& ClockHandle) {
    return;
}
void _Script_AudioMixer::QuartzClockHandle::UnsubscribeFromAllTimeDivisions(_Script_CoreUObject::Object* WorldContextObject, _Script_AudioMixer::QuartzClockHandle*& ClockHandle) {
    return;
}
void _Script_AudioMixer::QuartzClockHandle::StopClock(_Script_CoreUObject::Object* WorldContextObject, bool CancelPendingEvents, _Script_AudioMixer::QuartzClockHandle*& ClockHandle) {
    return;
}
void _Script_AudioMixer::QuartzClockHandle::SubscribeToQuantizationEvent(_Script_CoreUObject::Object* WorldContextObject, void* InQuantizationBoundary, void*& OnQuantizationEvent, _Script_AudioMixer::QuartzClockHandle*& ClockHandle) {
    return;
}
void _Script_AudioMixer::QuartzClockHandle::StartOtherClock(_Script_CoreUObject::Object* WorldContextObject, void* OtherClockName, _Script_Engine::QuartzQuantizationBoundary InQuantizationBoundary, void*& InDelegate) {
    return;
}
void _Script_AudioMixer::QuartzClockHandle::ResetTransport(_Script_CoreUObject::Object* WorldContextObject, void*& InDelegate) {
    return;
}
void _Script_AudioMixer::QuartzClockHandle::StartClock(_Script_CoreUObject::Object* WorldContextObject, _Script_AudioMixer::QuartzClockHandle*& ClockHandle) {
    return;
}
void _Script_AudioMixer::QuartzClockHandle::SetTicksPerSecond(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::QuartzQuantizationBoundary& QuantizationBoundary, void*& Delegate, _Script_AudioMixer::QuartzClockHandle*& ClockHandle, float TicksPerSecond) {
    return;
}
void _Script_AudioMixer::QuartzClockHandle::SetThirtySecondNotesPerMinute(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::QuartzQuantizationBoundary& QuantizationBoundary, void*& Delegate, _Script_AudioMixer::QuartzClockHandle*& ClockHandle, float ThirtySecondsNotesPerMinute) {
    return;
}
void _Script_AudioMixer::QuartzClockHandle::SetSecondsPerTick(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::QuartzQuantizationBoundary& QuantizationBoundary, void*& Delegate, _Script_AudioMixer::QuartzClockHandle*& ClockHandle, float SecondsPerTick) {
    return;
}
void _Script_AudioMixer::QuartzClockHandle::SetMillisecondsPerTick(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::QuartzQuantizationBoundary& QuantizationBoundary, void*& Delegate, _Script_AudioMixer::QuartzClockHandle*& ClockHandle, float MillisecondsPerTick) {
    return;
}
void _Script_AudioMixer::QuartzClockHandle::SetBeatsPerMinute(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::QuartzQuantizationBoundary& QuantizationBoundary, void*& Delegate, _Script_AudioMixer::QuartzClockHandle*& ClockHandle, float BeatsPerMinute) {
    return;
}
void _Script_AudioMixer::QuartzClockHandle::ResumeClock(_Script_CoreUObject::Object* WorldContextObject, _Script_AudioMixer::QuartzClockHandle*& ClockHandle) {
    return;
}
void _Script_AudioMixer::QuartzClockHandle::ResetTransportQuantized(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::QuartzQuantizationBoundary InQuantizationBoundary, void*& InDelegate, _Script_AudioMixer::QuartzClockHandle*& ClockHandle) {
    return;
}
void _Script_AudioMixer::QuartzClockHandle::PauseClock(_Script_CoreUObject::Object* WorldContextObject, _Script_AudioMixer::QuartzClockHandle*& ClockHandle) {
    return;
}
float _Script_AudioMixer::QuartzClockHandle::GetMillisecondsPerTick(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
bool _Script_AudioMixer::QuartzClockHandle::IsClockRunning(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_AudioMixer::QuartzClockHandle::GetTicksPerSecond(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_AudioMixer::QuartzClockHandle::GetThirtySecondNotesPerMinute(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_Engine::QuartzTransportTimeStamp _Script_AudioMixer::QuartzClockHandle::GetCurrentTimestamp(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_AudioMixer::QuartzClockHandle::GetSecondsPerTick(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_AudioMixer::QuartzClockHandle::GetEstimatedRunTime(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_AudioMixer::QuartzClockHandle::GetDurationOfQuantizationTypeInSeconds(_Script_CoreUObject::Object* WorldContextObject, void*& QuantizationType, float Multiplier) {
    return;
}
float _Script_AudioMixer::QuartzClockHandle::GetBeatsPerMinute(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
