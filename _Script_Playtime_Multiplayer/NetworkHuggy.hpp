#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Monster.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Playtime_Multiplayer {
struct HuggyMovementComponent;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct NetworkHuggy : public Monster {
    private: char pad_5d0[0x20]; public:
    int32_t& get_NumBabyHuggies();
    static _Script_CoreUObject::Class* static_class();
    void IncrementHuggyStat(float Amount, void* Stat);
    _Script_Playtime_Multiplayer::HuggyMovementComponent* GetHuggyMovementComponent();
    void AddBabyHuggy(_Script_Engine::Actor* BabyHuggy);
}; // Size: 0x5f0
#pragma pack(pop)
}
