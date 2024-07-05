#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "JoinLobbyData.hpp"
void* _Script_SteamCore::JoinLobbyData::get_SteamIDLobby() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::JoinLobbyData::get_ChatRoomEnterResponse() {
    return (void*)((uintptr_t)this + 0x9);
}
bool _Script_SteamCore::JoinLobbyData::get_bLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_SteamCore::JoinLobbyData::set_bLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SteamCore::JoinLobbyData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.JoinLobbyData");
    return result;
}
