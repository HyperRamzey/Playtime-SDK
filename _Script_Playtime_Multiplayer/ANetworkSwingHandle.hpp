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
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct ANetworkSwingHandle : public _Script_Engine::Actor {
    private: char pad_220[0x80]; public:
    _Script_Engine::SceneComponent*& get_RootScene();
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent();
    _Script_Engine::ArrowComponent*& get_FirstEdge();
    _Script_Engine::ArrowComponent*& get_SecondEdge();
    _Script_Engine::ArrowComponent*& get_LowestLocation();
    bool get_bGrappleSabotaged();
    void set_bGrappleSabotaged(bool value);
    bool get_bHasHandAttached();
    void set_bHasHandAttached(bool value);
    bool get_bIsActive();
    void set_bIsActive(bool value);
    void* get_HandPosition();
    _Script_Engine::AnimSequence*& get_HandPose();
    static _Script_CoreUObject::Class* static_class();
    void PseudoConstruct(_Script_Engine::SkeletalMeshComponent* Hand);
    void OnRep_GrappleSabotaged();
}; // Size: 0x2a0
#pragma pack(pop)
}
