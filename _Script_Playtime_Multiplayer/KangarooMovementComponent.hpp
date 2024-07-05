#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
namespace _Script_Playtime_Multiplayer {
struct NetworkKangaroo;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct KangarooMovementComponent : public _Script_Engine::CharacterMovementComponent {
    private: char pad_af0[0x2d0]; public:
    bool get_bIgnoreShrinker();
    void set_bIgnoreShrinker(bool value);
    bool get_bIsChargingLaunch();
    void set_bIsChargingLaunch(bool value);
    bool get_bIsSlowed();
    void set_bIsSlowed(bool value);
    void* get_EndedBarraging();
    _Script_Playtime_Multiplayer::NetworkKangaroo*& get_Owner();
    void* get_MonsterShrinkerClass();
    float& get_RunSpeed();
    float& get_AttackSlowDuration();
    float& get_PostAttackSpeed();
    float& get_BarrageSpeed();
    float& get_SlowedSpeed();
    float& get_RunAcceleration();
    float& get_BarrageAcceleration();
    float& get_MaxFallSpeed();
    bool get_bBarraging();
    void set_bBarraging(bool value);
    float& get_BarrageTimeRemaining();
    float& get_PostPunchBarrageDuration();
    bool get_AttackSlow();
    void set_AttackSlow(bool value);
    void* get_BP_Punch();
    float& get_PunchTimer();
    float& get_PunchCooldown();
    float& get_CurrentJumpChargeAmount();
    _Script_Engine::CurveFloat*& get_LaunchPitchToJumpPowerCurve();
    _Script_Engine::CurveFloat*& get_LookPitchToLaunchPitchCurve();
    float& get_CurrentFOV();
    float& get_InitFOV();
    float& get_JumpChargeTime();
    float& get_JumpMaxLaunchPower();
    void* get_HasFullyCharged();
    static _Script_CoreUObject::Class* static_class();
    void StartAttackSlow();
    void SetPunchPressed(bool In_PunchPressed);
    void Server_Punch();
    void Server_JumpReleaseCharge(float ChargeAmount);
    void Server_JumpBeginCharge();
    void PseudoConstruct(_Script_Playtime_Multiplayer::NetworkKangaroo* In_Owner);
    void NetworkSafe_Punch();
    bool NetworkSafe_JumpReleaseCharge(float ChargeAmount);
    bool NetworkSafe_JumpBeginCharge();
    void Multicast_Punch();
    bool IsLaunchVerified(float AmountToCheck);
    bool IsBoxyBarraging();
    void EndAttackSlow();
    void DrawProjectedPath();
}; // Size: 0xdc0
#pragma pack(pop)
}
