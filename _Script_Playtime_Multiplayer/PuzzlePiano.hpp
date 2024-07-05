#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PuzzleBase.hpp"
namespace _Script_Engine {
struct MaterialInstance;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Playtime_Multiplayer {
struct HandMagnetComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PuzzlePiano : public PuzzleBase {
    private: char pad_478[0x88]; public:
    bool get_bShowingPattern();
    void set_bShowingPattern(bool value);
    int32_t& get_SubProgress();
    int32_t& get_CurrentKey();
    void* get_CorrectPattern();
    void* get_KeyMeshes();
    _Script_Engine::MaterialInstance*& get_WrongKeyMaterial();
    void* get_DefaultMaterials();
    void* get_HighlightMaterials();
    void* get_KeySounds();
    _Script_Engine::TimelineComponent*& get_ShowKeyTimeLine();
    static _Script_CoreUObject::Class* static_class();
    void SolvedButtonGlow();
    void PlaySolvedSound();
    void MultiCast_PlayKey(int32_t KeySelected, bool isCorrect);
    void MultiCast_DisplaySequence();
    void KeySelected(_Script_Playtime_Multiplayer::HandMagnetComponent* Key, int32_t KeyIndex);
    void ClearKeys();
}; // Size: 0x500
#pragma pack(pop)
}
