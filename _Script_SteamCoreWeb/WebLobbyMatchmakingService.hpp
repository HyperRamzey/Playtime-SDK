#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreWebSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct WebLobbyMatchmakingService : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void RemoveUserFromLobby(void*& Callback, void* Key, int32_t AppID, void* SteamIdToRemove, void* SteamIDLobby, void* InputJson);
    void CreateLobby(void*& Callback, void* Key, int32_t AppID, int32_t MaxMembers, void* LobbyType, void* LobbyName, void* InputJson, void* SteamIdInvitedMembers, void* LobbyMetaData);
}; // Size: 0x48
#pragma pack(pop)
}
