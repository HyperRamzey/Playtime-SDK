#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Puzzles_FPillarSaveStruct {
#pragma pack(push, 1)
struct FPillarSaveStruct {
    private: char pad_0[0x18]; public:
    void* get_PuzzleState0_2_50271DCF4B09023248183A82D5878DC5();
    int32_t& get_PuzzleProgress0_13_044445B04C2914EAC5E7A2B14B97303C();
    void* get_PuzzleState1_4_2FB978F447C8DE128F1D64B2189A53DB();
    int32_t& get_PuzzleProgress1_9_BEAE153B4A3AED7F8209E6BA76B959EB();
    void* get_PuzzleState2_6_09412B434EED1BE5F4AE5A9788FA0FC6();
    int32_t& get_PuzzleProgress2_11_9430FD5A4ED7D412D6DF99BFEEA50229();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
