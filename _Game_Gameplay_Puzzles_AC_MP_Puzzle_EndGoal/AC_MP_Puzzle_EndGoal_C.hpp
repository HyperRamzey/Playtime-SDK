#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Puzzles_AC_MP_Puzzle_EndGoal {
#pragma pack(push, 1)
struct AC_MP_Puzzle_EndGoal_C : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x28]; public:
    void* get_CheckPuzzles();
    void* get_Triggers();
    int32_t& get_Phase();
    static _Script_CoreUObject::Class* static_class();
    void UpdatePhase(bool Forward);
    void CheckPuzzles__DelegateSignature();
}; // Size: 0xd8
#pragma pack(pop)
}
