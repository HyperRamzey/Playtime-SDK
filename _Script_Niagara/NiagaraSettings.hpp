#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
namespace _Script_Niagara {
struct NiagaraEffectType;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraSettings : public _Script_DeveloperSettings::DeveloperSettings {
    private: char pad_38[0x90]; public:
    void* get_DefaultEffectType();
    void* get_QualityLevels();
    void* get_ComponentRendererWarningsPerClass();
    void* get_DefaultRenderTargetFormat();
    void* get_DefaultGridFormat();
    void* get_DefaultRendererMotionVectorSetting();
    void* get_NDISkelMesh_GpuMaxInfluences();
    void* get_NDISkelMesh_GpuUniformSamplingFormat();
    void* get_NDISkelMesh_AdjacencyTriangleIndexFormat();
    _Script_Niagara::NiagaraEffectType*& get_DefaultEffectTypePtr();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
