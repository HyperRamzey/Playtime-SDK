#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct UserAchievementIconFetched {
    private: char pad_0[0x30]; public:
    void* get_GameID();
    void* get_AchievementName();
    bool get_bAchieved();
    void set_bAchieved(bool value);
    _Script_Engine::Texture2D*& get_Icon();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
