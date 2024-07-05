#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreSettings : public _Script_DeveloperSettings::DeveloperSettings {
    private: char pad_38[0x30]; public:
    int32_t& get_DisabledSubsystems();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    bool get_bRelaunchInSteam();
    void set_bRelaunchInSteam(bool value);
    bool get_bVACEnabled();
    void set_bVACEnabled(bool value);
    bool get_bAllowP2PPacketRelay();
    void set_bAllowP2PPacketRelay(bool value);
    int32_t& get_P2PConnectionTimeout();
    int32_t& get_SteamAppId();
    int32_t& get_SteamDevAppId();
    int32_t& get_Port();
    int32_t& get_GameServerQueryPort();
    void* get_GameVersion();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
