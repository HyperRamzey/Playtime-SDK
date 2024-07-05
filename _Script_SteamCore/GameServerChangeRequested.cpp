#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameServerChangeRequested.hpp"
void* _Script_SteamCore::GameServerChangeRequested::get_Password() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SteamCore::GameServerChangeRequested::get_Server() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::GameServerChangeRequested::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GameServerChangeRequested");
    return result;
}
