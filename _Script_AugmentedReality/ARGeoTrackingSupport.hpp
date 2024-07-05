#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARGeoTrackingSupport : public _Script_CoreUObject::Object {
    static _Script_CoreUObject::Class* static_class();
    _Script_AugmentedReality::ARGeoTrackingSupport* GetGeoTrackingSupport();
    void* GetGeoTrackingStateReason();
    void* GetGeoTrackingState();
    void* GetGeoTrackingAccuracy();
    bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, void* OptionalAnchorName);
    bool AddGeoAnchorAtLocation(float Longitude, float Latitude, void* OptionalAnchorName);
}; // Size: 0x28
#pragma pack(pop)
}
