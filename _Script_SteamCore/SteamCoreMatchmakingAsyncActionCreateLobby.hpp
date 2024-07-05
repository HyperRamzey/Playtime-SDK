#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreAsyncAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
struct CreateLobbyData;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreMatchmakingAsyncActionCreateLobby : public SteamCoreAsyncAction {
    private: char pad_38[0x10]; public:
    void* get_OnCallback();
    static _Script_CoreUObject::Class* static_class();
    void HandleCallback(_Script_SteamCore::CreateLobbyData& Data, bool bWasSuccessful);
    _Script_SteamCore::SteamCoreMatchmakingAsyncActionCreateLobby* CreateLobbyAsync(_Script_CoreUObject::Object* WorldContextObject, void* LobbyType, int32_t MaxMembers, float Timeout);
}; // Size: 0x48
#pragma pack(pop)
}
