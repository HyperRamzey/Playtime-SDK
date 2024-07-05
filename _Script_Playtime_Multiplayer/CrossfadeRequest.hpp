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
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct CrossfadeRequest {
    private: char pad_0[0x18]; public:
    _Script_Engine::SoundBase*& get_Sound();
    float& get_FadeTime();
    float& get_NewVolume();
    bool get_bRandomStartPoint();
    void set_bRandomStartPoint(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
