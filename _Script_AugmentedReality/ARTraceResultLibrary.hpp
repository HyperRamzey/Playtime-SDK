#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
struct ARTraceResult;
}
namespace _Script_AugmentedReality {
struct ARTrackedGeometry;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARTraceResultLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_AugmentedReality::ARTrackedGeometry* GetTrackedGeometry(_Script_AugmentedReality::ARTraceResult& TraceResult);
    void* GetTraceChannel(_Script_AugmentedReality::ARTraceResult& TraceResult);
    _Script_CoreUObject::Transform GetLocalTransform(_Script_AugmentedReality::ARTraceResult& TraceResult);
    _Script_CoreUObject::Transform GetLocalToWorldTransform(_Script_AugmentedReality::ARTraceResult& TraceResult);
    _Script_CoreUObject::Transform GetLocalToTrackingTransform(_Script_AugmentedReality::ARTraceResult& TraceResult);
    float GetDistanceFromCamera(_Script_AugmentedReality::ARTraceResult& TraceResult);
}; // Size: 0x28
#pragma pack(pop)
}
