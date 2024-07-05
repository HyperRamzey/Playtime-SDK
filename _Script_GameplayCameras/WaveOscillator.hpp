#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayCameras {
#pragma pack(push, 1)
struct WaveOscillator {
    private: char pad_0[0xc]; public:
    float& get_Amplitude();
    float& get_Frequency();
    void* get_InitialOffsetType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
