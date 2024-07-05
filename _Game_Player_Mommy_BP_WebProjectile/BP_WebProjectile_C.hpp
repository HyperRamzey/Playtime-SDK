#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy {
struct BP_NetworkMommy_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_Mommy_BP_WebProjectile {
#pragma pack(push, 1)
struct BP_WebProjectile_C : public _Script_Engine::Actor {
    private: char pad_220[0x30]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_ParticleSystem();
    _Script_Engine::StaticMeshComponent*& get_Sphere();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C*& get_Spider();
    float& get_Speed();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Vector GetLocationOverTime(float DeltaTime);
    void ReceiveTick0(float DeltaSeconds);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_WebProjectile(int32_t EntryPoint);
}; // Size: 0x250
#pragma pack(pop)
}
