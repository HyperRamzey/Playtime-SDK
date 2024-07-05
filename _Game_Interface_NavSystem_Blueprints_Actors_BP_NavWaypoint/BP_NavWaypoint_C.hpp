#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor\BP_NavBaseActor_C.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavWaypoint {
#pragma pack(push, 1)
struct BP_NavWaypoint_C : public _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C {
    private: char pad_240[0x20]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::ParticleSystemComponent*& get_ParticleSystem();
    _Script_Engine::StaticMeshComponent*& get_Cube();
    float& get_LifeTime();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_NavWaypoint(int32_t EntryPoint);
}; // Size: 0x260
#pragma pack(pop)
}
