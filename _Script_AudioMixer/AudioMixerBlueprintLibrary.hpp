#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\SourceEffectChainEntry.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AudioBus;
}
namespace _Script_Engine {
struct SoundEffectSourcePresetChain;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct SoundSubmix;
}
namespace _Script_Engine {
struct SoundWave;
}
namespace _Script_Engine {
struct SoundEffectSubmixPreset;
}
namespace _Script_Engine {
struct SoundCue;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct AudioMixerBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    float TrimAudioCache(float InMegabytesToFree);
    _Script_Engine::SoundWave* StopRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, void* ExportType, void* Name, void* Path, _Script_Engine::SoundSubmix* SubmixToRecord, _Script_Engine::SoundWave* ExistingSoundWaveToOverwrite);
    void StopAudioBus(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::AudioBus* AudioBus);
    void StopAnalyzingOutput(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SubmixToStopAnalyzing);
    void StartRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, float ExpectedDuration, _Script_Engine::SoundSubmix* SubmixToRecord);
    void StartAudioBus(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::AudioBus* AudioBus);
    void StartAnalyzingOutput(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SubmixToAnalyze, void* FFTSize, void* InterpolationMethod, void* WindowType, float HopSize, void* SpectrumType);
    void SetSubmixEffectChainOverride(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SoundSubmix, void* SubmixEffectPresetChain, float FadeTimeSec);
    void SetBypassSourceEffectChainEntry(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed);
    void ResumeRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SubmixToPause);
    void ReplaceSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset);
    void ReplaceSoundEffectSubmix(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset);
    void RemoveSubmixEffectPresetAtIndex(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SoundSubmix, int32_t SubmixChainIndex);
    void RemoveSubmixEffectPreset(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SoundSubmix, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset);
    void RemoveSubmixEffectAtIndex(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SoundSubmix, int32_t SubmixChainIndex);
    void RemoveSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SoundSubmix, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset);
    void RemoveSourceEffectFromPresetChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex);
    void RemoveMasterSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset);
    void PrimeSoundForPlayback(_Script_Engine::SoundWave* SoundWave, void* OnLoadCompletion);
    void PrimeSoundCueForPlayback(_Script_Engine::SoundCue* SoundCue);
    void PauseRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SubmixToPause);
    void* MakePresetSpectralAnalysisBandSettings(void* InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec);
    void* MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, void* InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec);
    void* MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec);
    bool IsAudioBusActive(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::AudioBus* AudioBus);
    void GetPhaseForFrequencies(_Script_CoreUObject::Object* WorldContextObject, void*& Frequencies, void*& Phases, _Script_Engine::SoundSubmix* SubmixToAnalyze);
    int32_t GetNumberOfEntriesInSourceEffectChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain);
    void GetMagnitudeForFrequencies(_Script_CoreUObject::Object* WorldContextObject, void*& Frequencies, void*& Magnitudes, _Script_Engine::SoundSubmix* SubmixToAnalyze);
    void ClearSubmixEffects(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SoundSubmix);
    void ClearSubmixEffectChainOverride(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SoundSubmix, float FadeTimeSec);
    void ClearMasterSubmixEffects(_Script_CoreUObject::Object* WorldContextObject);
    int32_t AddSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundSubmix* SoundSubmix, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset);
    void AddSourceEffectToPresetChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, _Script_Engine::SourceEffectChainEntry Entry);
    void AddMasterSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset);
}; // Size: 0x28
#pragma pack(pop)
}
