#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct OutlineComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
    void SetOutline(bool Active);
    void Server_Outline(float Duration, bool CanMonsterSee, bool CanSurvivorsSee);
    void Multicast_Outline(float Duration, bool CanMonsterSee, bool CanSurvivorsSee);
}; // Size: 0xb8
#pragma pack(pop)
}
