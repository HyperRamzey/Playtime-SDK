#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\PseudoHand.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_PseudoHand {
#pragma pack(push, 1)
struct BP_PseudoHand_C : public _Script_Playtime_Multiplayer::PseudoHand {
    private: char pad_268[0x8]; public:
    _Script_Engine::SkeletalMeshComponent*& get_SK_Hand();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x270
#pragma pack(pop)
}
