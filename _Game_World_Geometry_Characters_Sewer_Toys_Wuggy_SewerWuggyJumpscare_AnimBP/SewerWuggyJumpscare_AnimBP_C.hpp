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
struct PoseLink;
}
namespace _Game_World_Geometry_Characters_Sewer_Toys_Wuggy_SewerWuggyJumpscare_AnimBP {
#pragma pack(push, 1)
struct SewerWuggyJumpscare_AnimBP_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x210]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_ModifyBone();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    float& get_Jumping_Alpha();
    bool get_Jumpscare();
    void set_Jumpscare(bool value);
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_SewerWuggyJumpscare_AnimBP_AnimGraphNode_SequencePlayer_2EA87C2B4C4FC41125E5079EF8910576();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void ExecuteUbergraph_SewerWuggyJumpscare_AnimBP(int32_t EntryPoint);
}; // Size: 0x4d0
#pragma pack(pop)
}
