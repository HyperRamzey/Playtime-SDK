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
namespace _Game_World_Geometry_Characters_PlayerCharacter_Cosmetics_Grabpacks_Animations_ABP_GrabpackMakeAFriend {
#pragma pack(push, 1)
struct ABP_GrabpackMakeAFriend_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x1b00]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_CopyPoseFromMesh();
    void* get_AnimGraphNode_LookAt_5();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_LookAt_4();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_LookAt_3();
    void* get_AnimGraphNode_LookAt_2();
    void* get_AnimGraphNode_LookAt_1();
    void* get_AnimGraphNode_LookAt();
    void* get_AnimGraphNode_ModifyBone_5();
    void* get_AnimGraphNode_ModifyBone_4();
    void* get_AnimGraphNode_ModifyBone_3();
    void* get_AnimGraphNode_ModifyBone_2();
    void* get_AnimGraphNode_ModifyBone_1();
    void* get_AnimGraphNode_ModifyBone();
    void* get_AnimGraphNode_RigidBody();
    void* get_Camera_Location();
    float& get_Eye_Aim_Multiplier();
    float& get_Timer();
    void* get_Spring_State();
    float& get_Eyelid_Lerp();
    float& get_Delta_Time_X();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrabpackMakeAFriend_AnimGraphNode_ModifyBone_839E4D4A48B02C8397A591A1D59CB4F4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrabpackMakeAFriend_AnimGraphNode_ModifyBone_1DC45D65401EFCCE1B02EEA3CEE05DB6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrabpackMakeAFriend_AnimGraphNode_ModifyBone_206E94EF43CFFB1864F6348C33AC1A40();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrabpackMakeAFriend_AnimGraphNode_ModifyBone_896BB7AD465035921CB2FFB2EC09AB9D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrabpackMakeAFriend_AnimGraphNode_ModifyBone_0D4466F9457FCFBD5963619E38075B6D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrabpackMakeAFriend_AnimGraphNode_ModifyBone_86F7D10C4ACC55B94B86F38F11D6E26D();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void ExecuteUbergraph_ABP_GrabpackMakeAFriend(int32_t EntryPoint);
}; // Size: 0x1dc0
#pragma pack(pop)
}
