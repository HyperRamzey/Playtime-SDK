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
struct SteamCoreWebAsyncActionReportCheatData : public SteamCoreWebAsyncAction {
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCoreWeb::SteamCoreWebAsyncActionReportCheatData* ReportCheatDataAsync(_Script_CoreUObject::Object* WorldContextObject, void* Key, void* SteamID, int32_t AppID, void* PathAndFileName, void* WebCheatURL, void* TimeNow, void* TimeStarted, void* TimeStopped, void* CheatName, int32_t GameProcessId, int32_t CheatProcessId, void* CheatParam1, void* CheatParam2);
}; // Size: 0x58
#pragma pack(pop)
}
