#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct SettingsFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetVSyncEnabled(bool Value);
    void SetViewDistanceQuality(int32_t Value);
    void SetTextureQuality(int32_t Value);
    void SetShadowQuality(int32_t Value);
    void SetShaderQuality(int32_t Value);
    void SetResolutionScale(int32_t Value);
    void SetResolution(_Script_CoreUObject::IntPoint In_Resolution);
    void SetPostProcessQuality(int32_t Value);
    void SetFullscreenMode(void* InFullscreenMode);
    void SetFrameRateLimit(int32_t Value);
    void SetAntiAliasingQuality(int32_t Value);
    void SaveAndApplySettings();
    void RevertToDefaults();
    void PreloadResolutionSettings();
    void* GetRecommendedResolutions();
    void* GetPrimaryGPUBrand();
    bool AreSettingsDirty();
}; // Size: 0x28
#pragma pack(pop)
}
