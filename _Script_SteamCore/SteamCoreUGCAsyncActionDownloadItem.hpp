#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PublishedFileID.hpp"
#include "SteamCoreAsyncAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
struct DownloadItemResult;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreUGCAsyncActionDownloadItem : public SteamCoreAsyncAction {
    private: char pad_38[0x10]; public:
    void* get_OnCallback();
    static _Script_CoreUObject::Class* static_class();
    void HandleCallback(_Script_SteamCore::DownloadItemResult& Data, bool bWasSuccessful);
    _Script_SteamCore::SteamCoreUGCAsyncActionDownloadItem* DownloadItemAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::PublishedFileID PublishedFileID, bool bHighPriority, float Timeout);
}; // Size: 0x48
#pragma pack(pop)
}
