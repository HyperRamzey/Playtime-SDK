#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Base_GS_Escape\GS_Escape_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Base_GS_Escape_Tutorial {
#pragma pack(push, 1)
struct GS_Escape_Tutorial_C : public _Game_Base_GS_Escape::GS_Escape_C {
    private: char pad_4a0[0x28]; public:
    void* get_UberGraphFrame0();
    void* get_AllCharacters();
    void* get_EndLevel();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay0();
    void EndGame0();
    void OnEndGame0(void* HeadingText, void* SubheadingText, bool GivePoints_, void* PlayerType);
    void CheckEndConditions0();
    void End_Level_Override();
    void ExecuteUbergraph_GS_Escape_Tutorial(int32_t EntryPoint);
    void EndLevel__DelegateSignature();
}; // Size: 0x4c8
#pragma pack(pop)
}
