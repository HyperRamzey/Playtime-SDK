#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LeaderboardScoresDownloaded.hpp"
void* _Script_SteamCore::LeaderboardScoresDownloaded::get_SteamLeaderboard() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SteamCore::LeaderboardScoresDownloaded::get_EntryCount() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void* _Script_SteamCore::LeaderboardScoresDownloaded::get_SteamLeaderboardEntries() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::LeaderboardScoresDownloaded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.LeaderboardScoresDownloaded");
    return result;
}
