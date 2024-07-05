#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MicroTxnAuthorizationResponse.hpp"
int32_t& _Script_SteamCore::MicroTxnAuthorizationResponse::get_AppID() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::MicroTxnAuthorizationResponse::get_OrderId() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_SteamCore::MicroTxnAuthorizationResponse::get_bAuthorized() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void _Script_SteamCore::MicroTxnAuthorizationResponse::set_bAuthorized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SteamCore::MicroTxnAuthorizationResponse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.MicroTxnAuthorizationResponse");
    return result;
}
