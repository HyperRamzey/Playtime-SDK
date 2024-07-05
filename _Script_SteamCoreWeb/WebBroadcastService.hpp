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
struct WebBroadcastService : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void PostGameDataFrame(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* BroadcastId, void* FrameData);
}; // Size: 0x48
#pragma pack(pop)
}
