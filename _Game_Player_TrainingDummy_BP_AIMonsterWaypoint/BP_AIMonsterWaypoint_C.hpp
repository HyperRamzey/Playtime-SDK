#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Player_TrainingDummy_BP_AIControllerWaypoint\BP_AIControllerWaypoint_C.hpp"
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_TrainingDummy_BP_AIMonsterWaypoint {
#pragma pack(push, 1)
struct BP_AIMonsterWaypoint_C : public _Game_Player_TrainingDummy_BP_AIControllerWaypoint::BP_AIControllerWaypoint_C {
    private: char pad_250[0x8]; public:
    _Script_Engine::BillboardComponent*& get_Billboard();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x258
#pragma pack(pop)
}
