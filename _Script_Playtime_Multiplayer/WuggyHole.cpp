#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "ANetworkCharacter.hpp"
#include "WuggyHole.hpp"
int32_t& _Script_Playtime_Multiplayer::WuggyHole::get_NumPlayers() {
    return *(int32_t*)((uintptr_t)this + 0x220);
}
_Script_Playtime_Multiplayer::ANetworkCharacter*& _Script_Playtime_Multiplayer::WuggyHole::get_OldestPlayer() {
    return *(_Script_Playtime_Multiplayer::ANetworkCharacter**)((uintptr_t)this + 0x250);
}
void* _Script_Playtime_Multiplayer::WuggyHole::get_SpawnPoints() {
    return (void*)((uintptr_t)this + 0x228);
}
void* _Script_Playtime_Multiplayer::WuggyHole::get_PlayingCharacters() {
    return (void*)((uintptr_t)this + 0x238);
}
_Script_Playtime_Multiplayer::ANetworkCharacter* _Script_Playtime_Multiplayer::WuggyHole::RemoveAndReturnOldestPlayer() {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::WuggyHole::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.WuggyHole");
    return result;
}
_Script_Playtime_Multiplayer::ANetworkCharacter* _Script_Playtime_Multiplayer::WuggyHole::ReturnOldestPlayer() {
    return;
}
void _Script_Playtime_Multiplayer::WuggyHole::OnRep_OldestPlayer() {
    return;
}
void _Script_Playtime_Multiplayer::WuggyHole::Multicast_EndMiniGame() {
    return;
}
void _Script_Playtime_Multiplayer::WuggyHole::EndMiniGame() {
    return;
}
void _Script_Playtime_Multiplayer::WuggyHole::CleanPlayingCharacters() {
    return;
}
void _Script_Playtime_Multiplayer::WuggyHole::BP_OnRep_OldestPlayer() {
    return;
}
void _Script_Playtime_Multiplayer::WuggyHole::BP_AuthorityEndMinigame() {
    return;
}
void _Script_Playtime_Multiplayer::WuggyHole::BP_AuthorityBeginMinigame() {
    return;
}
void _Script_Playtime_Multiplayer::WuggyHole::Authority_SpawnWuggy() {
    return;
}
void _Script_Playtime_Multiplayer::WuggyHole::Authority_EndMiniGame() {
    return;
}
void _Script_Playtime_Multiplayer::WuggyHole::AddNewPlayer(_Script_Playtime_Multiplayer::ANetworkCharacter* Player, bool AddAtFront) {
    return;
}
