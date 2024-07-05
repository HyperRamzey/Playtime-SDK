#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "CreateBeaconData.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreSteamPartiesAsyncActionCreateBeacon.hpp"
#include "SteamPartyBeaconLocation.hpp"
void* _Script_SteamCore::SteamCoreSteamPartiesAsyncActionCreateBeacon::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreSteamPartiesAsyncActionCreateBeacon::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon");
    return result;
}
void _Script_SteamCore::SteamCoreSteamPartiesAsyncActionCreateBeacon::HandleCallback(_Script_SteamCore::CreateBeaconData& Data, bool bWasSuccessful) {
    return;
}
_Script_SteamCore::SteamCoreSteamPartiesAsyncActionCreateBeacon* _Script_SteamCore::SteamCoreSteamPartiesAsyncActionCreateBeacon::CreateBeaconAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t OpenSlots, _Script_SteamCore::SteamPartyBeaconLocation BeaconLocation, void* ConnectString, void* MetaData, float Timeout) {
    return;
}
