#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapLightEstimation {
struct MagicLeapLightEstimationColorTemperatureState;
}
namespace _Script_MagicLeapLightEstimation {
struct MagicLeapLightEstimationAmbientGlobalState;
}
namespace _Script_MagicLeapLightEstimation {
#pragma pack(push, 1)
struct MagicLeapLightEstimationFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool IsTrackerValid();
    bool GetColorTemperatureState(_Script_MagicLeapLightEstimation::MagicLeapLightEstimationColorTemperatureState& ColorTemperatureState);
    bool GetAmbientGlobalState(_Script_MagicLeapLightEstimation::MagicLeapLightEstimationAmbientGlobalState& GlobalAmbientState);
    void DestroyTracker();
    bool CreateTracker();
}; // Size: 0x28
#pragma pack(pop)
}
