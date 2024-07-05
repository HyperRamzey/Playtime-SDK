#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamServerConnectFailure.hpp"
void* _Script_SteamCore::SteamServerConnectFailure::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_SteamCore::SteamServerConnectFailure::set_bStillRetrying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SteamCore::SteamServerConnectFailure::get_bStillRetrying() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamServerConnectFailure::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamServerConnectFailure");
    return result;
}
