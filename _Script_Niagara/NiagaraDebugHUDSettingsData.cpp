#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDebugHUDSettingsData.hpp"
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bShowParticleVariables(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bOverviewEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bValidateSystemSimulationDataBuffers() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDebugHUDSettingsData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraDebugHUDSettingsData");
    return result;
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bValidateSystemSimulationDataBuffers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bEmitterFilterEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bValidateParticleDataBuffers() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bValidateParticleDataBuffers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bEmitterFilterEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bOverviewEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bShowParticlesVariablesWithSystem() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraDebugHUDSettingsData::get_OverviewFont() {
    return (void*)((uintptr_t)this + 0x4);
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bActorFilterEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraDebugHUDSettingsData::get_OverviewLocation() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraDebugHUDSettingsData::get_ParticlesVariables() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Niagara::NiagaraDebugHUDSettingsData::get_ActorFilter() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bShowParticleVariables() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bComponentFilterEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bComponentFilterEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraDebugHUDSettingsData::get_ComponentFilter() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bSystemFilterEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bSystemFilterEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraDebugHUDSettingsData::get_SystemFilter() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Niagara::NiagaraDebugHUDSettingsData::get_EmitterFilter() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bActorFilterEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraDebugHUDSettingsData::get_SystemDebugVerbosity() {
    return (void*)((uintptr_t)this + 0x6c);
}
void* _Script_Niagara::NiagaraDebugHUDSettingsData::get_SystemEmitterVerbosity() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bSystemShowBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bSystemShowBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bSystemShowActiveOnlyInWorld() {
    return (*(uint8_t*)((uintptr_t)this + 0x75 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bSystemShowActiveOnlyInWorld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x75 + 0);
    *(uint8_t*)((uintptr_t)this + 0x75 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bShowSystemVariables() {
    return (*(uint8_t*)((uintptr_t)this + 0x76 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bShowSystemVariables(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x76 + 0);
    *(uint8_t*)((uintptr_t)this + 0x76 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bShowParticlesVariablesWithSystem(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraDebugHUDSettingsData::get_SystemVariables() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Niagara::NiagaraDebugHUDSettingsData::get_SystemTextOptions() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Niagara::NiagaraDebugHUDSettingsData::get_PlaybackMode() {
    return (void*)((uintptr_t)this + 0xc8);
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bEnableGpuParticleReadback() {
    return (*(uint8_t*)((uintptr_t)this + 0x99 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bEnableGpuParticleReadback(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x99 + 0);
    *(uint8_t*)((uintptr_t)this + 0x99 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraDebugHUDSettingsData::get_ParticleTextOptions() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bUseMaxParticlesToDisplay() {
    return (*(uint8_t*)((uintptr_t)this + 0xc1 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bUseMaxParticlesToDisplay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Niagara::NiagaraDebugHUDSettingsData::get_MaxParticlesToDisplay() {
    return *(int32_t*)((uintptr_t)this + 0xc4);
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bPlaybackRateEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xc9 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bPlaybackRateEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Niagara::NiagaraDebugHUDSettingsData::get_PlaybackRate() {
    return *(float*)((uintptr_t)this + 0xcc);
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bLoopTimeEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bLoopTimeEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Niagara::NiagaraDebugHUDSettingsData::get_LoopTime() {
    return *(float*)((uintptr_t)this + 0xd4);
}
bool _Script_Niagara::NiagaraDebugHUDSettingsData::get_bShowGlobalBudgetInfo() {
    return (*(uint8_t*)((uintptr_t)this + 0xd8 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDebugHUDSettingsData::set_bShowGlobalBudgetInfo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
