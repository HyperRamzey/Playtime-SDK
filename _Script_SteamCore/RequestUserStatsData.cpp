#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RequestUserStatsData.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::RequestUserStatsData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.RequestUserStatsData");
    return result;
}
void* _Script_SteamCore::RequestUserStatsData::get_GameID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::RequestUserStatsData::get_Result() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::RequestUserStatsData::get_SteamIDUser() {
    return (void*)((uintptr_t)this + 0x10);
}
