#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreAsyncAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
struct DownloadClanActivityCountsResult;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreFriendsAsyncActionDownloadClanActivityCounts : public SteamCoreAsyncAction {
    private: char pad_38[0x10]; public:
    void* get_OnCallback();
    static _Script_CoreUObject::Class* static_class();
    void HandleCallback(_Script_SteamCore::DownloadClanActivityCountsResult& Data, bool bWasSuccessful);
    _Script_SteamCore::SteamCoreFriendsAsyncActionDownloadClanActivityCounts* DownloadClanActivityCountsAsync(_Script_CoreUObject::Object* WorldContextObject, void* SteamIDClans, float Timeout);
}; // Size: 0x48
#pragma pack(pop)
}
