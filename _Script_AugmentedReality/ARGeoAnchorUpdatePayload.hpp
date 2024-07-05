#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARGeoAnchorUpdatePayload {
    private: char pad_0[0x70]; public:
    void* get_SessionPayload();
    void* get_WorldTransform();
    float& get_Longitude();
    float& get_Latitude();
    float& get_AltitudeMeters();
    void* get_AltitudeSource();
    void* get_AnchorName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
