#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneFloatTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneFadeTrack : public MovieSceneFloatTrack {
    private: char pad_c0[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
