#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MatchData.hpp"
int32_t& _Script_Playtime_Multiplayer::MatchData::get_PlayerCount() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Playtime_Multiplayer::MatchData::get_NextLevelStruct() {
    return (void*)((uintptr_t)this + 0x20);
}
int32_t& _Script_Playtime_Multiplayer::MatchData::get_XP() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Script_Playtime_Multiplayer::MatchData::get_MatchState() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Playtime_Multiplayer::MatchData::get_NextLevel() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Playtime_Multiplayer::MatchData::get_MatchResult() {
    return (void*)((uintptr_t)this + 0x9);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MatchData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.MatchData");
    return result;
}
