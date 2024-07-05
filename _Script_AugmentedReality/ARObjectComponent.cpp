#include "..\FUObjectArray.hpp"
#include "ARComponent.hpp"
#include "ARObjectComponent.hpp"
#include "ARObjectUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_AugmentedReality::ARObjectComponent::ServerUpdatePayload(_Script_AugmentedReality::ARObjectUpdatePayload& NewPayload) {
    return;
}
void* _Script_AugmentedReality::ARObjectComponent::get_ReplicatedPayload() {
    return (void*)((uintptr_t)this + 0x280);
}
void _Script_AugmentedReality::ARObjectComponent::ReceiveUpdate(_Script_AugmentedReality::ARObjectUpdatePayload& Payload) {
    return;
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARObjectComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARObjectComponent");
    return result;
}
void _Script_AugmentedReality::ARObjectComponent::ReceiveAdd(_Script_AugmentedReality::ARObjectUpdatePayload& Payload) {
    return;
}
