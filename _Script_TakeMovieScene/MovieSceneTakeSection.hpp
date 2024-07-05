#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TakeMovieScene {
#pragma pack(push, 1)
struct MovieSceneTakeSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e8[0x380]; public:
    void* get_HoursCurve();
    void* get_MinutesCurve();
    void* get_SecondsCurve();
    void* get_FramesCurve();
    void* get_SubFramesCurve();
    void* get_Slate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x468
#pragma pack(pop)
}
