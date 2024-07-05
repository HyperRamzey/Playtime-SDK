#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct SteamCoreWebSettings : public _Script_DeveloperSettings::DeveloperSettings {
    private: char pad_38[0x40]; public:
    float& get_AsyncTaskTimeout();
    int32_t& get_DisabledSubsystems();
    bool get_bDebugging();
    void set_bDebugging(bool value);
    bool get_bDevMode();
    void set_bDevMode(bool value);
    void* get_Key();
    int32_t& get_AppID();
    void* get_DevSteamID();
    bool get_bSandboxMode();
    void set_bSandboxMode(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
