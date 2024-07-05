#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "PlaytimeCharacter.hpp"
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct Monster : public PlaytimeCharacter {
    private: char pad_5a0[0x30]; public:
    int32_t& get_AttackDamage();
    float& get_AttackRange();
    float& get_AttackCooldown();
    bool get_CanPunch();
    void set_CanPunch(bool value);
    bool get_bCarryingPlayer();
    void set_bCarryingPlayer(bool value);
    _Script_Playtime_Multiplayer::ANetworkCharacter*& get_CarriedPlayer();
    bool get_bIsInVent();
    void set_bIsInVent(bool value);
    void* get_SabotageName();
    void* get_ClientDesiredSabotageName();
    int32_t& get_SabotageLevel();
    static _Script_CoreUObject::Class* static_class();
    void TraceAttack();
    void Server_TryPunch();
    void PickupPlayer(_Script_Playtime_Multiplayer::ANetworkCharacter* Player);
    void OnRep_CarryingPlayer();
    void OnGetPerksSuccess(void*& Perks);
    void OnGetPerksFailure(void* Message);
    void Multicast_PickupPlayer(_Script_Playtime_Multiplayer::ANetworkCharacter* Survivor);
    void Multicast_DropPlayer(_Script_Playtime_Multiplayer::ANetworkCharacter* Survivor);
    void LoadSabotages();
    bool IsCarryingPlayer();
    void* GetSelectedSabotage();
    int32_t GetSabotageLevel();
    void GetSabotageData(void*& Name, int32_t& Level);
    void* GetMonsterName();
    void* GetMonsterHud();
    _Script_Playtime_Multiplayer::ANetworkCharacter* GetCarriedPlayer();
    void DropPlayer();
    void BP_ShowHoleNav(bool Shown);
    void BP_SetSabotageIconFromName(void* Name);
    void BP_OnRep_CarryingPlayer();
    void BP_OnAttackHit(_Script_Playtime_Multiplayer::ANetworkCharacter* Player);
    void BP_OnAttack();
    void BP_Jumpscare(_Script_Playtime_Multiplayer::ANetworkCharacter* Player);
    bool BP_CheckLocker(_Script_Engine::Actor* Actor);
    bool BP_CheckBoogieBot(_Script_Engine::Actor* Actor);
    bool AttackTripleTrace(_Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float CapsuleHalfHeight);
    _Script_Engine::HitResult AttackTrace();
}; // Size: 0x5d0
#pragma pack(pop)
}
