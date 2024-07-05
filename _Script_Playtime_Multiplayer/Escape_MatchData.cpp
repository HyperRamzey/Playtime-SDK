#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Escape_MatchData.hpp"
#include "MatchData.hpp"
float& _Script_Playtime_Multiplayer::Escape_MatchData::get_RemainingTime() {
    return *(float*)((uintptr_t)this + 0x80);
}
bool _Script_Playtime_Multiplayer::Escape_MatchData::get_bEarlyDeparture() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
float& _Script_Playtime_Multiplayer::Escape_MatchData::get_MonsterSelectTime() {
    return *(float*)((uintptr_t)this + 0x84);
}
void* _Script_Playtime_Multiplayer::Escape_MatchData::get_ToyType() {
    return (void*)((uintptr_t)this + 0x88);
}
void _Script_Playtime_Multiplayer::Escape_MatchData::set_bIsAutoCarry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x91 + 0);
    *(uint8_t*)((uintptr_t)this + 0x91 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Playtime_Multiplayer::Escape_MatchData::get_ToyPartIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8c);
}
void _Script_Playtime_Multiplayer::Escape_MatchData::set_bEarlyDeparture(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::Escape_MatchData::get_bIsAutoCarry() {
    return (*(uint8_t*)((uintptr_t)this + 0x91 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::Escape_MatchData::get_PlayersInHole() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::Escape_MatchData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.Escape_MatchData");
    return result;
}
