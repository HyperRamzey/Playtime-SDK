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
struct GameConnectedChatLeave {
    private: char pad_0[0x18]; public:
    void* get_SteamIDClanChat();
    void* get_SteamIDUser();
    bool get_bKicked();
    void set_bKicked(bool value);
    bool get_bDropped();
    void set_bDropped(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
