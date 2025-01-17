#include "..\FUObjectArray.hpp"
#include "..\_Script_ChaosSolverEngine\ChaosPhysicsCollisionInfo.hpp"
#include "..\_Script_ChaosSolverEngine\ChaosSolverActor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BodySetup.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "..\_Script_FieldSystemEngine\FieldNodeBase.hpp"
#include "..\_Script_FieldSystemEngine\FieldSystemMetaData.hpp"
#include "GeometryCollection.hpp"
#include "GeometryCollectionComponent.hpp"
#include "GeometryCollectionRepData.hpp"
#include "..\_Script_PhysicsCore\ChaosPhysicalMaterial.hpp"
#include "..\_Script_PhysicsCore\PhysicalMaterial.hpp"
void _Script_GeometryCollectionEngine::GeometryCollectionComponent::set_EnableClustering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x589 + 0);
    *(uint8_t*)((uintptr_t)this + 0x589 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_ChaosSolverEngine::ChaosSolverActor*& _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_ChaosSolverActor() {
    return *(_Script_ChaosSolverEngine::ChaosSolverActor**)((uintptr_t)this + 0x480);
}
_Script_GeometryCollectionEngine::GeometryCollection*& _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_RestCollection() {
    return *(_Script_GeometryCollectionEngine::GeometryCollection**)((uintptr_t)this + 0x568);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_EnableClustering() {
    return (*(uint8_t*)((uintptr_t)this + 0x589 + 0)) & 1 != 0;
}
void* _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_InitializationFields() {
    return (void*)((uintptr_t)this + 0x570);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_Simulating() {
    return (*(uint8_t*)((uintptr_t)this + 0x580 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionComponent::NetAbandonCluster(int32_t TransformIndex) {
    return;
}
void _Script_GeometryCollectionEngine::GeometryCollectionComponent::set_Simulating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x580 + 0);
    *(uint8_t*)((uintptr_t)this + 0x580 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_ObjectType() {
    return (void*)((uintptr_t)this + 0x588);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_ClusterGroupIndex() {
    return *(int32_t*)((uintptr_t)this + 0x58c);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_MaxClusterLevel() {
    return *(int32_t*)((uintptr_t)this + 0x590);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_DamageThreshold() {
    return (void*)((uintptr_t)this + 0x598);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::GeometryCollectionComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCollectionEngine.GeometryCollectionComponent");
    return result;
}
void* _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_ClusterConnectionType() {
    return (void*)((uintptr_t)this + 0x5a8);
}
void _Script_GeometryCollectionEngine::GeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks) {
    return;
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_CollisionGroup() {
    return *(int32_t*)((uintptr_t)this + 0x5ac);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_CollisionSampleFraction() {
    return *(float*)((uintptr_t)this + 0x5b0);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_LinearEtherDrag() {
    return *(float*)((uintptr_t)this + 0x5b4);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_AngularEtherDrag() {
    return *(float*)((uintptr_t)this + 0x5b8);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_NotifyGeometryCollectionPhysicsLoadingStateChange() {
    return (void*)((uintptr_t)this + 0x650);
}
_Script_PhysicsCore::ChaosPhysicalMaterial*& _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_PhysicalMaterial() {
    return *(_Script_PhysicsCore::ChaosPhysicalMaterial**)((uintptr_t)this + 0x5c0);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_InitialVelocityType() {
    return (void*)((uintptr_t)this + 0x5c8);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_InitialLinearVelocity() {
    return (void*)((uintptr_t)this + 0x5cc);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_InitialAngularVelocity() {
    return (void*)((uintptr_t)this + 0x5d8);
}
_Script_PhysicsCore::PhysicalMaterial*& _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_PhysicalMaterialOverride() {
    return *(_Script_PhysicsCore::PhysicalMaterial**)((uintptr_t)this + 0x5e8);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_CacheParameters() {
    return (void*)((uintptr_t)this + 0x5f0);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_NotifyGeometryCollectionPhysicsStateChange() {
    return (void*)((uintptr_t)this + 0x640);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_OnChaosBreakEvent() {
    return (void*)((uintptr_t)this + 0x678);
}
float& _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_DesiredCacheTime() {
    return *(float*)((uintptr_t)this + 0x688);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_CachePlayback() {
    return (*(uint8_t*)((uintptr_t)this + 0x68c + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionComponent::set_CachePlayback(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68c + 0);
    *(uint8_t*)((uintptr_t)this + 0x68c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_OnChaosPhysicsCollision() {
    return (void*)((uintptr_t)this + 0x690);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_bNotifyBreaks() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a0 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionComponent::set_bNotifyBreaks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_GeometryCollectionEngine::GeometryCollectionComponent::ApplyPhysicsField(bool Enabled, void* Target, _Script_FieldSystemEngine::FieldSystemMetaData* MetaData, _Script_FieldSystemEngine::FieldNodeBase* Field) {
    return;
}
bool _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_bNotifyCollisions() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a1 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionComponent::set_bNotifyCollisions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_bEnableReplication() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a2 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionComponent::set_bEnableReplication(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_bEnableAbandonAfterLevel() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a3 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollectionComponent::set_bEnableAbandonAfterLevel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_ReplicationAbandonClusterLevel() {
    return *(int32_t*)((uintptr_t)this + 0x6a4);
}
void* _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_RepData() {
    return (void*)((uintptr_t)this + 0x6a8);
}
_Script_Engine::BodySetup*& _Script_GeometryCollectionEngine::GeometryCollectionComponent::get_DummyBodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0x8d8);
}
void _Script_GeometryCollectionEngine::GeometryCollectionComponent::ReceivePhysicsCollision(_Script_ChaosSolverEngine::ChaosPhysicsCollisionInfo& CollisionInfo) {
    return;
}
void _Script_GeometryCollectionEngine::GeometryCollectionComponent::OnRep_RepData(_Script_GeometryCollectionEngine::GeometryCollectionRepData& OldData) {
    return;
}
void _Script_GeometryCollectionEngine::GeometryCollectionComponent::ApplyKinematicField(float Radius, _Script_CoreUObject::Vector Position) {
    return;
}
