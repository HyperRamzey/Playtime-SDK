#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneEntityInstantiatorSystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneRestorePreAnimatedStateSystem : public MovieSceneEntityInstantiatorSystem {
    private: char pad_40[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
