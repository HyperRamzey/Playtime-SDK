#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Playtime_Multiplayer {
struct PuzzleList;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PuzzlePillar : public _Script_Engine::Actor {
    private: char pad_220[0x108]; public:
    _Script_Engine::StaticMeshComponent*& get_PillarMesh();
    _Script_Engine::StaticMeshComponent*& get_BotLights();
    _Script_Engine::StaticMeshComponent*& get_MidLights();
    _Script_Engine::StaticMeshComponent*& get_TopLights();
    _Script_Engine::SceneComponent*& get_Puzzle1Anchor();
    _Script_Engine::SceneComponent*& get_Puzzle2Anchor();
    _Script_Engine::SceneComponent*& get_Puzzle3Anchor();
    _Script_Engine::MaterialInterface*& get_LightOnMaterial();
    void* get_NavIndicatorClass();
    _Script_Engine::Actor*& get_NavIndicatorActor();
    void* get_CustomRenderMeshes();
    void* get_PuzzleAnchors();
    void* get_ListOfPuzzles();
    int32_t& get_FinalPuzzleSolved();
    bool get_bHasToyPartSpawned();
    void set_bHasToyPartSpawned(bool value);
    void* get_SolvedPuzzles();
    void* get_PuzzleProgress();
    _Script_Playtime_Multiplayer::PuzzleList*& get_ListOfPuzzleTypes();
    bool get_bIsTutorial();
    void set_bIsTutorial(bool value);
    void* get_UpdatePlayerIndicator();
    void* get_BindPuzzleEvents();
    void* get_ReleaseToy();
    static _Script_CoreUObject::Class* static_class();
    void UpdatePuzzleData();
    void SetHighlight(bool B);
    void OnRep_PuzzleList();
    void OnRep_FinalPuzzleSolved();
    int32_t NumPuzzlesSolved();
    int32_t NumPuzzlesActive();
    void Multicast_UpdatePlayersIndicator();
    void Multicast_UpdateLights();
    void Multicast_SetFinalPuzzle(int32_t PuzzleIndex);
    void DestroyPuzzles();
    void CheckSolved(int32_t PuzzleIndex);
    bool AnyPuzzlesActive();
    bool AllPuzzlesSolved();
    bool AllPuzzlesActive();
}; // Size: 0x328
#pragma pack(pop)
}
