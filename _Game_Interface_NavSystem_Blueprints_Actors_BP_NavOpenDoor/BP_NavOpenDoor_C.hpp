#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor\BP_NavBaseActor_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavOpenDoor {
#pragma pack(push, 1)
struct BP_NavOpenDoor_C : public _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C {
    private: char pad_240[0x10]; public:
    void* get_UberGraphFrame0();
    float& get_LifeTime();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_NavOpenDoor(int32_t EntryPoint);
}; // Size: 0x250
#pragma pack(pop)
}
