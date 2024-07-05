#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapController {
#pragma pack(push, 1)
struct MagicLeapControllerFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool SetMotionSourceForHand(void* Hand, void* MotionSource);
    bool SetControllerTrackingMode(void* TrackingMode);
    bool PlayLEDPattern(void* MotionSource, void* LEDPattern, void* LEDColor, float DurationInSec);
    bool PlayLEDEffect(void* MotionSource, void* LEDEffect, void* LEDSpeed, void* LEDPattern, void* LEDColor, float DurationInSec);
    bool PlayHapticPattern(void* MotionSource, void* HapticPattern, void* Intensity);
    bool PlayControllerLEDEffect(void* Hand, void* LEDEffect, void* LEDSpeed, void* LEDPattern, void* LEDColor, float DurationInSec);
    bool PlayControllerLED(void* Hand, void* LEDPattern, void* LEDColor, float DurationInSec);
    bool PlayControllerHapticFeedback(void* Hand, void* HapticPattern, void* Intensity);
    int32_t MaxSupportedMagicLeapControllers();
    bool IsMLControllerConnected(void* MotionSource);
    void InvertControllerMapping();
    void* GetMotionSourceForHand(void* Hand);
    void* GetMLControllerType(void* Hand);
    void* GetHandForMotionSource(void* MotionSource);
    void* GetControllerType(void* MotionSource);
    void* GetControllerTrackingMode();
    bool GetControllerMapping(int32_t ControllerIndex, void*& Hand);
}; // Size: 0x28
#pragma pack(pop)
}
