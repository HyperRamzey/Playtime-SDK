#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Quat.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_CoreUObject\Vector4.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\FXSystemComponent.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\TextureRenderTarget.hpp"
#include "NiagaraComponent.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraSystem.hpp"
_Script_Niagara::NiagaraSystem*& _Script_Niagara::NiagaraComponent::get_Asset() {
    return *(_Script_Niagara::NiagaraSystem**)((uintptr_t)this + 0x450);
}
void* _Script_Niagara::NiagaraComponent::get_TickBehavior() {
    return (void*)((uintptr_t)this + 0x458);
}
void _Script_Niagara::NiagaraComponent::SeekToDesiredAge(float InDesiredAge) {
    return;
}
int32_t& _Script_Niagara::NiagaraComponent::get_RandomSeedOffset() {
    return *(int32_t*)((uintptr_t)this + 0x45c);
}
bool _Script_Niagara::NiagaraComponent::get_bEnableGpuComputeDebug() {
    return (*(uint8_t*)((uintptr_t)this + 0x528 + 0)) & 2 != 0;
}
void _Script_Niagara::NiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableBool(void* InVariableName, bool InValue) {
    return;
}
void* _Script_Niagara::NiagaraComponent::get_OverrideParameters() {
    return (void*)((uintptr_t)this + 0x460);
}
void _Script_Niagara::NiagaraComponent::SetAllowScalability(bool bAllow) {
    return;
}
bool _Script_Niagara::NiagaraComponent::get_bForceSolo() {
    return (*(uint8_t*)((uintptr_t)this + 0x528 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableQuat(void* InVariableName, _Script_CoreUObject::Quat& InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::set_bForceSolo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x528 + 0);
    *(uint8_t*)((uintptr_t)this + 0x528 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Niagara::NiagaraComponent::SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock) {
    return;
}
void _Script_Niagara::NiagaraComponent::set_bEnableGpuComputeDebug(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x528 + 0);
    *(uint8_t*)((uintptr_t)this + 0x528 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Niagara::NiagaraComponent::get_bAutoDestroy() {
    return (*(uint8_t*)((uintptr_t)this + 0x558 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraComponent::set_bAutoDestroy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x558 + 0);
    *(uint8_t*)((uintptr_t)this + 0x558 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Niagara::NiagaraComponent::SetGpuComputeDebug(bool bEnableDebug) {
    return;
}
bool _Script_Niagara::NiagaraComponent::get_bRenderingEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x558 + 0)) & 2 != 0;
}
void _Script_Niagara::NiagaraComponent::SetForceSolo(bool bInForceSolo) {
    return;
}
void* _Script_Niagara::NiagaraComponent::get_AutoAttachLocationRule() {
    return (void*)((uintptr_t)this + 0x598);
}
void _Script_Niagara::NiagaraComponent::set_bRenderingEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x558 + 0);
    *(uint8_t*)((uintptr_t)this + 0x558 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableVec4(void* InVariableName, _Script_CoreUObject::Vector4& InValue) {
    return;
}
bool _Script_Niagara::NiagaraComponent::get_bAutoManageAttachment() {
    return (*(uint8_t*)((uintptr_t)this + 0x558 + 0)) & 4 != 0;
}
void _Script_Niagara::NiagaraComponent::SetTickBehavior(void* NewTickBehavior) {
    return;
}
void* _Script_Niagara::NiagaraComponent::get_AutoAttachScaleRule() {
    return (void*)((uintptr_t)this + 0x59a);
}
void _Script_Niagara::NiagaraComponent::set_bAutoManageAttachment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x558 + 0);
    *(uint8_t*)((uintptr_t)this + 0x558 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Niagara::NiagaraComponent::get_bAutoAttachWeldSimulatedBodies() {
    return (*(uint8_t*)((uintptr_t)this + 0x558 + 0)) & 8 != 0;
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableVec3(void* InVariableName, _Script_CoreUObject::Vector InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::set_bAutoAttachWeldSimulatedBodies(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x558 + 0);
    *(uint8_t*)((uintptr_t)this + 0x558 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
float& _Script_Niagara::NiagaraComponent::get_MaxTimeBeforeForceUpdateTransform() {
    return *(float*)((uintptr_t)this + 0x55c);
}
void* _Script_Niagara::NiagaraComponent::get_EmitterMaterials() {
    return (void*)((uintptr_t)this + 0x560);
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableFloat(void* InVariableName, float InValue) {
    return;
}
void* _Script_Niagara::NiagaraComponent::get_OnSystemFinished() {
    return (void*)((uintptr_t)this + 0x578);
}
void* _Script_Niagara::NiagaraComponent::get_AutoAttachParent() {
    return (void*)((uintptr_t)this + 0x588);
}
void _Script_Niagara::NiagaraComponent::SetVariableObject(void* InVariableName, _Script_CoreUObject::Object* Object) {
    return;
}
void* _Script_Niagara::NiagaraComponent::get_AutoAttachSocketName() {
    return (void*)((uintptr_t)this + 0x590);
}
void _Script_Niagara::NiagaraComponent::SetAgeUpdateMode(void* InAgeUpdateMode) {
    return;
}
void* _Script_Niagara::NiagaraComponent::get_AutoAttachRotationRule() {
    return (void*)((uintptr_t)this + 0x599);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraComponent");
    return result;
}
void _Script_Niagara::NiagaraComponent::SetVariableVec4(void* InVariableName, _Script_CoreUObject::Vector4& InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetVariableVec3(void* InVariableName, _Script_CoreUObject::Vector InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetVariableVec2(void* InVariableName, _Script_CoreUObject::Vector2D InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetVariableTextureRenderTarget(void* InVariableName, _Script_Engine::TextureRenderTarget* TextureRenderTarget) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetVariableQuat(void* InVariableName, _Script_CoreUObject::Quat& InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetVariableMaterial(void* InVariableName, _Script_Engine::MaterialInterface* Object) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetVariableLinearColor(void* InVariableName, _Script_CoreUObject::LinearColor& InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetVariableInt(void* InVariableName, int32_t InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetVariableBool(void* InVariableName, bool InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetVariableFloat(void* InVariableName, float InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetVariableActor(void* InVariableName, _Script_Engine::Actor* Actor) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetSeekDelta(float InSeekDelta) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetRandomSeedOffset(int32_t NewRandomSeedOffset) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableVec2(void* InVariableName, _Script_CoreUObject::Vector2D InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetPaused(bool bInPaused) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableObject(void* InVariableName, _Script_CoreUObject::Object* Object) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableLinearColor(void* InVariableName, _Script_CoreUObject::LinearColor& InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableInt(void* InVariableName, int32_t InValue) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetNiagaraVariableActor(void* InVariableName, _Script_Engine::Actor* Actor) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetMaxSimTime(float InMaxTime) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetDesiredAge(float InDesiredAge) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetAutoDestroy(bool bInAutoDestroy) {
    return;
}
void _Script_Niagara::NiagaraComponent::SetAsset(_Script_Niagara::NiagaraSystem* InAsset, bool bResetExistingOverrideParameters) {
    return;
}
void _Script_Niagara::NiagaraComponent::ResetSystem() {
    return;
}
void _Script_Niagara::NiagaraComponent::ReinitializeSystem() {
    return;
}
bool _Script_Niagara::NiagaraComponent::IsPaused() {
    return;
}
void _Script_Niagara::NiagaraComponent::InitForPerformanceBaseline() {
    return;
}
void* _Script_Niagara::NiagaraComponent::GetTickBehavior() {
    return;
}
float _Script_Niagara::NiagaraComponent::GetSeekDelta() {
    return;
}
int32_t _Script_Niagara::NiagaraComponent::GetRandomSeedOffset() {
    return;
}
bool _Script_Niagara::NiagaraComponent::GetPreviewLODDistanceEnabled() {
    return;
}
float _Script_Niagara::NiagaraComponent::GetPreviewLODDistance() {
    return;
}
void* _Script_Niagara::NiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(void* InEmitterName, void* InValueName) {
    return;
}
void* _Script_Niagara::NiagaraComponent::GetNiagaraParticleValues_DebugOnly(void* InEmitterName, void* InValueName) {
    return;
}
void* _Script_Niagara::NiagaraComponent::GetNiagaraParticlePositions_DebugOnly(void* InEmitterName) {
    return;
}
float _Script_Niagara::NiagaraComponent::GetMaxSimTime() {
    return;
}
bool _Script_Niagara::NiagaraComponent::GetLockDesiredAgeDeltaTimeToSeekDelta() {
    return;
}
bool _Script_Niagara::NiagaraComponent::GetForceSolo() {
    return;
}
float _Script_Niagara::NiagaraComponent::GetDesiredAge() {
    return;
}
_Script_Niagara::NiagaraDataInterface* _Script_Niagara::NiagaraComponent::GetDataInterface(void* Name) {
    return;
}
_Script_Niagara::NiagaraSystem* _Script_Niagara::NiagaraComponent::GetAsset() {
    return;
}
void* _Script_Niagara::NiagaraComponent::GetAgeUpdateMode() {
    return;
}
void _Script_Niagara::NiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds) {
    return;
}
void _Script_Niagara::NiagaraComponent::AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds) {
    return;
}
