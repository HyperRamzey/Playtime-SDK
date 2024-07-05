#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_HeadMountedDisplay\VRNotificationsComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeap {
#pragma pack(push, 1)
struct MagicLeapHeadTrackingNotificationsComponent : public _Script_HeadMountedDisplay::VRNotificationsComponent {
    private: char pad_140[0x90]; public:
    void* get_OnHeadTrackingLost();
    void* get_OnHeadTrackingRecovered();
    void* get_OnHeadTrackingRecoveryFailed();
    void* get_OnHeadTrackingNewSessionStarted();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1d0
#pragma pack(pop)
}
