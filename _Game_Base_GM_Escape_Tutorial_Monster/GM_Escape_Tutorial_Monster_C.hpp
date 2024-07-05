#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Base_GM_Escape\GM_Escape_C.hpp"
namespace _Game_Player_Huggy_BP_NetworkHuggy {
struct BP_NetworkHuggy_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Base_GM_Escape_Tutorial_Monster {
#pragma pack(push, 1)
struct GM_Escape_Tutorial_Monster_C : public _Game_Base_GM_Escape::GM_Escape_C {
    private: char pad_480[0x20]; public:
    void* get_UberGraphFrame0();
    _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C*& get_Huggy();
    void* get_WaitForHuggy_Timer();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveTick0(float DeltaSeconds);
    void ReceiveBeginPlay0();
    void StartEarlyDepartureTimer0();
    void K2_OnSetMatchState(void* NewState);
    void ExecuteUbergraph_GM_Escape_Tutorial_Monster(int32_t EntryPoint);
}; // Size: 0x4a0
#pragma pack(pop)
}
