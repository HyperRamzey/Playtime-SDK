#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "FXSystemComponent.hpp"
#include "MaterialInstanceDynamic.hpp"
#include "MaterialInterface.hpp"
#include "ParticleSystem.hpp"
#include "ParticleSystemComponent.hpp"
#include "SceneComponent.hpp"
void _Script_Engine::ParticleSystemComponent::set_bResetOnDetach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x479 + 0);
    *(uint8_t*)((uintptr_t)this + 0x479 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleSystemComponent::get_bOverrideLODMethod() {
    return (*(uint8_t*)((uintptr_t)this + 0x47a + 0)) & 4 != 0;
}
_Script_Engine::ParticleSystem*& _Script_Engine::ParticleSystemComponent::get_Template() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x450);
}
void* _Script_Engine::ParticleSystemComponent::get_SkelMeshComponents() {
    return (void*)((uintptr_t)this + 0x468);
}
void _Script_Engine::ParticleSystemComponent::set_bAllowRecycling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x479 + 0);
    *(uint8_t*)((uintptr_t)this + 0x479 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_Engine::ParticleSystemComponent::get_EmitterMaterials() {
    return (void*)((uintptr_t)this + 0x458);
}
bool _Script_Engine::ParticleSystemComponent::get_bAllowRecycling() {
    return (*(uint8_t*)((uintptr_t)this + 0x479 + 0)) & 16 != 0;
}
bool _Script_Engine::ParticleSystemComponent::get_bResetOnDetach() {
    return (*(uint8_t*)((uintptr_t)this + 0x479 + 0)) & 1 != 0;
}
bool _Script_Engine::ParticleSystemComponent::get_bUpdateOnDedicatedServer() {
    return (*(uint8_t*)((uintptr_t)this + 0x479 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleSystemComponent::set_bUpdateOnDedicatedServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x479 + 0);
    *(uint8_t*)((uintptr_t)this + 0x479 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleSystemComponent::get_bAutoManageAttachment() {
    return (*(uint8_t*)((uintptr_t)this + 0x479 + 0)) & 32 != 0;
}
void* _Script_Engine::ParticleSystemComponent::get_AutoAttachParent() {
    return (void*)((uintptr_t)this + 0x598);
}
void _Script_Engine::ParticleSystemComponent::set_bAutoManageAttachment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x479 + 0);
    *(uint8_t*)((uintptr_t)this + 0x479 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::ParticleSystemComponent::get_bAutoAttachWeldSimulatedBodies() {
    return (*(uint8_t*)((uintptr_t)this + 0x479 + 0)) & 64 != 0;
}
void _Script_Engine::ParticleSystemComponent::set_bAutoAttachWeldSimulatedBodies(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x479 + 0);
    *(uint8_t*)((uintptr_t)this + 0x479 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void* _Script_Engine::ParticleSystemComponent::get_PartSysVelocity() {
    return (void*)((uintptr_t)this + 0x4e8);
}
bool _Script_Engine::ParticleSystemComponent::get_bWarmingUp() {
    return (*(uint8_t*)((uintptr_t)this + 0x47a + 0)) & 2 != 0;
}
void _Script_Engine::ParticleSystemComponent::set_bWarmingUp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x47a + 0);
    *(uint8_t*)((uintptr_t)this + 0x47a + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::ParticleSystemComponent::set_bOverrideLODMethod(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x47a + 0);
    *(uint8_t*)((uintptr_t)this + 0x47a + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::ParticleSystemComponent::get_bSkipUpdateDynamicDataDuringTick() {
    return (*(uint8_t*)((uintptr_t)this + 0x47a + 0)) & 8 != 0;
}
void _Script_Engine::ParticleSystemComponent::set_bSkipUpdateDynamicDataDuringTick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x47a + 0);
    *(uint8_t*)((uintptr_t)this + 0x47a + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::ParticleSystemComponent::get_LODMethod() {
    return (void*)((uintptr_t)this + 0x485);
}
void* _Script_Engine::ParticleSystemComponent::get_RequiredSignificance() {
    return (void*)((uintptr_t)this + 0x486);
}
_Script_Engine::MaterialInstanceDynamic* _Script_Engine::ParticleSystemComponent::CreateNamedDynamicMaterialInstance(void* InName, _Script_Engine::MaterialInterface* SourceMaterial) {
    return;
}
void* _Script_Engine::ParticleSystemComponent::get_InstanceParameters() {
    return (void*)((uintptr_t)this + 0x488);
}
void* _Script_Engine::ParticleSystemComponent::get_OnParticleSpawn() {
    return (void*)((uintptr_t)this + 0x498);
}
void* _Script_Engine::ParticleSystemComponent::get_OnParticleBurst() {
    return (void*)((uintptr_t)this + 0x4a8);
}
void* _Script_Engine::ParticleSystemComponent::get_OnParticleDeath() {
    return (void*)((uintptr_t)this + 0x4b8);
}
float& _Script_Engine::ParticleSystemComponent::get_MaxTimeBeforeForceUpdateTransform() {
    return *(float*)((uintptr_t)this + 0x508);
}
void* _Script_Engine::ParticleSystemComponent::get_OnParticleCollide() {
    return (void*)((uintptr_t)this + 0x4c8);
}
bool _Script_Engine::ParticleSystemComponent::get_bOldPositionValid() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d8 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleSystemComponent::set_bOldPositionValid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ParticleSystemComponent::SetTemplate(_Script_Engine::ParticleSystem* NewTemplate) {
    return;
}
void* _Script_Engine::ParticleSystemComponent::get_OldPosition() {
    return (void*)((uintptr_t)this + 0x4dc);
}
bool _Script_Engine::ParticleSystemComponent::GetBeamSourcePoint(int32_t EmitterIndex, int32_t SourceIndex, _Script_CoreUObject::Vector& OutSourcePoint) {
    return;
}
float& _Script_Engine::ParticleSystemComponent::get_WarmupTime() {
    return *(float*)((uintptr_t)this + 0x4f4);
}
float& _Script_Engine::ParticleSystemComponent::get_WarmupTickRate() {
    return *(float*)((uintptr_t)this + 0x4f8);
}
float& _Script_Engine::ParticleSystemComponent::get_SecondsBeforeInactive() {
    return *(float*)((uintptr_t)this + 0x500);
}
_Script_Engine::MaterialInterface* _Script_Engine::ParticleSystemComponent::GetNamedMaterial(void* InName) {
    return;
}
void* _Script_Engine::ParticleSystemComponent::get_ReplayClips() {
    return (void*)((uintptr_t)this + 0x528);
}
float& _Script_Engine::ParticleSystemComponent::get_CustomTimeDilation() {
    return *(float*)((uintptr_t)this + 0x540);
}
void* _Script_Engine::ParticleSystemComponent::get_AutoAttachSocketName() {
    return (void*)((uintptr_t)this + 0x5a0);
}
void* _Script_Engine::ParticleSystemComponent::get_AutoAttachLocationRule() {
    return (void*)((uintptr_t)this + 0x5a8);
}
void* _Script_Engine::ParticleSystemComponent::get_AutoAttachRotationRule() {
    return (void*)((uintptr_t)this + 0x5a9);
}
void* _Script_Engine::ParticleSystemComponent::get_AutoAttachScaleRule() {
    return (void*)((uintptr_t)this + 0x5aa);
}
void* _Script_Engine::ParticleSystemComponent::get_OnSystemFinished() {
    return (void*)((uintptr_t)this + 0x5d8);
}
bool _Script_Engine::ParticleSystemComponent::GetBeamEndPoint(int32_t EmitterIndex, _Script_CoreUObject::Vector& OutEndPoint) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::ParticleSystemComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleSystemComponent");
    return result;
}
void _Script_Engine::ParticleSystemComponent::SetTrailSourceData(void* InFirstSocketName, void* InSecondSocketName, void* InWidthMode, float InWidth) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetMaterialParameter(void* ParameterName, _Script_Engine::MaterialInterface* Param) {
    return;
}
bool _Script_Engine::ParticleSystemComponent::GetBeamSourceStrength(int32_t EmitterIndex, int32_t SourceIndex, float& OutSourceStrength) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetBeamTargetTangent(int32_t EmitterIndex, _Script_CoreUObject::Vector NewTangentPoint, int32_t TargetIndex) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetBeamTargetStrength(int32_t EmitterIndex, float NewTargetStrength, int32_t TargetIndex) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetBeamTargetPoint(int32_t EmitterIndex, _Script_CoreUObject::Vector NewTargetPoint, int32_t TargetIndex) {
    return;
}
bool _Script_Engine::ParticleSystemComponent::GetBeamSourceTangent(int32_t EmitterIndex, int32_t SourceIndex, _Script_CoreUObject::Vector& OutTangentPoint) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetBeamSourceTangent(int32_t EmitterIndex, _Script_CoreUObject::Vector NewTangentPoint, int32_t SourceIndex) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetBeamSourceStrength(int32_t EmitterIndex, float NewSourceStrength, int32_t SourceIndex) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetBeamSourcePoint(int32_t EmitterIndex, _Script_CoreUObject::Vector NewSourcePoint, int32_t SourceIndex) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetBeamEndPoint(int32_t EmitterIndex, _Script_CoreUObject::Vector NewEndPoint) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetAutoAttachParams(_Script_Engine::SceneComponent* Parent, void* SocketName, void* LocationType) {
    return;
}
int32_t _Script_Engine::ParticleSystemComponent::GetNumActiveParticles() {
    return;
}
bool _Script_Engine::ParticleSystemComponent::GetBeamTargetTangent(int32_t EmitterIndex, int32_t TargetIndex, _Script_CoreUObject::Vector& OutTangentPoint) {
    return;
}
bool _Script_Engine::ParticleSystemComponent::GetBeamTargetStrength(int32_t EmitterIndex, int32_t TargetIndex, float& OutTargetStrength) {
    return;
}
bool _Script_Engine::ParticleSystemComponent::GetBeamTargetPoint(int32_t EmitterIndex, int32_t TargetIndex, _Script_CoreUObject::Vector& OutTargetPoint) {
    return;
}
void _Script_Engine::ParticleSystemComponent::GenerateParticleEvent(void* InEventName, float InEmitterTime, _Script_CoreUObject::Vector InLocation, _Script_CoreUObject::Vector InDirection, _Script_CoreUObject::Vector InVelocity) {
    return;
}
void _Script_Engine::ParticleSystemComponent::EndTrails() {
    return;
}
void _Script_Engine::ParticleSystemComponent::BeginTrails(void* InFirstSocketName, void* InSecondSocketName, void* InWidthMode, float InWidth) {
    return;
}
