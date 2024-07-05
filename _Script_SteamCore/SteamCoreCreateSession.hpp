#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreAsyncAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreCreateSession : public SteamCoreAsyncAction {
    private: char pad_38[0x108]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCore::SteamCoreCreateSession* CreateSteamCoreSession(_Script_CoreUObject::Object* WorldContextObject, void* SessionSettings, void* SessionName, int32_t MaxPlayers, bool bUseLAN, bool bAllowInvites, bool bUsesPresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bAllowJoinInProgress, bool bUseLobbiesVoiceChatIfAvailable, float Timeout);
}; // Size: 0x140
#pragma pack(pop)
}
