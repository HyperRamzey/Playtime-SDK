#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AdvancedSessions\BPUniqueNetId.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_AdvancedSteamSessions {
#pragma pack(push, 1)
struct AdvancedSteamFriendsLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool RequestSteamFriendInfo(_Script_AdvancedSessions::BPUniqueNetId UniqueNetId, bool bRequireNameOnly);
    bool OpenSteamUserOverlay(_Script_AdvancedSessions::BPUniqueNetId UniqueNetId, void* DialogType);
    void* GetSteamPersonaName(_Script_AdvancedSessions::BPUniqueNetId UniqueNetId);
    void GetSteamGroups(void*& SteamGroups);
    void GetSteamFriendGamePlayed(_Script_AdvancedSessions::BPUniqueNetId UniqueNetId, void*& Result, int32_t& AppID);
    _Script_Engine::Texture2D* GetSteamFriendAvatar(_Script_AdvancedSessions::BPUniqueNetId UniqueNetId, void*& Result, void* AvatarSize);
    _Script_AdvancedSessions::BPUniqueNetId GetLocalSteamIDFromSteam();
    int32_t GetFriendSteamLevel(_Script_AdvancedSessions::BPUniqueNetId UniqueNetId);
    _Script_AdvancedSessions::BPUniqueNetId CreateSteamIDFromString(void* SteamID64);
}; // Size: 0x28
#pragma pack(pop)
}
