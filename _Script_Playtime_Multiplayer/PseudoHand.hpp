#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Playtime_Multiplayer {
struct NetworkRope;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PseudoHand : public _Script_Engine::Actor {
    private: char pad_220[0x48]; public:
    _Script_Engine::SceneComponent*& get_MyRootComponent();
    _Script_Engine::SceneComponent*& get_PipeAttachmentScene();
    _Script_Playtime_Multiplayer::NetworkRope*& get_NetworkRope();
    _Script_Engine::SceneComponent*& get_HandAttachmentScene();
    void* get_NetworkRopeClass();
    _Script_Engine::SplineComponent*& get_ExitSpline();
    _Script_Playtime_Multiplayer::ANetworkCharacter*& get_TargetCharacter();
    float& get_CurrentSplineProgress();
    _Script_Engine::Actor*& get_WormHole();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x268
#pragma pack(pop)
}
