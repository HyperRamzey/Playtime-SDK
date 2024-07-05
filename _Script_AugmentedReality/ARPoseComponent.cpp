#include "..\FUObjectArray.hpp"
#include "ARComponent.hpp"
#include "ARPoseComponent.hpp"
#include "ARPoseUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_AugmentedReality::ARPoseComponent::SetPoseComponentDebugMode(void* NewDebugMode) {
    return;
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARPoseComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARPoseComponent");
    return result;
}
void* _Script_AugmentedReality::ARPoseComponent::get_ReplicatedPayload() {
    return (void*)((uintptr_t)this + 0x280);
}
void _Script_AugmentedReality::ARPoseComponent::ReceiveAdd(_Script_AugmentedReality::ARPoseUpdatePayload& Payload) {
    return;
}
void _Script_AugmentedReality::ARPoseComponent::ServerUpdatePayload(_Script_AugmentedReality::ARPoseUpdatePayload& NewPayload) {
    return;
}
void _Script_AugmentedReality::ARPoseComponent::ReceiveUpdate(_Script_AugmentedReality::ARPoseUpdatePayload& Payload) {
    return;
}
