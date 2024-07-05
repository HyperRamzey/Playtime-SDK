#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "ParkourComponent.hpp"
#include "ParkourObject.hpp"
void* _Script_Playtime_Multiplayer::ParkourComponent::get_CurrentParkourType() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Playtime_Multiplayer::ParkourComponent::get_CurrentMantleState() {
    return (void*)((uintptr_t)this + 0xb1);
}
_Script_Engine::AnimMontage*& _Script_Playtime_Multiplayer::ParkourComponent::get_VaultMontage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xe8);
}
void* _Script_Playtime_Multiplayer::ParkourComponent::get_ParkourTargetLocation() {
    return (void*)((uintptr_t)this + 0xcc);
}
void* _Script_Playtime_Multiplayer::ParkourComponent::GetNextMantleState() {
    return;
}
_Script_Playtime_Multiplayer::ParkourObject*& _Script_Playtime_Multiplayer::ParkourComponent::get_ParkourObject() {
    return *(_Script_Playtime_Multiplayer::ParkourObject**)((uintptr_t)this + 0xb8);
}
void _Script_Playtime_Multiplayer::ParkourComponent::set_bInParkour(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::ParkourComponent::get_ParkourStartLocation() {
    return (void*)((uintptr_t)this + 0xc0);
}
void _Script_Playtime_Multiplayer::ParkourComponent::TimelineProgress(float Value) {
    return;
}
void* _Script_Playtime_Multiplayer::ParkourComponent::get_ParkourCharacterStartLocation() {
    return (void*)((uintptr_t)this + 0xd8);
}
bool _Script_Playtime_Multiplayer::ParkourComponent::get_bInParkour() {
    return (*(uint8_t*)((uintptr_t)this + 0xe4 + 0)) & 1 != 0;
}
_Script_Engine::AnimMontage*& _Script_Playtime_Multiplayer::ParkourComponent::get_MantleTransitionIn() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xf0);
}
_Script_Engine::AnimMontage*& _Script_Playtime_Multiplayer::ParkourComponent::get_MantleIdle() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xf8);
}
_Script_Engine::AnimMontage*& _Script_Playtime_Multiplayer::ParkourComponent::get_MantleTransitionOut() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x100);
}
_Script_Engine::AnimMontage*& _Script_Playtime_Multiplayer::ParkourComponent::get_CurrentParkourMontage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x108);
}
float& _Script_Playtime_Multiplayer::ParkourComponent::get_ParkourAlpha() {
    return *(float*)((uintptr_t)this + 0x1a8);
}
_Script_Engine::CurveFloat*& _Script_Playtime_Multiplayer::ParkourComponent::get_CurveFloat() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x1b0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ParkourComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.ParkourComponent");
    return result;
}
void _Script_Playtime_Multiplayer::ParkourComponent::TimelineEnded() {
    return;
}
void _Script_Playtime_Multiplayer::ParkourComponent::SetupTimeline() {
    return;
}
void _Script_Playtime_Multiplayer::ParkourComponent::Server_Parkour() {
    return;
}
void _Script_Playtime_Multiplayer::ParkourComponent::GetOwningCharacter(bool& bIsValid, _Script_Engine::Character*& Character) {
    return;
}
void _Script_Playtime_Multiplayer::ParkourComponent::EndParkour() {
    return;
}
void _Script_Playtime_Multiplayer::ParkourComponent::BeginParkour() {
    return;
}
