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
struct SubmixEffectSubmixEQSettings {
    private: char pad_0[0x10]; public:
    void* get_EQBands();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}