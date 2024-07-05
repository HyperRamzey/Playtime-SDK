#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DatasmithObjectTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithAreaLightActorTemplate : public DatasmithObjectTemplate {
    private: char pad_30[0x70]; public:
    void* get_LightType();
    void* get_LightShape();
    void* get_Dimensions();
    void* get_Color();
    float& get_Intensity();
    void* get_IntensityUnits();
    float& get_Temperature();
    void* get_IESTexture();
    bool get_bUseIESBrightness();
    void set_bUseIESBrightness(bool value);
    float& get_IESBrightnessScale();
    void* get_Rotation();
    float& get_SourceRadius();
    float& get_SourceLength();
    float& get_AttenuationRadius();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
