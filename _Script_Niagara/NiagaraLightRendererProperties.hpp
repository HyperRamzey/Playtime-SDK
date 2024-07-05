#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraRendererProperties.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraLightRendererProperties : public NiagaraRendererProperties {
    private: char pad_78[0x2b8]; public:
    bool get_bUseInverseSquaredFalloff();
    void set_bUseInverseSquaredFalloff(bool value);
    bool get_bAffectsTranslucency();
    void set_bAffectsTranslucency(bool value);
    bool get_bAlphaScalesBrightness();
    void set_bAlphaScalesBrightness(bool value);
    float& get_RadiusScale();
    float& get_DefaultExponent();
    void* get_ColorAdd();
    int32_t& get_RendererVisibility();
    void* get_LightRenderingEnabledBinding();
    void* get_LightExponentBinding();
    void* get_PositionBinding();
    void* get_ColorBinding();
    void* get_RadiusBinding();
    void* get_VolumetricScatteringBinding();
    void* get_RendererVisibilityTagBinding();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x330
#pragma pack(pop)
}
