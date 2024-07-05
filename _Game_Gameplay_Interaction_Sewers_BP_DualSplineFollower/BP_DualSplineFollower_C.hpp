#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\DualSplineFollower.hpp"
namespace _Game_Gameplay_Interaction_Sewers_BP_WuggyHole {
struct BP_WuggyHole_C;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance {
struct BP_WormholeEntrance_C;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_PseudoHand {
struct BP_PseudoHand_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower {
#pragma pack(push, 1)
struct BP_DualSplineFollower_C : public _Script_Playtime_Multiplayer::DualSplineFollower {
    private: char pad_268[0x50]; public:
    void* get_UberGraphFrame();
    void* get_State();
    _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C*& get_WuggyHoleRef();
    _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C*& get_WormHole();
    _Game_Gameplay_Interaction_Sewers_BP_PseudoHand::BP_PseudoHand_C*& get_Pseudo_Hand();
    float& get_ReviveTime();
    void* get_FinishedMoving_Dispatch();
    bool get_MonsterSpawnedThisOne();
    void set_MonsterSpawnedThisOne(bool value);
    float& get_EnteringTime();
    bool get_IsSpawnedToRevive();
    void set_IsSpawnedToRevive(bool value);
    static _Script_CoreUObject::Class* static_class();
    void IsAvailable(bool& Available);
    void ReceiveBeginPlay();
    void Transition_State(void* State);
    void Event_FinishedMoving(_Script_Engine::Actor* Caller);
    void To_Exiting();
    void Multicast_PlaySuccessSound();
    void To_Idle();
    void To_Entering();
    void ExecuteUbergraph_BP_DualSplineFollower(int32_t EntryPoint);
    void FinishedMoving_Dispatch__DelegateSignature();
}; // Size: 0x2b8
#pragma pack(pop)
}
