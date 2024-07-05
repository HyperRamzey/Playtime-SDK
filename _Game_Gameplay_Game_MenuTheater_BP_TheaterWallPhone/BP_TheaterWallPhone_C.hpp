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
struct BoxComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Game_MenuTheater_BP_TheaterWallPhone {
#pragma pack(push, 1)
struct BP_TheaterWallPhone_C : public _Script_Engine::Actor {
    private: char pad_220[0x30]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SkeletalMeshComponent*& get_SK_WallPhone1();
    _Script_Engine::BoxComponent*& get_Box1();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::SkeletalMeshComponent*& get_SK_WallPhone();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveActorBeginCursorOver0();
    void ReceiveActorEndCursorOver0();
    void Clicked();
    void ExecuteUbergraph_BP_TheaterWallPhone(int32_t EntryPoint);
}; // Size: 0x250
#pragma pack(pop)
}
