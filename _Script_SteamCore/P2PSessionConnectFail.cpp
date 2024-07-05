#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "P2PSessionConnectFail.hpp"
void* _Script_SteamCore::P2PSessionConnectFail::get_P2PSessionError() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::P2PSessionConnectFail::get_SteamIDRemote() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::P2PSessionConnectFail::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.P2PSessionConnectFail");
    return result;
}
