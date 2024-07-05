#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Info.hpp"
#include "LobbyBeaconState.hpp"
int32_t& _Script_Lobby::LobbyBeaconState::get_MaxPlayers() {
    return *(int32_t*)((uintptr_t)this + 0x220);
}
float& _Script_Lobby::LobbyBeaconState::get_WaitForPlayersTimeRemaining() {
    return *(float*)((uintptr_t)this + 0x23c);
}
void* _Script_Lobby::LobbyBeaconState::get_LobbyBeaconPlayerStateClass() {
    return (void*)((uintptr_t)this + 0x228);
}
void _Script_Lobby::LobbyBeaconState::OnRep_WaitForPlayersTimeRemaining() {
    return;
}
void* _Script_Lobby::LobbyBeaconState::get_Players() {
    return (void*)((uintptr_t)this + 0x240);
}
bool _Script_Lobby::LobbyBeaconState::get_bLobbyStarted() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 1 != 0;
}
void _Script_Lobby::LobbyBeaconState::set_bLobbyStarted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Lobby::LobbyBeaconState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Lobby.LobbyBeaconState");
    return result;
}
void _Script_Lobby::LobbyBeaconState::OnRep_LobbyStarted() {
    return;
}
