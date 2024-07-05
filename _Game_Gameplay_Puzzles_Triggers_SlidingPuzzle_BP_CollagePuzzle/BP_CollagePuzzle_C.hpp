#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Puzzles_BP_ToyPuzzle\BP_ToyPuzzle_C.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet {
struct BPC_HandMagnet_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage {
struct BP_TileCollage_C;
}
namespace _Script_Playtime_Multiplayer {
struct CollagePuzzleDataAsset;
}
namespace _Script_Playtime_Multiplayer {
struct HandMagnetComponent;
}
namespace _Script_Playtime_Multiplayer {
struct CollagePuzzleTile;
}
namespace _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_CollagePuzzle {
#pragma pack(push, 1)
struct BP_CollagePuzzle_C : public _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C {
    private: char pad_3e0[0x198]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::SkeletalMeshComponent*& get_HandPose9();
    _Script_Engine::BoxComponent*& get_HandMagnetCollision9();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_HandMagnet9();
    _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& get_Tile9();
    _Script_Engine::SceneComponent*& get_TileRoot9();
    _Script_Engine::SkeletalMeshComponent*& get_HandPose8();
    _Script_Engine::BoxComponent*& get_HandMagnetCollision8();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_HandMagnet8();
    _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& get_Tile8();
    _Script_Engine::SceneComponent*& get_TileRoot8();
    _Script_Engine::SkeletalMeshComponent*& get_HandPose7();
    _Script_Engine::BoxComponent*& get_HandMagnetCollision7();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_HandMagnet7();
    _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& get_Tile7();
    _Script_Engine::SceneComponent*& get_TileRoot7();
    _Script_Engine::SkeletalMeshComponent*& get_HandPose6();
    _Script_Engine::BoxComponent*& get_HandMagnetCollision6();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_HandMagnet6();
    _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& get_Tile6();
    _Script_Engine::SceneComponent*& get_TileRoot6();
    _Script_Engine::SkeletalMeshComponent*& get_HandPose5();
    _Script_Engine::BoxComponent*& get_HandMagnetCollision5();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_HandMagnet5();
    _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& get_Tile5();
    _Script_Engine::SceneComponent*& get_TileRoot5();
    _Script_Engine::SkeletalMeshComponent*& get_HandPose4();
    _Script_Engine::BoxComponent*& get_HandMagnetCollision4();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_HandMagnet4();
    _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& get_Tile4();
    _Script_Engine::SceneComponent*& get_TileRoot4();
    _Script_Engine::SkeletalMeshComponent*& get_HandPose3();
    _Script_Engine::BoxComponent*& get_HandMagnetCollision3();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_HandMagnet3();
    _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& get_Tile3();
    _Script_Engine::SceneComponent*& get_TileRoot3();
    _Script_Engine::SkeletalMeshComponent*& get_HandPose2();
    _Script_Engine::BoxComponent*& get_HandMagnetCollision2();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_HandMagnet2();
    _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& get_Tile2();
    _Script_Engine::SceneComponent*& get_TileRoot2();
    _Script_Engine::SkeletalMeshComponent*& get_HandPose1();
    _Script_Engine::BoxComponent*& get_HandMagnetCollision1();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_HandMagnet1();
    _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage::BP_TileCollage_C*& get_Tile1();
    _Script_Engine::SceneComponent*& get_TileRoot1();
    int32_t& get_Mistakes();
    _Script_Playtime_Multiplayer::CollagePuzzleDataAsset*& get_CollagePuzzleDataAsset();
    void* get_Tiles();
    bool get_CanBeCompleted_();
    void set_CanBeCompleted_(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ToShutDown0();
    bool StupidDoesCount(_Script_Playtime_Multiplayer::HandMagnetComponent* Target);
    void IsFailed(bool& IsFailed);
    void IsCompleted(bool& IsCompleted);
    void DoIncrement0(bool& ShouldComplete_);
    void ToIdle0();
    void FailedPuzzle0();
    void OnRep_State_Implementation0();
    void ToSolved0();
    void IdleToInProgress0();
    void BndEvt__BP_CollagePuzzle_Tile1_K2Node_ComponentBoundEvent_0_OnAnimationFinished__DelegateSignature();
    void BndEvt__BP_CollagePuzzle_Tile2_K2Node_ComponentBoundEvent_1_OnAnimationFinished__DelegateSignature();
    void BndEvt__BP_CollagePuzzle_Tile3_K2Node_ComponentBoundEvent_2_OnAnimationFinished__DelegateSignature();
    void BndEvt__BP_CollagePuzzle_Tile4_K2Node_ComponentBoundEvent_3_OnAnimationFinished__DelegateSignature();
    void BndEvt__BP_CollagePuzzle_Tile5_K2Node_ComponentBoundEvent_4_OnAnimationFinished__DelegateSignature();
    void BndEvt__BP_CollagePuzzle_Tile6_K2Node_ComponentBoundEvent_5_OnAnimationFinished__DelegateSignature();
    void BndEvt__BP_CollagePuzzle_Tile7_K2Node_ComponentBoundEvent_6_OnAnimationFinished__DelegateSignature();
    void BndEvt__BP_CollagePuzzle_Tile8_K2Node_ComponentBoundEvent_7_OnAnimationFinished__DelegateSignature();
    void BndEvt__BP_CollagePuzzle_Tile9_K2Node_ComponentBoundEvent_8_OnAnimationFinished__DelegateSignature();
    void BndEvt__BP_CollagePuzzle_HandMagnet1_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_CollagePuzzle_HandMagnet2_K2Node_ComponentBoundEvent_10_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_CollagePuzzle_HandMagnet3_K2Node_ComponentBoundEvent_11_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_CollagePuzzle_HandMagnet4_K2Node_ComponentBoundEvent_12_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_CollagePuzzle_HandMagnet5_K2Node_ComponentBoundEvent_13_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_CollagePuzzle_HandMagnet6_K2Node_ComponentBoundEvent_14_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_CollagePuzzle_HandMagnet7_K2Node_ComponentBoundEvent_15_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_CollagePuzzle_HandMagnet8_K2Node_ComponentBoundEvent_16_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_CollagePuzzle_HandMagnet9_K2Node_ComponentBoundEvent_17_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void Rotate(void* Selection, _Script_Playtime_Multiplayer::CollagePuzzleTile* Tile);
    void ReceiveBeginPlay();
    void ResetAllTiles();
    void Shutdown(bool Shut_Down_);
    void Authority_AnimFinished();
    void ResetMistakes();
    void Authority_SetTextures(int32_t Picture);
    void ExecuteUbergraph_BP_CollagePuzzle(int32_t EntryPoint);
}; // Size: 0x578
#pragma pack(pop)
}
