#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TakeMovieScene {
#pragma pack(push, 1)
struct MovieSceneTakeTrack : public _Script_MovieScene::MovieSceneNameableTrack {
    private: char pad_90[0x10]; public:
    void* get_Sections();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
