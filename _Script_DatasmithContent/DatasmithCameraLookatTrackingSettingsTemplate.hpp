#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithCameraLookatTrackingSettingsTemplate {
    private: char pad_0[0x30]; public:
    bool get_bEnableLookAtTracking();
    void set_bEnableLookAtTracking(bool value);
    bool get_bAllowRoll();
    void set_bAllowRoll(bool value);
    void* get_ActorToTrack();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
