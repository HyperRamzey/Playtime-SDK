#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_WormholeExit {
#pragma pack(push, 1)
struct BP_WormholeExit_C : public _Script_Engine::Actor {
    private: char pad_220[0x28]; public:
    _Script_Engine::SplineComponent*& get_HandSpline();
    _Script_Engine::SplineComponent*& get_CMOVE_Spline_Input();
    _Script_Engine::SplineComponent*& get_CMOVE_Spline();
    _Script_Engine::SceneComponent*& get_OutputScene();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void GetHandSpawnLocation(_Script_CoreUObject::Transform& Transform);
}; // Size: 0x248
#pragma pack(pop)
}
