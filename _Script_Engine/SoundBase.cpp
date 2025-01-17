#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SoundAttenuation.hpp"
#include "SoundBase.hpp"
#include "SoundClass.hpp"
#include "SoundEffectSourcePresetChain.hpp"
#include "SoundSubmixBase.hpp"
_Script_Engine::SoundClass*& _Script_Engine::SoundBase::get_SoundClassObject() {
    return *(_Script_Engine::SoundClass**)((uintptr_t)this + 0x30);
}
bool _Script_Engine::SoundBase::get_bOverrideConcurrency() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 2 != 0;
}
bool _Script_Engine::SoundBase::get_bDebug() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void* _Script_Engine::SoundBase::get_PreEffectBusSends() {
    return (void*)((uintptr_t)this + 0x150);
}
void _Script_Engine::SoundBase::set_bOverrideConcurrency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::SoundBase::get_SoundSubmixSends() {
    return (void*)((uintptr_t)this + 0x128);
}
void _Script_Engine::SoundBase::set_bDebug(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SoundBase::get_TotalSamples() {
    return *(float*)((uintptr_t)this + 0x110);
}
bool _Script_Engine::SoundBase::get_bEnableBusSends() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 4 != 0;
}
bool _Script_Engine::SoundBase::get_bEnableBaseSubmix() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 8 != 0;
}
void _Script_Engine::SoundBase::set_bEnableBusSends(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::SoundBase::set_bEnableBaseSubmix(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::SoundBase::get_bEnableSubmixSends() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 16 != 0;
}
void _Script_Engine::SoundBase::set_bEnableSubmixSends(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::SoundBase::get_bHasDelayNode() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 32 != 0;
}
void _Script_Engine::SoundBase::set_bHasDelayNode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::SoundBase::get_bHasConcatenatorNode() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 64 != 0;
}
void _Script_Engine::SoundBase::set_bHasConcatenatorNode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::SoundBase::get_bBypassVolumeScaleForPriority() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 128 != 0;
}
void _Script_Engine::SoundBase::set_bBypassVolumeScaleForPriority(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_Engine::SoundBase::get_VirtualizationMode() {
    return (void*)((uintptr_t)this + 0x39);
}
_Script_CoreUObject::Class* _Script_Engine::SoundBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundBase");
    return result;
}
void* _Script_Engine::SoundBase::get_ConcurrencySet() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::SoundBase::get_ConcurrencyOverrides() {
    return (void*)((uintptr_t)this + 0xe0);
}
float& _Script_Engine::SoundBase::get_Duration() {
    return *(float*)((uintptr_t)this + 0x108);
}
float& _Script_Engine::SoundBase::get_MaxDistance() {
    return *(float*)((uintptr_t)this + 0x10c);
}
_Script_Engine::SoundSubmixBase*& _Script_Engine::SoundBase::get_SoundSubmixObject() {
    return *(_Script_Engine::SoundSubmixBase**)((uintptr_t)this + 0x120);
}
float& _Script_Engine::SoundBase::get_Priority() {
    return *(float*)((uintptr_t)this + 0x114);
}
_Script_Engine::SoundAttenuation*& _Script_Engine::SoundBase::get_AttenuationSettings() {
    return *(_Script_Engine::SoundAttenuation**)((uintptr_t)this + 0x118);
}
_Script_Engine::SoundEffectSourcePresetChain*& _Script_Engine::SoundBase::get_SourceEffectChain() {
    return *(_Script_Engine::SoundEffectSourcePresetChain**)((uintptr_t)this + 0x138);
}
void* _Script_Engine::SoundBase::get_BusSends() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_Engine::SoundBase::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x160);
}
