#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct MazeMeshes : public _Script_Engine::DataAsset {
    private: char pad_30[0x58]; public:
    _Script_Engine::StaticMesh*& get_Center();
    void* get_FromUps();
    void* get_Horizontals();
    void* get_ToDowns();
    void* get_Verticals();
    void* get_Turns();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
