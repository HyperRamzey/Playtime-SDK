#include "..\FUObjectArray.hpp"
#include "FPillarSaveStruct.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_Gameplay_Puzzles_FPillarSaveStruct::FPillarSaveStruct::get_PuzzleState0_2_50271DCF4B09023248183A82D5878DC5() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Game_Gameplay_Puzzles_FPillarSaveStruct::FPillarSaveStruct::get_PuzzleState2_6_09412B434EED1BE5F4AE5A9788FA0FC6() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Game_Gameplay_Puzzles_FPillarSaveStruct::FPillarSaveStruct::get_PuzzleProgress0_13_044445B04C2914EAC5E7A2B14B97303C() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Game_Gameplay_Puzzles_FPillarSaveStruct::FPillarSaveStruct::get_PuzzleState1_4_2FB978F447C8DE128F1D64B2189A53DB() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Game_Gameplay_Puzzles_FPillarSaveStruct::FPillarSaveStruct::get_PuzzleProgress1_9_BEAE153B4A3AED7F8209E6BA76B959EB() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Game_Gameplay_Puzzles_FPillarSaveStruct::FPillarSaveStruct::get_PuzzleProgress2_11_9430FD5A4ED7D412D6DF99BFEEA50229() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_FPillarSaveStruct::FPillarSaveStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Gameplay/Puzzles/FPillarSaveStruct.FPillarSaveStruct");
    return result;
}
