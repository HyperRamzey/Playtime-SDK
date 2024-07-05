#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreWebAsyncAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct SteamCoreWebAsyncActionGetGlobalStatsForGame : public SteamCoreWebAsyncAction {
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCoreWeb::SteamCoreWebAsyncActionGetGlobalStatsForGame* GetGlobalStatsForGameAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t AppID, void* Names, int32_t StartDate, int32_t EndDate);
}; // Size: 0x58
#pragma pack(pop)
}
