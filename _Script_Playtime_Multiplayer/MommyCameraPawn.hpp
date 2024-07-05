#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Pawn.hpp"
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct MommyCameraPawn : public _Script_Engine::Pawn {
    private: char pad_280[0x8]; public:
    _Script_Engine::CameraComponent*& get_CameraComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x288
#pragma pack(pop)
}
