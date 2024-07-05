#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
#include "SteamCoreWebSettings.hpp"
bool _Script_SteamCoreWeb::SteamCoreWebSettings::get_bDevMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x41 + 0)) & 1 != 0;
}
float& _Script_SteamCoreWeb::SteamCoreWebSettings::get_AsyncTaskTimeout() {
    return *(float*)((uintptr_t)this + 0x38);
}
int32_t& _Script_SteamCoreWeb::SteamCoreWebSettings::get_DisabledSubsystems() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
bool _Script_SteamCoreWeb::SteamCoreWebSettings::get_bDebugging() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_SteamCoreWeb::SteamCoreWebSettings::set_bDebugging(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SteamCoreWeb::SteamCoreWebSettings::set_bDevMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x41 + 0);
    *(uint8_t*)((uintptr_t)this + 0x41 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SteamCoreWeb::SteamCoreWebSettings::get_Key() {
    return (void*)((uintptr_t)this + 0x48);
}
int32_t& _Script_SteamCoreWeb::SteamCoreWebSettings::get_AppID() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
void* _Script_SteamCoreWeb::SteamCoreWebSettings::get_DevSteamID() {
    return (void*)((uintptr_t)this + 0x60);
}
bool _Script_SteamCoreWeb::SteamCoreWebSettings::get_bSandboxMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void _Script_SteamCoreWeb::SteamCoreWebSettings::set_bSandboxMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreWebSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.SteamCoreWebSettings");
    return result;
}
