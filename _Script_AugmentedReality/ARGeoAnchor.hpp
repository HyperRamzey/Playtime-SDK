#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARTrackedGeometry.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARGeoAnchor : public ARTrackedGeometry {
    private: char pad_100[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
    float GetLongitude();
    float GetLatitude();
    void* GetAltitudeSource();
    float GetAltitudeMeters();
}; // Size: 0x110
#pragma pack(pop)
}
