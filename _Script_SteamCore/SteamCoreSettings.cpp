#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
#include "SteamCoreSettings.hpp"
int32_t& _Script_SteamCore::SteamCoreSettings::get_DisabledSubsystems() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
void _Script_SteamCore::SteamCoreSettings::set_bRelaunchInSteam(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SteamCore::SteamCoreSettings::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void _Script_SteamCore::SteamCoreSettings::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SteamCore::SteamCoreSettings::get_bRelaunchInSteam() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d + 0)) & 1 != 0;
}
bool _Script_SteamCore::SteamCoreSettings::get_bAllowP2PPacketRelay() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f + 0)) & 1 != 0;
}
void _Script_SteamCore::SteamCoreSettings::set_bVACEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SteamCore::SteamCoreSettings::get_bVACEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e + 0)) & 1 != 0;
}
void _Script_SteamCore::SteamCoreSettings::set_bAllowP2PPacketRelay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_SteamCore::SteamCoreSettings::get_P2PConnectionTimeout() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
int32_t& _Script_SteamCore::SteamCoreSettings::get_SteamAppId() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
int32_t& _Script_SteamCore::SteamCoreSettings::get_SteamDevAppId() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
int32_t& _Script_SteamCore::SteamCoreSettings::get_Port() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
int32_t& _Script_SteamCore::SteamCoreSettings::get_GameServerQueryPort() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
void* _Script_SteamCore::SteamCoreSettings::get_GameVersion() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreSettings");
    return result;
}
