#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AudioMixer\AudioGenerator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioCapture {
struct AudioCaptureDeviceInfo;
}
namespace _Script_AudioCapture {
#pragma pack(push, 1)
struct AudioCapture : public _Script_AudioMixer::AudioGenerator {
    private: char pad_a8[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
    void StopCapturingAudio();
    void StartCapturingAudio();
    bool IsCapturingAudio();
    bool GetAudioCaptureDeviceInfo(_Script_AudioCapture::AudioCaptureDeviceInfo& OutInfo);
}; // Size: 0xb0
#pragma pack(pop)
}
