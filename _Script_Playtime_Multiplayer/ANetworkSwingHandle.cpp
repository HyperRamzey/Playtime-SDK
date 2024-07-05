#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "ANetworkSwingHandle.hpp"
void _Script_Playtime_Multiplayer::ANetworkSwingHandle::set_bGrappleSabotaged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x258 + 0);
    *(uint8_t*)((uintptr_t)this + 0x258 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::ANetworkSwingHandle::get_RootScene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x230);
}
bool _Script_Playtime_Multiplayer::ANetworkSwingHandle::get_bHasHandAttached() {
    return (*(uint8_t*)((uintptr_t)this + 0x259 + 0)) & 1 != 0;
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::ANetworkSwingHandle::get_StaticMeshComponent() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::ArrowComponent*& _Script_Playtime_Multiplayer::ANetworkSwingHandle::get_SecondEdge() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x248);
}
_Script_Engine::ArrowComponent*& _Script_Playtime_Multiplayer::ANetworkSwingHandle::get_FirstEdge() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::ArrowComponent*& _Script_Playtime_Multiplayer::ANetworkSwingHandle::get_LowestLocation() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x250);
}
bool _Script_Playtime_Multiplayer::ANetworkSwingHandle::get_bGrappleSabotaged() {
    return (*(uint8_t*)((uintptr_t)this + 0x258 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::ANetworkSwingHandle::set_bHasHandAttached(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x259 + 0);
    *(uint8_t*)((uintptr_t)this + 0x259 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::ANetworkSwingHandle::get_bIsActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x25a + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::ANetworkSwingHandle::set_bIsActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x25a + 0);
    *(uint8_t*)((uintptr_t)this + 0x25a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::ANetworkSwingHandle::get_HandPosition() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_Engine::AnimSequence*& _Script_Playtime_Multiplayer::ANetworkSwingHandle::get_HandPose() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x290);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ANetworkSwingHandle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.ANetworkSwingHandle");
    return result;
}
void _Script_Playtime_Multiplayer::ANetworkSwingHandle::PseudoConstruct(_Script_Engine::SkeletalMeshComponent* Hand) {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkSwingHandle::OnRep_GrappleSabotaged() {
    return;
}
