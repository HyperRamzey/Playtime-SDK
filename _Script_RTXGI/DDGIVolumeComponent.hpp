#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RTXGI {
#pragma pack(push, 1)
struct DDGIVolumeComponent : public _Script_Engine::SceneComponent {
    private: char pad_200[0x170]; public:
    bool get_EnableVolume();
    void set_EnableVolume(bool value);
    float& get_UpdatePriority();
    int32_t& get_LightingPriority();
    float& get_BlendingDistance();
    float& get_BlendingCutoffDistance();
    bool get_RuntimeStatic();
    void set_RuntimeStatic(bool value);
    void* get_LastOrigin();
    void* get_RaysPerProbe();
    void* get_ProbeCounts();
    float& get_ProbeMaxRayDistance();
    float& get_ProbeHistoryWeight();
    void* get_ProbeRelocation();
    bool get_ScrollProbesInfinitely();
    void set_ScrollProbesInfinitely(bool value);
    bool get_VisualizeProbes();
    void set_VisualizeProbes(bool value);
    void* get_ProbeScrollOffset();
    float& get_probeDistanceExponent();
    float& get_probeIrradianceEncodingGamma();
    float& get_probeChangeThreshold();
    float& get_probeBrightnessThreshold();
    void* get_SkyLightTypeOnRayMiss();
    float& get_ViewBias();
    float& get_NormalBias();
    float& get_LightMultiplier();
    float& get_EmissiveMultiplier();
    float& get_IrradianceScalar();
    void* get_LightingChannels();
    static _Script_CoreUObject::Class* static_class();
    void ToggleVolume(bool IsVolumeEnabled);
    void SetViewBias(float NewViewBias);
    void SetUpdatePriority(float NewUpdatePriority);
    void SetProbesVisualization(bool IsProbesVisualized);
    void SetNormalBias(float NewNormalBias);
    void SetLightMultiplier(float NewLightMultiplier);
    void SetLightingPriority(float NewLightingPriority);
    void SetIrradianceScalar(float NewIrradianceScalar);
    void SetEmissiveMultiplier(float NewEmissiveMultiplier);
    void SetBlendingDistance(float NewBlendingDistance);
    void SetBlendingCutoffDistance(float NewBlendingCutoffDistance);
    float GetViewBias();
    float GetUpdatePriority();
    float GetNormalBias();
    float GetLightMultiplier();
    float GetLightingPriority();
    float GetIrradianceScalar();
    float GetEmissiveMultiplier();
    float GetBlendingDistance();
    float GetBlendingCutoffDistance();
    void DDGIClearVolumes();
    void ClearProbeData();
}; // Size: 0x370
#pragma pack(pop)
}
