#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RemoteStorageFileReadAsyncComplete.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamUGCHandle.hpp"
#include "UGCFileWriteStreamHandle.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
struct SteamID;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct RemoteStorage : public SteamCoreSubsystem {
    private: char pad_48[0xc0]; public:
    void* get_RemoteStorageUnsubscribePublishedFileResult();
    void* get_RemoteStorageSubscribePublishedFileResult();
    void* get_RemoteStoragePublishedFileUnsubscribed();
    void* get_RemoteStoragePublishedFileSubscribed();
    static _Script_CoreUObject::Class* static_class();
    int32_t UGCRead(_Script_SteamCore::SteamUGCHandle Content, void*& OutData, int32_t DataToRead, int32_t Offset, void* Action);
    void UGCDownloadToLocation(void*& Callback, _Script_SteamCore::SteamUGCHandle Content, void* Location, int32_t Priority);
    void UGCDownload(void*& Callback, _Script_SteamCore::SteamUGCHandle Content, int32_t Priority);
    bool SetSyncPlatforms(void* File, void* RemoteStoragePlatform);
    void SetCloudEnabledForApp(bool bEnabled);
    bool IsCloudEnabledForApp();
    bool IsCloudEnabledForAccount();
    bool GetUGCDownloadProgress(_Script_SteamCore::SteamUGCHandle Handle, int32_t& BytesDownloaded, int32_t& BytesExpected);
    bool GetUGCDetails(_Script_SteamCore::SteamUGCHandle Handle, int32_t& AppID, void*& Name, int32_t& FileSizeInBytes, _Script_SteamCore::SteamID& SteamIDOwner);
    void* GetSyncPlatforms(void* File);
    bool GetQuota(int32_t& TotalBytes, int32_t& AvailableBytes);
    int32_t GetFileTimestamp(void* File);
    int32_t GetFileSize(void* File);
    void* GetFileNameAndSize(int32_t File, int32_t& FileSizeInBytes);
    int32_t GetFileCount();
    _Script_SteamCore::SteamUGCHandle GetCachedUGCHandle(int32_t ICachedContent);
    int32_t GetCachedUGCCount();
    bool FileWriteStreamWriteChunk(_Script_SteamCore::UGCFileWriteStreamHandle Handle, void* Data);
    _Script_SteamCore::UGCFileWriteStreamHandle FileWriteStreamOpen(void* File);
    bool FileWriteStreamClose(_Script_SteamCore::UGCFileWriteStreamHandle Handle);
    bool FileWriteStreamCancel(_Script_SteamCore::UGCFileWriteStreamHandle Handle);
    void FileWriteAsync(void*& Callback, void* File, void* Data);
    bool FileWrite(void* File, void* Data);
    void FileShare(void*& Callback, void* File);
    bool FileReadAsyncComplete(_Script_SteamCore::RemoteStorageFileReadAsyncComplete ReadCall, void*& Buffer, int32_t BytesToRead);
    void FileReadAsync(void*& Callback, void* File, int32_t Offset, int32_t BytesToRead);
    int32_t FileRead(void* File, void*& Buffer, int32_t DataToRead);
    bool FilePersisted(void* File);
    bool FileForget(void* File);
    bool FileExists(void* File);
    bool FileDelete(void* File);
}; // Size: 0x108
#pragma pack(pop)
}
