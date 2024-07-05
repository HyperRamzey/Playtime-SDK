#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GeometryCollection.hpp"
bool _Script_GeometryCollectionEngine::GeometryCollection::get_EnableClustering() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollection::set_EnableClustering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollection::get_ClusterGroupIndex() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_GeometrySource() {
    return (void*)((uintptr_t)this + 0x58);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollection::get_MaxClusterLevel() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_DamageThreshold() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_ClusterConnectionType() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_Materials() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_CollisionType() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_ImplicitType() {
    return (void*)((uintptr_t)this + 0x79);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollection::get_MinLevelSetResolution() {
    return *(int32_t*)((uintptr_t)this + 0x7c);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollection::get_MaxLevelSetResolution() {
    return *(int32_t*)((uintptr_t)this + 0x80);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollection::get_MinClusterLevelSetResolution() {
    return *(int32_t*)((uintptr_t)this + 0x84);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollection::get_MaxClusterLevelSetResolution() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
float& _Script_GeometryCollectionEngine::GeometryCollection::get_CollisionObjectReductionPercentage() {
    return *(float*)((uintptr_t)this + 0x8c);
}
bool _Script_GeometryCollectionEngine::GeometryCollection::get_bMassAsDensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollection::set_bMassAsDensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_GeometryCollectionEngine::GeometryCollection::get_Mass() {
    return *(float*)((uintptr_t)this + 0x94);
}
float& _Script_GeometryCollectionEngine::GeometryCollection::get_MinimumMassClamp() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_GeometryCollectionEngine::GeometryCollection::get_CollisionParticlesFraction() {
    return *(float*)((uintptr_t)this + 0x9c);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_PersistentGuid() {
    return (void*)((uintptr_t)this + 0xd0);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollection::get_MaximumCollisionParticles() {
    return *(int32_t*)((uintptr_t)this + 0xa0);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_SizeSpecificData() {
    return (void*)((uintptr_t)this + 0xa8);
}
bool _Script_GeometryCollectionEngine::GeometryCollection::get_EnableRemovePiecesOnFracture() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_GeometryCollectionEngine::GeometryCollection::set_EnableRemovePiecesOnFracture(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_RemoveOnFractureMaterials() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_GeometryCollectionEngine::GeometryCollection::get_StateGuid() {
    return (void*)((uintptr_t)this + 0xe0);
}
int32_t& _Script_GeometryCollectionEngine::GeometryCollection::get_BoneSelectedMaterialIndex() {
    return *(int32_t*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_GeometryCollectionEngine::GeometryCollection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCollectionEngine.GeometryCollection");
    return result;
}
