#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameConnectedChatLeave.hpp"
void* _Script_SteamCore::GameConnectedChatLeave::get_SteamIDUser() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::GameConnectedChatLeave::get_SteamIDClanChat() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_SteamCore::GameConnectedChatLeave::get_bKicked() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SteamCore::GameConnectedChatLeave::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GameConnectedChatLeave");
    return result;
}
void _Script_SteamCore::GameConnectedChatLeave::set_bDropped(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11 + 0);
    *(uint8_t*)((uintptr_t)this + 0x11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SteamCore::GameConnectedChatLeave::set_bKicked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SteamCore::GameConnectedChatLeave::get_bDropped() {
    return (*(uint8_t*)((uintptr_t)this + 0x11 + 0)) & 1 != 0;
}
