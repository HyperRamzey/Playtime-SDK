#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LiveLinkTransformStaticData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
#pragma pack(push, 1)
struct LiveLinkLightStaticData : public LiveLinkTransformStaticData {
    private: char pad_18[0x10]; public:
    bool get_bIsTemperatureSupported();
    void set_bIsTemperatureSupported(bool value);
    bool get_bIsIntensitySupported();
    void set_bIsIntensitySupported(bool value);
    bool get_bIsLightColorSupported();
    void set_bIsLightColorSupported(bool value);
    bool get_bIsInnerConeAngleSupported();
    void set_bIsInnerConeAngleSupported(bool value);
    bool get_bIsOuterConeAngleSupported();
    void set_bIsOuterConeAngleSupported(bool value);
    bool get_bIsAttenuationRadiusSupported();
    void set_bIsAttenuationRadiusSupported(bool value);
    bool get_bIsSourceLenghtSupported();
    void set_bIsSourceLenghtSupported(bool value);
    bool get_bIsSourceRadiusSupported();
    void set_bIsSourceRadiusSupported(bool value);
    bool get_bIsSoftSourceRadiusSupported();
    void set_bIsSoftSourceRadiusSupported(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
