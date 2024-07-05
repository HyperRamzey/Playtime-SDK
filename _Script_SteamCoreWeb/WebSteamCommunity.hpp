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
struct WebSteamCommunity : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void ReportAbuse(void*& Callback, void* Key, void* SteamIdActor, void* SteamIdTarget, int32_t AppID, int32_t AbuseType, int32_t ContentType, void* Description, void* Gid);
}; // Size: 0x48
#pragma pack(pop)
}
