#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapPlanes {
#pragma pack(push, 1)
struct MagicLeapPlanesQuery {
    private: char pad_0[0x60]; public:
    void* get_Flags();
    _Script_Engine::BoxComponent*& get_SearchVolume();
    int32_t& get_MaxResults();
    float& get_MinHoleLength();
    float& get_MinPlaneArea();
    void* get_SearchVolumePosition();
    void* get_SearchVolumeOrientation();
    void* get_SearchVolumeExtents();
    float& get_SimilarityThreshold();
    bool get_bSearchVolumeTrackingSpace();
    void set_bSearchVolumeTrackingSpace(bool value);
    bool get_bResultTrackingSpace();
    void set_bResultTrackingSpace(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
