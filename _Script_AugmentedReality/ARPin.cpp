#include "..\FUObjectArray.hpp"
#include "ARPin.hpp"
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\World.hpp"
_Script_Engine::SceneComponent* _Script_AugmentedReality::ARPin::GetPinnedComponent() {
    return;
}
_Script_AugmentedReality::ARTrackedGeometry*& _Script_AugmentedReality::ARPin::get_TrackedGeometry() {
    return *(_Script_AugmentedReality::ARTrackedGeometry**)((uintptr_t)this + 0x28);
}
void* _Script_AugmentedReality::ARPin::get_OnARTrackingStateChanged() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_AugmentedReality::ARPin::get_LocalToTrackingTransform() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_Engine::SceneComponent*& _Script_AugmentedReality::ARPin::get_PinnedComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x30);
}
void _Script_AugmentedReality::ARPin::DebugDraw(_Script_Engine::World* World, _Script_CoreUObject::LinearColor& Color, float Scale, float PersistForSeconds) {
    return;
}
void* _Script_AugmentedReality::ARPin::get_LocalToAlignedTrackingTransform() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_AugmentedReality::ARPin::get_TrackingState() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_AugmentedReality::ARPin::get_OnARTransformUpdated() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARPin::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARPin");
    return result;
}
void* _Script_AugmentedReality::ARPin::GetTrackingState() {
    return;
}
_Script_AugmentedReality::ARTrackedGeometry* _Script_AugmentedReality::ARPin::GetTrackedGeometry() {
    return;
}
_Script_CoreUObject::Transform _Script_AugmentedReality::ARPin::GetLocalToWorldTransform() {
    return;
}
_Script_CoreUObject::Transform _Script_AugmentedReality::ARPin::GetLocalToTrackingTransform() {
    return;
}
void* _Script_AugmentedReality::ARPin::GetDebugName() {
    return;
}
