#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct HuggyMovementComponent : public _Script_Engine::CharacterMovementComponent {
    private: char pad_af0[0x280]; public:
    bool get_bIgnoreShrinker();
    void set_bIgnoreShrinker(bool value);
    float& get_ChargeCooldown();
    float& get_AttackSlowTimer();
    bool get_CanCharge();
    void set_CanCharge(bool value);
    bool get_AttackSlow();
    void set_AttackSlow(bool value);
    void* get_StartedCharging();
    void* get_EndedCharging();
    void* get_HuggyShrinkerClass();
    float& get_RunSpeed();
    float& get_PostAttackSpeed();
    float& get_ChargeSpeed();
    float& get_RunAcceleration();
    float& get_ChargeAcceleration();
    static _Script_CoreUObject::Class* static_class();
    void TimerForRecharge();
    void Server_BeginCharging(bool Is_Charging);
    void NetworkSafe_BeginCharging(bool Is_Charging);
    bool IsHuggyCharging();
    void EndCharging();
    void AfterAttackSlow(float DeltaTime);
}; // Size: 0xd70
#pragma pack(pop)
}
