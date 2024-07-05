#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_TrainingDummy_BP_AIControllerWaypoint {
#pragma pack(push, 1)
struct BP_AIControllerWaypoint_C : public _Script_Engine::Actor {
    private: char pad_220[0x30]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_Waypoints();
    void* get_AlternateWaypoints();
    static _Script_CoreUObject::Class* static_class();
    void ExecuteUbergraph_BP_AIControllerWaypoint(int32_t EntryPoint);
}; // Size: 0x250
#pragma pack(pop)
}
