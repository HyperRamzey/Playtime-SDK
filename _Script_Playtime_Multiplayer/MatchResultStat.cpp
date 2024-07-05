#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MatchResultStat.hpp"
int32_t& _Script_Playtime_Multiplayer::MatchResultStat::get_XP() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
void* _Script_Playtime_Multiplayer::MatchResultStat::get_PlayerID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Playtime_Multiplayer::MatchResultStat::get_Status() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Playtime_Multiplayer::MatchResultStat::get_Tickets() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MatchResultStat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.MatchResultStat");
    return result;
}
