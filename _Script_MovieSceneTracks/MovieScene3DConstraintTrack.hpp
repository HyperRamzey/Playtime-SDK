#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieScene3DConstraintTrack : public _Script_MovieScene::MovieSceneTrack {
    private: char pad_90[0x10]; public:
    void* get_ConstraintSections();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}