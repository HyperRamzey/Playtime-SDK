#include "..\FUObjectArray.hpp"
#include "AudioMixerBlueprintLibrary.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\AudioBus.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\SoundCue.hpp"
#include "..\_Script_Engine\SoundEffectSourcePresetChain.hpp"
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
#include "..\_Script_Engine\SoundSubmix.hpp"
#include "..\_Script_Engine\SoundWave.hpp"
#include "..\_Script_Engine\SourceEffectChainEntry.hpp"
_Script_CoreUObject::Class* _Script_AudioMixer::AudioMixerBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioMixer.AudioMixerBlueprintLibrary");
    return result;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::StartAnalyzingOutput(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SubmixToAnalyze, void* FFTSize, void* InterpolationMethod, void* WindowType, float HopSize, void* SpectrumType) {
    return;
}
float _Script_AudioMixer::AudioMixerBlueprintLibrary::TrimAudioCache(float InMegabytesToFree) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::StartRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, float ExpectedDuration, _Script_Engine::SoundSubmix* SubmixToRecord) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::PrimeSoundForPlayback(_Script_Engine::SoundWave* SoundWave, void* OnLoadCompletion) {
    return;
}
_Script_Engine::SoundWave* _Script_AudioMixer::AudioMixerBlueprintLibrary::StopRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, void* ExportType, void* Name, void* Path, _Script_Engine::SoundSubmix* SubmixToRecord, _Script_Engine::SoundWave* ExistingSoundWaveToOverwrite) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::StartAudioBus(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::AudioBus* AudioBus) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::StopAudioBus(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::AudioBus* AudioBus) {
    return;
}
int32_t _Script_AudioMixer::AudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::StopAnalyzingOutput(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SubmixToStopAnalyzing) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::SetSubmixEffectChainOverride(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SoundSubmix, void* SubmixEffectPresetChain, float FadeTimeSec) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::ResumeRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SubmixToPause) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::ReplaceSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::ReplaceSoundEffectSubmix(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::RemoveSubmixEffectPresetAtIndex(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SoundSubmix, int32_t SubmixChainIndex) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::RemoveSubmixEffectPreset(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SoundSubmix, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::AddMasterSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::RemoveSubmixEffectAtIndex(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SoundSubmix, int32_t SubmixChainIndex) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::RemoveSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SoundSubmix, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset) {
    return;
}
void* _Script_AudioMixer::AudioMixerBlueprintLibrary::MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::GetMagnitudeForFrequencies(_Script_CoreUObject::Object* WorldContextObject, void*& Frequencies, void*& Magnitudes, _Script_Engine::SoundSubmix* SubmixToAnalyze) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::PrimeSoundCueForPlayback(_Script_Engine::SoundCue* SoundCue) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::PauseRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SubmixToPause) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::ClearSubmixEffects(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SoundSubmix) {
    return;
}
void* _Script_AudioMixer::AudioMixerBlueprintLibrary::MakePresetSpectralAnalysisBandSettings(void* InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec) {
    return;
}
void* _Script_AudioMixer::AudioMixerBlueprintLibrary::MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, void* InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec) {
    return;
}
bool _Script_AudioMixer::AudioMixerBlueprintLibrary::IsAudioBusActive(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::AudioBus* AudioBus) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::GetPhaseForFrequencies(_Script_CoreUObject::Object* WorldContextObject, void*& Frequencies, void*& Phases, _Script_Engine::SoundSubmix* SubmixToAnalyze) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::ClearSubmixEffectChainOverride(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SoundSubmix, float FadeTimeSec) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::ClearMasterSubmixEffects(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
int32_t _Script_AudioMixer::AudioMixerBlueprintLibrary::AddSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SoundSubmix, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset) {
    return;
}
void _Script_AudioMixer::AudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, _Script_Engine::SourceEffectChainEntry Entry) {
    return;
}
