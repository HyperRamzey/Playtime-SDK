#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LobbyKickedData.hpp"
bool _Script_SteamCore::LobbyKickedData::get_bKickedDueToDisconnect() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void* _Script_SteamCore::LobbyKickedData::get_SteamIDLobby() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_SteamCore::LobbyKickedData::set_bKickedDueToDisconnect(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SteamCore::LobbyKickedData::get_SteamIDAdmin() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::LobbyKickedData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.LobbyKickedData");
    return result;
}
