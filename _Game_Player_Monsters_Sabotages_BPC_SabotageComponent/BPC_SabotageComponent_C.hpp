#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\SabotageComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_MonsterHUDs_UI_MonsterHUD {
struct UI_MonsterHUD_C;
}
namespace _Game_Player_Monsters_Sabotages_BPC_SabotageComponent {
#pragma pack(push, 1)
struct BPC_SabotageComponent_C : public _Script_Playtime_Multiplayer::SabotageComponent {
    private: char pad_d0[0x10]; public:
    void* get_UberGraphFrame();
    void* get_SabotageName();
    static _Script_CoreUObject::Class* static_class();
    _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C* GetMonsterHud();
    void BP_SabotageFX0(void* SabotageName, int32_t Level);
    void BeginCooldown0(float CooldownDuration);
    void Client_Cooldown(float Cooldwon, void* Sabotage);
    void ExecuteUbergraph_BPC_SabotageComponent(int32_t EntryPoint);
}; // Size: 0xe0
#pragma pack(pop)
}
