#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PhonyPhysicsComponent : public _Script_Engine::SceneComponent {
    private: char pad_200[0x80]; public:
    _Script_Engine::SceneComponent*& get_Target();
    bool get_bDrawDebug();
    void set_bDrawDebug(bool value);
    bool get_bReturnsToStartOrEnd();
    void set_bReturnsToStartOrEnd(bool value);
    float& get_Threshold();
    float& get_ReturnAcceleration();
    float& get_MaxSpeed();
    float& get_Acceleration();
    float& get_Deceleration();
    float& get_DirectionalInfluence();
    void* get_ProgressMilestoneFlags();
    void* get_ServerOnly_OnProgressMilestone();
    bool get_bSpeedWasSetThisFrame();
    void set_bSpeedWasSetThisFrame(bool value);
    bool get_bNetHasPassedThreshold();
    void set_bNetHasPassedThreshold(bool value);
    bool get_bLocalHasPassedThreshold();
    void set_bLocalHasPassedThreshold(bool value);
    bool get_bPlayerInputLock();
    void set_bPlayerInputLock(bool value);
    float& get_LocalProgress();
    float& get_NetProgress();
    float& get_LocalSpeed();
    float& get_NetSpeed();
    float& get_CorrectionAlpha();
    float& get_TimeTillFinalCorrection();
    bool get_HasDoneFinalCorrection();
    void set_HasDoneFinalCorrection(bool value);
    void* get_HandMagnets();
    bool get_bIsBeingPulled();
    void set_bIsBeingPulled(bool value);
    float& get_TimeSinceLastAcceleration();
    float& get_ProgressTarget();
    static _Script_CoreUObject::Class* static_class();
    void PseudoConstruct(_Script_Engine::SceneComponent* In_Target, void* In_HandMagnetComponents);
    void OnRep_NetSpeed();
    void OnRep_NetProgress();
    void OnRep_NetHasPassedThreshold();
    bool HasPullingHands();
    bool HasAttachedHands();
    float GetPullAmount();
    void DrawDebug();
    void Accelerate(float& DeltaTime, float In_Acceleration);
}; // Size: 0x280
#pragma pack(pop)
}
