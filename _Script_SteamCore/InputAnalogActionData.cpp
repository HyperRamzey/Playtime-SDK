#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputAnalogActionData.hpp"
void* _Script_SteamCore::InputAnalogActionData::get_Mode() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_SteamCore::InputAnalogActionData::get_X() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SteamCore::InputAnalogActionData::get_Y() {
    return *(float*)((uintptr_t)this + 0x8);
}
bool _Script_SteamCore::InputAnalogActionData::get_bActive() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_SteamCore::InputAnalogActionData::set_bActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SteamCore::InputAnalogActionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.InputAnalogActionData");
    return result;
}
