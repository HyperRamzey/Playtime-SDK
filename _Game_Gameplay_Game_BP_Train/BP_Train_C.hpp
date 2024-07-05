#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\NetworkTrain.hpp"
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Game_Gameplay_Puzzles_AC_MP_Puzzle_EndGoal {
struct AC_MP_Puzzle_EndGoal_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavEscapeActor {
struct BP_NavEscapeActor_C;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Gameplay_Game_BP_Train {
#pragma pack(push, 1)
struct BP_Train_C : public _Script_Playtime_Multiplayer::NetworkTrain {
    private: char pad_330[0x320]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ChildActorComponent*& get_Cart_4();
    _Script_Engine::ChildActorComponent*& get_Cart_3();
    _Script_Engine::ChildActorComponent*& get_Cart_2();
    _Script_Engine::ChildActorComponent*& get_Cart_1();
    _Script_Engine::SceneComponent*& get_LightBakeHandle();
    _Script_Engine::SplineComponent*& get_LightBakeSpline();
    _Script_Engine::SkeletalMeshComponent*& get_LocomotiveTender();
    _Script_Engine::AudioComponent*& get_AccelDecelAudio();
    _Script_Engine::AudioComponent*& get_DepartingAudio();
    _Script_Engine::AudioComponent*& get_ChuggingAudio();
    _Script_Engine::AudioComponent*& get_IdleAudio();
    _Script_Engine::SceneComponent*& get_IndicatorSpawn();
    _Script_Engine::SplineComponent*& get_EndTrack();
    _Script_Engine::SceneComponent*& get_TrainParent();
    _Script_Engine::SplineComponent*& get_LoopTrack();
    _Script_Engine::SplineComponent*& get_StartTrack();
    _Script_Engine::SceneComponent*& get_Scene();
    _Game_Gameplay_Puzzles_AC_MP_Puzzle_EndGoal::AC_MP_Puzzle_EndGoal_C*& get_AC_MP_Puzzle_EndGoal();
    _Script_Engine::SkeletalMeshComponent*& get_Train();
    _Script_Engine::SceneComponent*& get_Front();
    float& get_Timeline_0_Alpha_5A0BA7524B685155D23FC792AC077F15();
    void* get_Timeline_0__Direction_5A0BA7524B685155D23FC792AC077F15();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    float& get_TL_Train_AnimPlayRate_99B0FE11407D2A34EBDD1A85CED76858();
    float& get_TL_Train_Alpha_99B0FE11407D2A34EBDD1A85CED76858();
    void* get_TL_Train__Direction_99B0FE11407D2A34EBDD1A85CED76858();
    _Script_Engine::TimelineComponent*& get_TL_Train();
    bool get_R_PreviewStopLocations();
    void set_R_PreviewStopLocations(bool value);
    float& get_SecondStation();
    float& get_CarOffset();
    _Script_Engine::AnimSequence*& get_TrainMoving();
    _Script_Engine::AnimSequence*& get_TrainStopped();
    void* get_Trigger();
    void* get_Doors();
    int32_t& get_Solved();
    _Game_Interface_NavSystem_Blueprints_Actors_BP_NavEscapeActor::BP_NavEscapeActor_C*& get_Indicator();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_CurrentFocusPlayer();
    void* get_PlayersOnTrain();
    _Script_Engine::SplineComponent*& get_From();
    _Script_Engine::SplineComponent*& get_To();
    bool get_R_IsTrainFixed();
    void set_R_IsTrainFixed(bool value);
    float& get_TotalTrackLength();
    void* get_R_CarArray();
    _Script_Engine::SceneComponent*& get_R_CurrentCar();
    void* get_TrainIsFixed();
    int32_t& get_CurrentStopLocation();
    int32_t& get_Phase();
    float& get_LastDistance();
    float& get_CurrentDistance();
    bool get_DoLoopTransition();
    void set_DoLoopTransition(bool value);
    bool get_FullyTransitionedToLoop();
    void set_FullyTransitionedToLoop(bool value);
    bool get_ReadyToTransitionToEnd();
    void set_ReadyToTransitionToEnd(bool value);
    bool get_DoEndTransition();
    void set_DoEndTransition(bool value);
    _Script_Engine::SoundBase*& get_A_Chugging();
    bool get_Ended();
    void set_Ended(bool value);
    void* get_OnTrainStart();
    void* get_OnTrainStop();
    void* get_CallTrainTimer();
    float& get_DepartingCountdown();
    void* get_CountdownTimer();
    void* get_OnTrainCalled();
    void* get_MoveTrainTimer();
    bool get_CloseDoors();
    void set_CloseDoors(bool value);
    void* get_CartTriggers();
    void* get_DoorCheckers();
    float& get_IntroSpeed();
    bool get_EnteredStation();
    void set_EnteredStation(bool value);
    float& get_Alpha();
    int32_t& get_CartCount();
    void* get_PlayerStarts();
    void* get_LeftDoorCheckers();
    void* get_RightDoorCheckers();
    void* get_Carts();
    bool get_Departing();
    void set_Departing(bool value);
    void* get_ObjectiveCollisions();
    void* get_ObjectiveCollisionLocation();
    void* get_CartCollisions();
    int32_t& get_Segments_Start();
    bool get_ShowSplineMesh();
    void set_ShowSplineMesh(bool value);
    int32_t& get_Segments_Loop();
    int32_t& get_Segments_End();
    bool get_UseLightBakeSetup();
    void set_UseLightBakeSetup(bool value);
    void* get_LightBakeHandl();
    void* get_OnBoardTrain();
    void* get_New_Light_Color();
    float& get_New_Temperature();
    float& get_NetAlpha();
    static _Script_CoreUObject::Class* static_class();
    void TraceForPlayersInDoorway();
    void OnPlayerExit(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnPlayerEnter(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void SetArrays();
    void OnRep_ToggleDoors();
    void GetPlayersOnTrain(void*& Players);
    void UpdateVariables();
    void UpdatePlayersOnTrain(int32_t& Length);
    void MoveCart(_Script_Engine::SceneComponent* Cart, float Distance, _Script_Engine::SplineComponent* Track);
    void OnRep_R_IsTrainFixed();
    void ToggleCarTriggers(bool IsOn_);
    void SetupEscapeIndicator();
    float GetDistanceOnSpline(int32_t Index, float Alpha, bool OnlyUseLoop, _Script_Engine::SplineComponent*& Track);
    void PlayerLeftCart(_Script_Engine::Actor* Actor, _Script_Engine::PrimitiveComponent* Trigger, _Script_Engine::PrimitiveComponent* Component);
    void PlayerEnteredCart(_Script_Engine::Actor* Actor, _Script_Engine::PrimitiveComponent* Component, int32_t Index);
    void UserConstructionScript();
    void TL_Train__FinishedFunc();
    void TL_Train__UpdateFunc();
    void TL_Train__BeginDeceleration__EventFunc();
    void TL_Train__ReachedFullSpeed__EventFunc();
    void TL_Train__Start__EventFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void CheckForSolved();
    void R_OnFixed();
    void ToEnd();
    void BeginEndGameSequence();
    void ToggleDoor(bool Close);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnTrainStopped0();
    void OnTrainStarted0();
    void Multicast_Train_Leaving_Sound();
    void DeactivateCallButtons();
    void BeginDeparture();
    void Countdown();
    void ActivateCallButtons();
    void CallTrain(int32_t Station);
    void ExecuteUbergraph_BP_Train(int32_t EntryPoint);
    void OnBoardTrain__DelegateSignature();
    void OnTrainCalled__DelegateSignature();
    void OnTrainStop__DelegateSignature();
    void OnTrainStart__DelegateSignature();
    void TrainIsFixed__DelegateSignature();
}; // Size: 0x650
#pragma pack(pop)
}
