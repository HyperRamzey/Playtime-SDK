#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
#include "RTXGIPluginSettings.hpp"
float& _Script_RTXGI::RTXGIPluginSettings::get_ProbesDepthScale() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_RTXGI::RTXGIPluginSettings::get_DebugProbeRadius() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_RTXGI::RTXGIPluginSettings::get_IrradianceBits() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_RTXGI::RTXGIPluginSettings::get_DistanceBits() {
    return (void*)((uintptr_t)this + 0x39);
}
int32_t& _Script_RTXGI::RTXGIPluginSettings::get_ProbeUpdateRayBudget() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
void* _Script_RTXGI::RTXGIPluginSettings::get_ProbesVisualization() {
    return (void*)((uintptr_t)this + 0x44);
}
bool _Script_RTXGI::RTXGIPluginSettings::get_SerializeProbes() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
void _Script_RTXGI::RTXGIPluginSettings::set_SerializeProbes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RTXGI::RTXGIPluginSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RTXGI.RTXGIPluginSettings");
    return result;
}
