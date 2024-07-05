#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreJson.hpp"
void* _Script_SteamCoreWeb::SteamCoreJson::get_Key() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCoreWeb::SteamCoreJson::get_String() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_SteamCoreWeb::SteamCoreJson::set_Bool(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_SteamCoreWeb::SteamCoreJson::get_Number() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
bool _Script_SteamCoreWeb::SteamCoreJson::get_Bool() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
void* _Script_SteamCoreWeb::SteamCoreJson::get_Type() {
    return (void*)((uintptr_t)this + 0x25);
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::SteamCoreJson::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCoreWeb.SteamCoreJson");
    return result;
}
