#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_AINetworkCharacter {
#pragma pack(push, 1)
struct BP_AINetworkCharacter_C : public _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C {
    private: char pad_e30[0x10]; public:
    void* get_UberGraphFrame0();
    static _Script_CoreUObject::Class* static_class();
    void SetGeneralVisibility0(bool FirstPerson_, bool VisibleToOthers_);
    void Func_extractedFromWuggyHole0();
    void Func_imprisonedInWuggyHole0();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_AINetworkCharacter(int32_t EntryPoint);
}; // Size: 0xe40
#pragma pack(pop)
}
