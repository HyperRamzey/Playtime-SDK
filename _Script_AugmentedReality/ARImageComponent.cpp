#include "..\FUObjectArray.hpp"
#include "ARComponent.hpp"
#include "ARImageComponent.hpp"
#include "ARImageUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARImageComponent::get_ReplicatedPayload() {
    return (void*)((uintptr_t)this + 0x280);
}
void _Script_AugmentedReality::ARImageComponent::ReceiveAdd(_Script_AugmentedReality::ARImageUpdatePayload& Payload) {
    return;
}
void _Script_AugmentedReality::ARImageComponent::ReceiveUpdate(_Script_AugmentedReality::ARImageUpdatePayload& Payload) {
    return;
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARImageComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARImageComponent");
    return result;
}
void _Script_AugmentedReality::ARImageComponent::SetImageComponentDebugMode(void* NewDebugMode) {
    return;
}
void _Script_AugmentedReality::ARImageComponent::ServerUpdatePayload(_Script_AugmentedReality::ARImageUpdatePayload& NewPayload) {
    return;
}
