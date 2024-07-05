#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TakeMovieScene {
#pragma pack(push, 1)
struct MovieSceneTakeSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x60]; public:
    void* get_HoursName();
    void* get_MinutesName();
    void* get_SecondsName();
    void* get_FramesName();
    void* get_SubFramesName();
    void* get_SlateName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
