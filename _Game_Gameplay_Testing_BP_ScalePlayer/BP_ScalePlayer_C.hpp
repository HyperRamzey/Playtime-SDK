#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Testing_BP_ScalePlayer {
#pragma pack(push, 1)
struct BP_ScalePlayer_C : public _Script_Engine::Actor {
    private: char pad_220[0x18]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_ScalePlayer(int32_t EntryPoint);
}; // Size: 0x238
#pragma pack(pop)
}
