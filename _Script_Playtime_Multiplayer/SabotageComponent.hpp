#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct SabotageComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x20]; public:
    void* get_DurationTimerHandle();
    void* get_CooldownTimerHandle();
    _Script_Engine::DataTable*& get_SabotageDataTable();
    bool get_bCanActivateAgain();
    void set_bCanActivateAgain(bool value);
    static _Script_CoreUObject::Class* static_class();
    void Server_DoSabotage(void* SabotageName, int32_t Level);
    void Sabotage(void* SabotageName, int32_t Level);
    void Multicast_SabotageFX(void* SabotageName, int32_t Level);
    void Multicast_DoSabotage(void* SabotageName, int32_t Level);
    void HandleDuration(void* SabotageName, int32_t Level);
    void EndCooldown();
    bool DoSabotage(void* SabotageName, int32_t Level);
    void BP_SabotageFX(void* SabotageName, int32_t Level);
    void BeginCooldown(float CooldownDuration);
}; // Size: 0xd0
#pragma pack(pop)
}
