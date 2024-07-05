#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\AIController.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Game_Player_TrainingDummy_BP_AIControllerWaypoint {
struct BP_AIControllerWaypoint_C;
}
namespace _Game_Player_TrainingDummy_BP_AISurvivorWaypoint {
struct BP_AISurvivorWaypoint_C;
}
namespace _Game_Gameplay_Puzzles_BP_ToyPuzzle {
struct BP_ToyPuzzle_C;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint {
struct BP_WhackAWuggySpawnPoint_C;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance {
struct BP_WormholeEntrance_C;
}
namespace _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet {
struct BPC_HandMagnet_C;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Gameplay_Interaction_BP_Locker {
struct BP_Locker_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Game_Player_TrainingDummy_BP_AIController_TutorialPlayer {
#pragma pack(push, 1)
struct BP_AIController_TutorialPlayer_C : public _Script_AIModule::AIController {
    private: char pad_328[0x1a8]; public:
    void* get_UberGraphFrame();
    float& get_Timeline_1_Alpha_C4CCF9484F77148726BC63AFF72CE242();
    void* get_Timeline_1__Direction_C4CCF9484F77148726BC63AFF72CE242();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    void* get_TL_LookAtToyMachineMagnet__Direction_22A4F596413A165E4C6A0C88BD236408();
    _Script_Engine::TimelineComponent*& get_TL_LookAtToyMachineMagnet();
    void* get_Timeline_0__Direction_95898AEE4D329F9F18A8BDABF1E363EE();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    void* get_StopRunningAway_TL__Direction_23D1EE2F42960D694CE6C99F7F2365B0();
    _Script_Engine::TimelineComponent*& get_StopRunningAway_TL();
    float& get_PlayGameTL_Alpha_039D69E54499417E1A66588F3AD8846D();
    void* get_PlayGameTL__Direction_039D69E54499417E1A66588F3AD8846D();
    _Script_Engine::TimelineComponent*& get_PlayGameTL();
    float& get_TL_LookATHandPanel_Alpha_A78F06F341EC2E580C7DCBAB595B4FFD();
    void* get_TL_LookATHandPanel__Direction_A78F06F341EC2E580C7DCBAB595B4FFD();
    _Script_Engine::TimelineComponent*& get_TL_LookATHandPanel();
    float& get_TL_AimAtGrapple_Alpha_B24B8C4B4FE12B318D8AEF99B2463482();
    void* get_TL_AimAtGrapple__Direction_B24B8C4B4FE12B318D8AEF99B2463482();
    _Script_Engine::TimelineComponent*& get_TL_AimAtGrapple();
    float& get_TL_LookAtHole_Alpha_0FCBC9754BAFE1ECBFBC89865408DB44();
    void* get_TL_LookAtHole__Direction_0FCBC9754BAFE1ECBFBC89865408DB44();
    _Script_Engine::TimelineComponent*& get_TL_LookAtHole();
    float& get_TL_LookTowards_Alpha_54D3281C4B0B0FB25F3DE2A49C75F7B5();
    void* get_TL_LookTowards__Direction_54D3281C4B0B0FB25F3DE2A49C75F7B5();
    _Script_Engine::TimelineComponent*& get_TL_LookTowards();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_AIPlayer();
    bool get_InHuggyHole();
    void set_InHuggyHole(bool value);
    void* get_LastRotation();
    _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C*& get_TargetWuggy();
    void* get_WuggyAnims();
    bool get_RescuePlayer();
    void set_RescuePlayer(bool value);
    _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C*& get_FailedTarget();
    _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C*& get_WormholeEntrance();
    void* get_PullingPlayerFromHole();
    void* get_NavPoints();
    _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C*& get_Puzzle();
    void* get_DefaultUsername();
    _Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C*& get_Cached_Waypoint();
    _Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C*& get_NextWayPoint();
    void* get_TempWaypoints();
    bool get_Grappling();
    void set_Grappling(bool value);
    bool get_bRunningFromMonster();
    void set_bRunningFromMonster(bool value);
    void* get_Waypoints();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_Hand_Magnet();
    _Script_Engine::SceneComponent*& get_SelectedPuzzleMagnet();
    void* get_Lockers();
    _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C*& get_As_BP_Locker();
    void* get_WuggyHoles();
    void* get_Wuggys_to_Whack();
    bool get_HuntingWuggy();
    void set_HuntingWuggy(bool value);
    bool get_Monster_Nearby();
    void set_Monster_Nearby(bool value);
    bool get_RevivingPlayers();
    void set_RevivingPlayers(bool value);
    bool get_Queue_Run_To_Train();
    void set_Queue_Run_To_Train(bool value);
    void* get_CurrentTask();
    void* get_PreviousTask();
    float& get_Cached_Speed();
    static _Script_CoreUObject::Class* static_class();
    void GetNearestWaypoint(_Game_Player_TrainingDummy_BP_AISurvivorWaypoint::BP_AISurvivorWaypoint_C*& AsBP_AISurvivor_Waypoint);
    void SanitizeMovement();
    _Script_Engine::Actor* GetSecondClosestWaypoint(float& Distance);
    void Retract();
    void GetRandomPuzzleMagnet(_Script_Engine::SceneComponent*& OutItem);
    void GetRandomPuzzleOnNearestPuzzlePillar(_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C*& AsBP_Toy_Puzzle);
    void GetRandomNavPoint(_Script_Engine::Actor*& Output);
    void IsWuggyTaken_(_Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C* Wuggy, bool& Taken_);
    void IsTargetWuggyStillValid_(bool& Value);
    void FaceActor(float Alpha, _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C* Wuggy, _Script_Engine::Actor* Actor);
    void ScanWuggyHoles(_Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C*& Wuggy);
    void SetUsername();
    void TL_LookAtHole__FinishedFunc();
    void TL_LookAtHole__UpdateFunc();
    void TL_LookAtHole__Fire_Hand__EventFunc();
    void TL_AimAtGrapple__FinishedFunc();
    void TL_AimAtGrapple__UpdateFunc();
    void TL_LookAtToyMachineMagnet__FinishedFunc();
    void TL_LookAtToyMachineMagnet__UpdateFunc();
    void TL_LookAtToyMachineMagnet__Fire_Hand__EventFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_1__Fire_Hand__EventFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void StopRunningAway_TL__FinishedFunc();
    void StopRunningAway_TL__UpdateFunc();
    void PlayGameTL__FinishedFunc();
    void PlayGameTL__UpdateFunc();
    void TL_LookATHandPanel__FinishedFunc();
    void TL_LookATHandPanel__UpdateFunc();
    void TL_LookTowards__FinishedFunc();
    void TL_LookTowards__UpdateFunc();
    void OnFail_862F6E4D41B0E64437F61BBA01404954(void* MovementResult);
    void OnSuccess_862F6E4D41B0E64437F61BBA01404954(void* MovementResult);
    void OnFail_04FD208842A05C41AF262CA01A2C00AC(void* MovementResult);
    void OnSuccess_04FD208842A05C41AF262CA01A2C00AC(void* MovementResult);
    void OnFail_042E323842921A96C0D1EEB356FFEE1C(void* MovementResult);
    void OnSuccess_042E323842921A96C0D1EEB356FFEE1C(void* MovementResult);
    void OnFail_2C8F206C45C56777B93EDB9B24D13330(void* MovementResult);
    void OnSuccess_2C8F206C45C56777B93EDB9B24D13330(void* MovementResult);
    void OnFail_AC7343674213B09947C48796236BDDEB(void* MovementResult);
    void OnSuccess_AC7343674213B09947C48796236BDDEB(void* MovementResult);
    void OnFail_DE53FA5F4E52F89C623067904CBD41E5(void* MovementResult);
    void OnSuccess_DE53FA5F4E52F89C623067904CBD41E5(void* MovementResult);
    void OnFail_CC110DF4411146EA404E2DABDE73D61B(void* MovementResult);
    void OnSuccess_CC110DF4411146EA404E2DABDE73D61B(void* MovementResult);
    void OnFail_FD0F23834894CBEC2E4A2FB147BD437C(void* MovementResult);
    void OnSuccess_FD0F23834894CBEC2E4A2FB147BD437C(void* MovementResult);
    void OnFail_689501234CDFAB0D130362B0F34A16BF(void* MovementResult);
    void OnSuccess_689501234CDFAB0D130362B0F34A16BF(void* MovementResult);
    void OnFail_6F31769947BEDFD6363706BA065091DD(void* MovementResult);
    void OnSuccess_6F31769947BEDFD6363706BA065091DD(void* MovementResult);
    void ReceivePossess(_Script_Engine::Pawn* PossessedPawn);
    void PullPlayerOutOfHole();
    void Grapple();
    void AI_MoveThroughWaypoints(_Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C* StartingWaypoint, float Delay);
    void Revive_Player();
    void PullToyPipe();
    void RunToTrain();
    void ExtendAtTarget(_Script_Engine::Actor* Target, _Script_CoreUObject::Vector Location, bool Pull_);
    void Prime_RunAwayFromMonster();
    void CheckIfSafeToExitLocekr();
    void Stop_Running_From_Monster();
    void RunAwayFromMonster();
    void Is_our_solved_puzzle(_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C* Solved_Puzzle);
    void PlayPuzzle();
    void FindPuzzle();
    void Escaped_WuggyHole(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Revived_Player);
    void Check_for_Wuggys();
    void AddWuggyToList(bool Crawl, _Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C* WuggyToWhack);
    void RemoveWuggyFromList(_Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C* WhackedWuggy);
    void WhackWuggy(_Game_Gameplay_Interaction_Sewers_BP_WhackAWuggySpawnPoint::BP_WhackAWuggySpawnPoint_C* Wuggy);
    void LookForWuggy();
    void ExecuteUbergraph_BP_AIController_TutorialPlayer(int32_t EntryPoint);
    void PullingPlayerFromHole__DelegateSignature();
}; // Size: 0x4d0
#pragma pack(pop)
}
