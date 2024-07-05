#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LiveLinkTransformFrameData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
#pragma pack(push, 1)
struct LiveLinkLightFrameData : public LiveLinkTransformFrameData {
    private: char pad_d0[0x30]; public:
    float& get_Temperature();
    float& get_Intensity();
    void* get_LightColor();
    float& get_InnerConeAngle();
    float& get_OuterConeAngle();
    float& get_AttenuationRadius();
    float& get_SourceRadius();
    float& get_SoftSourceRadius();
    float& get_SourceLength();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
