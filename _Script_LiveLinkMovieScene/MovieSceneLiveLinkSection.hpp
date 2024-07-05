#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkMovieScene {
#pragma pack(push, 1)
struct MovieSceneLiveLinkSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e8[0x140]; public:
    void* get_SubjectPreset();
    void* get_ChannelMask();
    void* get_SubSections();
    void* get_SubjectName();
    void* get_TemplateToPush();
    void* get_RefSkeleton();
    void* get_CurveNames();
    void* get_PropertyFloatChannels();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x228
#pragma pack(pop)
}
