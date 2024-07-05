#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Playtime_Multiplayer {
struct ParkourObject;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_Engine {
struct Character;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct ParkourComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x108]; public:
    void* get_CurrentParkourType();
    void* get_CurrentMantleState();
    _Script_Playtime_Multiplayer::ParkourObject*& get_ParkourObject();
    void* get_ParkourStartLocation();
    void* get_ParkourTargetLocation();
    void* get_ParkourCharacterStartLocation();
    bool get_bInParkour();
    void set_bInParkour(bool value);
    _Script_Engine::AnimMontage*& get_VaultMontage();
    _Script_Engine::AnimMontage*& get_MantleTransitionIn();
    _Script_Engine::AnimMontage*& get_MantleIdle();
    _Script_Engine::AnimMontage*& get_MantleTransitionOut();
    _Script_Engine::AnimMontage*& get_CurrentParkourMontage();
    float& get_ParkourAlpha();
    _Script_Engine::CurveFloat*& get_CurveFloat();
    static _Script_CoreUObject::Class* static_class();
    void TimelineProgress(float Value);
    void TimelineEnded();
    void SetupTimeline();
    void Server_Parkour();
    void GetOwningCharacter(bool& bIsValid, _Script_Engine::Character*& Character);
    void* GetNextMantleState();
    void EndParkour();
    void BeginParkour();
}; // Size: 0x1b8
#pragma pack(pop)
}
