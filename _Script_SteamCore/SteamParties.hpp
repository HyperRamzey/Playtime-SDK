#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PartyBeaconID.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
#include "SteamPartyBeaconLocation.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamParties : public SteamCoreSubsystem {
    private: char pad_48[0x120]; public:
    void* get_JoinPartyDelegate();
    void* get_CreateBeaconDelegate();
    void* get_ReservationNotificationDelegate();
    void* get_ChangeNumOpenSlotsDelegate();
    void* get_AvailableBeaconLocationsDelegate();
    void* get_ActiveBeaconsDelegate();
    static _Script_CoreUObject::Class* static_class();
    void OnReservationCompleted(_Script_SteamCore::PartyBeaconID BeaconID, _Script_SteamCore::SteamID SteamIDUser);
    void JoinParty(void*& Callback, _Script_SteamCore::PartyBeaconID BeaconID);
    bool GetNumAvailableBeaconLocations(int32_t& NumLocations);
    int32_t GetNumActiveBeacons();
    bool GetBeaconLocationData(_Script_SteamCore::SteamPartyBeaconLocation BeaconLocation, void* EData, void*& PCHDataStringOut);
    bool GetBeaconDetails(_Script_SteamCore::PartyBeaconID BeaconID, _Script_SteamCore::SteamID& SteamIDBeaconOwner, _Script_SteamCore::SteamPartyBeaconLocation& Location, void*& OutMetadata);
    _Script_SteamCore::PartyBeaconID GetBeaconByIndex(int32_t Index);
    bool GetAvailableBeaconLocations(void*& LocationList, int32_t MaxNumLocations);
    bool DestroyBeacon(_Script_SteamCore::PartyBeaconID BeaconID);
    void CreateBeacon(void*& Callback, int32_t OpenSlots, _Script_SteamCore::SteamPartyBeaconLocation BeaconLocation, void* ConnectString, void* MetaData);
    void ChangeNumOpenSlots(void*& Callback, _Script_SteamCore::PartyBeaconID BeaconID, int32_t OpenSlots);
    void CancelReservation(_Script_SteamCore::PartyBeaconID BeaconID, _Script_SteamCore::SteamID SteamIDUser);
}; // Size: 0x168
#pragma pack(pop)
}
