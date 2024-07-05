#include "..\FUObjectArray.hpp"
#include "..\_Game_Player_Huggy_BP_NetworkHuggy\BP_NetworkHuggy_C.hpp"
#include "ABP_NetworkHuggy_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_7() {
    return (void*)((uintptr_t)this + 0x2378);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_Slot_4() {
    return (void*)((uintptr_t)this + 0xd00);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_ControlRig_2() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_15() {
    return (void*)((uintptr_t)this + 0x2238);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_ControlRig_1() {
    return (void*)((uintptr_t)this + 0x630);
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    return;
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_ControlRig() {
    return (void*)((uintptr_t)this + 0x998);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose() {
    return (void*)((uintptr_t)this + 0x4ed8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateResult_6() {
    return (void*)((uintptr_t)this + 0x2bc8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SaveCachedPose_9() {
    return (void*)((uintptr_t)this + 0xe10);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TwoWayBlend_4() {
    return (void*)((uintptr_t)this + 0xd48);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_10() {
    return (void*)((uintptr_t)this + 0x2300);
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::set_Is_Bashing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5184 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5184 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_33() {
    return (void*)((uintptr_t)this + 0xf68);
}
float& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Turn_Explicit() {
    return *(float*)((uintptr_t)this + 0x5178);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_LayeredBoneBlend_2() {
    return (void*)((uintptr_t)this + 0x3ed0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequencePlayer_11() {
    return (void*)((uintptr_t)this + 0xfb8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_32() {
    return (void*)((uintptr_t)this + 0xf90);
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::set_Is_Jumpscare_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5172 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5172 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SaveCachedPose_6() {
    return (void*)((uintptr_t)this + 0x1800);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult() {
    return (void*)((uintptr_t)this + 0x4e00);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateResult_14() {
    return (void*)((uintptr_t)this + 0x1038);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateResult_10() {
    return (void*)((uintptr_t)this + 0x25a0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_17() {
    return (void*)((uintptr_t)this + 0x1068);
}
float& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Turn_Weight() {
    return *(float*)((uintptr_t)this + 0x514c);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_16() {
    return (void*)((uintptr_t)this + 0x1610);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateResult_13() {
    return (void*)((uintptr_t)this + 0x1090);
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::set_Is_Falling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5173 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5173 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_ModifyBone() {
    return (void*)((uintptr_t)this + 0x42a0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_Slot_3() {
    return (void*)((uintptr_t)this + 0x19a8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateMachine_2() {
    return (void*)((uintptr_t)this + 0x10c0);
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::Play_Emote(int32_t Table_Index) {
    return;
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateResult() {
    return (void*)((uintptr_t)this + 0x4f00);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_LayeredBoneBlend_4() {
    return (void*)((uintptr_t)this + 0x3b68);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_BlendSpacePlayer_2() {
    return (void*)((uintptr_t)this + 0x1170);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SaveCachedPose_4() {
    return (void*)((uintptr_t)this + 0x3570);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SaveCachedPose_8() {
    return (void*)((uintptr_t)this + 0x1258);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_BlendSpacePlayer_1() {
    return (void*)((uintptr_t)this + 0x13b0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_ComponentToLocalSpace_1() {
    return (void*)((uintptr_t)this + 0x1498);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateResult_1() {
    return (void*)((uintptr_t)this + 0x4ea8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_3() {
    return (void*)((uintptr_t)this + 0x3af8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TwoWayBlend_2() {
    return (void*)((uintptr_t)this + 0x1ef0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SaveCachedPose_7() {
    return (void*)((uintptr_t)this + 0x14b8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_LocalToComponentSpace_1() {
    return (void*)((uintptr_t)this + 0x1638);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateResult_8() {
    return (void*)((uintptr_t)this + 0x2988);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_ModifyBone_1() {
    return (void*)((uintptr_t)this + 0x1658);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_RotateRootBone() {
    return (void*)((uintptr_t)this + 0x1760);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequencePlayer_1() {
    return (void*)((uintptr_t)this + 0x4e28);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_24() {
    return (void*)((uintptr_t)this + 0x20d0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_15() {
    return (void*)((uintptr_t)this + 0x1958);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_31() {
    return (void*)((uintptr_t)this + 0x1fb8);
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::ExecuteUbergraph_ABP_NetworkHuggy(int32_t EntryPoint) {
    return;
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TwoWayBlend() {
    return (void*)((uintptr_t)this + 0x3f90);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_14() {
    return (void*)((uintptr_t)this + 0x1980);
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkHuggy_AnimGraphNode_TransitionResult_A48B36B2427F1AEE09DBF5A6888F5592() {
    return;
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_LayeredBoneBlend_12() {
    return (void*)((uintptr_t)this + 0x19f0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_MakeDynamicAdditive() {
    return (void*)((uintptr_t)this + 0x3d10);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TwoWayBlend_1() {
    return (void*)((uintptr_t)this + 0x34a8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_LayeredBoneBlend_11() {
    return (void*)((uintptr_t)this + 0x1ab0);
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::set_Is_Locally_Controlled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x517c + 0);
    *(uint8_t*)((uintptr_t)this + 0x517c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_13() {
    return (void*)((uintptr_t)this + 0x1b70);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_19() {
    return (void*)((uintptr_t)this + 0x2198);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_12() {
    return (void*)((uintptr_t)this + 0x1b98);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_20() {
    return (void*)((uintptr_t)this + 0x2170);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_BlendBoneByChannel_1() {
    return (void*)((uintptr_t)this + 0x1bc0);
}
float& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Previous_Smoothed_Root_Rotation() {
    return *(float*)((uintptr_t)this + 0x5144);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_22() {
    return (void*)((uintptr_t)this + 0x2120);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_LayeredBoneBlend_10() {
    return (void*)((uintptr_t)this + 0x1c28);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_11() {
    return (void*)((uintptr_t)this + 0x26a8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequenceEvaluator_12() {
    return (void*)((uintptr_t)this + 0x1ce8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TwoWayBlend_3() {
    return (void*)((uintptr_t)this + 0x1d38);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_14() {
    return (void*)((uintptr_t)this + 0x2260);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_6() {
    return (void*)((uintptr_t)this + 0x23a0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequenceEvaluator_11() {
    return (void*)((uintptr_t)this + 0x1e00);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequenceEvaluator_10() {
    return (void*)((uintptr_t)this + 0x1e50);
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkHuggy_AnimGraphNode_TransitionResult_869731694E8B5A25AE882C92D0BD6A01() {
    return;
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequenceEvaluator_9() {
    return (void*)((uintptr_t)this + 0x1ea0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_13() {
    return (void*)((uintptr_t)this + 0x2288);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_LayeredBoneBlend_9() {
    return (void*)((uintptr_t)this + 0x2848);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_30() {
    return (void*)((uintptr_t)this + 0x1fe0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_29() {
    return (void*)((uintptr_t)this + 0x2008);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateResult_2() {
    return (void*)((uintptr_t)this + 0x2e00);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_28() {
    return (void*)((uintptr_t)this + 0x2030);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_10() {
    return (void*)((uintptr_t)this + 0x2820);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_27() {
    return (void*)((uintptr_t)this + 0x2058);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_LayeredBoneBlend_8() {
    return (void*)((uintptr_t)this + 0x29b8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_26() {
    return (void*)((uintptr_t)this + 0x2080);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_4() {
    return (void*)((uintptr_t)this + 0x2680);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_25() {
    return (void*)((uintptr_t)this + 0x20a8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequenceEvaluator_3() {
    return (void*)((uintptr_t)this + 0x3c28);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_23() {
    return (void*)((uintptr_t)this + 0x20f8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_21() {
    return (void*)((uintptr_t)this + 0x2148);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_BoneDrivenController_5() {
    return (void*)((uintptr_t)this + 0x4580);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_18() {
    return (void*)((uintptr_t)this + 0x21c0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_17() {
    return (void*)((uintptr_t)this + 0x21e8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_ApplyAdditive() {
    return (void*)((uintptr_t)this + 0x3e08);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_16() {
    return (void*)((uintptr_t)this + 0x2210);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_12() {
    return (void*)((uintptr_t)this + 0x22b0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_11() {
    return (void*)((uintptr_t)this + 0x22d8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_9() {
    return (void*)((uintptr_t)this + 0x2328);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_8() {
    return (void*)((uintptr_t)this + 0x2350);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_5() {
    return (void*)((uintptr_t)this + 0x23c8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequencePlayer_10() {
    return (void*)((uintptr_t)this + 0x23f0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateResult_12() {
    return (void*)((uintptr_t)this + 0x2470);
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkHuggy_AnimGraphNode_ControlRig_D7C988D842AA413D80A54C92B4B01617() {
    return;
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequenceEvaluator_8() {
    return (void*)((uintptr_t)this + 0x24a0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateResult_11() {
    return (void*)((uintptr_t)this + 0x24f0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_LayeredBoneBlend_1() {
    return (void*)((uintptr_t)this + 0x43a8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequencePlayer_9() {
    return (void*)((uintptr_t)this + 0x2520);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateMachine() {
    return (void*)((uintptr_t)this + 0x4f30);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequencePlayer_8() {
    return (void*)((uintptr_t)this + 0x25d0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateResult_9() {
    return (void*)((uintptr_t)this + 0x2650);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_ApplyAdditive_1() {
    return (void*)((uintptr_t)this + 0x26d0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_MakeDynamicAdditive_1() {
    return (void*)((uintptr_t)this + 0x2798);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequenceEvaluator_7() {
    return (void*)((uintptr_t)this + 0x27d0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequencePlayer_7() {
    return (void*)((uintptr_t)this + 0x2908);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequencePlayer_6() {
    return (void*)((uintptr_t)this + 0x2a78);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_9() {
    return (void*)((uintptr_t)this + 0x2af8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateResult_7() {
    return (void*)((uintptr_t)this + 0x2b20);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_3() {
    return (void*)((uintptr_t)this + 0x2b50);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequenceEvaluator_6() {
    return (void*)((uintptr_t)this + 0x2b78);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequencePlayer_5() {
    return (void*)((uintptr_t)this + 0x2bf8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateResult_5() {
    return (void*)((uintptr_t)this + 0x2c78);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_2() {
    return (void*)((uintptr_t)this + 0x2ca8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequencePlayer_4() {
    return (void*)((uintptr_t)this + 0x2cd0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateResult_4() {
    return (void*)((uintptr_t)this + 0x2d50);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_8() {
    return (void*)((uintptr_t)this + 0x2d80);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateResult_3() {
    return (void*)((uintptr_t)this + 0x2da8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_7() {
    return (void*)((uintptr_t)this + 0x2dd8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_StateMachine_1() {
    return (void*)((uintptr_t)this + 0x2e30);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SaveCachedPose_5() {
    return (void*)((uintptr_t)this + 0x2ee0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequencePlayer_3() {
    return (void*)((uintptr_t)this + 0x3038);
}
float& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Crouch_Weight() {
    return *(float*)((uintptr_t)this + 0x5158);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequencePlayer_2() {
    return (void*)((uintptr_t)this + 0x30b8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_LayeredBoneBlend_7() {
    return (void*)((uintptr_t)this + 0x3138);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequenceEvaluator_5() {
    return (void*)((uintptr_t)this + 0x31f8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequenceEvaluator_4() {
    return (void*)((uintptr_t)this + 0x3248);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_LayeredBoneBlend_6() {
    return (void*)((uintptr_t)this + 0x3298);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_BlendSpacePlayer() {
    return (void*)((uintptr_t)this + 0x3358);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_BlendBoneByChannel() {
    return (void*)((uintptr_t)this + 0x3440);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SaveCachedPose_3() {
    return (void*)((uintptr_t)this + 0x36c8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_6() {
    return (void*)((uintptr_t)this + 0x3820);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_Slot_2() {
    return (void*)((uintptr_t)this + 0x3848);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_5() {
    return (void*)((uintptr_t)this + 0x3890);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_LayeredBoneBlend_5() {
    return (void*)((uintptr_t)this + 0x38b8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SaveCachedPose_2() {
    return (void*)((uintptr_t)this + 0x3978);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_4() {
    return (void*)((uintptr_t)this + 0x3ad0);
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkHuggy_AnimGraphNode_ControlRig_8DAE2AEA4B28CC80CCF5A882010C37A1() {
    return;
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_Slot_1() {
    return (void*)((uintptr_t)this + 0x3b20);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequenceEvaluator_2() {
    return (void*)((uintptr_t)this + 0x3c78);
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::AnimGraph(_Script_Engine::PoseLink& AnimGraph) {
    return;
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_Slot() {
    return (void*)((uintptr_t)this + 0x3cc8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_LayeredBoneBlend_3() {
    return (void*)((uintptr_t)this + 0x3d48);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequenceEvaluator_1() {
    return (void*)((uintptr_t)this + 0x4058);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequenceEvaluator() {
    return (void*)((uintptr_t)this + 0x40a8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SaveCachedPose_1() {
    return (void*)((uintptr_t)this + 0x40f8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_2() {
    return (void*)((uintptr_t)this + 0x4250);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_UseCachedPose_1() {
    return (void*)((uintptr_t)this + 0x4278);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_BoneDrivenController_6() {
    return (void*)((uintptr_t)this + 0x4468);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_BoneDrivenController_4() {
    return (void*)((uintptr_t)this + 0x4698);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_BoneDrivenController_3() {
    return (void*)((uintptr_t)this + 0x47b0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_BoneDrivenController_2() {
    return (void*)((uintptr_t)this + 0x48c8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_BoneDrivenController_1() {
    return (void*)((uintptr_t)this + 0x49e0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_BoneDrivenController() {
    return (void*)((uintptr_t)this + 0x4af8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_LocalToComponentSpace() {
    return (void*)((uintptr_t)this + 0x4c10);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_ComponentToLocalSpace() {
    return (void*)((uintptr_t)this + 0x4c30);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_Root() {
    return (void*)((uintptr_t)this + 0x4c50);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SaveCachedPose() {
    return (void*)((uintptr_t)this + 0x4c80);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_TransitionResult_1() {
    return (void*)((uintptr_t)this + 0x4dd8);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_LayeredBoneBlend() {
    return (void*)((uintptr_t)this + 0x4fe0);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_AnimGraphNode_SequencePlayer() {
    return (void*)((uintptr_t)this + 0x50a0);
}
_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C*& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Network_Huggy() {
    return *(_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C**)((uintptr_t)this + 0x5120);
}
_Script_Engine::Pawn*& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Pawn() {
    return *(_Script_Engine::Pawn**)((uintptr_t)this + 0x5128);
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkHuggy_AnimGraphNode_TransitionResult_7ABAAD64440D789FDB6810A0B6B3E0EF() {
    return;
}
float& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Delta_Seconds() {
    return *(float*)((uintptr_t)this + 0x5130);
}
float& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Horizontal_Speed() {
    return *(float*)((uintptr_t)this + 0x5134);
}
float& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Vertical_Speed() {
    return *(float*)((uintptr_t)this + 0x5138);
}
float& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Target_Root_Rotation() {
    return *(float*)((uintptr_t)this + 0x513c);
}
float& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Root_Rotation() {
    return *(float*)((uintptr_t)this + 0x5140);
}
float& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Smoothed_Root_Rotation() {
    return *(float*)((uintptr_t)this + 0x5148);
}
float& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Root_Rotation_Offset() {
    return *(float*)((uintptr_t)this + 0x5150);
}
float& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Head_Pitch() {
    return *(float*)((uintptr_t)this + 0x5154);
}
float& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Backwards_Weight() {
    return *(float*)((uintptr_t)this + 0x515c);
}
float& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Smoothed_Horizontal_Speed() {
    return *(float*)((uintptr_t)this + 0x5160);
}
void* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Velocity() {
    return (void*)((uintptr_t)this + 0x5164);
}
bool _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Is_Charging() {
    return (*(uint8_t*)((uintptr_t)this + 0x5170 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::set_Is_Charging(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5170 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5170 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::set_Is_Sitting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5174 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5174 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Is_Moving() {
    return (*(uint8_t*)((uintptr_t)this + 0x5171 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::set_Is_Moving(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5171 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5171 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Is_Jumpscare_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x5172 + 0)) & 1 != 0;
}
bool _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Is_Falling() {
    return (*(uint8_t*)((uintptr_t)this + 0x5173 + 0)) & 1 != 0;
}
bool _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Is_Sitting() {
    return (*(uint8_t*)((uintptr_t)this + 0x5174 + 0)) & 1 != 0;
}
bool _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Is_Locally_Controlled() {
    return (*(uint8_t*)((uintptr_t)this + 0x517c + 0)) & 1 != 0;
}
bool _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Is_Dancing() {
    return (*(uint8_t*)((uintptr_t)this + 0x517d + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::set_Is_Dancing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x517d + 0);
    *(uint8_t*)((uintptr_t)this + 0x517d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Is_Carrying() {
    return (*(uint8_t*)((uintptr_t)this + 0x517e + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::set_Is_Carrying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x517e + 0);
    *(uint8_t*)((uintptr_t)this + 0x517e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Carrying_Weight() {
    return *(float*)((uintptr_t)this + 0x5180);
}
bool _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Is_Bashing() {
    return (*(uint8_t*)((uintptr_t)this + 0x5184 + 0)) & 1 != 0;
}
float& _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::get_Bashing_Weight() {
    return *(float*)((uintptr_t)this + 0x5188);
}
_Script_CoreUObject::Class* _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/World/Geometry/Characters/Huggy/Animations/ABP_NetworkHuggy.ABP_NetworkHuggy_C");
    return result;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkHuggy_AnimGraphNode_LayeredBoneBlend_2070EFC14D85A6229501AAAC25871A5F() {
    return;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkHuggy_AnimGraphNode_ModifyBone_3DDDF23A4F074B8D075AA39462F3F9EC() {
    return;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkHuggy_AnimGraphNode_TwoWayBlend_6F777FCF4A45354BAEE500876518D794() {
    return;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkHuggy_AnimGraphNode_ModifyBone_4FF1550E46DDD3AC44E3EE89412B3ECC() {
    return;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkHuggy_AnimGraphNode_TransitionResult_89094A9C411FFB76F5FFACA1B409597F() {
    return;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkHuggy_AnimGraphNode_TransitionResult_D1D9EA0A4BB1A9F3C1B6F3863E7CEC39() {
    return;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkHuggy_AnimGraphNode_TransitionResult_D62D25884CB8637E1805FD966375B2E4() {
    return;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkHuggy_AnimGraphNode_TransitionResult_FD8BF29848BA35AE94EE6F8F9BC7C14D() {
    return;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkHuggy_AnimGraphNode_TransitionResult_39B4EF374701BCD60945FDA1FC60F50D() {
    return;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkHuggy_AnimGraphNode_TransitionResult_D63551C74A10A1E3FE49CF9437D7C8FA() {
    return;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::Play_Attack_Animation() {
    return;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::BlueprintBeginPlay0() {
    return;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::Emote_Debug() {
    return;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::Play_Jumpscare_Animation() {
    return;
}
void _Game_World_Geometry_Characters_Huggy_Animations_ABP_NetworkHuggy::ABP_NetworkHuggy_C::Play_Bash_Animation() {
    return;
}
