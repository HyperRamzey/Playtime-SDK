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
struct LeaderboardScoreUploaded {
    private: char pad_0[0x20]; public:
    bool get_bSuccess();
    void set_bSuccess(bool value);
    void* get_SteamLeaderboard();
    int32_t& get_Score();
    bool get_bScoreChanged();
    void set_bScoreChanged(bool value);
    int32_t& get_GlobalRankNew();
    int32_t& get_GlobalRankPrevious();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
