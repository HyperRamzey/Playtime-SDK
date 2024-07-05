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
struct SoundBase;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct HandMagnetComponent;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PuzzleReflex : public PuzzleBase {
    private: char pad_478[0x88]; public:
    int32_t& get_CorrectTile();
    int32_t& get_StreakMax();
    int32_t& get_NumTiles();
    bool get_bIsTileGenerated();
    void set_bIsTileGenerated(bool value);
    float& get_TimeToSmack();
    void* get_TileFaces();
    _Script_Engine::MaterialInstance*& get_HighlightMaterial();
    void* get_NormalTileMaterials();
    _Script_Engine::SoundBase*& get_TickingSound();
    _Script_Engine::SoundBase*& get_CorrectTileSound();
    _Script_Engine::SoundBase*& get_WrongTileSound();
    _Script_Engine::AudioComponent*& get_AudioComponent();
    static _Script_CoreUObject::Class* static_class();
    void UpdateSelection();
    void SolvedButtonGlow();
    void ShowTileToBeSmacked();
    void Select(_Script_Playtime_Multiplayer::HandMagnetComponent* SelectedButton, int32_t Index);
    void PlaySolvedSound();
    void PlaySelectedSound(bool Correct);
    void ClearTiles();
}; // Size: 0x500
#pragma pack(pop)
}
