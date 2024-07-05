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
struct ANetworkCharacter;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct HidingSpot : public _Script_Engine::Actor {
    private: char pad_220[0xd0]; public:
    _Script_Engine::SceneComponent*& get_Enter();
    _Script_Engine::SceneComponent*& get_Hide();
    void* get_EnterLocation();
    void* get_HideLocation();
    _Script_Playtime_Multiplayer::ANetworkCharacter*& get_Player();
    void* get_NameInDataTable();
    bool get_UsingRootMotion();
    void set_UsingRootMotion(bool value);
    _Script_Engine::AnimMontage*& get_EnterPose();
    _Script_Engine::AnimMontage*& get_ExitPose();
    _Script_Engine::AnimMontage*& get_HidePose();
    _Script_Engine::AnimMontage*& get_MonsterInteractVacant();
    _Script_Engine::AnimMontage*& get_MonsterInteractOccupied();
    bool get_bHidingPlayer();
    void set_bHidingPlayer(bool value);
    bool get_MidTransition();
    void set_MidTransition(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SurvivorExitHide();
    void SurvivorEnterHide(_Script_Playtime_Multiplayer::ANetworkCharacter* PlayerChar);
    void BP_PlayObjectMontage(_Script_Engine::AnimMontage* Montage);
    void BP_ForceFirstPersonProne(bool setProne);
    void Authority_BeginInteraction_Implementation(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, bool& CanContinueInteraction, float& ContinueInteractionDuration);
}; // Size: 0x2f0
#pragma pack(pop)
}
