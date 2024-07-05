#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamPartyBeaconLocation.hpp"
void* _Script_SteamCore::SteamPartyBeaconLocation::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamPartyBeaconLocation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.SteamPartyBeaconLocation");
    return result;
}
void* _Script_SteamCore::SteamPartyBeaconLocation::get_LocationId() {
    return (void*)((uintptr_t)this + 0x8);
}
