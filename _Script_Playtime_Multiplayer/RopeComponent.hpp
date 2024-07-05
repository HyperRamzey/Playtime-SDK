#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct RopeComponent : public _Script_Engine::SplineComponent {
    private: char pad_550[0x40]; public:
    float& get_DistancePerSplineMeshComponent();
    void* get_SplineMeshes();
    _Script_Engine::StaticMesh*& get_StaticMeshToUse();
    _Script_Engine::MaterialInterface*& get_MaterialToUse();
    void* get_SlackSpringState();
    static _Script_CoreUObject::Class* static_class();
    void SetSplineMeshesHiddenInGame(bool Hidden);
    void MakeRope(_Script_Engine::SceneComponent* AttachComponent, _Script_CoreUObject::Vector RopeStart, _Script_CoreUObject::Vector RopeEnd, bool IsPulling, bool isIdle);
}; // Size: 0x590
#pragma pack(pop)
}
