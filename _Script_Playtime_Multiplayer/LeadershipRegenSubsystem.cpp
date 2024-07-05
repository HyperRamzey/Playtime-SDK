#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LocalPlayerSubsystem.hpp"
#include "ANetworkCharacter.hpp"
#include "LeadershipRegenSubsystem.hpp"
void* _Script_Playtime_Multiplayer::LeadershipRegenSubsystem::get_ActiveRegenZones() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Playtime_Multiplayer::LeadershipRegenSubsystem::get_TimerHandle() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::LeadershipRegenSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.LeadershipRegenSubsystem");
    return result;
}
void _Script_Playtime_Multiplayer::LeadershipRegenSubsystem::SetTimer() {
    return;
}
int32_t _Script_Playtime_Multiplayer::LeadershipRegenSubsystem::GetPlayerRegen(_Script_Playtime_Multiplayer::ANetworkCharacter* Player) {
    return;
}
void _Script_Playtime_Multiplayer::LeadershipRegenSubsystem::RegenPlayers() {
    return;
}
