#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PuzzleData.hpp"
void* _Script_Playtime_Multiplayer::PuzzleData::get_PuzzlePillarName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Playtime_Multiplayer::PuzzleData::get_PuzzleSolved() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Playtime_Multiplayer::PuzzleData::get_PuzzleProgress() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PuzzleData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.PuzzleData");
    return result;
}
bool _Script_Playtime_Multiplayer::PuzzleData::get_bIsSolved() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
int32_t& _Script_Playtime_Multiplayer::PuzzleData::get_FinalPuzzleSolved() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
void _Script_Playtime_Multiplayer::PuzzleData::set_bIsSolved(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::PuzzleData::get_Puzzles() {
    return (void*)((uintptr_t)this + 0x38);
}
