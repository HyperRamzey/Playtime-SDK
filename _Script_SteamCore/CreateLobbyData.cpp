#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CreateLobbyData.hpp"
void* _Script_SteamCore::CreateLobbyData::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::CreateLobbyData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.CreateLobbyData");
    return result;
}
void* _Script_SteamCore::CreateLobbyData::get_SteamIDLobby() {
    return (void*)((uintptr_t)this + 0x8);
}
