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
namespace _Game_Gameplay_Testing_BP_ScaleHuggy {
#pragma pack(push, 1)
struct BP_ScaleHuggy_C : public _Script_Engine::Actor {
    private: char pad_220[0x10]; public:
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh1();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x230
#pragma pack(pop)
}
