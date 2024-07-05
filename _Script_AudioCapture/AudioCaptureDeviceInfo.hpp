#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioCapture {
#pragma pack(push, 1)
struct AudioCaptureDeviceInfo {
    private: char pad_0[0x10]; public:
    void* get_DeviceName();
    int32_t& get_NumInputChannels();
    int32_t& get_SampleRate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
