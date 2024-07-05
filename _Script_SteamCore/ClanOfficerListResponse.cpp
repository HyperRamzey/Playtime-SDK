#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ClanOfficerListResponse.hpp"
int32_t& _Script_SteamCore::ClanOfficerListResponse::get_Officers() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::ClanOfficerListResponse::get_SteamIDClan() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_SteamCore::ClanOfficerListResponse::get_bSuccess() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_SteamCore::ClanOfficerListResponse::set_bSuccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SteamCore::ClanOfficerListResponse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.ClanOfficerListResponse");
    return result;
}
