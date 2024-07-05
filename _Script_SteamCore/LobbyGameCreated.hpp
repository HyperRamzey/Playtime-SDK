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
struct LobbyGameCreated {
    private: char pad_0[0x28]; public:
    void* get_SteamIDLobby();
    void* get_SteamIDGameServer();
    void* get_IP();
    int32_t& get_Port();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
