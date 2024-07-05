#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Puzzles_EndGoals_BP_MP_Test_Monster_Door {
#pragma pack(push, 1)
struct BP_MP_Test_Monster_Door_C : public _Script_Engine::Actor {
    private: char pad_220[0x38]; public:
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Door2();
    _Script_Engine::StaticMeshComponent*& get_Door1();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_Timeline_0_Time_399156C0486EC9E43DE8D588B77D4A20();
    void* get_Timeline_0__Direction_399156C0486EC9E43DE8D588B77D4A20();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    float& get_DelayBeforeDoorOpens();
    static _Script_CoreUObject::Class* static_class();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OpenMonsterDoor();
    void ExecuteUbergraph_BP_MP_Test_Monster_Door(int32_t EntryPoint);
}; // Size: 0x258
#pragma pack(pop)
}
