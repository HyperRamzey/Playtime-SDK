#include "..\FUObjectArray.hpp"
#include "ARComponent.hpp"
#include "ARQRCodeComponent.hpp"
#include "ARQRCodeUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARQRCodeComponent::get_ReplicatedPayload() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARQRCodeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARQRCodeComponent");
    return result;
}
void _Script_AugmentedReality::ARQRCodeComponent::SetQRCodeComponentDebugMode(void* NewDebugMode) {
    return;
}
void _Script_AugmentedReality::ARQRCodeComponent::ServerUpdatePayload(_Script_AugmentedReality::ARQRCodeUpdatePayload& NewPayload) {
    return;
}
void _Script_AugmentedReality::ARQRCodeComponent::ReceiveUpdate(_Script_AugmentedReality::ARQRCodeUpdatePayload& Payload) {
    return;
}
void _Script_AugmentedReality::ARQRCodeComponent::ReceiveAdd(_Script_AugmentedReality::ARQRCodeUpdatePayload& Payload) {
    return;
}
