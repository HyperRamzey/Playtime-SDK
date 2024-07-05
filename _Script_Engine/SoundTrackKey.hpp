#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundTrackKey {
    private: char pad_0[0x18]; public:
    float& get_Time();
    float& get_Volume();
    float& get_Pitch();
    _Script_Engine::SoundBase*& get_Sound();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
