#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel {
struct BP_MP_HandPanel_C;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet {
struct BPC_HandMagnet_C;
}
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Gameplay_Puzzles_ANIM_Fail_BP_FailAnim {
struct BP_FailAnim_C;
}
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_Playtime_Multiplayer {
struct PuzzleSoundPack;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct HandMagnetComponent;
}
namespace _Game_Gameplay_Puzzles_BP_ToyPuzzle {
#pragma pack(push, 1)
struct BP_ToyPuzzle_C : public _Script_Engine::Actor {
    private: char pad_220[0x1c0]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_AI_Nav_Point();
    _Script_Engine::StaticMeshComponent*& get_DoorL();
    _Script_Engine::SceneComponent*& get_HingeL();
    _Script_Engine::StaticMeshComponent*& get_DoorR();
    _Script_Engine::SceneComponent*& get_HingeR();
    _Script_Engine::SceneComponent*& get_Doors();
    _Script_Engine::BoxComponent*& get_HandMagnetCollision();
    _Script_Engine::SkeletalMeshComponent*& get_Hand();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_HandMagnet();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_PanelMesh();
    _Script_Engine::StaticMeshComponent*& get_Base();
    _Script_Engine::TextRenderComponent*& get_DEBUG_StateDisplay();
    _Script_Engine::BoxComponent*& get_BoobytrapSparkArea();
    _Script_Engine::BoxComponent*& get_SparkArea();
    _Script_Engine::TextRenderComponent*& get_Label();
    _Script_Engine::BoxComponent*& get_FailAnimSpawnArea();
    _Script_Engine::TextRenderComponent*& get_GroupDisplay();
    _Script_Engine::SceneComponent*& get_ToySpawnPoint();
    _Script_Engine::SceneComponent*& get_Parent();
    _Script_Engine::ArrowComponent*& get_Arrow();
    _Script_Engine::TextRenderComponent*& get_SpawnDisplay();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_DoSparks__Direction_7D7A4CD2475AB9F159AF85BA3942EA3D();
    _Script_Engine::TimelineComponent*& get_DoSparks();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Player();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_HandPanelMag_Ref();
    _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C*& get_HandPanel_Ref();
    _Game_Gameplay_Puzzles_ANIM_Fail_BP_FailAnim::BP_FailAnim_C*& get_FailedAnimActor();
    void* get_OnInitialized();
    void* get_OnSolvedPuzzle();
    void* get_OnPuzzleDisplayed();
    void* get_OnPuzzleBeginPlay();
    void* get_SparksTimer();
    void* get_OnAttach();
    bool get_TutorialLocked();
    void set_TutorialLocked(bool value);
    _Script_Engine::SoundBase*& get_SolvedSound();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_MostRecentPlayer();
    void* get_State();
    int32_t& get_Progress();
    bool get_StillBoobytrapped();
    void set_StillBoobytrapped(bool value);
    void* get_BoobytrapTriggered();
    void* get_puzzleType();
    void* get_OnPuzzleProgress();
    int32_t& get_PillarIndex_0();
    _Script_Playtime_Multiplayer::PuzzleSoundPack*& get_PuzzleSounds();
    int32_t& get_puzzleSoundReplicator();
    bool get_isArcadePuzzle();
    void set_isArcadePuzzle(bool value);
    void* get_OnFindNewAIPuzzle();
    static _Script_CoreUObject::Class* static_class();
    void ResetPuzzle();
    void OnRep_PuzzleSoundReplicator();
    void OnRep_PuzzleType();
    void GetPuzzleType(void*& puzzleType);
    void DoesTouchCount(_Script_Playtime_Multiplayer::HandMagnetComponent* Magnet, bool& Counts_, _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& Character);
    void GetSavableState(void*& NewParam);
    void OnRep_Progress_Implementation();
    void OnRep_Progress();
    void OnRep_State_Implementation();
    void OnRep_State();
    void IsBoobyTrapped(bool& Active);
    void ToSolved();
    void ToShutDown();
    void ToBoobyTrapped();
    void IsShutDown(bool& Active);
    void IsSolved(bool& Active);
    void DecrementingToInProgress();
    void IncrementingToInProgress();
    void IdleToInProgress();
    void GetState(void*& State);
    void ToIdle();
    void FailedPuzzle();
    void IsInProgress(bool& InProgress);
    void DoIncrement(bool& ShouldComplete_);
    void IsPlayerPlayingPuzzle_(_Script_CoreUObject::Object* PlayerRef, bool& Value);
    void Spawn_Failed_Indicator();
    void OnRep_IsBoobyTrapped();
    void DEPREC_IsActive(bool& Active);
    void AttenuateSound(float Initial, float& Result);
    void PlayerHasPerk_(void* PerkType, bool& Value, int32_t& PerkLevel);
    void CheckForPerkFinish(int32_t StreakMax, int32_t CurrentStreak, bool& Finished_);
    void OnRep_Shutoff_Implementation();
    void OnRep_Parent_Shutoff();
    void GetPuzzlePlayerPinginMS(float& PingInMS);
    void OnShutdown();
    void SetSolved(bool Value);
    void OnRep_Parent_Initialized();
    void OnRep_Initialized_Implementation();
    void UserConstructionScript0();
    void DoSparks__FinishedFunc();
    void DoSparks__UpdateFunc();
    void DoSparks__SpawnSpark__EventFunc();
    void PlaySolvedSound();
    void OnAttached(void* AttachmentStateChange);
    void ReceiveBeginPlay0();
    void SpawnFailAnim();
    void Sabotage(float FixDuration);
    void ReActivate();
    void SetTextRenderColor(_Script_CoreUObject::LinearColor InLinearColor);
    void SpawnSparks(_Script_Engine::BoxComponent* Box);
    void TriggerTrap();
    void SpawnSparksBroken();
    void TransitionState(void* State);
    void StartSpawningSparks();
    void StopSpawningSparks();
    void ForceState(void* State);
    void NotifySabotageEnded();
    void BndEvt__BP_ToyPuzzle_pISSMAGNETcomPonentr_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void SpawnBoobyIndicator();
    void OpenDoors(float Lerp);
    void ForceSolved();
    void ExecuteUbergraph_BP_ToyPuzzle(int32_t EntryPoint);
    void OnFindNewAIPuzzle__DelegateSignature(_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C* Solved_Puzzle);
    void OnPuzzleProgress__DelegateSignature();
    void BoobytrapTriggered__DelegateSignature();
    void OnAttach__DelegateSignature(_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C* Puzzle);
    void OnPuzzleBeginPlay__DelegateSignature();
    void OnPuzzleDisplayed__DelegateSignature();
    void OnSolvedPuzzle__DelegateSignature(int32_t PillarIndex);
    void OnInitialized__DelegateSignature();
}; // Size: 0x3e0
#pragma pack(pop)
}
