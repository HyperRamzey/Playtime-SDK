#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PuzzleBase.hpp"
namespace _Script_Engine {
struct Material;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialInstance;
}
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Playtime_Multiplayer {
struct HandMagnetComponent;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PuzzleCode : public PuzzleBase {
    private: char pad_478[0xa8]; public:
    int32_t& get_PatternLength();
    int32_t& get_StreakMax();
    int32_t& get_NumButtons();
    int32_t& get_Mistakes();
    void* get_TargetPattern();
    void* get_PlayerPattern();
    bool get_bIsGeneratingPattern();
    void set_bIsGeneratingPattern(bool value);
    _Script_Engine::Material*& get_DefaultMaterial();
    _Script_Engine::MaterialInstance*& get_HighlightMaterial();
    _Script_Engine::MaterialInstance*& get_MistakeMaterial();
    _Script_Engine::MaterialInstance*& get_IncorrectMaterial();
    void* get_ButtonMeshes();
    _Script_Engine::SoundBase*& get_ButtonCorrectSound();
    _Script_Engine::SoundBase*& get_ButtonIncorrectSound();
    _Script_Engine::SoundBase*& get_PatternCorrectSound();
    _Script_Engine::AudioComponent*& get_RandomizingSound();
    _Script_Engine::TimelineComponent*& get_SuccessTimeline();
    _Script_Engine::TimelineComponent*& get_FailedTimeline();
    _Script_Engine::TimelineComponent*& get_NewPatternTimeline();
    static _Script_CoreUObject::Class* static_class();
    void SolvedButtonGlow();
    void SelectButton(_Script_Playtime_Multiplayer::HandMagnetComponent* Button, int32_t ButtonIndex);
    void PlayRandomizingSound(bool Play);
    void OnRep_PlayerPattern();
    void OnRep_bIsGeneratingPattern();
    void Multicast_StopNewPatternTimeline();
    void Multicast_StartNewPatternTimeline();
    void Multicast_ClearButtons();
    void* GenerateRandomPattern();
    void GenerateNewPatternAndShowIt();
    void ButtonHighlight(void*& ButtonsToHighlight, _Script_Engine::MaterialInstance* Material, bool Clear);
    void AllButtonDefault();
}; // Size: 0x520
#pragma pack(pop)
}
