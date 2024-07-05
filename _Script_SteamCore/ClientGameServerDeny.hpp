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
struct ClientGameServerDeny {
    private: char pad_0[0x20]; public:
    int32_t& get_AppID();
    void* get_GameServerIP();
    int32_t& get_GameServerPort();
    bool get_BSecure();
    void set_BSecure(bool value);
    void* get_Reason();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
