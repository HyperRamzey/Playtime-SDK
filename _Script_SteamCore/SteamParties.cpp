#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PartyBeaconID.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
#include "SteamParties.hpp"
#include "SteamPartyBeaconLocation.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::SteamParties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamParties");
    return result;
}
void* _Script_SteamCore::SteamParties::get_JoinPartyDelegate() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SteamCore::SteamParties::get_ChangeNumOpenSlotsDelegate() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_SteamCore::SteamParties::get_CreateBeaconDelegate() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_SteamCore::SteamParties::get_ReservationNotificationDelegate() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_SteamCore::SteamParties::get_AvailableBeaconLocationsDelegate() {
    return (void*)((uintptr_t)this + 0x88);
}
void _Script_SteamCore::SteamParties::OnReservationCompleted(_Script_SteamCore::PartyBeaconID BeaconID, _Script_SteamCore::SteamID SteamIDUser) {
    return;
}
void* _Script_SteamCore::SteamParties::get_ActiveBeaconsDelegate() {
    return (void*)((uintptr_t)this + 0x98);
}
void _Script_SteamCore::SteamParties::JoinParty(void*& Callback, _Script_SteamCore::PartyBeaconID BeaconID) {
    return;
}
bool _Script_SteamCore::SteamParties::GetNumAvailableBeaconLocations(int32_t& NumLocations) {
    return;
}
int32_t _Script_SteamCore::SteamParties::GetNumActiveBeacons() {
    return;
}
bool _Script_SteamCore::SteamParties::GetBeaconLocationData(_Script_SteamCore::SteamPartyBeaconLocation BeaconLocation, void* EData, void*& PCHDataStringOut) {
    return;
}
bool _Script_SteamCore::SteamParties::GetBeaconDetails(_Script_SteamCore::PartyBeaconID BeaconID, _Script_SteamCore::SteamID& SteamIDBeaconOwner, _Script_SteamCore::SteamPartyBeaconLocation& Location, void*& OutMetadata) {
    return;
}
_Script_SteamCore::PartyBeaconID _Script_SteamCore::SteamParties::GetBeaconByIndex(int32_t Index) {
    return;
}
bool _Script_SteamCore::SteamParties::GetAvailableBeaconLocations(void*& LocationList, int32_t MaxNumLocations) {
    return;
}
bool _Script_SteamCore::SteamParties::DestroyBeacon(_Script_SteamCore::PartyBeaconID BeaconID) {
    return;
}
void _Script_SteamCore::SteamParties::CreateBeacon(void*& Callback, int32_t OpenSlots, _Script_SteamCore::SteamPartyBeaconLocation BeaconLocation, void* ConnectString, void* MetaData) {
    return;
}
void _Script_SteamCore::SteamParties::ChangeNumOpenSlots(void*& Callback, _Script_SteamCore::PartyBeaconID BeaconID, int32_t OpenSlots) {
    return;
}
void _Script_SteamCore::SteamParties::CancelReservation(_Script_SteamCore::PartyBeaconID BeaconID, _Script_SteamCore::SteamID SteamIDUser) {
    return;
}
