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
struct LobbyDataUpdate {
    private: char pad_0[0x18]; public:
    void* get_SteamIDLobby();
    void* get_SteamIDMember();
    bool get_bSuccess();
    void set_bSuccess(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
