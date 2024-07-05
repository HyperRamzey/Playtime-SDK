#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaIOCore {
#pragma pack(push, 1)
struct MediaCaptureOptions {
    private: char pad_0[0x10]; public:
    void* get_Crop();
    void* get_CustomCapturePoint();
    bool get_bResizeSourceBuffer();
    void set_bResizeSourceBuffer(bool value);
    bool get_bSkipFrameWhenRunningExpensiveTasks();
    void set_bSkipFrameWhenRunningExpensiveTasks(bool value);
    bool get_bConvertToDesiredPixelFormat();
    void set_bConvertToDesiredPixelFormat(bool value);
    bool get_bForceAlphaToOneOnConversion();
    void set_bForceAlphaToOneOnConversion(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
