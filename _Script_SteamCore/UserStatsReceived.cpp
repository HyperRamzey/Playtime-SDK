#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "UserStatsReceived.hpp"
void* _Script_SteamCore::UserStatsReceived::get_GameID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::UserStatsReceived::get_SteamID() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SteamCore::UserStatsReceived::get_Result() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::UserStatsReceived::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.UserStatsReceived");
    return result;
}
