#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct Video : public SteamCoreSubsystem {
    private: char pad_48[0x60]; public:
    void* get_GetOPFSettingsResult();
    void* get_GetVideoURLResult();
    static _Script_CoreUObject::Class* static_class();
    bool IsBroadcasting(int32_t& NumViewers);
    void GetVideoURL(int32_t VideoAppID);
    bool GetOPFStringForApp(int32_t VideoAppID, void*& OutBuffer);
    void GetOPFSettings(int32_t VideoAppID);
}; // Size: 0xa8
#pragma pack(pop)
}
