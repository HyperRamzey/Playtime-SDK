#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_MovieScene {
struct MovieSceneSection;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct TrackInstanceInputComponent {
    private: char pad_0[0x10]; public:
    _Script_MovieScene::MovieSceneSection*& get_Section();
    int32_t& get_OutputIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}