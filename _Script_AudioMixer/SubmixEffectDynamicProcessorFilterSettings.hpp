#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct SubmixEffectDynamicProcessorFilterSettings {
    private: char pad_0[0xc]; public:
    bool get_bEnabled();
    void set_bEnabled(bool value);
    float& get_Cutoff();
    float& get_GainDb();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
