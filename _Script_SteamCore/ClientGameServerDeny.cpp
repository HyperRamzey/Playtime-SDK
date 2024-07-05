#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ClientGameServerDeny.hpp"
int32_t& _Script_SteamCore::ClientGameServerDeny::get_AppID() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SteamCore::ClientGameServerDeny::get_GameServerPort() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
void* _Script_SteamCore::ClientGameServerDeny::get_GameServerIP() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_SteamCore::ClientGameServerDeny::get_BSecure() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void* _Script_SteamCore::ClientGameServerDeny::get_Reason() {
    return (void*)((uintptr_t)this + 0x1d);
}
void _Script_SteamCore::ClientGameServerDeny::set_BSecure(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SteamCore::ClientGameServerDeny::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.ClientGameServerDeny");
    return result;
}
