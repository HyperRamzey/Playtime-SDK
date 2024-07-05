#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RemoteStorage.hpp"
#include "RemoteStorageFileReadAsyncComplete.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
#include "SteamUGCHandle.hpp"
#include "UGCFileWriteStreamHandle.hpp"
void* _Script_SteamCore::RemoteStorage::get_RemoteStorageUnsubscribePublishedFileResult() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SteamCore::RemoteStorage::get_RemoteStoragePublishedFileSubscribed() {
    return (void*)((uintptr_t)this + 0x78);
}
int32_t _Script_SteamCore::RemoteStorage::GetFileSize(void* File) {
    return;
}
void* _Script_SteamCore::RemoteStorage::get_RemoteStorageSubscribePublishedFileResult() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Script_SteamCore::RemoteStorage::UGCDownload(void*& Callback, _Script_SteamCore::SteamUGCHandle Content, int32_t Priority) {
    return;
}
void* _Script_SteamCore::RemoteStorage::get_RemoteStoragePublishedFileUnsubscribed() {
    return (void*)((uintptr_t)this + 0x68);
}
int32_t _Script_SteamCore::RemoteStorage::GetFileCount() {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::RemoteStorage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.RemoteStorage");
    return result;
}
int32_t _Script_SteamCore::RemoteStorage::UGCRead(_Script_SteamCore::SteamUGCHandle Content, void*& OutData, int32_t DataToRead, int32_t Offset, void* Action) {
    return;
}
void _Script_SteamCore::RemoteStorage::UGCDownloadToLocation(void*& Callback, _Script_SteamCore::SteamUGCHandle Content, void* Location, int32_t Priority) {
    return;
}
bool _Script_SteamCore::RemoteStorage::SetSyncPlatforms(void* File, void* RemoteStoragePlatform) {
    return;
}
void _Script_SteamCore::RemoteStorage::SetCloudEnabledForApp(bool bEnabled) {
    return;
}
bool _Script_SteamCore::RemoteStorage::IsCloudEnabledForApp() {
    return;
}
bool _Script_SteamCore::RemoteStorage::IsCloudEnabledForAccount() {
    return;
}
void _Script_SteamCore::RemoteStorage::FileWriteAsync(void*& Callback, void* File, void* Data) {
    return;
}
bool _Script_SteamCore::RemoteStorage::GetUGCDownloadProgress(_Script_SteamCore::SteamUGCHandle Handle, int32_t& BytesDownloaded, int32_t& BytesExpected) {
    return;
}
bool _Script_SteamCore::RemoteStorage::GetUGCDetails(_Script_SteamCore::SteamUGCHandle Handle, int32_t& AppID, void*& Name, int32_t& FileSizeInBytes, _Script_SteamCore::SteamID& SteamIDOwner) {
    return;
}
void* _Script_SteamCore::RemoteStorage::GetSyncPlatforms(void* File) {
    return;
}
bool _Script_SteamCore::RemoteStorage::GetQuota(int32_t& TotalBytes, int32_t& AvailableBytes) {
    return;
}
int32_t _Script_SteamCore::RemoteStorage::GetFileTimestamp(void* File) {
    return;
}
bool _Script_SteamCore::RemoteStorage::FileForget(void* File) {
    return;
}
void* _Script_SteamCore::RemoteStorage::GetFileNameAndSize(int32_t File, int32_t& FileSizeInBytes) {
    return;
}
_Script_SteamCore::SteamUGCHandle _Script_SteamCore::RemoteStorage::GetCachedUGCHandle(int32_t ICachedContent) {
    return;
}
int32_t _Script_SteamCore::RemoteStorage::GetCachedUGCCount() {
    return;
}
bool _Script_SteamCore::RemoteStorage::FileWriteStreamWriteChunk(_Script_SteamCore::UGCFileWriteStreamHandle Handle, void* Data) {
    return;
}
_Script_SteamCore::UGCFileWriteStreamHandle _Script_SteamCore::RemoteStorage::FileWriteStreamOpen(void* File) {
    return;
}
bool _Script_SteamCore::RemoteStorage::FileWriteStreamClose(_Script_SteamCore::UGCFileWriteStreamHandle Handle) {
    return;
}
bool _Script_SteamCore::RemoteStorage::FileWriteStreamCancel(_Script_SteamCore::UGCFileWriteStreamHandle Handle) {
    return;
}
bool _Script_SteamCore::RemoteStorage::FileDelete(void* File) {
    return;
}
bool _Script_SteamCore::RemoteStorage::FileWrite(void* File, void* Data) {
    return;
}
bool _Script_SteamCore::RemoteStorage::FilePersisted(void* File) {
    return;
}
void _Script_SteamCore::RemoteStorage::FileShare(void*& Callback, void* File) {
    return;
}
bool _Script_SteamCore::RemoteStorage::FileReadAsyncComplete(_Script_SteamCore::RemoteStorageFileReadAsyncComplete ReadCall, void*& Buffer, int32_t BytesToRead) {
    return;
}
void _Script_SteamCore::RemoteStorage::FileReadAsync(void*& Callback, void* File, int32_t Offset, int32_t BytesToRead) {
    return;
}
int32_t _Script_SteamCore::RemoteStorage::FileRead(void* File, void*& Buffer, int32_t DataToRead) {
    return;
}
bool _Script_SteamCore::RemoteStorage::FileExists(void* File) {
    return;
}
