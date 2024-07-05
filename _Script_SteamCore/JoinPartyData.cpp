#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "JoinPartyData.hpp"
void* _Script_SteamCore::JoinPartyData::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::JoinPartyData::get_BeaconID() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::JoinPartyData::get_SteamIDBeaconOwner() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SteamCore::JoinPartyData::get_ConnectString() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_SteamCore::JoinPartyData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.JoinPartyData");
    return result;
}
