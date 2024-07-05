#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RequestPlayersForGameFinalResultCallback.hpp"
void* _Script_SteamCore::RequestPlayersForGameFinalResultCallback::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::RequestPlayersForGameFinalResultCallback::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.RequestPlayersForGameFinalResultCallback");
    return result;
}
void* _Script_SteamCore::RequestPlayersForGameFinalResultCallback::get_SearchID() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::RequestPlayersForGameFinalResultCallback::get_UniqueGameID() {
    return (void*)((uintptr_t)this + 0x18);
}
