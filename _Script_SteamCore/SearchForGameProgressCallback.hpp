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
struct SearchForGameProgressCallback {
    private: char pad_0[0x30]; public:
    void* get_SearchID();
    void* get_Result();
    void* get_LobbyID();
    void* get_SteamIDEndedSearch();
    int32_t& get_SecondsRemainingEstimate();
    int32_t& get_PlayersSearching();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
