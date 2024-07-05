#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_MediaAssets {
struct MediaSoundComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Game_MenuTheater_BP_MovieScreen {
#pragma pack(push, 1)
struct BP_MovieScreen_C : public _Script_Engine::StaticMeshActor {
    private: char pad_230[0x8]; public:
    _Script_MediaAssets::MediaSoundComponent*& get_MediaSound();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x238
#pragma pack(pop)
}
