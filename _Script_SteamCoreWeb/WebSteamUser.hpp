#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreWebSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct WebSteamUser : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void ResolveVanityURL(void*& Callback, void* Key, void* VanityURL, void* URLType);
    void GrantPackage(void*& Callback, void* Key, void* SteamID, int32_t PackageId, void* Ipaddress, void* ThirdPartyKey, int32_t ThirdPartyAppId);
    void GetUserGroupList(void*& Callback, void* Key, void* SteamID);
    void GetPublisherAppOwnershipChanges(void*& Callback, void* Key, void* PackageRowVersion, void* CDKeyRowVersion);
    void GetPublisherAppOwnership(void*& Callback, void* Key, void* SteamID);
    void GetPlayerSummaries(void*& Callback, void* Key, void* SteamIDs);
    void GetPlayerBans(void*& Callback, void* Key, void* SteamIDs);
    void GetFriendList(void*& Callback, void* Key, void* SteamID, void* Relationship);
    void GetAppPriceInfo(void*& Callback, void* Key, void* SteamID, void* AppIDs);
    void CheckAppOwnership(void*& Callback, void* Key, void* SteamID, int32_t AppID);
}; // Size: 0x48
#pragma pack(pop)
}
