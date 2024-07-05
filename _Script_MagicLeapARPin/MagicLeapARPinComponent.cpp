#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Guid.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "MagicLeapARPinComponent.hpp"
#include "MagicLeapARPinSaveGame.hpp"
#include "MagicLeapARPinState.hpp"
void* _Script_MagicLeapARPin::MagicLeapARPinComponent::get_ObjectUID() {
    return (void*)((uintptr_t)this + 0x1f8);
}
int32_t& _Script_MagicLeapARPin::MagicLeapARPinComponent::get_UserIndex() {
    return *(int32_t*)((uintptr_t)this + 0x208);
}
_Script_Engine::SphereComponent*& _Script_MagicLeapARPin::MagicLeapARPinComponent::get_SearchVolume() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x268);
}
void* _Script_MagicLeapARPin::MagicLeapARPinComponent::get_AutoPinType() {
    return (void*)((uintptr_t)this + 0x20c);
}
_Script_Engine::SceneComponent*& _Script_MagicLeapARPin::MagicLeapARPinComponent::get_PinnedSceneComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2b0);
}
void _Script_MagicLeapARPin::MagicLeapARPinComponent::set_bShouldPinActor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20d + 0);
    *(uint8_t*)((uintptr_t)this + 0x20d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_MagicLeapARPin::MagicLeapARPinSaveGame*& _Script_MagicLeapARPin::MagicLeapARPinComponent::get_PinData() {
    return *(_Script_MagicLeapARPin::MagicLeapARPinSaveGame**)((uintptr_t)this + 0x2b8);
}
bool _Script_MagicLeapARPin::MagicLeapARPinComponent::get_bShouldPinActor() {
    return (*(uint8_t*)((uintptr_t)this + 0x20d + 0)) & 1 != 0;
}
void _Script_MagicLeapARPin::MagicLeapARPinComponent::PinToBestFit() {
    return;
}
void* _Script_MagicLeapARPin::MagicLeapARPinComponent::get_PinDataClass() {
    return (void*)((uintptr_t)this + 0x210);
}
void* _Script_MagicLeapARPin::MagicLeapARPinComponent::get_OnPersistentEntityPinned() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Script_MagicLeapARPin::MagicLeapARPinComponent::get_SearchPinTypes() {
    return (void*)((uintptr_t)this + 0x218);
}
void* _Script_MagicLeapARPin::MagicLeapARPinComponent::get_OnPersistentEntityPinLost() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Script_MagicLeapARPin::MagicLeapARPinComponent::get_OnPinDataLoadAttemptCompleted() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Script_MagicLeapARPin::MagicLeapARPinComponent::get_PinnedCFUID() {
    return (void*)((uintptr_t)this + 0x2a0);
}
_Script_CoreUObject::Class* _Script_MagicLeapARPin::MagicLeapARPinComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapARPin.MagicLeapARPinComponent");
    return result;
}
void _Script_MagicLeapARPin::MagicLeapARPinComponent::UnPin() {
    return;
}
_Script_MagicLeapARPin::MagicLeapARPinSaveGame* _Script_MagicLeapARPin::MagicLeapARPinComponent::TryGetPinData(void* InPinDataClass, bool& OutPinDataValid) {
    return;
}
bool _Script_MagicLeapARPin::MagicLeapARPinComponent::PinToRestoredOrSyncedID() {
    return;
}
bool _Script_MagicLeapARPin::MagicLeapARPinComponent::PinToID(_Script_CoreUObject::Guid& PinId) {
    return;
}
bool _Script_MagicLeapARPin::MagicLeapARPinComponent::PinSceneComponent(_Script_Engine::SceneComponent* ComponentToPin) {
    return;
}
bool _Script_MagicLeapARPin::MagicLeapARPinComponent::PinRestoredOrSynced() {
    return;
}
bool _Script_MagicLeapARPin::MagicLeapARPinComponent::PinActor(_Script_Engine::Actor* ActorToPin) {
    return;
}
bool _Script_MagicLeapARPin::MagicLeapARPinComponent::IsPinned() {
    return;
}
bool _Script_MagicLeapARPin::MagicLeapARPinComponent::GetPinState(_Script_MagicLeapARPin::MagicLeapARPinState& State) {
    return;
}
bool _Script_MagicLeapARPin::MagicLeapARPinComponent::GetPinnedPinID(_Script_CoreUObject::Guid& PinId) {
    return;
}
_Script_MagicLeapARPin::MagicLeapARPinSaveGame* _Script_MagicLeapARPin::MagicLeapARPinComponent::GetPinData(void* PinDataClass) {
    return;
}
void _Script_MagicLeapARPin::MagicLeapARPinComponent::AttemptPinDataRestorationAsync() {
    return;
}
bool _Script_MagicLeapARPin::MagicLeapARPinComponent::AttemptPinDataRestoration() {
    return;
}
