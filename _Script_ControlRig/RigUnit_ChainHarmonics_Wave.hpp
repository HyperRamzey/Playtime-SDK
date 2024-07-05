#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_ChainHarmonics_Wave {
    private: char pad_0[0x40]; public:
    bool get_bEnabled();
    void set_bEnabled(bool value);
    void* get_WaveFrequency();
    void* get_WaveAmplitude();
    void* get_WaveOffset();
    void* get_WaveNoise();
    float& get_WaveMinimum();
    float& get_WaveMaximum();
    void* get_WaveEase();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
