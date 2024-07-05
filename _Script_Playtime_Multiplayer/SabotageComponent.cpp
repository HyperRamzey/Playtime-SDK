#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "SabotageComponent.hpp"
void* _Script_Playtime_Multiplayer::SabotageComponent::get_DurationTimerHandle() {
    return (void*)((uintptr_t)this + 0xb0);
}
void _Script_Playtime_Multiplayer::SabotageComponent::Server_DoSabotage(void* SabotageName, int32_t Level) {
    return;
}
bool _Script_Playtime_Multiplayer::SabotageComponent::get_bCanActivateAgain() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::SabotageComponent::get_CooldownTimerHandle() {
    return (void*)((uintptr_t)this + 0xb8);
}
void _Script_Playtime_Multiplayer::SabotageComponent::Sabotage(void* SabotageName, int32_t Level) {
    return;
}
_Script_Engine::DataTable*& _Script_Playtime_Multiplayer::SabotageComponent::get_SabotageDataTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0xc0);
}
void _Script_Playtime_Multiplayer::SabotageComponent::set_bCanActivateAgain(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::SabotageComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.SabotageComponent");
    return result;
}
void _Script_Playtime_Multiplayer::SabotageComponent::Multicast_SabotageFX(void* SabotageName, int32_t Level) {
    return;
}
void _Script_Playtime_Multiplayer::SabotageComponent::Multicast_DoSabotage(void* SabotageName, int32_t Level) {
    return;
}
void _Script_Playtime_Multiplayer::SabotageComponent::HandleDuration(void* SabotageName, int32_t Level) {
    return;
}
void _Script_Playtime_Multiplayer::SabotageComponent::EndCooldown() {
    return;
}
bool _Script_Playtime_Multiplayer::SabotageComponent::DoSabotage(void* SabotageName, int32_t Level) {
    return;
}
void _Script_Playtime_Multiplayer::SabotageComponent::BP_SabotageFX(void* SabotageName, int32_t Level) {
    return;
}
void _Script_Playtime_Multiplayer::SabotageComponent::BeginCooldown(float CooldownDuration) {
    return;
}
