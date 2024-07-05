#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapImageTracker {
#pragma pack(push, 1)
struct MagicLeapImageTrackerFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets);
    bool IsImageTrackingEnabled();
    int32_t GetMaxSimultaneousTargets();
    void EnableImageTracking(bool bEnable);
}; // Size: 0x28
#pragma pack(pop)
}
