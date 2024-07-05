#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Game_BP_TrainCart {
#pragma pack(push, 1)
struct BP_TrainCart_C : public _Script_Engine::Actor {
    private: char pad_220[0x98]; public:
    _Script_Engine::BoxComponent*& get_TempCollision_2();
    _Script_Engine::BoxComponent*& get_TempCollision_1();
    _Script_Engine::ArrowComponent*& get_Arrow();
    _Script_Engine::SceneComponent*& get_TPLocation();
    _Script_Engine::ChildActorComponent*& get_BP_PassengerCarSetdress();
    _Script_Engine::BillboardComponent*& get_AI_Entrance_2();
    _Script_Engine::BillboardComponent*& get_AI_Entrance_1();
    _Script_Engine::SkeletalMeshComponent*& get_Cart();
    _Script_Engine::SceneComponent*& get_Root();
    _Script_Engine::BillboardComponent*& get_PlayerStart();
    _Script_Engine::ArrowComponent*& get_DoorChecker_2();
    _Script_Engine::ArrowComponent*& get_DoorChecker_1();
    _Script_Engine::BoxComponent*& get_Trigger_SecondaryObjective();
    _Script_Engine::BoxComponent*& get_Trigger_EnterExit();
    _Script_Engine::StaticMeshComponent*& get_Collision();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_New_Light_Color();
    float& get_New_Temperature();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2b8
#pragma pack(pop)
}
