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
struct SteamCoreUpdateSession : public SteamCoreAsyncAction {
    private: char pad_38[0xf0]; public:
    void* get_OnCallback();
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCore::SteamCoreUpdateSession* UpdateSteamCoreSession(_Script_CoreUObject::Object* WorldContextObject, void* Settings, void* SessionName, int32_t MaxPlayers, bool bAllowJoinInProgress);
    void OnCompleted(void* SessionName, bool bWasSuccessful);
}; // Size: 0x128
#pragma pack(pop)
}
