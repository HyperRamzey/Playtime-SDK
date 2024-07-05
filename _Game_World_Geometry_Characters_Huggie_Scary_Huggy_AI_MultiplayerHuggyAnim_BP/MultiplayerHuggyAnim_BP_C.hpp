#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_Huggy_BP_NetworkHuggy {
struct BP_NetworkHuggy_C;
}
namespace _Script_Engine {
struct PoseLink;
}
namespace _Game_World_Geometry_Characters_Huggie_Scary_Huggy_AI_MultiplayerHuggyAnim_BP {
#pragma pack(push, 1)
struct MultiplayerHuggyAnim_BP_C : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x7d0]; public:
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root();
    void* get_AnimGraphNode_TransitionResult_1();
    void* get_AnimGraphNode_TransitionResult();
    void* get_AnimGraphNode_SequencePlayer();
    void* get_AnimGraphNode_StateResult_1();
    void* get_AnimGraphNode_BlendSpacePlayer();
    void* get_AnimGraphNode_StateResult();
    void* get_AnimGraphNode_StateMachine();
    void* get_AnimGraphNode_SaveCachedPose();
    void* get_AnimGraphNode_UseCachedPose_1();
    void* get_AnimGraphNode_Slot();
    void* get_AnimGraphNode_LayeredBoneBlend();
    void* get_AnimGraphNode_UseCachedPose();
    void* get_AnimGraphNode_RotateRootBone();
    void* get_AnimGraphNode_LocalToComponentSpace();
    void* get_AnimGraphNode_ComponentToLocalSpace();
    void* get_AnimGraphNode_ModifyBone();
    float& get_Speed();
    float& get_Target_Root_Rotation();
    _Script_Engine::Pawn*& get_Pawn();
    float& get_Actor_Rotation();
    float& get_Root_Rotation();
    float& get_Delta_Time_X();
    _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C*& get_Network_Huggy();
    float& get_PreviousSpeed();
    float& get_Root_Rotation_Offset();
    float& get_Look_Pitch();
    static _Script_CoreUObject::Class* static_class();
    void AnimGraph(_Script_Engine::PoseLink& AnimGraph);
    void DebugMovementSpeed();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MultiplayerHuggyAnim_BP_AnimGraphNode_TransitionResult_C8057C964F0CC8F249D099B6C733D168();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MultiplayerHuggyAnim_BP_AnimGraphNode_TransitionResult_DB092B6A4E4415F79207D28B0B15350D();
    void StartAttackAnimation();
    void AnimNotify_Footstep();
    void AnimNotify_WalkFootstep();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_MultiplayerHuggyAnim_BP_AnimGraphNode_ModifyBone_472F7E8E451DF30EABBCAAB445D9D91A();
    void ExecuteUbergraph_MultiplayerHuggyAnim_BP(int32_t EntryPoint);
}; // Size: 0xa90
#pragma pack(pop)
}
