#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel\BP_MP_HandPanel_C.hpp"
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Gameplay_Game_BP_Train {
struct BP_Train_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Gameplay_Puzzles_Triggers_BP_TrainCall {
#pragma pack(push, 1)
struct BP_TrainCall_C : public _Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C {
    private: char pad_2b8[0x30]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::SphereComponent*& get_Sphere();
    _Game_Gameplay_Game_BP_Train::BP_Train_C*& get_Train();
    bool get_Active();
    void set_Active(bool value);
    int32_t& get_Station();
    void* get_Train_Travel_Timer_Handle();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_WaitingPlayer();
    static _Script_CoreUObject::Class* static_class();
    void Highlight();
    void OnRep_Active();
    void ReceiveBeginPlay();
    void ToggleActive();
    void PanelActivated();
    void IsPlayerNearby();
    void ReceiveActorEndOverlap(_Script_Engine::Actor* OtherActor);
    void CheckIfTrainArrived();
    void ExecuteUbergraph_BP_TrainCall(int32_t EntryPoint);
}; // Size: 0x2e8
#pragma pack(pop)
}
