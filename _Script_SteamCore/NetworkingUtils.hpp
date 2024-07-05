#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
struct SteamNetworkPingLocation;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct NetworkingUtils : public SteamCoreSubsystem {
    static _Script_CoreUObject::Class* static_class();
    bool ParsePingLocationString(void* String, _Script_SteamCore::SteamNetworkPingLocation& Result);
    void InitRelayNetworkAccess();
    float GetLocalPingLocation(_Script_SteamCore::SteamNetworkPingLocation& Result);
    int32_t EstimatePingTimeFromLocalHost(_Script_SteamCore::SteamNetworkPingLocation& RemoteLocation);
    int32_t EstimatePingTimeBetweenTwoLocations(_Script_SteamCore::SteamNetworkPingLocation& Location1, _Script_SteamCore::SteamNetworkPingLocation& Location2);
    void ConvertPingLocationToString(_Script_SteamCore::SteamNetworkPingLocation& Location, void*& String);
    bool CheckPingDataUpToDate(float MaxAgeSeconds);
}; // Size: 0x48
#pragma pack(pop)
}
