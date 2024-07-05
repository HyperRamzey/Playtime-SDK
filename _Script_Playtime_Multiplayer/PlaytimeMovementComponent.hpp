#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
#include "PerkPackage.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PlaytimeMovementComponent : public _Script_Engine::CharacterMovementComponent {
    private: char pad_af0[0x370]; public:
    float& get_WalkSpeed();
    float& get_RunSpeed();
    float& get_RollSpeed();
    float& get_DashSpeed();
    float& get_NeedsRevivedSpeed();
    float& get_ProneSpeed();
    float& get_WalkAcceleration();
    float& get_RunAcceleration();
    float& get_RollAcceleration();
    float& get_MinSwingSpeed();
    float& get_MaxSwingSpeed();
    float& get_SwingAcceleration();
    float& get_DashAcceleration();
    float& get_MinDistance();
    float& get_LocalStrafe();
    float& get_Perk_RollRechargeTimeModifier();
    float& get_Perk_MasterRollDurationModifier();
    float& get_Perk_CrouchSpeedModifier();
    void* get_PerksCopy();
    void* get_OnEndSpline();
    bool get_HitWithWebs();
    void set_HitWithWebs(bool value);
    float& get_SpeedBoostModifier();
    float& get_StunSpeedModifier();
    bool get_WantsToBeStunned();
    void set_WantsToBeStunned(bool value);
    bool get_bCanRoll();
    void set_bCanRoll(bool value);
    float& get_RollCharges();
    void* get_OnRepCanRollEventHandler();
    void* get_OnBegunRoll();
    void* get_OnBeginRollRecharge();
    float& get_MaxRollTime();
    float& get_RollTimeLeft();
    float& get_MaxRollRechargeTime();
    float& get_RollRechargeTimeLeft();
    void* get_RollDirection();
    bool get_bWantsToProne();
    void set_bWantsToProne(bool value);
    void* get_OnWantsProne();
    float& get_MinSplineSpeed();
    float& get_MaxSplineSpeed();
    float& get_SplineAcceleration();
    bool get_bWantsToDash();
    void set_bWantsToDash(bool value);
    bool get_WantsToRun();
    void set_WantsToRun(bool value);
    bool get_WantsToDash();
    void set_WantsToDash(bool value);
    bool get_WantsToProne();
    void set_WantsToProne(bool value);
    bool get_RunKeyDown();
    void set_RunKeyDown(bool value);
    float& get_WebSpeedMultiplier();
    bool get_bRechargeDoOnce();
    void set_bRechargeDoOnce(bool value);
    bool get_bWantsToSwing();
    void set_bWantsToSwing(bool value);
    bool get_bWantsToSpline();
    void set_bWantsToSpline(bool value);
    bool get_bCrouchingIsClientSimulated();
    void set_bCrouchingIsClientSimulated(bool value);
    float& get_TargetCapsuleRadius();
    float& get_TargetCapsuleHeight();
    static _Script_CoreUObject::Class* static_class();
    void StopSpeedBoost();
    void StartSpeedBoost();
    void SetWantsToProne(bool bInWantsToProne);
    void SetRunning(bool In_Running);
    void SetDashDirection(_Script_CoreUObject::Vector In_Target);
    void Server_SyncStrafe(float Strafe);
    void Server_Stun(float Duration);
    void Server_SetWantsToSwing(bool In_Swinging);
    void Server_SetWantsToProne(bool bInWantsToProne);
    void Server_SetWantsToDash(bool In_WantsToDash);
    void Server_ActivateRoll();
    void OnRep_CanRoll();
    void OnRep_bWantsToProne();
    void OnPerkSaveGameChanged(_Script_Playtime_Multiplayer::PerkPackage In_PerkSaveGame);
    void NetworkSafe_SwitchSpline(_Script_Engine::SplineComponent* SplineToUse, float In_MinSplineSpeed, float In_MaxSpline, float In_SplineAcceleration);
    void NetworkSafe_Stun(float Duration);
    void NetworkSafe_SetWantsToSpline(bool In_WantsToSpline, _Script_Engine::SplineComponent* SplineToUse, float In_MinSplineSpeed, float In_MaxSpline, float In_SplineAcceleration);
    void NetworkSafe_SetWantsToProne(bool bInWantsToProne);
    void NetworkSafe_SetWantsToDash(bool In_WantsToDash);
    void NetworkSafe_ActivateRoll();
    bool IsRolling();
    bool IsCustomMovementMode(void* custom_movement_mode);
    bool GetWantsToProne();
    float GetSplineProgress();
    float GetMaxRollTime();
    float GetMaxRollRechargeTime();
    void Client_SyncSpline(void*& SplinePoints);
    void Client_SwitchSpline(_Script_Engine::SplineComponent* SplineToUse, float In_MinSplineSpeed, float In_MaxSpline, float In_SplineAcceleration);
    void Client_SetWantsToSpline(bool In_WantsToSpline, _Script_Engine::SplineComponent* SplineToUse, float In_MinSplineSpeed, float In_MaxSpline, float In_SplineAcceleration);
}; // Size: 0xe60
#pragma pack(pop)
}
