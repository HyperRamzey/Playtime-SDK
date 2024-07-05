#include "..\FUObjectArray.hpp"
#include "ARComponent.hpp"
#include "ARPointComponent.hpp"
#include "ARPointUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARPointComponent::get_ReplicatedPayload() {
    return (void*)((uintptr_t)this + 0x278);
}
void _Script_AugmentedReality::ARPointComponent::ReceiveAdd(_Script_AugmentedReality::ARPointUpdatePayload& Payload) {
    return;
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARPointComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARPointComponent");
    return result;
}
void _Script_AugmentedReality::ARPointComponent::ServerUpdatePayload(_Script_AugmentedReality::ARPointUpdatePayload& NewPayload) {
    return;
}
void _Script_AugmentedReality::ARPointComponent::ReceiveUpdate(_Script_AugmentedReality::ARPointUpdatePayload& Payload) {
    return;
}
