#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraBakerSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0xf0]; public:
    float& get_StartSeconds();
    float& get_DurationSeconds();
    int32_t& get_FramesPerSecond();
    bool get_bPreviewLooping();
    void set_bPreviewLooping(bool value);
    void* get_FramesPerDimension();
    void* get_OutputTextures();
    void* get_CameraViewportMode();
    void* get_CameraViewportLocation();
    void* get_CameraViewportRotation();
    float& get_CameraOrbitDistance();
    float& get_CameraFOV();
    float& get_CameraOrthoWidth();
    bool get_bUseCameraAspectRatio();
    void set_bUseCameraAspectRatio(bool value);
    float& get_CameraAspectRatio();
    bool get_bRenderComponentOnly();
    void set_bRenderComponentOnly(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x118
#pragma pack(pop)
}
