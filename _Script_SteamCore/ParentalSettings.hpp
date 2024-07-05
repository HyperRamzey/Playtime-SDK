#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct ParentalSettings : public SteamCoreSubsystem {
    static _Script_CoreUObject::Class* static_class();
    bool BIsParentalLockLocked();
    bool BIsParentalLockEnabled();
    bool BIsFeatureInBlockList(void* Feature);
    bool BIsFeatureBlocked(void* Feature);
    bool BIsAppInBlockList(int32_t AppID);
    bool BIsAppBlocked(int32_t AppID);
}; // Size: 0x48
#pragma pack(pop)
}
