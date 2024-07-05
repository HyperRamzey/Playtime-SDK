#include "..\FUObjectArray.hpp"
#include "QuartzClockHandle.hpp"
#include "QuartzSubsystem.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\QuartzClockSettings.hpp"
#include "..\_Script_Engine\QuartzTransportTimeStamp.hpp"
#include "..\_Script_Engine\TickableWorldSubsystem.hpp"
_Script_CoreUObject::Class* _Script_AudioMixer::QuartzSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioMixer.QuartzSubsystem");
    return result;
}
bool _Script_AudioMixer::QuartzSubsystem::IsClockRunning(_Script_CoreUObject::Object* WorldContextObject, void* ClockName) {
    return;
}
float _Script_AudioMixer::QuartzSubsystem::GetRoundTripAverageLatency(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
bool _Script_AudioMixer::QuartzSubsystem::IsQuartzEnabled() {
    return;
}
_Script_AudioMixer::QuartzClockHandle* _Script_AudioMixer::QuartzSubsystem::GetHandleForClock(_Script_CoreUObject::Object* WorldContextObject, void* ClockName) {
    return;
}
float _Script_AudioMixer::QuartzSubsystem::GetRoundTripMinLatency(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_AudioMixer::QuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_AudioMixer::QuartzSubsystem::GetRoundTripMaxLatency(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_AudioMixer::QuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_AudioMixer::QuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_AudioMixer::QuartzSubsystem::GetEstimatedClockRunTime(_Script_CoreUObject::Object* WorldContextObject, void*& InClockName) {
    return;
}
float _Script_AudioMixer::QuartzSubsystem::GetDurationOfQuantizationTypeInSeconds(_Script_CoreUObject::Object* WorldContextObject, void* ClockName, void*& QuantizationType, float Multiplier) {
    return;
}
_Script_Engine::QuartzTransportTimeStamp _Script_AudioMixer::QuartzSubsystem::GetCurrentClockTimestamp(_Script_CoreUObject::Object* WorldContextObject, void*& InClockName) {
    return;
}
float _Script_AudioMixer::QuartzSubsystem::GetAudioRenderThreadToGameThreadMinLatency() {
    return;
}
float _Script_AudioMixer::QuartzSubsystem::GetAudioRenderThreadToGameThreadMaxLatency() {
    return;
}
float _Script_AudioMixer::QuartzSubsystem::GetAudioRenderThreadToGameThreadAverageLatency() {
    return;
}
bool _Script_AudioMixer::QuartzSubsystem::DoesClockExist(_Script_CoreUObject::Object* WorldContextObject, void* ClockName) {
    return;
}
void _Script_AudioMixer::QuartzSubsystem::DeleteClockByName(_Script_CoreUObject::Object* WorldContextObject, void* ClockName) {
    return;
}
void _Script_AudioMixer::QuartzSubsystem::DeleteClockByHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_AudioMixer::QuartzClockHandle*& InClockHandle) {
    return;
}
_Script_AudioMixer::QuartzClockHandle* _Script_AudioMixer::QuartzSubsystem::CreateNewClock(_Script_CoreUObject::Object* WorldContextObject, void* ClockName, _Script_Engine::QuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager) {
    return;
}
