#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DialogueSoundWaveProxy : public SoundBase {
    private: char pad_170[0x18]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x188
#pragma pack(pop)
}
