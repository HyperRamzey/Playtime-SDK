#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "JoinPartyData.hpp"
#include "PartyBeaconID.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreSteamPartiesAsyncActionJoinParty.hpp"
void* _Script_SteamCore::SteamCoreSteamPartiesAsyncActionJoinParty::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreSteamPartiesAsyncActionJoinParty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty");
    return result;
}
_Script_SteamCore::SteamCoreSteamPartiesAsyncActionJoinParty* _Script_SteamCore::SteamCoreSteamPartiesAsyncActionJoinParty::JoinPartyAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::PartyBeaconID BeaconID, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreSteamPartiesAsyncActionJoinParty::HandleCallback(_Script_SteamCore::JoinPartyData& Data, bool bWasSuccessful) {
    return;
}
