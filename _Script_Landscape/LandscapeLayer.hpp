#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeLayer {
    private: char pad_0[0x88]; public:
    void* get_Guid();
    void* get_Name();
    bool get_bVisible();
    void set_bVisible(bool value);
    bool get_bLocked();
    void set_bLocked(bool value);
    float& get_HeightmapAlpha();
    float& get_WeightmapAlpha();
    void* get_BlendMode();
    void* get_Brushes();
    void* get_WeightmapLayerAllocationBlend();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
