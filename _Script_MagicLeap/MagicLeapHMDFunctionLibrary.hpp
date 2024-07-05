#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_MagicLeap {
struct MagicLeapGraphicsClientPerformanceInfo;
}
namespace _Script_CoreUObject {
struct Quat;
}
namespace _Script_MagicLeap {
struct MagicLeapHeadTrackingState;
}
namespace _Script_MagicLeap {
#pragma pack(push, 1)
struct MagicLeapHMDFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetStabilizationDepthActor(_Script_Engine::Actor* InStabilizationDepthActor, bool bSetFocusActor);
    void SetFocusActor(_Script_Engine::Actor* InFocusActor, bool bSetStabilizationActor);
    void SetBaseRotation(_Script_CoreUObject::Rotator& InBaseRotation);
    void SetBasePosition(_Script_CoreUObject::Vector& InBasePosition);
    void SetBaseOrientation(_Script_CoreUObject::Quat& InBaseOrientation);
    bool SetAppReady();
    bool IsRunningOnMagicLeapHMD();
    int32_t GetPlatformAPILevel();
    int32_t GetMLSDKVersionRevision();
    int32_t GetMLSDKVersionMinor();
    int32_t GetMLSDKVersionMajor();
    void* GetMLSDKVersion();
    int32_t GetMinimumAPILevel();
    bool GetHeadTrackingState(_Script_MagicLeap::MagicLeapHeadTrackingState& State);
    bool GetHeadTrackingMapEvents(void*& MapEvents);
    bool GetGraphicsClientPerformanceInfo(_Script_MagicLeap::MagicLeapGraphicsClientPerformanceInfo& PerformanceInfo);
}; // Size: 0x28
#pragma pack(pop)
}
