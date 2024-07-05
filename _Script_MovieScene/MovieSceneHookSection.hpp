#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneHookSection : public MovieSceneSection {
    private: char pad_e8[0x18]; public:
    bool get_bRequiresRangedHook();
    void set_bRequiresRangedHook(bool value);
    bool get_bRequiresTriggerHooks();
    void set_bRequiresTriggerHooks(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
