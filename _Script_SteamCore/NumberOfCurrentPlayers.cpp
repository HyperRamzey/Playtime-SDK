#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NumberOfCurrentPlayers.hpp"
bool _Script_SteamCore::NumberOfCurrentPlayers::get_bSuccess() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SteamCore::NumberOfCurrentPlayers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.NumberOfCurrentPlayers");
    return result;
}
void _Script_SteamCore::NumberOfCurrentPlayers::set_bSuccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_SteamCore::NumberOfCurrentPlayers::get_Players() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
