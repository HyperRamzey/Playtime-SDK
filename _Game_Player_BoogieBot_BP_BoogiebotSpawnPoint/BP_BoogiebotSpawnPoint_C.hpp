#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Game_Player_BoogieBot_BP_BoogieBot {
struct BP_BoogieBot_C;
}
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
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Player_BoogieBot_BP_BoogiebotSpawnPoint {
#pragma pack(push, 1)
struct BP_BoogiebotSpawnPoint_C : public _Script_Engine::Actor {
    private: char pad_220[0x50]; public:
    void* get_UberGraphFrame();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::StaticMeshComponent*& get_StaticMesh();
    _Script_Engine::StaticMeshComponent*& get_Cube();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_BoogieBotExitTimeline_NewTrack_0_F71917CC4C8AE0EE9578C09268A5C628();
    void* get_BoogieBotExitTimeline__Direction_F71917CC4C8AE0EE9578C09268A5C628();
    _Script_Engine::TimelineComponent*& get_BoogieBotExitTimeline();
    float& get_SpawnDoorTimeline_NewTrack_0_8238BC4043DB06774CC248B541AD653B();
    void* get_SpawnDoorTimeline__Direction_8238BC4043DB06774CC248B541AD653B();
    _Script_Engine::TimelineComponent*& get_SpawnDoorTimeline();
    _Game_Player_BoogieBot_BP_BoogieBot::BP_BoogieBot_C*& get_BoogieBot();
    static _Script_CoreUObject::Class* static_class();
    void SpawnDoorTimeline__FinishedFunc();
    void SpawnDoorTimeline__UpdateFunc();
    void BoogieBotExitTimeline__FinishedFunc();
    void BoogieBotExitTimeline__UpdateFunc();
    void MakeBoogieBot(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Player);
    void OpenSpawnDoor();
    void SpawnBoogieActor();
    void ExecuteUbergraph_BP_BoogiebotSpawnPoint(int32_t EntryPoint);
}; // Size: 0x270
#pragma pack(pop)
}
