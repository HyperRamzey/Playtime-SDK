#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneLiveLinkSubSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkMovieScene {
#pragma pack(push, 1)
struct MovieSceneLiveLinkSubSectionBasicRole : public MovieSceneLiveLinkSubSection {
    private: char pad_50[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
