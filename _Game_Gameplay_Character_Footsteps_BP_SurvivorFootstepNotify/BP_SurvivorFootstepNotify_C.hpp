#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotify.hpp"
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Game_Gameplay_Character_Footsteps_BP_SurvivorFootstepNotify {
#pragma pack(push, 1)
struct BP_SurvivorFootstepNotify_C : public _Script_Engine::AnimNotify {
    private: char pad_38[0x10]; public:
    _Script_Engine::SoundBase*& get_Sound();
    void* get_BoneToTrace();
    static _Script_CoreUObject::Class* static_class();
    bool Not_FPS_Legs(_Script_CoreUObject::Object* Mesh);
    bool Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation);
}; // Size: 0x48
#pragma pack(pop)
}
