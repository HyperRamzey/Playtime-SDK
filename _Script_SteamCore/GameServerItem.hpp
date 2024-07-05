#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct GameServerItem {
    private: char pad_0[0xb0]; public:
    void* get_ServerName();
    void* get_MapName();
    void* get_GameDescription();
    void* get_GameTags();
    void* get_SteamServerAddr();
    int32_t& get_Ping();
    int32_t& get_Players();
    int32_t& get_MaxPlayers();
    int32_t& get_BotPlayers();
    int32_t& get_ServerVersion();
    bool get_bPassword();
    void set_bPassword(bool value);
    bool get_BSecure();
    void set_BSecure(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
