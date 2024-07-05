#include "..\FUObjectArray.hpp"
#include "ARComponent.hpp"
#include "ARGeoAnchorComponent.hpp"
#include "ARGeoAnchorUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARGeoAnchorComponent::get_ReplicatedPayload() {
    return (void*)((uintptr_t)this + 0x280);
}
void _Script_AugmentedReality::ARGeoAnchorComponent::SetGeoAnchorComponentDebugMode(void* NewDebugMode) {
    return;
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARGeoAnchorComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARGeoAnchorComponent");
    return result;
}
void _Script_AugmentedReality::ARGeoAnchorComponent::ReceiveUpdate(_Script_AugmentedReality::ARGeoAnchorUpdatePayload& Payload) {
    return;
}
void _Script_AugmentedReality::ARGeoAnchorComponent::ServerUpdatePayload(_Script_AugmentedReality::ARGeoAnchorUpdatePayload& NewPayload) {
    return;
}
void _Script_AugmentedReality::ARGeoAnchorComponent::ReceiveAdd(_Script_AugmentedReality::ARGeoAnchorUpdatePayload& Payload) {
    return;
}
