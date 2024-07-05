#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct GameServerStats : public SteamCoreSubsystem {
    private: char pad_48[0x30]; public:
    void* get_GSStatsUnloaded();
    static _Script_CoreUObject::Class* static_class();
    bool UpdateUserAvgRateStat(_Script_SteamCore::SteamID SteamIDUser, void* Name, float CountThisSession, float SessionLength);
    bool SetUserStatInt(_Script_SteamCore::SteamID SteamIDUser, void* Name, int32_t Data);
    bool SetUserStatFloat(_Script_SteamCore::SteamID SteamIDUser, void* Name, float Data);
    bool SetUserAchievement(_Script_SteamCore::SteamID SteamIDUser, void* Name);
    void ServerStoreUserStats(void*& Callback, _Script_SteamCore::SteamID SteamIDUser);
    void ServerRequestUserStats(void*& Callback, _Script_SteamCore::SteamID SteamIDUser);
    bool GetUserStatInt(_Script_SteamCore::SteamID SteamIDUser, void* Name, int32_t& Data);
    bool GetUserStatFloat(_Script_SteamCore::SteamID SteamIDUser, void* Name, float& Data);
    bool GetUserAchievement(_Script_SteamCore::SteamID SteamIDUser, void* Name, bool& bAchieved);
    bool ClearUserAchievement(_Script_SteamCore::SteamID SteamIDUser, void* Name);
}; // Size: 0x78
#pragma pack(pop)
}
