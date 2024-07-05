#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneParticleTrack : public _Script_MovieScene::MovieSceneNameableTrack {
    private: char pad_90[0x18]; public:
    void* get_ParticleSections();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
