#include "..\FUObjectArray.hpp"
#include "ARComponent.hpp"
#include "ARPlaneComponent.hpp"
#include "ARPlaneUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARPlaneComponent::get_ReplicatedPayload() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARPlaneComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARPlaneComponent");
    return result;
}
void _Script_AugmentedReality::ARPlaneComponent::SetObjectClassificationDebugColors(void*& InColors) {
    return;
}
void _Script_AugmentedReality::ARPlaneComponent::SetPlaneComponentDebugMode(void* NewDebugMode) {
    return;
}
void _Script_AugmentedReality::ARPlaneComponent::ServerUpdatePayload(_Script_AugmentedReality::ARPlaneUpdatePayload& NewPayload) {
    return;
}
void* _Script_AugmentedReality::ARPlaneComponent::GetObjectClassificationDebugColors() {
    return;
}
void _Script_AugmentedReality::ARPlaneComponent::ReceiveUpdate(_Script_AugmentedReality::ARPlaneUpdatePayload& Payload) {
    return;
}
void _Script_AugmentedReality::ARPlaneComponent::ReceiveAdd(_Script_AugmentedReality::ARPlaneUpdatePayload& Payload) {
    return;
}
