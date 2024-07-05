#include "..\FUObjectArray.hpp"
#include "ARComponent.hpp"
#include "ARFaceComponent.hpp"
#include "ARFaceUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_AugmentedReality::ARFaceComponent::set_bFaceOutOfScreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x27a + 0);
    *(uint8_t*)((uintptr_t)this + 0x27a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AugmentedReality::ARFaceComponent::ReceiveAdd(_Script_AugmentedReality::ARFaceUpdatePayload& Payload) {
    return;
}
void* _Script_AugmentedReality::ARFaceComponent::get_TransformSetting() {
    return (void*)((uintptr_t)this + 0x278);
}
bool _Script_AugmentedReality::ARFaceComponent::get_bUpdateVertexNormal() {
    return (*(uint8_t*)((uintptr_t)this + 0x279 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARFaceComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARFaceComponent");
    return result;
}
void _Script_AugmentedReality::ARFaceComponent::set_bUpdateVertexNormal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x279 + 0);
    *(uint8_t*)((uintptr_t)this + 0x279 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AugmentedReality::ARFaceComponent::get_bFaceOutOfScreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x27a + 0)) & 1 != 0;
}
void* _Script_AugmentedReality::ARFaceComponent::get_ReplicatedPayload() {
    return (void*)((uintptr_t)this + 0x280);
}
void _Script_AugmentedReality::ARFaceComponent::SetFaceComponentDebugMode(void* NewDebugMode) {
    return;
}
void _Script_AugmentedReality::ARFaceComponent::ServerUpdatePayload(_Script_AugmentedReality::ARFaceUpdatePayload& NewPayload) {
    return;
}
void _Script_AugmentedReality::ARFaceComponent::ReceiveUpdate(_Script_AugmentedReality::ARFaceUpdatePayload& Payload) {
    return;
}
