#include "..\FUObjectArray.hpp"
#include "ARComponent.hpp"
#include "ARMeshComponent.hpp"
#include "ARMeshUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AugmentedReality::ARMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARMeshComponent");
    return result;
}
void* _Script_AugmentedReality::ARMeshComponent::get_ReplicatedPayload() {
    return (void*)((uintptr_t)this + 0x280);
}
void _Script_AugmentedReality::ARMeshComponent::ReceiveAdd(_Script_AugmentedReality::ARMeshUpdatePayload& Payload) {
    return;
}
void _Script_AugmentedReality::ARMeshComponent::ServerUpdatePayload(_Script_AugmentedReality::ARMeshUpdatePayload& NewPayload) {
    return;
}
void _Script_AugmentedReality::ARMeshComponent::ReceiveUpdate(_Script_AugmentedReality::ARMeshUpdatePayload& Payload) {
    return;
}
