#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel {
struct BP_MP_HandPanel_C;
}
namespace _Game_Player_TrainingDummy_Menu_BP_PlayerPreview {
struct BP_PlayerPreview_C;
}
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
struct SplineMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Player_TrainingDummy_Menu_BP_NetExtendoHand {
#pragma pack(push, 1)
struct BP_NetExtendoHand_C : public _Script_Engine::Actor {
    private: char pad_220[0xa8]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ArrowComponent*& get_TraceArrow();
    _Script_Engine::SceneComponent*& get_HighFivePoint();
    _Script_Engine::SceneComponent*& get_WireEnd();
    _Script_Engine::SkeletalMeshComponent*& get_SK_Hand();
    _Script_Engine::AudioComponent*& get_WindAudio();
    _Script_Engine::StaticMeshComponent*& get_HandPivot();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_RoughEndLocation();
    _Game_Player_TrainingDummy_Menu_BP_PlayerPreview::BP_PlayerPreview_C*& get_Player();
    bool get_LeftHand();
    void set_LeftHand(bool value);
    float& get_DistanceMoved();
    bool get_CanShootForward();
    void set_CanShootForward(bool value);
    bool get_HitSomething();
    void set_HitSomething(bool value);
    bool get_IsRetractingBackward();
    void set_IsRetractingBackward(bool value);
    void* get_Impact_Normal();
    _Script_Engine::Actor*& get_Hit_Actor();
    void* get_HandAttached();
    bool get_PlayerCanWind();
    void set_PlayerCanWind(bool value);
    bool get_UseDistanceDividend();
    void set_UseDistanceDividend(bool value);
    float& get_PullBackDistanceDividend();
    float& get_DeltaSeconds();
    bool get_Debug();
    void set_Debug(bool value);
    float& get_PowerOfPullBack();
    _Script_Engine::SplineMeshComponent*& get_Wire();
    static _Script_CoreUObject::Class* static_class();
    void ResetOrigin();
    void Hit(_Script_Engine::HitResult& Hit);
    void OpenPanelChargeGate(bool Condition);
    void Calculate_Air_High_Five(_Script_CoreUObject::Vector Location, _Script_Engine::Actor* ActorToCheck, bool& NoHighFive);
    void Handle_Wire();
    void RotateGun();
    _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C* Calculate_Panel(_Script_Engine::Actor* ActorToCheck, bool& NoPanel);
    void UnattachAndRetract();
    _Script_Engine::StaticMeshComponent* GetHitComponent();
    _Script_CoreUObject::Vector GetReturnVelocity();
    void RotateHandToNormal(_Script_CoreUObject::Vector& ImpactNormal);
    void FitHandOnAttachedItem();
    bool HandleHighFive();
    void RetractSound();
    void GrabSound();
    void TraceForHit();
    void HandleWireLength();
    void SetLocationByDirection(float Delta);
    void CheckIfReadyToDestroy();
    void ReturnHand();
    void SetLocationByDistanceMoved();
    void LaunchSound();
    void SetHandSide();
    void ReceiveTick0(float DeltaSeconds);
    void ReceiveBeginPlay0();
    void ReceiveDestroyed0();
    void EventAttachHandToPanel(_Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C* HandPanel);
    void EventAttachHandToActor();
    void ToggleRetractionGate(bool Condition);
    void ExecuteUbergraph_BP_NetExtendoHand(int32_t EntryPoint);
    void HandAttached__DelegateSignature(_Script_Engine::Actor* AttachedTo);
}; // Size: 0x2c8
#pragma pack(pop)
}
