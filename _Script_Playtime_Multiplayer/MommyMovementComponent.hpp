#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
namespace _Script_Playtime_Multiplayer {
struct NetworkMommy;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct MommyMovementComponent : public _Script_Engine::CharacterMovementComponent {
    private: char pad_af0[0x250]; public:
    bool get_bIgnoreShrinker();
    void set_bIgnoreShrinker(bool value);
    bool get_bCanPunch();
    void set_bCanPunch(bool value);
    float& get_AttackCooldown();
    float& get_AttackSlowTimer();
    bool get_bAttackSlow();
    void set_bAttackSlow(bool value);
    _Script_Playtime_Multiplayer::NetworkMommy*& get_Owner();
    float& get_RunSpeed();
    bool get_bWantsToGrapple();
    void set_bWantsToGrapple(bool value);
    float& get_MaxGrappleSpeed();
    float& get_GrappleAcceleration();
    void* get_MonsterShrinkerClass();
    float& get_PostAttackSpeed();
    float& get_RunAcceleration();
    float& get_MaxFallSpeed();
    static _Script_CoreUObject::Class* static_class();
    void Server_SetWantsToGrapple(bool In_WantsToGrapple);
    void PseudoConstruct(_Script_Playtime_Multiplayer::NetworkMommy* In_Owner);
    void AfterAttackSlow(float DeltaTime);
}; // Size: 0xd40
#pragma pack(pop)
}
