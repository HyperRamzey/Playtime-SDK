#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "ANetworkCharacter.hpp"
#include "BoogieBot.hpp"
_Script_Playtime_Multiplayer::ANetworkCharacter*& _Script_Playtime_Multiplayer::BoogieBot::get_PlayerCharacter() {
    return *(_Script_Playtime_Multiplayer::ANetworkCharacter**)((uintptr_t)this + 0x4b8);
}
void* _Script_Playtime_Multiplayer::BoogieBot::get_SpectateObject() {
    return (void*)((uintptr_t)this + 0x4c0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::BoogieBot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.BoogieBot");
    return result;
}
void _Script_Playtime_Multiplayer::BoogieBot::BreakBoogieBotFX() {
    return;
}
void _Script_Playtime_Multiplayer::BoogieBot::SpectateHatch() {
    return;
}
_Script_Engine::Pawn* _Script_Playtime_Multiplayer::BoogieBot::BP_CreateSpectator() {
    return;
}
