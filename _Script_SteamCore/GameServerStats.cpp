#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameServerStats.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
bool _Script_SteamCore::GameServerStats::GetUserStatInt(_Script_SteamCore::SteamID SteamIDUser, void* Name, int32_t& Data) {
    return;
}
void* _Script_SteamCore::GameServerStats::get_GSStatsUnloaded() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_SteamCore::GameServerStats::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.GameServerStats");
    return result;
}
bool _Script_SteamCore::GameServerStats::SetUserStatFloat(_Script_SteamCore::SteamID SteamIDUser, void* Name, float Data) {
    return;
}
bool _Script_SteamCore::GameServerStats::UpdateUserAvgRateStat(_Script_SteamCore::SteamID SteamIDUser, void* Name, float CountThisSession, float SessionLength) {
    return;
}
void _Script_SteamCore::GameServerStats::ServerRequestUserStats(void*& Callback, _Script_SteamCore::SteamID SteamIDUser) {
    return;
}
void _Script_SteamCore::GameServerStats::ServerStoreUserStats(void*& Callback, _Script_SteamCore::SteamID SteamIDUser) {
    return;
}
bool _Script_SteamCore::GameServerStats::SetUserStatInt(_Script_SteamCore::SteamID SteamIDUser, void* Name, int32_t Data) {
    return;
}
bool _Script_SteamCore::GameServerStats::SetUserAchievement(_Script_SteamCore::SteamID SteamIDUser, void* Name) {
    return;
}
bool _Script_SteamCore::GameServerStats::GetUserStatFloat(_Script_SteamCore::SteamID SteamIDUser, void* Name, float& Data) {
    return;
}
bool _Script_SteamCore::GameServerStats::GetUserAchievement(_Script_SteamCore::SteamID SteamIDUser, void* Name, bool& bAchieved) {
    return;
}
bool _Script_SteamCore::GameServerStats::ClearUserAchievement(_Script_SteamCore::SteamID SteamIDUser, void* Name) {
    return;
}
