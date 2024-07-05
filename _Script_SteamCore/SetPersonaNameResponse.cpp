#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SetPersonaNameResponse.hpp"
void* _Script_SteamCore::SetPersonaNameResponse::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_SteamCore::SetPersonaNameResponse::get_bSuccess() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_SteamCore::SetPersonaNameResponse::set_bSuccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SteamCore::SetPersonaNameResponse::get_bLocalSuccess() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_SteamCore::SetPersonaNameResponse::set_bLocalSuccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SteamCore::SetPersonaNameResponse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SetPersonaNameResponse");
    return result;
}
