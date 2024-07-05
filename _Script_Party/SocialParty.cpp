#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_OnlineSubsystemUtils\PartyBeaconClient.hpp"
#include "..\_Script_OnlineSubsystemUtils\SpectatorBeaconClient.hpp"
#include "SocialParty.hpp"
void* _Script_Party::SocialParty::get_OwningLocalUserId() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Party::SocialParty::get_ReservationBeaconClientClass() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_OnlineSubsystemUtils::SpectatorBeaconClient*& _Script_Party::SocialParty::get_SpectatorBeaconClient() {
    return *(_Script_OnlineSubsystemUtils::SpectatorBeaconClient**)((uintptr_t)this + 0x1a0);
}
void* _Script_Party::SocialParty::get_SpectatorBeaconClientClass() {
    return (void*)((uintptr_t)this + 0x60);
}
bool _Script_Party::SocialParty::get_bEnableAutomaticPartyRejoin() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 1 != 0;
}
void* _Script_Party::SocialParty::get_PartyMembersById() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Party::SocialParty::get_CurrentLeaderId() {
    return (void*)((uintptr_t)this + 0xa0);
}
void _Script_Party::SocialParty::set_bEnableAutomaticPartyRejoin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_OnlineSubsystemUtils::PartyBeaconClient*& _Script_Party::SocialParty::get_ReservationBeaconClient() {
    return *(_Script_OnlineSubsystemUtils::PartyBeaconClient**)((uintptr_t)this + 0x190);
}
_Script_CoreUObject::Class* _Script_Party::SocialParty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Party.SocialParty");
    return result;
}
