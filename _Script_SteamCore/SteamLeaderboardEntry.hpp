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
struct SteamLeaderboardEntry {
    private: char pad_0[0x20]; public:
    void* get_SteamID();
    int32_t& get_GlobalRank();
    int32_t& get_Score();
    int32_t& get_Details();
    void* get_UGCHandle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}