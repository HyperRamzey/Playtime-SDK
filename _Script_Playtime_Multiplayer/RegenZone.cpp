#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "ANetworkCharacter.hpp"
#include "LeadershipRegenSubsystem.hpp"
#include "PerkPackage.hpp"
#include "RegenZone.hpp"
void* _Script_Playtime_Multiplayer::RegenZone::get_PlayersInRange() {
    return (void*)((uintptr_t)this + 0x490);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::RegenZone::get_HealingAura() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x478);
}
_Script_Playtime_Multiplayer::LeadershipRegenSubsystem*& _Script_Playtime_Multiplayer::RegenZone::get_LeadershipRegenSubsystem() {
    return *(_Script_Playtime_Multiplayer::LeadershipRegenSubsystem**)((uintptr_t)this + 0x470);
}
void _Script_Playtime_Multiplayer::RegenZone::set_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x488 + 0);
    *(uint8_t*)((uintptr_t)this + 0x488 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Playtime_Multiplayer::ANetworkCharacter*& _Script_Playtime_Multiplayer::RegenZone::get_SourcePlayer() {
    return *(_Script_Playtime_Multiplayer::ANetworkCharacter**)((uintptr_t)this + 0x480);
}
bool _Script_Playtime_Multiplayer::RegenZone::get_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x488 + 0)) & 1 != 0;
}
int32_t& _Script_Playtime_Multiplayer::RegenZone::get_HealthRegen() {
    return *(int32_t*)((uintptr_t)this + 0x48c);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::RegenZone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.RegenZone");
    return result;
}
void _Script_Playtime_Multiplayer::RegenZone::SetActiveWithNotify(bool Value) {
    return;
}
void _Script_Playtime_Multiplayer::RegenZone::OnRep_Active() {
    return;
}
void _Script_Playtime_Multiplayer::RegenZone::OnPerkSaveGameChanged(_Script_Playtime_Multiplayer::PerkPackage In_PerkSaveGame) {
    return;
}
void _Script_Playtime_Multiplayer::RegenZone::OnEndOverlap(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Script_Playtime_Multiplayer::RegenZone::OnBeginOverlap(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
bool _Script_Playtime_Multiplayer::RegenZone::IsThereDamagedPlayer() {
    return;
}
