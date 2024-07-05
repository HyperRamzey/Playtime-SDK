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
namespace _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Grabpacks_Animations_ABP_GrabpackPuzzlePillarAB {
#pragma pack(push, 1)
struct ABP_GrabpackPuzzlePillarAB_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x780]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_CopyPoseFromMesh();
    void* get_AnimGraphNode_ModifyBone_4();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_ModifyBone_3();
    void* get_AnimGraphNode_ModifyBone_2();
    void* get_AnimGraphNode_ModifyBone_1();
    void* get_AnimGraphNode_ModifyBone();
    float& get_Timer();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrabpackPuzzlePillarAB_AnimGraphNode_ModifyBone_2A395734499D56CF36C7608C942CF048();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrabpackPuzzlePillarAB_AnimGraphNode_ModifyBone_BD35D9F44D675B91D05B9F8733489582();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrabpackPuzzlePillarAB_AnimGraphNode_ModifyBone_95D646B7408ACA0E68E38AB27DDDC77E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrabpackPuzzlePillarAB_AnimGraphNode_ModifyBone_7312269640DF4FE7F3B6899E774F0B77();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrabpackPuzzlePillarAB_AnimGraphNode_ModifyBone_AECDE44C4988AFCCF26D5E97E7AF1C07();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void ExecuteUbergraph_ABP_GrabpackPuzzlePillarAB(int32_t EntryPoint);
}; // Size: 0xa40
#pragma pack(pop)
}
