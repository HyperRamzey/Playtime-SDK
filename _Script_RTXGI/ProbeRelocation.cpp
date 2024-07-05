#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ProbeRelocation.hpp"
bool _Script_RTXGI::ProbeRelocation::get_AutomaticProbeRelocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
float& _Script_RTXGI::ProbeRelocation::get_ProbeBackfaceThreshold() {
    return *(float*)((uintptr_t)this + 0x8);
}
void _Script_RTXGI::ProbeRelocation::set_AutomaticProbeRelocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RTXGI::ProbeRelocation::get_ProbeMinFrontfaceDistance() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RTXGI::ProbeRelocation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RTXGI.ProbeRelocation");
    return result;
}
