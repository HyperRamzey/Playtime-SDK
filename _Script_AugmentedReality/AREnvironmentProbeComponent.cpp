#include "..\FUObjectArray.hpp"
#include "ARComponent.hpp"
#include "AREnvironmentProbeComponent.hpp"
#include "AREnvironmentProbeUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::AREnvironmentProbeComponent::get_ReplicatedPayload() {
    return (void*)((uintptr_t)this + 0x280);
}
void _Script_AugmentedReality::AREnvironmentProbeComponent::ServerUpdatePayload(_Script_AugmentedReality::AREnvironmentProbeUpdatePayload& NewPayload) {
    return;
}
_Script_CoreUObject::Class* _Script_AugmentedReality::AREnvironmentProbeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.AREnvironmentProbeComponent");
    return result;
}
void _Script_AugmentedReality::AREnvironmentProbeComponent::ReceiveUpdate(_Script_AugmentedReality::AREnvironmentProbeUpdatePayload& Payload) {
    return;
}
void _Script_AugmentedReality::AREnvironmentProbeComponent::ReceiveAdd(_Script_AugmentedReality::AREnvironmentProbeUpdatePayload& Payload) {
    return;
}
