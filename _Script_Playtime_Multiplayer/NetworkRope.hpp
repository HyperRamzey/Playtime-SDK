#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct NetworkRope : public _Script_Engine::Actor {
    private: char pad_220[0x60]; public:
    void* get_SlackSpringState();
    float& get_SlowLerpToIdle();
    float& get_LerpToIdle();
    float& get_LerpToPull();
    bool get_IsActive();
    void set_IsActive(bool value);
    _Script_Engine::Actor*& get_Hand();
    _Script_Engine::SceneComponent*& get_StartScene();
    _Script_Engine::SceneComponent*& get_EndScene();
    _Script_Engine::SplineComponent*& get_Spline();
    void* get_SplineMeshes();
    _Script_Engine::StaticMesh*& get_StaticMeshToUse();
    _Script_Engine::MaterialInterface*& get_MaterialToUse();
    float& get_DistancePerSplineMeshComponent();
    bool get_RetractMode();
    void set_RetractMode(bool value);
    static _Script_CoreUObject::Class* static_class();
    void MakeSimpleRope(_Script_Engine::SceneComponent* StartComponent, _Script_Engine::SceneComponent* EndComponent);
    void EnterRetractMode();
}; // Size: 0x280
#pragma pack(pop)
}
