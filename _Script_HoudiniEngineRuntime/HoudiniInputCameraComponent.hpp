#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniInputSceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniInputCameraComponent : public HoudiniInputSceneComponent {
    private: char pad_e0[0x20]; public:
    float& get_FOV();
    float& get_AspectRatio();
    bool get_bIsOrthographic();
    void set_bIsOrthographic(bool value);
    float& get_OrthoWidth();
    float& get_OrthoNearClipPlane();
    float& get_OrthoFarClipPlane();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
