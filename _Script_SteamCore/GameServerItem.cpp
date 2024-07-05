#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameServerItem.hpp"
void* _Script_SteamCore::GameServerItem::get_ServerName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::GameServerItem::get_SteamServerAddr() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_SteamCore::GameServerItem::get_MapName() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_SteamCore::GameServerItem::get_MaxPlayers() {
    return *(int32_t*)((uintptr_t)this + 0x80);
}
void* _Script_SteamCore::GameServerItem::get_GameDescription() {
    return (void*)((uintptr_t)this + 0x20);
}
int32_t& _Script_SteamCore::GameServerItem::get_Players() {
    return *(int32_t*)((uintptr_t)this + 0x7c);
}
void* _Script_SteamCore::GameServerItem::get_GameTags() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_SteamCore::GameServerItem::get_Ping() {
    return *(int32_t*)((uintptr_t)this + 0x78);
}
int32_t& _Script_SteamCore::GameServerItem::get_BotPlayers() {
    return *(int32_t*)((uintptr_t)this + 0x84);
}
int32_t& _Script_SteamCore::GameServerItem::get_ServerVersion() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
bool _Script_SteamCore::GameServerItem::get_bPassword() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 1 != 0;
}
void _Script_SteamCore::GameServerItem::set_bPassword(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SteamCore::GameServerItem::get_BSecure() {
    return (*(uint8_t*)((uintptr_t)this + 0x8d + 0)) & 1 != 0;
}
void _Script_SteamCore::GameServerItem::set_BSecure(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8d + 0);
    *(uint8_t*)((uintptr_t)this + 0x8d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SteamCore::GameServerItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GameServerItem");
    return result;
}
