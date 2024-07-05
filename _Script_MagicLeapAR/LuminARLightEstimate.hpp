#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AugmentedReality\ARBasicLightEstimate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapAR {
#pragma pack(push, 1)
struct LuminARLightEstimate : public _Script_AugmentedReality::ARBasicLightEstimate {
    private: char pad_40[0x10]; public:
    void* get_AmbientIntensityNits();
    static _Script_CoreUObject::Class* static_class();
    void* GetAmbientIntensityNits();
}; // Size: 0x50
#pragma pack(pop)
}
