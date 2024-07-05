#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Puzzles_BP_ToyPuzzle\BP_ToyPuzzle_C.hpp"
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet {
struct BPC_HandMagnet_C;
}
namespace _Script_Engine {
struct Material;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Reflex {
#pragma pack(push, 1)
struct BP_Puzzle_Reflex_C : public _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C {
    private: char pad_3e0[0x170]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::SceneComponent*& get_Tiles();
    _Script_Engine::StaticMeshComponent*& get_Trigger6();
    _Script_Engine::StaticMeshComponent*& get_Trigger4();
    _Script_Engine::StaticMeshComponent*& get_Trigger5();
    _Script_Engine::StaticMeshComponent*& get_Trigger3();
    _Script_Engine::StaticMeshComponent*& get_Trigger2();
    _Script_Engine::StaticMeshComponent*& get_Trigger1();
    _Script_Engine::TextRenderComponent*& get_Counter();
    _Script_Engine::SkeletalMeshComponent*& get_HandPos11();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet11();
    _Script_Engine::StaticMeshComponent*& get_Tile_6();
    _Script_Engine::SkeletalMeshComponent*& get_HandPos10();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet10();
    _Script_Engine::StaticMeshComponent*& get_Tile_5();
    _Script_Engine::SkeletalMeshComponent*& get_HandPos9();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet9();
    _Script_Engine::StaticMeshComponent*& get_Tile_4();
    _Script_Engine::SkeletalMeshComponent*& get_HandPos8();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet8();
    _Script_Engine::StaticMeshComponent*& get_Tile_3();
    _Script_Engine::SkeletalMeshComponent*& get_HandPos7();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet7();
    _Script_Engine::StaticMeshComponent*& get_Tile_2();
    _Script_Engine::SkeletalMeshComponent*& get_HandPos6();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet6();
    _Script_Engine::StaticMeshComponent*& get_Tile_1();
    int32_t& get_CorrectTile();
    int32_t& get_StreakMax();
    void* get_TileFace();
    void* get_NormalMats();
    _Script_Engine::Material*& get_HighlightMat();
    _Script_Engine::SoundBase*& get_S_CorrectTile();
    _Script_Engine::SoundBase*& get_S_WrongTile();
    void* get_TimeBeforeNextTile();
    void* get_InitializeTimer();
    void* get_RandomTileTimer();
    void* get_PaddingTimer();
    bool get_TileGenerated_();
    void set_TileGenerated_(bool value);
    float& get_TimeToSmack();
    void* get_HighlightTimer();
    int32_t& get_NumTiles();
    _Script_Engine::AudioComponent*& get_TickingSound();
    _Script_Engine::SoundBase*& get_S_Ticking();
    int32_t& get_ReflexSoundReplicator();
    static _Script_CoreUObject::Class* static_class();
    void ResetPuzzle0();
    void OnRep_ReflexSoundReplicator();
    void Check_for_Think_Fast_Finish(bool& Finished_);
    void ToSolved0();
    void OnRep_Progress_Implementation0();
    void DecrementingToInProgress0();
    void IncrementingToInProgress0();
    void FailedPuzzle0();
    void DoIncrement0(bool& ShouldComplete_);
    void OnRep_State_Implementation0();
    void ToIdle0();
    void IdleToInProgress0();
    void ToggleTileHighlight(bool Highlight_, int32_t TileIndex);
    void DoesSelectionCount_(int32_t Index, bool& Value, int32_t& ReturnIndex);
    void BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet7_K2Node_ComponentBoundEvent_6_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet9_K2Node_ComponentBoundEvent_7_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet11_K2Node_ComponentBoundEvent_8_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet6_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet8_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_Puzzle_Reflex_BPC_HandMagnet10_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void ReceiveBeginPlay();
    void TimedOut();
    void Select(int32_t ButtonIndex);
    void DisplaySelection();
    void ShowTileToBeSmacked();
    void GenerateRandomTile();
    void SetRandomTile();
    void Timeout();
    void ClearTiles();
    void Event_UpdateSelection();
    void PlaySound(bool Correct_);
    void PlayTickingSound(bool Play_);
    void Solved_ButtonGlow();
    void ExecuteUbergraph_BP_Puzzle_Reflex(int32_t EntryPoint);
}; // Size: 0x550
#pragma pack(pop)
}
