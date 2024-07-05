#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_Huggy_BP_HuggyJumpscare {
#pragma pack(push, 1)
struct BP_HuggyJumpscare_C : public _Script_Engine::Actor {
    private: char pad_220[0x18]; public:
    _Script_Engine::SceneComponent*& get_LookAtScene();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x238
#pragma pack(pop)
}
