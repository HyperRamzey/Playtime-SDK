#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor\BP_NavBaseActor_C.hpp"
namespace _Script_Engine {
struct Texture;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavLevelInfo {
#pragma pack(push, 1)
struct BP_NavLevelInfo_C : public _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C {
    private: char pad_240[0x30]; public:
    _Script_Engine::Texture*& get_MinimapImage();
    float& get_MinimapDimentions();
    float& get_MinimapZoom();
    _Script_Engine::Texture2D*& get_BigmapImage();
    float& get_BigmapDimentions();
    _Script_Engine::Texture*& get_RadarMinimapImage();
    float& get_RadarDimentions();
    float& get_RadarZoom();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x270
#pragma pack(pop)
}
