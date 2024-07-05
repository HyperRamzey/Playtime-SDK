#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct MonsterHUDInterface : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void UpdateToyCount(void*& ToysFound);
    void ShowEmotes(void* Character);
    void SetSabotageIcon(void*& SabotageName);
    void SetCrosshairProgress(float Progress);
    void SetCrosshairColor(_Script_CoreUObject::LinearColor Color);
    void ResetRadialRecharge();
    void RadialRecharge(float Duration);
    void PlayRechargeAnim(int32_t AbilityIndex, float Cooldown);
    void PlayHitmarker();
    void PlayAttackAnimation(float Duration);
    void CheckDownPlayers();
}; // Size: 0x28
#pragma pack(pop)
}
