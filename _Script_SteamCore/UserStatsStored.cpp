#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "UserStatsStored.hpp"
void* _Script_SteamCore::UserStatsStored::get_Result() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::UserStatsStored::get_GameID() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::UserStatsStored::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.UserStatsStored");
    return result;
}
