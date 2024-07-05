#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreAsyncAction.hpp"
#include "SteamPartyBeaconLocation.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
struct CreateBeaconData;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreSteamPartiesAsyncActionCreateBeacon : public SteamCoreAsyncAction {
    private: char pad_38[0x10]; public:
    void* get_OnCallback();
    static _Script_CoreUObject::Class* static_class();
    void HandleCallback(_Script_SteamCore::CreateBeaconData& Data, bool bWasSuccessful);
    _Script_SteamCore::SteamCoreSteamPartiesAsyncActionCreateBeacon* CreateBeaconAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t OpenSlots, _Script_SteamCore::SteamPartyBeaconLocation BeaconLocation, void* ConnectString, void* MetaData, float Timeout);
}; // Size: 0x48
#pragma pack(pop)
}
