#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieSceneTracks\MovieScenePropertyTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkMovieScene {
#pragma pack(push, 1)
struct MovieSceneLiveLinkTrack : public _Script_MovieSceneTracks::MovieScenePropertyTrack {
    private: char pad_c0[0x10]; public:
    void* get_TrackRole();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
