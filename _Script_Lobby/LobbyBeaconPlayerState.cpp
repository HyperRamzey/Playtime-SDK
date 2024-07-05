#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Info.hpp"
#include "LobbyBeaconPlayerState.hpp"
#include "..\_Script_OnlineSubsystemUtils\OnlineBeaconClient.hpp"
void _Script_Lobby::LobbyBeaconPlayerState::OnRep_UniqueId() {
    return;
}
void* _Script_Lobby::LobbyBeaconPlayerState::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Script_Lobby::LobbyBeaconPlayerState::get_UniqueId() {
    return (void*)((uintptr_t)this + 0x238);
}
void _Script_Lobby::LobbyBeaconPlayerState::set_bInLobby(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x288 + 0);
    *(uint8_t*)((uintptr_t)this + 0x288 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Lobby::LobbyBeaconPlayerState::get_PartyOwnerUniqueId() {
    return (void*)((uintptr_t)this + 0x260);
}
bool _Script_Lobby::LobbyBeaconPlayerState::get_bInLobby() {
    return (*(uint8_t*)((uintptr_t)this + 0x288 + 0)) & 1 != 0;
}
_Script_OnlineSubsystemUtils::OnlineBeaconClient*& _Script_Lobby::LobbyBeaconPlayerState::get_ClientActor() {
    return *(_Script_OnlineSubsystemUtils::OnlineBeaconClient**)((uintptr_t)this + 0x290);
}
_Script_CoreUObject::Class* _Script_Lobby::LobbyBeaconPlayerState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Lobby.LobbyBeaconPlayerState");
    return result;
}
void _Script_Lobby::LobbyBeaconPlayerState::OnRep_PartyOwner() {
    return;
}
void _Script_Lobby::LobbyBeaconPlayerState::OnRep_InLobby() {
    return;
}
