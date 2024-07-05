#include "..\FUObjectArray.hpp"
#include "ARSharedWorldGameState.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\GameState.hpp"
_Script_CoreUObject::Class* _Script_AugmentedReality::ARSharedWorldGameState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARSharedWorldGameState");
    return result;
}
int32_t& _Script_AugmentedReality::ARSharedWorldGameState::get_PreviewImageBytesTotal() {
    return *(int32_t*)((uintptr_t)this + 0x2b0);
}
void* _Script_AugmentedReality::ARSharedWorldGameState::get_ARWorldData() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Script_AugmentedReality::ARSharedWorldGameState::get_PreviewImageData() {
    return (void*)((uintptr_t)this + 0x290);
}
int32_t& _Script_AugmentedReality::ARSharedWorldGameState::get_ARWorldBytesDelivered() {
    return *(int32_t*)((uintptr_t)this + 0x2bc);
}
int32_t& _Script_AugmentedReality::ARSharedWorldGameState::get_ARWorldBytesTotal() {
    return *(int32_t*)((uintptr_t)this + 0x2b4);
}
int32_t& _Script_AugmentedReality::ARSharedWorldGameState::get_PreviewImageBytesDelivered() {
    return *(int32_t*)((uintptr_t)this + 0x2b8);
}
void _Script_AugmentedReality::ARSharedWorldGameState::K2_OnARWorldMapIsReady() {
    return;
}
