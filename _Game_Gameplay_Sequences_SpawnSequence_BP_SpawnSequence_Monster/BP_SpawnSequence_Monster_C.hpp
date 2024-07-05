#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence\BP_SpawnSequence_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence_Monster {
#pragma pack(push, 1)
struct BP_SpawnSequence_Monster_C : public _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence::BP_SpawnSequence_C {
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
}; // Size: 0x2a0
#pragma pack(pop)
}
