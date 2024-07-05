#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GSClientGroupStatus.hpp"
bool _Script_SteamCore::GSClientGroupStatus::get_bOfficer() {
    return (*(uint8_t*)((uintptr_t)this + 0x11 + 0)) & 1 != 0;
}
void* _Script_SteamCore::GSClientGroupStatus::get_SteamIDUser() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::GSClientGroupStatus::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GSClientGroupStatus");
    return result;
}
void* _Script_SteamCore::GSClientGroupStatus::get_SteamIDGroup() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_SteamCore::GSClientGroupStatus::get_bMember() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_SteamCore::GSClientGroupStatus::set_bMember(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SteamCore::GSClientGroupStatus::set_bOfficer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11 + 0);
    *(uint8_t*)((uintptr_t)this + 0x11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
