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
struct WebPublishedItemVoting : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void UserVoteSummary(void*& Callback, void* Key, void* SteamID, void* PublishedFileIDs);
    void ItemVoteSummary(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* PublishedFileIDs);
}; // Size: 0x48
#pragma pack(pop)
}
