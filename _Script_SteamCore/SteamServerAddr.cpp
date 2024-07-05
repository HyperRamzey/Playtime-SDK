#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamServerAddr.hpp"
void* _Script_SteamCore::SteamServerAddr::get_SteamP2PAddr() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_SteamCore::SteamServerAddr::get_Port() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void* _Script_SteamCore::SteamServerAddr::get_IP() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SteamCore::SteamServerAddr::get_QueryPort() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
void* _Script_SteamCore::SteamServerAddr::get_ConnectionAddressString() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamServerAddr::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamServerAddr");
    return result;
}
