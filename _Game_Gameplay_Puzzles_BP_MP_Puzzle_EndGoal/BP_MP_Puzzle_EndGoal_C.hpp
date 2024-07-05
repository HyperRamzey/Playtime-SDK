#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Puzzles_BP_MP_Puzzle_EndGoal {
#pragma pack(push, 1)
struct BP_MP_Puzzle_EndGoal_C : public _Script_Engine::Actor {
    private: char pad_220[0x30]; public:
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_Triggers();
    void* get_CheckPuzzles();
    int32_t& get_Phase();
    static _Script_CoreUObject::Class* static_class();
    void Update_Phase(bool Forward);
    void CheckPuzzles__DelegateSignature();
}; // Size: 0x250
#pragma pack(pop)
}
