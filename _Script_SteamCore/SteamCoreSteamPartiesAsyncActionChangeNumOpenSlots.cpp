#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ChangeNumOpenSlotsData.hpp"
#include "PartyBeaconID.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.hpp"
_Script_SteamCore::SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* _Script_SteamCore::SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::ChangeNumOpenSlotsAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::PartyBeaconID BeaconID, int32_t OpenSlots, float Timeout) {
    return;
}
void* _Script_SteamCore::SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots");
    return result;
}
void _Script_SteamCore::SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots::HandleCallback(_Script_SteamCore::ChangeNumOpenSlotsData& Data, bool bWasSuccessful) {
    return;
}
