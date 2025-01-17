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
struct LobbyMatchList {
    private: char pad_0[0x4]; public:
    int32_t& get_LobbiesMatching();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
