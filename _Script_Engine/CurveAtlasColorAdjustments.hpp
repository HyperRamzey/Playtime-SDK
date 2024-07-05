#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CurveAtlasColorAdjustments {
    private: char pad_0[0x24]; public:
    bool get_bChromaKeyTexture();
    void set_bChromaKeyTexture(bool value);
    float& get_AdjustBrightness();
    float& get_AdjustBrightnessCurve();
    float& get_AdjustVibrance();
    float& get_AdjustSaturation();
    float& get_AdjustRGBCurve();
    float& get_AdjustHue();
    float& get_AdjustMinAlpha();
    float& get_AdjustMaxAlpha();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
