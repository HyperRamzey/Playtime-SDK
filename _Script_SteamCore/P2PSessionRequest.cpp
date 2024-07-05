#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "P2PSessionRequest.hpp"
void* _Script_SteamCore::P2PSessionRequest::get_SteamIDRemote() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::P2PSessionRequest::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.P2PSessionRequest");
    return result;
}
