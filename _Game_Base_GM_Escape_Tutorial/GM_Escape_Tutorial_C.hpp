#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Base_GM_Escape\GM_Escape_C.hpp"
namespace _Game_Gameplay_Game_ToyData_BP_ToyMachine {
struct BP_ToyMachine_C;
}
namespace _Game_Gameplay_Game_BP_Train {
struct BP_Train_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Base_GM_Escape_Tutorial {
#pragma pack(push, 1)
struct GM_Escape_Tutorial_C : public _Game_Base_GM_Escape::GM_Escape_C {
    private: char pad_480[0x20]; public:
    void* get_UberGraphFrame0();
    _Game_Gameplay_Game_ToyData_BP_ToyMachine::BP_ToyMachine_C*& get_ToyMachine();
    int32_t& get_ToyPartsCollectedOnBeginPlay();
    _Game_Gameplay_Game_BP_Train::BP_Train_C*& get_Train();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay0();
    void StartEarlyDepartureTimer0();
    void K2_OnSetMatchState(void* NewState);
    void ReceiveTick0(float DeltaSeconds);
    void Time_Ran_Out0();
    void Start_NewGameTimer0();
    void ExecuteUbergraph_GM_Escape_Tutorial(int32_t EntryPoint);
}; // Size: 0x4a0
#pragma pack(pop)
}
