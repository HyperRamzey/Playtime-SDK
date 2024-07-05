#include "..\FUObjectArray.hpp"
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_MRMesh\MRMeshComponent.hpp"
_Script_MRMesh::MRMeshComponent*& _Script_AugmentedReality::ARTrackedGeometry::get_UnderlyingMesh() {
    return *(_Script_MRMesh::MRMeshComponent**)((uintptr_t)this + 0xb0);
}
void* _Script_AugmentedReality::ARTrackedGeometry::get_UniqueId() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_AugmentedReality::ARTrackedGeometry::get_LocalToTrackingTransform() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_AugmentedReality::ARTrackedGeometry::get_SpatialMeshUsageFlags() {
    return (void*)((uintptr_t)this + 0xb9);
}
void* _Script_AugmentedReality::ARTrackedGeometry::get_LocalToAlignedTrackingTransform() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_AugmentedReality::ARTrackedGeometry::get_TrackingState() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_AugmentedReality::ARTrackedGeometry::get_ObjectClassification() {
    return (void*)((uintptr_t)this + 0xb8);
}
int32_t& _Script_AugmentedReality::ARTrackedGeometry::get_LastUpdateFrameNumber() {
    return *(int32_t*)((uintptr_t)this + 0xd0);
}
void* _Script_AugmentedReality::ARTrackedGeometry::get_DebugName() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARTrackedGeometry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARTrackedGeometry");
    return result;
}
bool _Script_AugmentedReality::ARTrackedGeometry::IsTracked() {
    return;
}
bool _Script_AugmentedReality::ARTrackedGeometry::HasSpatialMeshUsageFlag(void* InFlag) {
    return;
}
_Script_MRMesh::MRMeshComponent* _Script_AugmentedReality::ARTrackedGeometry::GetUnderlyingMesh() {
    return;
}
void* _Script_AugmentedReality::ARTrackedGeometry::GetTrackingState() {
    return;
}
void* _Script_AugmentedReality::ARTrackedGeometry::GetObjectClassification() {
    return;
}
void* _Script_AugmentedReality::ARTrackedGeometry::GetName() {
    return;
}
_Script_CoreUObject::Transform _Script_AugmentedReality::ARTrackedGeometry::GetLocalToWorldTransform() {
    return;
}
_Script_CoreUObject::Transform _Script_AugmentedReality::ARTrackedGeometry::GetLocalToTrackingTransform() {
    return;
}
float _Script_AugmentedReality::ARTrackedGeometry::GetLastUpdateTimestamp() {
    return;
}
int32_t _Script_AugmentedReality::ARTrackedGeometry::GetLastUpdateFrameNumber() {
    return;
}
void* _Script_AugmentedReality::ARTrackedGeometry::GetDebugName() {
    return;
}
