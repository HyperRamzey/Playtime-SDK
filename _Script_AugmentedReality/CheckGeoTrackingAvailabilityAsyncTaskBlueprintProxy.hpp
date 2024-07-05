#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARBaseAsyncTaskBlueprintProxy.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public ARBaseAsyncTaskBlueprintProxy {
    private: char pad_50[0x50]; public:
    void* get_OnSuccess();
    void* get_OnFailed();
    static _Script_CoreUObject::Class* static_class();
    _Script_AugmentedReality::CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(_Script_CoreUObject::Object* WorldContextObject, float Longitude, float Latitude);
    _Script_AugmentedReality::CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(_Script_CoreUObject::Object* WorldContextObject);
}; // Size: 0xa0
#pragma pack(pop)
}
