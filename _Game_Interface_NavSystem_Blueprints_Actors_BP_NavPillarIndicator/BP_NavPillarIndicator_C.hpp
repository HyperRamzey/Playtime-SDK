#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor\BP_NavBaseActor_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavPillarIndicator {
#pragma pack(push, 1)
struct BP_NavPillarIndicator_C : public _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C {
    private: char pad_240[0x8]; public:
    void* get_UberGraphFrame0();
    static _Script_CoreUObject::Class* static_class();
    void Sabotage0();
    void SetNumActive(int32_t NumActive, int32_t OutOf);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_NavPillarIndicator(int32_t EntryPoint);
}; // Size: 0x248
#pragma pack(pop)
}
