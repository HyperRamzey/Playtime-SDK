#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ImgMediaEngine {
#pragma pack(push, 1)
struct ImgMediaPlaybackComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x28]; public:
    float& get_Width();
    float& get_LODBias();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
