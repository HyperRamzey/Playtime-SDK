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
struct LiveLinkCameraFrameData : public LiveLinkTransformFrameData {
    private: char pad_d0[0x20]; public:
    float& get_FieldOfView();
    float& get_AspectRatio();
    float& get_FocalLength();
    float& get_Aperture();
    float& get_FocusDistance();
    void* get_ProjectionMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
