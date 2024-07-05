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
struct WebRemoteStorage : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void UnsubscribePublishedFile(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* PublishedFileIDs);
    void SubscribePublishedFile(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* PublishedFileIDs);
    void SetUGCUsedByGC(void*& Callback, void* Key, void* SteamID, void* UGCID, int32_t AppID, bool bUsed);
    void GetUGCFileDetails(void*& Callback, void* Key, void* SteamID, void* UGCID, int32_t AppID);
    void GetPublishedFileDetails(void*& Callback, void* PublishedFileIDs);
    void GetCollectionDetails(void*& Callback, void* PublishedFileIDs);
    void EnumerateUserSubscribedFiles(void*& Callback, void* Key, void* SteamID, int32_t AppID, int32_t ListType);
    void EnumerateUserPublishedFiles(void*& Callback, void* Key, void* SteamID, int32_t AppID);
}; // Size: 0x48
#pragma pack(pop)
}
