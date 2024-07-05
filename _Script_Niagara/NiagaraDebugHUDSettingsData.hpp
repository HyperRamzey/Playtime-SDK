#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraDebugHUDSettingsData {
    private: char pad_0[0xe0]; public:
    bool get_bEnabled();
    void set_bEnabled(bool value);
    bool get_bValidateSystemSimulationDataBuffers();
    void set_bValidateSystemSimulationDataBuffers(bool value);
    bool get_bValidateParticleDataBuffers();
    void set_bValidateParticleDataBuffers(bool value);
    bool get_bOverviewEnabled();
    void set_bOverviewEnabled(bool value);
    void* get_OverviewFont();
    void* get_OverviewLocation();
    void* get_ActorFilter();
    bool get_bComponentFilterEnabled();
    void set_bComponentFilterEnabled(bool value);
    void* get_ComponentFilter();
    bool get_bSystemFilterEnabled();
    void set_bSystemFilterEnabled(bool value);
    void* get_SystemFilter();
    bool get_bEmitterFilterEnabled();
    void set_bEmitterFilterEnabled(bool value);
    void* get_EmitterFilter();
    bool get_bActorFilterEnabled();
    void set_bActorFilterEnabled(bool value);
    void* get_SystemDebugVerbosity();
    void* get_SystemEmitterVerbosity();
    bool get_bSystemShowBounds();
    void set_bSystemShowBounds(bool value);
    bool get_bSystemShowActiveOnlyInWorld();
    void set_bSystemShowActiveOnlyInWorld(bool value);
    bool get_bShowSystemVariables();
    void set_bShowSystemVariables(bool value);
    void* get_SystemVariables();
    void* get_SystemTextOptions();
    bool get_bShowParticleVariables();
    void set_bShowParticleVariables(bool value);
    bool get_bEnableGpuParticleReadback();
    void set_bEnableGpuParticleReadback(bool value);
    void* get_ParticlesVariables();
    void* get_ParticleTextOptions();
    bool get_bShowParticlesVariablesWithSystem();
    void set_bShowParticlesVariablesWithSystem(bool value);
    bool get_bUseMaxParticlesToDisplay();
    void set_bUseMaxParticlesToDisplay(bool value);
    int32_t& get_MaxParticlesToDisplay();
    void* get_PlaybackMode();
    bool get_bPlaybackRateEnabled();
    void set_bPlaybackRateEnabled(bool value);
    float& get_PlaybackRate();
    bool get_bLoopTimeEnabled();
    void set_bLoopTimeEnabled(bool value);
    float& get_LoopTime();
    bool get_bShowGlobalBudgetInfo();
    void set_bShowGlobalBudgetInfo(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
