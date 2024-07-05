#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\PuzzleMazeComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Puzzles_Triggers_MazePuzzle_BP_Maze_Puzzle_Component {
#pragma pack(push, 1)
struct BP_Maze_Puzzle_Component_C : public _Script_Playtime_Multiplayer::PuzzleMazeComponent {
    private: char pad_6b0[0x10]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void BP_Rotate_Sound_Trigger0();
    void ExecuteUbergraph_BP_Maze_Puzzle_Component(int32_t EntryPoint);
}; // Size: 0x6c0
#pragma pack(pop)
}
