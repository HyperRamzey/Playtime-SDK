#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FindOrCreateLeaderboardData.hpp"
void* _Script_SteamCore::FindOrCreateLeaderboardData::get_SteamLeaderboard() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::FindOrCreateLeaderboardData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.FindOrCreateLeaderboardData");
    return result;
}
bool _Script_SteamCore::FindOrCreateLeaderboardData::get_bLeaderboardFound() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_SteamCore::FindOrCreateLeaderboardData::set_bLeaderboardFound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
