#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct TextureLightProfile;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithAreaLightActor : public _Script_Engine::Actor {
    private: char pad_220[0x58]; public:
    void* get_Mobility();
    void* get_LightType();
    void* get_LightShape();
    void* get_Dimensions();
    float& get_Intensity();
    void* get_IntensityUnits();
    void* get_Color();
    float& get_Temperature();
    _Script_Engine::TextureLightProfile*& get_IESTexture();
    bool get_bUseIESBrightness();
    void set_bUseIESBrightness(bool value);
    float& get_IESBrightnessScale();
    void* get_Rotation();
    float& get_SourceRadius();
    float& get_SourceLength();
    float& get_AttenuationRadius();
    float& get_SpotlightInnerAngle();
    float& get_SpotlightOuterAngle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x278
#pragma pack(pop)
}
