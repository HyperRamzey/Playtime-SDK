#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AudioSynesthesiaNRT.hpp"
namespace _Script_AudioSynesthesia {
struct ConstantQNRTSettings;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioSynesthesia {
#pragma pack(push, 1)
struct ConstantQNRT : public AudioSynesthesiaNRT {
    private: char pad_78[0x8]; public:
    _Script_AudioSynesthesia::ConstantQNRTSettings*& get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, void*& OutConstantQ);
    void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, void*& OutConstantQ);
}; // Size: 0x80
#pragma pack(pop)
}
