#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "HandMagnetComponent.hpp"
#include "HandTimer.hpp"
float& _Script_Playtime_Multiplayer::HandMagnetComponent::get_AutoDetachDelay() {
    return *(float*)((uintptr_t)this + 0x204);
}
bool _Script_Playtime_Multiplayer::HandMagnetComponent::get_bAutoDetach() {
    return (*(uint8_t*)((uintptr_t)this + 0x200 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::HandMagnetComponent::set_bAutoDetach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x200 + 0);
    *(uint8_t*)((uintptr_t)this + 0x200 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Playtime_Multiplayer::HandMagnetComponent::get_MaxAttachedHands() {
    return *(int32_t*)((uintptr_t)this + 0x208);
}
void _Script_Playtime_Multiplayer::HandMagnetComponent::PseudoConstruct(void* In_GrabpackInterfaceImplementers) {
    return;
}
void* _Script_Playtime_Multiplayer::HandMagnetComponent::get_GrabpackInterfaceTags() {
    return (void*)((uintptr_t)this + 0x210);
}
void* _Script_Playtime_Multiplayer::HandMagnetComponent::get_GrabpackImplementors() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Script_Playtime_Multiplayer::HandMagnetComponent::get_OnAttachmentStateChange() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Script_Playtime_Multiplayer::HandMagnetComponent::get_AttachedHands() {
    return (void*)((uintptr_t)this + 0x240);
}
_Script_Engine::SkeletalMeshComponent*& _Script_Playtime_Multiplayer::HandMagnetComponent::get_SK_GhostHand() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x250);
}
_Script_Engine::AnimSequence*& _Script_Playtime_Multiplayer::HandMagnetComponent::get_HandAnimation() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x258);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::HandMagnetComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.HandMagnetComponent");
    return result;
}
void _Script_Playtime_Multiplayer::HandMagnetComponent::TimerRemoveHand(_Script_Playtime_Multiplayer::HandTimer HandTimer) {
    return;
}
void _Script_Playtime_Multiplayer::HandMagnetComponent::GetFirstAttachedPlayer(_Script_Engine::Actor*& Player, bool& Valid) {
    return;
}
void _Script_Playtime_Multiplayer::HandMagnetComponent::RemoveHand(_Script_Playtime_Multiplayer::HandTimer HandTimer) {
    return;
}
bool _Script_Playtime_Multiplayer::HandMagnetComponent::IsBeingPulled() {
    return;
}
void _Script_Playtime_Multiplayer::HandMagnetComponent::HasAnyAttachedHands(bool& Valid) {
    return;
}
void _Script_Playtime_Multiplayer::HandMagnetComponent::DetachAllHands() {
    return;
}
