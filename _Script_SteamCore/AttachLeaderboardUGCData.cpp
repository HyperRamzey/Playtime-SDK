#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AttachLeaderboardUGCData.hpp"
void* _Script_SteamCore::AttachLeaderboardUGCData::get_SteamLeaderboard() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::AttachLeaderboardUGCData::get_Result() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::AttachLeaderboardUGCData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.AttachLeaderboardUGCData");
    return result;
}
