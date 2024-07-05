#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct NetworkDashHandle : public _Script_Engine::Actor {
    private: char pad_220[0x28]; public:
    _Script_Engine::SceneComponent*& get_RootScene();
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent();
    _Script_Engine::ArrowComponent*& get_FirstEdge();
    _Script_Engine::ArrowComponent*& get_SecondEdge();
    _Script_Engine::ArrowComponent*& get_LowestLocation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x248
#pragma pack(pop)
}
