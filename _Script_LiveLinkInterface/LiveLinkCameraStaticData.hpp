#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LiveLinkTransformStaticData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
#pragma pack(push, 1)
struct LiveLinkCameraStaticData : public LiveLinkTransformStaticData {
    private: char pad_18[0x10]; public:
    bool get_bIsFieldOfViewSupported();
    void set_bIsFieldOfViewSupported(bool value);
    bool get_bIsAspectRatioSupported();
    void set_bIsAspectRatioSupported(bool value);
    bool get_bIsFocalLengthSupported();
    void set_bIsFocalLengthSupported(bool value);
    bool get_bIsProjectionModeSupported();
    void set_bIsProjectionModeSupported(bool value);
    float& get_FilmBackWidth();
    float& get_FilmBackHeight();
    bool get_bIsApertureSupported();
    void set_bIsApertureSupported(bool value);
    bool get_bIsFocusDistanceSupported();
    void set_bIsFocusDistanceSupported(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
