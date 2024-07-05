#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LuminRuntimeSettings {
#pragma pack(push, 1)
struct LuminRuntimeSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x120]; public:
    void* get_PackageName();
    void* get_ApplicationDisplayName();
    void* get_FrameTimingHint();
    bool get_bProtectedContent();
    void set_bProtectedContent(bool value);
    bool get_bManualCallToAppReady();
    void set_bManualCallToAppReady(bool value);
    bool get_bUseMobileRendering();
    void set_bUseMobileRendering(bool value);
    bool get_bUseVulkan();
    void set_bUseVulkan(bool value);
    void* get_Certificate();
    void* get_IconModelPath();
    void* get_IconPortalPath();
    void* get_LocalizedIconInfos();
    int32_t& get_VersionCode();
    int32_t& get_MinimumAPILevel();
    void* get_AppPrivileges();
    void* get_ExtraComponentSubElements();
    void* get_ExtraComponentElements();
    void* get_SpatializationPlugin();
    void* get_ReverbPlugin();
    void* get_OcclusionPlugin();
    int32_t& get_SoundCueCookQualityIndex();
    bool get_bRemoveDebugInfo();
    void set_bRemoveDebugInfo(bool value);
    void* get_VulkanValidationLayerLibs();
    bool get_bFrameVignette();
    void set_bFrameVignette(bool value);
    void* get_LocalizedAppNames();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x148
#pragma pack(pop)
}
