#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneChannel.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneBoolChannel : public MovieSceneChannel {
    private: char pad_8[0x88]; public:
    void* get_Times();
    bool get_DefaultValue();
    void set_DefaultValue(bool value);
    bool get_bHasDefaultValue();
    void set_bHasDefaultValue(bool value);
    void* get_Values();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
