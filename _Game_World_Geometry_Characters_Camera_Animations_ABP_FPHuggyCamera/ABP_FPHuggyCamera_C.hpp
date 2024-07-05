#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Game_World_Geometry_Characters_Camera_Animations_ABP_FPHuggyCamera {
#pragma pack(push, 1)
struct ABP_FPHuggyCamera_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x100]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_Slot();
    void* get_AnimGraphNode_SequencePlayer();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void Play_Montage(_Script_Engine::AnimMontage* MontageToPlay);
    void ExecuteUbergraph_ABP_FPHuggyCamera(int32_t EntryPoint);
}; // Size: 0x3c0
#pragma pack(pop)
}
