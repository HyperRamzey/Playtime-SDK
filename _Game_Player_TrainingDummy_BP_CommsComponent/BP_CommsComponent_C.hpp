#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor {
struct BP_NavBaseActor_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_TrainingDummy_BP_CommsComponent {
#pragma pack(push, 1)
struct BP_CommsComponent_C : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x10]; public:
    void* get_UberGraphFrame();
    _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C*& get_Comm();
    static _Script_CoreUObject::Class* static_class();
    void MulticastSpawnComm(void* InputPin, _Script_CoreUObject::Vector Spawn_Transform_Location);
    void DestroyComm();
    void ServerSpawnCommIndicator(void* Type, _Script_CoreUObject::Vector Spawn_Transform_Location);
    void ReceiveEndPlay0(void* EndPlayReason);
    void Print_Ping(void* Type);
    void ExecuteUbergraph_BP_CommsComponent(int32_t EntryPoint);
}; // Size: 0xc0
#pragma pack(pop)
}
