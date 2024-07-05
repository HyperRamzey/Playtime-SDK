#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PuzzleData {
    private: char pad_0[0x48]; public:
    void* get_PuzzlePillarName();
    void* get_PuzzleSolved();
    void* get_PuzzleProgress();
    bool get_bIsSolved();
    void set_bIsSolved(bool value);
    int32_t& get_FinalPuzzleSolved();
    void* get_Puzzles();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
