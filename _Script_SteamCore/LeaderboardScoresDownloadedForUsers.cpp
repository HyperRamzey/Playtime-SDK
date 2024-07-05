#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LeaderboardScoresDownloadedForUsers.hpp"
void* _Script_SteamCore::LeaderboardScoresDownloadedForUsers::get_SteamLeaderboard() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::LeaderboardScoresDownloadedForUsers::get_SteamLeaderboardEntries() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_SteamCore::LeaderboardScoresDownloadedForUsers::get_EntryCount() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SteamCore::LeaderboardScoresDownloadedForUsers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.LeaderboardScoresDownloadedForUsers");
    return result;
}
