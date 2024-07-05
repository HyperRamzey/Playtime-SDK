#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "ANetworkCharacter.hpp"
#include "DualSplineFollower.hpp"
void* _Script_Playtime_Multiplayer::DualSplineFollower::get_FinishedMoving() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_Engine::SplineComponent*& _Script_Playtime_Multiplayer::DualSplineFollower::get_FirstSpline() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x230);
}
bool _Script_Playtime_Multiplayer::DualSplineFollower::get_bIsReversed() {
    return (*(uint8_t*)((uintptr_t)this + 0x24c + 0)) & 1 != 0;
}
_Script_Engine::SplineComponent*& _Script_Playtime_Multiplayer::DualSplineFollower::get_SecondSpline() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::DualSplineFollower::get_RootScene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x240);
}
float& _Script_Playtime_Multiplayer::DualSplineFollower::get_Progress() {
    return *(float*)((uintptr_t)this + 0x248);
}
void _Script_Playtime_Multiplayer::DualSplineFollower::set_bIsReversed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24c + 0);
    *(uint8_t*)((uintptr_t)this + 0x24c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Playtime_Multiplayer::ANetworkCharacter*& _Script_Playtime_Multiplayer::DualSplineFollower::get_CharacterToPull() {
    return *(_Script_Playtime_Multiplayer::ANetworkCharacter**)((uintptr_t)this + 0x250);
}
float& _Script_Playtime_Multiplayer::DualSplineFollower::get_Speed() {
    return *(float*)((uintptr_t)this + 0x258);
}
float& _Script_Playtime_Multiplayer::DualSplineFollower::get_CrossoverThreshold() {
    return *(float*)((uintptr_t)this + 0x25c);
}
bool _Script_Playtime_Multiplayer::DualSplineFollower::get_bHasPseudoSpawned() {
    return (*(uint8_t*)((uintptr_t)this + 0x260 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::DualSplineFollower::set_bHasPseudoSpawned(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x260 + 0);
    *(uint8_t*)((uintptr_t)this + 0x260 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::DualSplineFollower::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.DualSplineFollower");
    return result;
}
void _Script_Playtime_Multiplayer::DualSplineFollower::SetTimeToTake(float TimeToTake) {
    return;
}
void _Script_Playtime_Multiplayer::DualSplineFollower::ReverseDirection() {
    return;
}
void _Script_Playtime_Multiplayer::DualSplineFollower::Multicast_PseudoSpawn(_Script_Engine::SplineComponent* SplineToBaseFirstSplineOn, _Script_Engine::SplineComponent* In_SecondSpline, _Script_CoreUObject::Vector CharacterLocation) {
    return;
}
void _Script_Playtime_Multiplayer::DualSplineFollower::GetCharacterToPull(_Script_Playtime_Multiplayer::ANetworkCharacter*& Character) {
    return;
}
void _Script_Playtime_Multiplayer::DualSplineFollower::Authority_PseudoSpawn(float TimeToTake, _Script_Engine::SplineComponent* SplineToBaseFirstSplineOn, _Script_Engine::SplineComponent* In_SecondSpline) {
    return;
}
