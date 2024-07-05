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
struct UserAchievementStored {
    private: char pad_0[0x28]; public:
    void* get_GameID();
    bool get_bGroupAchievement();
    void set_bGroupAchievement(bool value);
    void* get_AchievementName();
    int32_t& get_CurrentProgress();
    int32_t& get_MaxProgress();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
