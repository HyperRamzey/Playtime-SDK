#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamLeaderboardEntry.hpp"
void* _Script_SteamCore::SteamLeaderboardEntry::get_SteamID() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SteamCore::SteamLeaderboardEntry::get_GlobalRank() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::SteamLeaderboardEntry::get_UGCHandle() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_SteamCore::SteamLeaderboardEntry::get_Score() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamLeaderboardEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamLeaderboardEntry");
    return result;
}
int32_t& _Script_SteamCore::SteamLeaderboardEntry::get_Details() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
