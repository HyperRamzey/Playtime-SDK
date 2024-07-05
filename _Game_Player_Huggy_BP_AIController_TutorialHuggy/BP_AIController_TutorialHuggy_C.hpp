#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\AIController.hpp"
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Game_Player_Huggy_BP_NetworkHuggy {
struct BP_NetworkHuggy_C;
}
namespace _Game_Player_TrainingDummy_BP_AIControllerWaypoint {
struct BP_AIControllerWaypoint_C;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance {
struct BP_WormholeEntrance_C;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Interaction_BP_Locker {
struct BP_Locker_C;
}
namespace _Game_Player_Huggy_BP_AIController_TutorialHuggy {
#pragma pack(push, 1)
struct BP_AIController_TutorialHuggy_C : public _Script_AIModule::AIController {
    private: char pad_328[0xb8]; public:
    void* get_UberGraphFrame();
    void* get_AttackLocker__Direction_343B7DBE488E1260B90F7880E7D08B1F();
    _Script_Engine::TimelineComponent*& get_AttackLocker();
    void* get_HuntPlayerTL__Direction_DD38F81A4B20B0A79447FC9AFB89E9DC();
    _Script_Engine::TimelineComponent*& get_HuntPlayerTL();
    _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C*& get_Huggy();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Player();
    _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C*& get_Hole();
    void* get_TempWaypoints();
    _Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C*& get_Cached_Waypoint();
    _Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C*& get_NextWayPoint();
    void* get_Waypoints();
    void* get_DetectedPlayers();
    void* get_AI_Players();
    void* get_SpawnLocation();
    _Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C*& get_DefaultWaypoint();
    bool get_ChasingPlayer();
    void set_ChasingPlayer(bool value);
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_CurrentChaseTarget();
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::Actor* Get_Second_Closest_Waypoint(float& Distance);
    void HuntPlayerTL__FinishedFunc();
    void HuntPlayerTL__UpdateFunc();
    void AttackLocker__FinishedFunc();
    void AttackLocker__UpdateFunc();
    void AttackLocker__NewTrack_0__EventFunc();
    void OnFail_E353255C445FF146EDE5C888632107AF(void* MovementResult);
    void OnSuccess_E353255C445FF146EDE5C888632107AF(void* MovementResult);
    void OnFail_4B6E1D5147E270C6F339ABBAAB7A338D(void* MovementResult);
    void OnSuccess_4B6E1D5147E270C6F339ABBAAB7A338D(void* MovementResult);
    void OnFail_B34023C145351D8F4C7D569A518D4B88(void* MovementResult);
    void OnSuccess_B34023C145351D8F4C7D569A518D4B88(void* MovementResult);
    void OnFail_7B1FBC6140F1BD05ECCDD083CACE42FB(void* MovementResult);
    void OnSuccess_7B1FBC6140F1BD05ECCDD083CACE42FB(void* MovementResult);
    void OnFail_843783E64C584B6C5396AA8309872D78(void* MovementResult);
    void OnSuccess_843783E64C584B6C5396AA8309872D78(void* MovementResult);
    void ReceivePossess(_Script_Engine::Pawn* PossessedPawn);
    void MoveTo(_Script_Engine::Actor* TargetActor);
    void Charge();
    void AI_MoveThroughWaypoints(_Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C* StartingWaypoint, float Delay);
    void Resume_Wander(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Lost_Player);
    void Hunt_Players(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* DetectedPlayer);
    void bypass_conditions_and_hunt();
    void DepositPlayerInHuggyHole();
    void Destroy_Locker(_Game_Gameplay_Interaction_BP_Locker::BP_Locker_C* NewParam);
    void DisableHuggy();
    void EnableHuggy();
    void bypass_conditions_and_wander();
    void ExecuteUbergraph_BP_AIController_TutorialHuggy(int32_t EntryPoint);
}; // Size: 0x3e0
#pragma pack(pop)
}
