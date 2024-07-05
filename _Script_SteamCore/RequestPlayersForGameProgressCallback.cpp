#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RequestPlayersForGameProgressCallback.hpp"
void* _Script_SteamCore::RequestPlayersForGameProgressCallback::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::RequestPlayersForGameProgressCallback::get_SearchID() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::RequestPlayersForGameProgressCallback::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.RequestPlayersForGameProgressCallback");
    return result;
}
