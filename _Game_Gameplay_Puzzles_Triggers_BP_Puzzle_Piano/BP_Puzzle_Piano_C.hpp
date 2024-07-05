#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Puzzles_BP_ToyPuzzle\BP_ToyPuzzle_C.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct MaterialInstance;
}
namespace _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet {
struct BPC_HandMagnet_C;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Playtime_Multiplayer {
struct HandMagnetComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Puzzles_Triggers_BP_Puzzle_Piano {
#pragma pack(push, 1)
struct BP_Puzzle_Piano_C : public _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C {
    private: char pad_3e0[0x168]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::StaticMeshComponent*& get_BlackKey_1();
    _Script_Engine::StaticMeshComponent*& get_BlackKey_3();
    _Script_Engine::StaticMeshComponent*& get_BlackKey_2();
    _Script_Engine::StaticMeshComponent*& get_Key_1();
    _Script_Engine::StaticMeshComponent*& get_Key_5();
    _Script_Engine::StaticMeshComponent*& get_Key_4();
    _Script_Engine::StaticMeshComponent*& get_Key_3();
    _Script_Engine::StaticMeshComponent*& get_Key_2();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet8();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet7();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet6();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet5();
    _Script_Engine::SkeletalMeshComponent*& get_HandPos8();
    _Script_Engine::BoxComponent*& get_Trigger9();
    _Script_Engine::SkeletalMeshComponent*& get_HandPos7();
    _Script_Engine::BoxComponent*& get_Trigger8();
    _Script_Engine::SkeletalMeshComponent*& get_HandPos6();
    _Script_Engine::BoxComponent*& get_Trigger7();
    _Script_Engine::SkeletalMeshComponent*& get_HandPos5();
    _Script_Engine::BoxComponent*& get_Trigger6();
    _Script_Engine::SkeletalMeshComponent*& get_HandPos4();
    _Script_Engine::BoxComponent*& get_Trigger5();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet4();
    _Script_Playtime_Multiplayer::HandMagnetComponent*& get_HandMagnet2();
    _Script_Playtime_Multiplayer::HandMagnetComponent*& get_HandMagnet4();
    _Script_Playtime_Multiplayer::HandMagnetComponent*& get_HandMagnet3();
    _Script_Playtime_Multiplayer::HandMagnetComponent*& get_HandMagnet1();
    void* get_TL_Piano__Direction_4EFB320E4054422064590ABA803195E3();
    _Script_Engine::TimelineComponent*& get_TL_Piano();
    int32_t& get_CurrentKey();
    int32_t& get_PatternLength();
    void* get_KeyMesh();
    _Script_Engine::MaterialInstance*& get_RejectedMat();
    void* get_KeySounds();
    void* get_CorrectPattern();
    void* get_DefaultMats();
    void* get_HighlightMats();
    bool get_ShowingPattern_();
    void set_ShowingPattern_(bool value);
    int32_t& get_SubProgress();
    int32_t& get_PianoSoundReplicator();
    bool get_LoseProgress_();
    void set_LoseProgress_(bool value);
    int32_t& get_PreviousProgress();
    static _Script_CoreUObject::Class* static_class();
    void ResetPuzzle0();
    void OnRep_PianoSoundReplicator();
    void ToSolved0();
    void FailedPuzzle0();
    void DecrementingToInProgress0();
    void OnRep_State_Implementation0();
    void IdleToInProgress0();
    void DoIncrement0(bool& ShouldComplete_);
    void ToggleKeyMat_Sound(int32_t KeyIndex, bool IsCorrect_);
    void DoesKeyCount_(int32_t Key, bool& Value);
    void ClearKeys(bool ClearCurrentKey_);
    void TL_Piano__FinishedFunc();
    void TL_Piano__UpdateFunc();
    void TL_Piano__Clear__EventFunc();
    void TL_Piano__Display__EventFunc();
    void BndEvt__BP_Puzzle_Piano_BPC_HandMagnet4_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_Puzzle_Piano_BPC_HandMagnet5_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_Puzzle_Piano_BPC_HandMagnet6_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_Puzzle_Piano_BPC_HandMagnet7_K2Node_ComponentBoundEvent_3_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_Puzzle_Piano_BPC_HandMagnet8_K2Node_ComponentBoundEvent_4_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void ReceiveBeginPlay();
    void R_Sequence(bool Play_);
    void R_Select(int32_t KeyIndex);
    void PlayKey(int32_t KeyIndex, bool Cancel_, bool IsCorrect_);
    void MultiCast_DisplaySequence();
    void MultiCast_PlayKey(int32_t KeyIndex, bool IsCorrect_);
    void Solved_ButtonGlow();
    void ExecuteUbergraph_BP_Puzzle_Piano(int32_t EntryPoint);
}; // Size: 0x548
#pragma pack(pop)
}
