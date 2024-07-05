#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GlobalStatsReceived.hpp"
void* _Script_SteamCore::GlobalStatsReceived::get_GameID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::GlobalStatsReceived::get_Result() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::GlobalStatsReceived::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GlobalStatsReceived");
    return result;
}
