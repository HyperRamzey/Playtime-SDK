#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavLockerAlarm {
struct BP_NavLockerAlarm_C;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct RectLightComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Game_Interface_BPC_Tooltip {
struct BPC_Tooltip_C;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_AIModule {
struct AIPerceptionStimuliSourceComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_Engine {
struct Character;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Game_Gameplay_Interaction_BP_Locker {
#pragma pack(push, 1)
struct BP_Locker_C : public _Script_Engine::Actor {
    private: char pad_220[0x148]; public:
    void* get_UberGraphFrame();
    _Script_Engine::AudioComponent*& get_AlarmSound();
    _Script_Engine::StaticMeshComponent*& get_SM_Light_E();
    _Script_Engine::SceneComponent*& get_ToyPartSpawn();
    _Script_Engine::RectLightComponent*& get_RectLight();
    _Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& get_BPC_Tooltip2();
    _Script_Engine::SceneComponent*& get_Monster();
    _Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& get_BPC_Tooltip1();
    _Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& get_BPC_Tooltip();
    _Script_Engine::SceneComponent*& get_Survivor();
    _Script_Engine::SceneComponent*& get_Tooltips();
    _Script_Engine::CameraComponent*& get_LockerCam();
    _Script_Engine::SkeletalMeshComponent*& get_LockerCamSkeleton();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh();
    _Script_AIModule::AIPerceptionStimuliSourceComponent*& get_AIPerceptionStimuliSource();
    _Script_Engine::SceneComponent*& get_MonsterSnap();
    _Script_Engine::SceneComponent*& get_OutsideLocker();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_Timeline_0__Direction_BF26DAF24AE6BDC0E2391C82B728D39F();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    bool get_CantEnterLocker();
    void set_CantEnterLocker(bool value);
    int32_t& get_Hits();
    int32_t& get_MaxHits();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Player_Ref();
    void* get_OnLockerOpened();
    void* get_OnLockerClosed();
    void* get_OnEnteredLocker();
    void* get_OnExitLocker();
    float& get_Random_Float();
    void* get_Locker_Skeletal_Meshes();
    float& get_Min_Flicker_Value();
    float& get_Max_Flicker_Value();
    float& get_Rate_Scale();
    float& get_Light_Temperature();
    void* get_Light_Color();
    _Game_Interface_NavSystem_Blueprints_Actors_BP_NavLockerAlarm::BP_NavLockerAlarm_C*& get_LockerAlarmNavElement();
    bool get_isAlarmActive();
    void set_isAlarmActive(bool value);
    static _Script_CoreUObject::Class* static_class();
    void GetPrompt(void*& PromptPrefix, void*& PromptSuffix, bool& CanPrompt);
    void Authority_BeginInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, bool& CanContinueInteraction, float& ContinueInteractionDuration);
    void Owner_BeginInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, bool& CanContinueInteraction, float& ContinueInteractionDuration);
    void ChangeLockerLightState(bool Alert);
    void SetLockerOpenVisibility(_Script_Engine::Character* Monster, bool Visible_);
    void SetLockerOpenProgress(_Script_Engine::Character* Monster, int32_t Hits);
    void UserConstructionScript0();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Authority_ContinueInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, float Progress);
    void Authority_EndInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor);
    void Owner_ContinueInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, float Progress);
    void Owner_EndInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor);
    void GetInLocker(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* PlayerRef);
    void GetOutOfLocker();
    void OpenCloseDoor(bool ShouldOpen);
    void Monster_TryOpen(_Script_Engine::Character* Monster, _Script_Engine::Controller* MonsterController);
    void CancelMonster_TryOpen();
    void SetLockOpenVisibility(_Script_Engine::Character* Monster, bool Visible_);
    void SetLockOpenProgress(_Script_Engine::Character* Monster, int32_t Hits);
    void Multi_ShakeLocker_Anim();
    void Multi_EnterLocker_Anim();
    void Multi_ExitLocker_Anim();
    void Multi_LockerTakeout_Anim();
    void EnterLockerCam();
    void ExitLockerCam();
    void InterruptLockerCam();
    void TakeoutLockerCam();
    void EnterLockerCam_Anim();
    void ExitLockerCam_Anim();
    void Trigger_Camping_Alarm();
    void Stop_Camping_Alarm();
    void SoundTheAlarm();
    void Sabotage(float Duration);
    void ExecuteUbergraph_BP_Locker(int32_t EntryPoint);
    void OnExitLocker__DelegateSignature();
    void OnEnteredLocker__DelegateSignature();
    void OnLockerClosed__DelegateSignature();
    void OnLockerOpened__DelegateSignature();
}; // Size: 0x368
#pragma pack(pop)
}
