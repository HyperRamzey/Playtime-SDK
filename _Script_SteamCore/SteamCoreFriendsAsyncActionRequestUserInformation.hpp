#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreAsyncAction.hpp"
#include "SteamID.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreFriendsAsyncActionRequestUserInformation : public SteamCoreAsyncAction {
    private: char pad_38[0x40]; public:
    void* get_OnCallback();
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCore::SteamCoreFriendsAsyncActionRequestUserInformation* RequestUserInformationAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::SteamID SteamIDUser, bool bRequireNameOnly, float Timeout);
    void HandleCallback();
}; // Size: 0x78
#pragma pack(pop)
}
