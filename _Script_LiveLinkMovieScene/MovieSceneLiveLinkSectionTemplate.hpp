#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieScenePropertySectionTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkMovieScene {
#pragma pack(push, 1)
struct MovieSceneLiveLinkSectionTemplate : public _Script_MovieScene::MovieScenePropertySectionTemplate {
    private: char pad_38[0x80]; public:
    void* get_SubjectPreset();
    void* get_ChannelMask();
    void* get_SubSectionsData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
