#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "DDGIVolumeComponent.hpp"
void _Script_RTXGI::DDGIVolumeComponent::set_RuntimeStatic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x214 + 0);
    *(uint8_t*)((uintptr_t)this + 0x214 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RTXGI::DDGIVolumeComponent::get_EnableVolume() {
    return (*(uint8_t*)((uintptr_t)this + 0x200 + 0)) & 1 != 0;
}
void _Script_RTXGI::DDGIVolumeComponent::set_EnableVolume(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x200 + 0);
    *(uint8_t*)((uintptr_t)this + 0x200 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RTXGI::DDGIVolumeComponent::get_UpdatePriority() {
    return *(float*)((uintptr_t)this + 0x204);
}
bool _Script_RTXGI::DDGIVolumeComponent::get_RuntimeStatic() {
    return (*(uint8_t*)((uintptr_t)this + 0x214 + 0)) & 1 != 0;
}
float _Script_RTXGI::DDGIVolumeComponent::GetLightMultiplier() {
    return;
}
float& _Script_RTXGI::DDGIVolumeComponent::get_BlendingCutoffDistance() {
    return *(float*)((uintptr_t)this + 0x210);
}
int32_t& _Script_RTXGI::DDGIVolumeComponent::get_LightingPriority() {
    return *(int32_t*)((uintptr_t)this + 0x208);
}
float& _Script_RTXGI::DDGIVolumeComponent::get_BlendingDistance() {
    return *(float*)((uintptr_t)this + 0x20c);
}
void* _Script_RTXGI::DDGIVolumeComponent::get_LastOrigin() {
    return (void*)((uintptr_t)this + 0x218);
}
void* _Script_RTXGI::DDGIVolumeComponent::get_RaysPerProbe() {
    return (void*)((uintptr_t)this + 0x224);
}
void* _Script_RTXGI::DDGIVolumeComponent::get_ProbeCounts() {
    return (void*)((uintptr_t)this + 0x228);
}
float& _Script_RTXGI::DDGIVolumeComponent::get_ProbeMaxRayDistance() {
    return *(float*)((uintptr_t)this + 0x234);
}
void _Script_RTXGI::DDGIVolumeComponent::SetBlendingCutoffDistance(float NewBlendingCutoffDistance) {
    return;
}
float& _Script_RTXGI::DDGIVolumeComponent::get_ProbeHistoryWeight() {
    return *(float*)((uintptr_t)this + 0x238);
}
void* _Script_RTXGI::DDGIVolumeComponent::get_ProbeRelocation() {
    return (void*)((uintptr_t)this + 0x23c);
}
bool _Script_RTXGI::DDGIVolumeComponent::get_ScrollProbesInfinitely() {
    return (*(uint8_t*)((uintptr_t)this + 0x248 + 0)) & 1 != 0;
}
void _Script_RTXGI::DDGIVolumeComponent::set_ScrollProbesInfinitely(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x248 + 0);
    *(uint8_t*)((uintptr_t)this + 0x248 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RTXGI::DDGIVolumeComponent::get_VisualizeProbes() {
    return (*(uint8_t*)((uintptr_t)this + 0x249 + 0)) & 1 != 0;
}
void _Script_RTXGI::DDGIVolumeComponent::set_VisualizeProbes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x249 + 0);
    *(uint8_t*)((uintptr_t)this + 0x249 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RTXGI::DDGIVolumeComponent::get_ProbeScrollOffset() {
    return (void*)((uintptr_t)this + 0x24c);
}
float& _Script_RTXGI::DDGIVolumeComponent::get_probeDistanceExponent() {
    return *(float*)((uintptr_t)this + 0x258);
}
float& _Script_RTXGI::DDGIVolumeComponent::get_probeIrradianceEncodingGamma() {
    return *(float*)((uintptr_t)this + 0x25c);
}
float& _Script_RTXGI::DDGIVolumeComponent::get_probeChangeThreshold() {
    return *(float*)((uintptr_t)this + 0x260);
}
float& _Script_RTXGI::DDGIVolumeComponent::get_probeBrightnessThreshold() {
    return *(float*)((uintptr_t)this + 0x264);
}
void* _Script_RTXGI::DDGIVolumeComponent::get_SkyLightTypeOnRayMiss() {
    return (void*)((uintptr_t)this + 0x268);
}
float& _Script_RTXGI::DDGIVolumeComponent::get_ViewBias() {
    return *(float*)((uintptr_t)this + 0x26c);
}
float& _Script_RTXGI::DDGIVolumeComponent::get_NormalBias() {
    return *(float*)((uintptr_t)this + 0x270);
}
float& _Script_RTXGI::DDGIVolumeComponent::get_LightMultiplier() {
    return *(float*)((uintptr_t)this + 0x274);
}
float& _Script_RTXGI::DDGIVolumeComponent::get_EmissiveMultiplier() {
    return *(float*)((uintptr_t)this + 0x278);
}
float& _Script_RTXGI::DDGIVolumeComponent::get_IrradianceScalar() {
    return *(float*)((uintptr_t)this + 0x27c);
}
void _Script_RTXGI::DDGIVolumeComponent::SetViewBias(float NewViewBias) {
    return;
}
void* _Script_RTXGI::DDGIVolumeComponent::get_LightingChannels() {
    return (void*)((uintptr_t)this + 0x280);
}
void _Script_RTXGI::DDGIVolumeComponent::ClearProbeData() {
    return;
}
_Script_CoreUObject::Class* _Script_RTXGI::DDGIVolumeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RTXGI.DDGIVolumeComponent");
    return result;
}
void _Script_RTXGI::DDGIVolumeComponent::ToggleVolume(bool IsVolumeEnabled) {
    return;
}
void _Script_RTXGI::DDGIVolumeComponent::SetUpdatePriority(float NewUpdatePriority) {
    return;
}
void _Script_RTXGI::DDGIVolumeComponent::SetProbesVisualization(bool IsProbesVisualized) {
    return;
}
void _Script_RTXGI::DDGIVolumeComponent::SetNormalBias(float NewNormalBias) {
    return;
}
void _Script_RTXGI::DDGIVolumeComponent::SetLightMultiplier(float NewLightMultiplier) {
    return;
}
void _Script_RTXGI::DDGIVolumeComponent::SetLightingPriority(float NewLightingPriority) {
    return;
}
void _Script_RTXGI::DDGIVolumeComponent::SetIrradianceScalar(float NewIrradianceScalar) {
    return;
}
void _Script_RTXGI::DDGIVolumeComponent::SetEmissiveMultiplier(float NewEmissiveMultiplier) {
    return;
}
void _Script_RTXGI::DDGIVolumeComponent::SetBlendingDistance(float NewBlendingDistance) {
    return;
}
float _Script_RTXGI::DDGIVolumeComponent::GetViewBias() {
    return;
}
float _Script_RTXGI::DDGIVolumeComponent::GetUpdatePriority() {
    return;
}
float _Script_RTXGI::DDGIVolumeComponent::GetNormalBias() {
    return;
}
float _Script_RTXGI::DDGIVolumeComponent::GetLightingPriority() {
    return;
}
float _Script_RTXGI::DDGIVolumeComponent::GetIrradianceScalar() {
    return;
}
float _Script_RTXGI::DDGIVolumeComponent::GetEmissiveMultiplier() {
    return;
}
float _Script_RTXGI::DDGIVolumeComponent::GetBlendingDistance() {
    return;
}
float _Script_RTXGI::DDGIVolumeComponent::GetBlendingCutoffDistance() {
    return;
}
void _Script_RTXGI::DDGIVolumeComponent::DDGIClearVolumes() {
    return;
}
