#include "..\FUObjectArray.hpp"
#include "ARTrackableNotifyComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnAddTrackedGeometry() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnUpdateTrackedPoint() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnUpdateTrackedGeometry() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnRemoveTrackedGeometry() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnAddTrackedPoint() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnAddTrackedPlane() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnRemoveTrackedPlane() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnUpdateTrackedPlane() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnRemoveTrackedPoint() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnAddTrackedImage() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnUpdateTrackedImage() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnRemoveTrackedImage() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnAddTrackedFace() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnUpdateTrackedFace() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnRemoveTrackedFace() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnAddTrackedEnvProbe() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnUpdateTrackedEnvProbe() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnRemoveTrackedEnvProbe() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnAddTrackedObject() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnUpdateTrackedObject() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Script_AugmentedReality::ARTrackableNotifyComponent::get_OnRemoveTrackedObject() {
    return (void*)((uintptr_t)this + 0x1f0);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARTrackableNotifyComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARTrackableNotifyComponent");
    return result;
}
