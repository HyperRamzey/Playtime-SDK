#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapEyeTracker {
struct MagicLeapEyeBlinkState;
}
namespace _Script_MagicLeapEyeTracker {
#pragma pack(push, 1)
struct MagicLeapEyeTrackerFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool GetEyeBlinkState(_Script_MagicLeapEyeTracker::MagicLeapEyeBlinkState& BlinkState);
    void* GetCalibrationStatus();
}; // Size: 0x28
#pragma pack(pop)
}
