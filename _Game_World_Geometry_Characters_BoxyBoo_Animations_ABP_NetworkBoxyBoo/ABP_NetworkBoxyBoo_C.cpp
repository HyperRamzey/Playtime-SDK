#include "..\FUObjectArray.hpp"
#include "..\_Game_Player_Boxy_BP_NetworkBoxy\BP_NetworkBoxy_C.hpp"
#include "ABP_NetworkBoxyBoo_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_35() {
    return (void*)((uintptr_t)this + 0x558);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose_14() {
    return (void*)((uintptr_t)this + 0x1510);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ModifyBone_2() {
    return (void*)((uintptr_t)this + 0x8078);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_16() {
    return (void*)((uintptr_t)this + 0x6520);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose_16() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_31() {
    return (void*)((uintptr_t)this + 0x1668);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_3() {
    return (void*)((uintptr_t)this + 0x8710);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_34() {
    return (void*)((uintptr_t)this + 0x5b0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_5() {
    return (void*)((uintptr_t)this + 0x72e0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_48() {
    return (void*)((uintptr_t)this + 0x530);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_19() {
    return (void*)((uintptr_t)this + 0x1a18);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BlendSpacePlayer_3() {
    return (void*)((uintptr_t)this + 0x420);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_23() {
    return (void*)((uintptr_t)this + 0x1110);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_49() {
    return (void*)((uintptr_t)this + 0x508);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_29() {
    return (void*)((uintptr_t)this + 0x580);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_18() {
    return (void*)((uintptr_t)this + 0x2c80);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_28() {
    return (void*)((uintptr_t)this + 0x5d8);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_BB370D2745CB6ACFDF673BA5AF2DF131() {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateMachine_7() {
    return (void*)((uintptr_t)this + 0x608);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_21() {
    return (void*)((uintptr_t)this + 0x1450);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LookAt_1B699AFD4A94E17495CA86AAB80C4C11() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::set_Is_Jumpscare_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8b2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8b2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BlendBoneByChannel() {
    return (void*)((uintptr_t)this + 0x7800);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_21() {
    return (void*)((uintptr_t)this + 0x6b8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose_15() {
    return (void*)((uintptr_t)this + 0x738);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_18() {
    return (void*)((uintptr_t)this + 0x22c8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ControlRig_15() {
    return (void*)((uintptr_t)this + 0x890);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_8E619E6241FE34685B0201B21EE10B27() {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ControlRig_14() {
    return (void*)((uintptr_t)this + 0xbf8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_1() {
    return (void*)((uintptr_t)this + 0xa370);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BlendBoneByChannel_1() {
    return (void*)((uintptr_t)this + 0x6fd8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_47() {
    return (void*)((uintptr_t)this + 0xf60);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::Play_Emote(int32_t Table_Index) {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_46() {
    return (void*)((uintptr_t)this + 0xf88);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LookAt_6() {
    return (void*)((uintptr_t)this + 0x9250);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_33() {
    return (void*)((uintptr_t)this + 0xfb0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_9() {
    return (void*)((uintptr_t)this + 0x4f48);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_27() {
    return (void*)((uintptr_t)this + 0xfd8);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::set_Is_Falling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_5() {
    return (void*)((uintptr_t)this + 0x6f88);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_32() {
    return (void*)((uintptr_t)this + 0x1008);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_9() {
    return (void*)((uintptr_t)this + 0x7040);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_26() {
    return (void*)((uintptr_t)this + 0x1030);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateMachine_6() {
    return (void*)((uintptr_t)this + 0x1060);
}
bool _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Arms_Inside_Box() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8a5 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_44() {
    return (void*)((uintptr_t)this + 0x19a0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ControlRig_8() {
    return (void*)((uintptr_t)this + 0x45a8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_20() {
    return (void*)((uintptr_t)this + 0x11d0);
}
bool _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Is_Charging_Launch() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8a7 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_3() {
    return (void*)((uintptr_t)this + 0x7eb0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_RotateRootBone() {
    return (void*)((uintptr_t)this + 0x1250);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequenceEvaluator_12() {
    return (void*)((uintptr_t)this + 0x1400);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequenceEvaluator_11() {
    return (void*)((uintptr_t)this + 0x4a80);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequenceEvaluator_13() {
    return (void*)((uintptr_t)this + 0x12f0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_22() {
    return (void*)((uintptr_t)this + 0x1340);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BlendSpaceEvaluator() {
    return (void*)((uintptr_t)this + 0x1690);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BlendListByBool_3() {
    return (void*)((uintptr_t)this + 0x1780);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose_13() {
    return (void*)((uintptr_t)this + 0x1820);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BoneDrivenController_4() {
    return (void*)((uintptr_t)this + 0xa6d0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_45() {
    return (void*)((uintptr_t)this + 0x1978);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateMachine() {
    return (void*)((uintptr_t)this + 0xa4c8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateMachine_3() {
    return (void*)((uintptr_t)this + 0x5148);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_43() {
    return (void*)((uintptr_t)this + 0x19c8);
}
bool _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Is_Player_Controlled() {
    return (*(uint8_t*)((uintptr_t)this + 0xb903 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_32() {
    return (void*)((uintptr_t)this + 0x4148);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_42() {
    return (void*)((uintptr_t)this + 0x19f0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_15() {
    return (void*)((uintptr_t)this + 0x3fc0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_25() {
    return (void*)((uintptr_t)this + 0x1a98);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_1() {
    return (void*)((uintptr_t)this + 0x97d0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ComponentToLocalSpace_9() {
    return (void*)((uintptr_t)this + 0x1ac8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ModifyBone_10() {
    return (void*)((uintptr_t)this + 0x1ae8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ModifyBone_9() {
    return (void*)((uintptr_t)this + 0x1bf0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ControlRig_10() {
    return (void*)((uintptr_t)this + 0x2d40);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LocalToComponentSpace_9() {
    return (void*)((uintptr_t)this + 0x1cf8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_10() {
    return (void*)((uintptr_t)this + 0x6758);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_22() {
    return (void*)((uintptr_t)this + 0x2ba0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ModifyBone_8() {
    return (void*)((uintptr_t)this + 0x1d18);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_20() {
    return (void*)((uintptr_t)this + 0x1e20);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_30() {
    return (void*)((uintptr_t)this + 0x1ee0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_29() {
    return (void*)((uintptr_t)this + 0x1f08);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_24() {
    return (void*)((uintptr_t)this + 0x1f30);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ControlRig_13() {
    return (void*)((uintptr_t)this + 0x1f60);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_1() {
    return (void*)((uintptr_t)this + 0x97f8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_7() {
    return (void*)((uintptr_t)this + 0x6080);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_23() {
    return (void*)((uintptr_t)this + 0x2348);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_27() {
    return (void*)((uintptr_t)this + 0x2a70);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose_10() {
    return (void*)((uintptr_t)this + 0x51f8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ControlRig_12() {
    return (void*)((uintptr_t)this + 0x2378);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_28() {
    return (void*)((uintptr_t)this + 0x26e0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ControlRig_11() {
    return (void*)((uintptr_t)this + 0x2708);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_19() {
    return (void*)((uintptr_t)this + 0x2a98);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_19() {
    return (void*)((uintptr_t)this + 0x4498);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_Slot_1() {
    return (void*)((uintptr_t)this + 0x2b58);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateMachine_5() {
    return (void*)((uintptr_t)this + 0x2bd0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LocalToComponentSpace_5() {
    return (void*)((uintptr_t)this + 0x8cd8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_7() {
    return (void*)((uintptr_t)this + 0x6f58);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_41() {
    return (void*)((uintptr_t)this + 0x30a8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_15() {
    return (void*)((uintptr_t)this + 0x4328);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_40() {
    return (void*)((uintptr_t)this + 0x30d0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_39() {
    return (void*)((uintptr_t)this + 0x30f8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_38() {
    return (void*)((uintptr_t)this + 0x3120);
}
float& _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Target_Root_Rotation() {
    return *(float*)((uintptr_t)this + 0xb888);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_3() {
    return (void*)((uintptr_t)this + 0x82d8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ComponentToLocalSpace_8() {
    return (void*)((uintptr_t)this + 0x3148);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ModifyBone_7() {
    return (void*)((uintptr_t)this + 0x3168);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ModifyBone_6() {
    return (void*)((uintptr_t)this + 0x3270);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LocalToComponentSpace_8() {
    return (void*)((uintptr_t)this + 0x3378);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ModifyBone_5() {
    return (void*)((uintptr_t)this + 0x3398);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Smoothed_Look_Position() {
    return (void*)((uintptr_t)this + 0xb8d8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_17() {
    return (void*)((uintptr_t)this + 0x34a0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_29() {
    return (void*)((uintptr_t)this + 0x41c0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_26() {
    return (void*)((uintptr_t)this + 0x3560);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_25() {
    return (void*)((uintptr_t)this + 0x3588);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_21() {
    return (void*)((uintptr_t)this + 0x35b0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_17() {
    return (void*)((uintptr_t)this + 0x35e0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer() {
    return (void*)((uintptr_t)this + 0xa3c0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_20() {
    return (void*)((uintptr_t)this + 0x3660);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_16() {
    return (void*)((uintptr_t)this + 0x3690);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_19() {
    return (void*)((uintptr_t)this + 0x3710);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ControlRig_3() {
    return (void*)((uintptr_t)this + 0x83a8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_10() {
    return (void*)((uintptr_t)this + 0x6610);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_16() {
    return (void*)((uintptr_t)this + 0x3740);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_24() {
    return (void*)((uintptr_t)this + 0x3800);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_23() {
    return (void*)((uintptr_t)this + 0x3828);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_18() {
    return (void*)((uintptr_t)this + 0x3850);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_16() {
    return (void*)((uintptr_t)this + 0x5060);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateMachine_4() {
    return (void*)((uintptr_t)this + 0x3880);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_72738A9F4B44FAF4D9F3CDA3293C7851() {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_36() {
    return (void*)((uintptr_t)this + 0x40a8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ControlRig_9() {
    return (void*)((uintptr_t)this + 0x3930);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose_12() {
    return (void*)((uintptr_t)this + 0x3c98);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_22() {
    return (void*)((uintptr_t)this + 0x3df0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose_11() {
    return (void*)((uintptr_t)this + 0x3e18);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_21() {
    return (void*)((uintptr_t)this + 0x3f70);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_20() {
    return (void*)((uintptr_t)this + 0x3f98);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_37() {
    return (void*)((uintptr_t)this + 0x4080);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_35() {
    return (void*)((uintptr_t)this + 0x40d0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_34() {
    return (void*)((uintptr_t)this + 0x40f8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_33() {
    return (void*)((uintptr_t)this + 0x4120);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::set_Is_Player_Controlled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb903 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb903 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BlendListByBool() {
    return (void*)((uintptr_t)this + 0x8ab8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_9() {
    return (void*)((uintptr_t)this + 0x6c58);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_31() {
    return (void*)((uintptr_t)this + 0x4170);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_2() {
    return (void*)((uintptr_t)this + 0x9400);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_30() {
    return (void*)((uintptr_t)this + 0x4198);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ComponentToLocalSpace_5() {
    return (void*)((uintptr_t)this + 0x8fb0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_28() {
    return (void*)((uintptr_t)this + 0x41e8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_27() {
    return (void*)((uintptr_t)this + 0x4210);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_8D996E644BEFFEE4DB4EC5B59CEAA81A() {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_26() {
    return (void*)((uintptr_t)this + 0x4238);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_25() {
    return (void*)((uintptr_t)this + 0x4260);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BlendListByBool_1() {
    return (void*)((uintptr_t)this + 0x8930);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_6() {
    return (void*)((uintptr_t)this + 0x66b0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_24() {
    return (void*)((uintptr_t)this + 0x4288);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_23() {
    return (void*)((uintptr_t)this + 0x42b0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_22() {
    return (void*)((uintptr_t)this + 0x42d8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_21() {
    return (void*)((uintptr_t)this + 0x4300);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_17() {
    return (void*)((uintptr_t)this + 0x43a8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_14() {
    return (void*)((uintptr_t)this + 0x43d8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_18() {
    return (void*)((uintptr_t)this + 0x44c0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Target_Grab_Hand_Position() {
    return (void*)((uintptr_t)this + 0xb86c);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_13() {
    return (void*)((uintptr_t)this + 0x44e8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_14() {
    return (void*)((uintptr_t)this + 0x4910);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_6() {
    return (void*)((uintptr_t)this + 0x8740);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_16() {
    return (void*)((uintptr_t)this + 0x4990);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_1085DB2E44A0FBD7AB1ACE9E5A687CA0() {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_12() {
    return (void*)((uintptr_t)this + 0x49c0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_13() {
    return (void*)((uintptr_t)this + 0x4ad0);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::ExecuteUbergraph_ABP_NetworkBoxyBoo(int32_t EntryPoint) {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequenceEvaluator() {
    return (void*)((uintptr_t)this + 0xad90);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose() {
    return (void*)((uintptr_t)this + 0xa470);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_15() {
    return (void*)((uintptr_t)this + 0x4b50);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_1CE61EE94C76D65F6A720EB123944D1E() {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_11() {
    return (void*)((uintptr_t)this + 0x4b80);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequenceEvaluator_10() {
    return (void*)((uintptr_t)this + 0x4c40);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequenceEvaluator_9() {
    return (void*)((uintptr_t)this + 0x4c90);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_14() {
    return (void*)((uintptr_t)this + 0x4ce0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_8() {
    return (void*)((uintptr_t)this + 0x6660);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_10() {
    return (void*)((uintptr_t)this + 0x4d10);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequenceEvaluator_8() {
    return (void*)((uintptr_t)this + 0x4dd0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_12() {
    return (void*)((uintptr_t)this + 0x4e20);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_13() {
    return (void*)((uintptr_t)this + 0x4ea0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ComponentToLocalSpace_4() {
    return (void*)((uintptr_t)this + 0x9128);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequenceEvaluator_4() {
    return (void*)((uintptr_t)this + 0x6e58);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_20() {
    return (void*)((uintptr_t)this + 0x4ed0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequenceEvaluator_7() {
    return (void*)((uintptr_t)this + 0x4ef8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_17() {
    return (void*)((uintptr_t)this + 0x5008);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_12() {
    return (void*)((uintptr_t)this + 0x5030);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_15() {
    return (void*)((uintptr_t)this + 0x6548);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BlendBoneByChannel_2() {
    return (void*)((uintptr_t)this + 0x5088);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_15() {
    return (void*)((uintptr_t)this + 0x50f0);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_283D54F94CD99C88F319F898E83DE12D() {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose_3() {
    return (void*)((uintptr_t)this + 0x8180);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequenceEvaluator_2() {
    return (void*)((uintptr_t)this + 0x7210);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_11() {
    return (void*)((uintptr_t)this + 0x5118);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ControlRig_7() {
    return (void*)((uintptr_t)this + 0x5350);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_74B1E00D426EF04A8CA27D81093E45D5() {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose_9() {
    return (void*)((uintptr_t)this + 0x56b8);
}
bool _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Hand_Launched() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8b1 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose_8() {
    return (void*)((uintptr_t)this + 0x5810);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BlendSpacePlayer_2() {
    return (void*)((uintptr_t)this + 0x5968);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose_7() {
    return (void*)((uintptr_t)this + 0x5a50);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BoneDrivenController_2() {
    return (void*)((uintptr_t)this + 0xae00);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_14() {
    return (void*)((uintptr_t)this + 0x5ba8);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::set_Is_Sitting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb901 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb901 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BlendListByBool_2() {
    return (void*)((uintptr_t)this + 0x5bd0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TwoWayBlend() {
    return (void*)((uintptr_t)this + 0xa260);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose_6() {
    return (void*)((uintptr_t)this + 0x5c70);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequenceEvaluator_6() {
    return (void*)((uintptr_t)this + 0x5dc8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_8() {
    return (void*)((uintptr_t)this + 0x5e18);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::Play_Attack_Animation(bool Left) {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_13() {
    return (void*)((uintptr_t)this + 0x5ed8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BoneDrivenController_1() {
    return (void*)((uintptr_t)this + 0xaf18);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_2() {
    return (void*)((uintptr_t)this + 0x9148);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_12() {
    return (void*)((uintptr_t)this + 0x5f00);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose_5() {
    return (void*)((uintptr_t)this + 0x5f28);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ControlRig_6() {
    return (void*)((uintptr_t)this + 0x6140);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_19() {
    return (void*)((uintptr_t)this + 0x64a8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_18() {
    return (void*)((uintptr_t)this + 0x64d0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_17() {
    return (void*)((uintptr_t)this + 0x64f8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ComponentToLocalSpace_2() {
    return (void*)((uintptr_t)this + 0x9aa0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_14() {
    return (void*)((uintptr_t)this + 0x6570);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ComponentToLocalSpace_6() {
    return (void*)((uintptr_t)this + 0x8058);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_13() {
    return (void*)((uintptr_t)this + 0x6598);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::Emote_Debug() {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BoneDrivenController() {
    return (void*)((uintptr_t)this + 0xb050);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_12() {
    return (void*)((uintptr_t)this + 0x65c0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_11() {
    return (void*)((uintptr_t)this + 0x65e8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LookAt_3() {
    return (void*)((uintptr_t)this + 0xb1a0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ControlRig_4() {
    return (void*)((uintptr_t)this + 0x7b20);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_9() {
    return (void*)((uintptr_t)this + 0x6638);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_7() {
    return (void*)((uintptr_t)this + 0x6688);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_11() {
    return (void*)((uintptr_t)this + 0x66d8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateMachine_2() {
    return (void*)((uintptr_t)this + 0x7918);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_11() {
    return (void*)((uintptr_t)this + 0x6788);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ControlRig_2() {
    return (void*)((uintptr_t)this + 0x9b10);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ControlRig_5() {
    return (void*)((uintptr_t)this + 0x67b0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_6() {
    return (void*)((uintptr_t)this + 0x6b18);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_10() {
    return (void*)((uintptr_t)this + 0x6bd8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ApplyAdditive_2() {
    return (void*)((uintptr_t)this + 0x6c88);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_1() {
    return (void*)((uintptr_t)this + 0xa440);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_MakeDynamicAdditive_2() {
    return (void*)((uintptr_t)this + 0x6d50);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_7() {
    return (void*)((uintptr_t)this + 0x7e88);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequenceEvaluator_5() {
    return (void*)((uintptr_t)this + 0x6d88);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LocalToComponentSpace_1() {
    return (void*)((uintptr_t)this + 0x9a80);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_9() {
    return (void*)((uintptr_t)this + 0x6dd8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_8() {
    return (void*)((uintptr_t)this + 0x6ea8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_8() {
    return (void*)((uintptr_t)this + 0x6ed8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BlendSpacePlayer() {
    return (void*)((uintptr_t)this + 0x89d0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_10() {
    return (void*)((uintptr_t)this + 0x6fb0);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_8CD2DC334B16FCF4B5FB9E876102F597() {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_6() {
    return (void*)((uintptr_t)this + 0x7068);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_4() {
    return (void*)((uintptr_t)this + 0x7098);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LookAt_7() {
    return (void*)((uintptr_t)this + 0x8de0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ApplyAdditive_1() {
    return (void*)((uintptr_t)this + 0x70c0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_Slot() {
    return (void*)((uintptr_t)this + 0xa328);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequenceEvaluator_3() {
    return (void*)((uintptr_t)this + 0x7188);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_MakeDynamicAdditive_1() {
    return (void*)((uintptr_t)this + 0x71d8);
}
float& _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Master_Sine() {
    return *(float*)((uintptr_t)this + 0xb87c);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_7() {
    return (void*)((uintptr_t)this + 0x7260);
}
float& _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Master_Timer() {
    return *(float*)((uintptr_t)this + 0xb878);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ComponentToLocalSpace_7() {
    return (void*)((uintptr_t)this + 0x73a0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LocalToComponentSpace_7() {
    return (void*)((uintptr_t)this + 0x73c0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ComponentToLocalSpace_1() {
    return (void*)((uintptr_t)this + 0xad70);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ModifyBone_4() {
    return (void*)((uintptr_t)this + 0x73e0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_6() {
    return (void*)((uintptr_t)this + 0x74e8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LocalToComponentSpace() {
    return (void*)((uintptr_t)this + 0xade0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_5() {
    return (void*)((uintptr_t)this + 0x7568);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ApplyAdditive() {
    return (void*)((uintptr_t)this + 0x7598);
}
float& _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Vertical_Speed() {
    return *(float*)((uintptr_t)this + 0xb8ac);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_4() {
    return (void*)((uintptr_t)this + 0x7660);
}
bool _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Is_Crouching() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8a4 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_5() {
    return (void*)((uintptr_t)this + 0x7720);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_MakeDynamicAdditive() {
    return (void*)((uintptr_t)this + 0x77a0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_8() {
    return (void*)((uintptr_t)this + 0x77d8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ModifyBone() {
    return (void*)((uintptr_t)this + 0xac68);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_4() {
    return (void*)((uintptr_t)this + 0x7868);
}
bool _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Is_Flipping() {
    return (*(uint8_t*)((uintptr_t)this + 0xb902 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_4() {
    return (void*)((uintptr_t)this + 0x78e8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose_4() {
    return (void*)((uintptr_t)this + 0x79c8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ModifyBone_3() {
    return (void*)((uintptr_t)this + 0x7f30);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LocalToComponentSpace_6() {
    return (void*)((uintptr_t)this + 0x8038);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_5A9F7069428CB195DA9F7CAF82DAF3CA() {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult_2() {
    return (void*)((uintptr_t)this + 0x8300);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_2() {
    return (void*)((uintptr_t)this + 0x8328);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::set_Moving_Horizontally(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb884 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb884 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult_2() {
    return (void*)((uintptr_t)this + 0x8768);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateMachine_1() {
    return (void*)((uintptr_t)this + 0x8798);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LookAt_0A4D7EA94B797D87CB6CA5BB4137D037() {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BlendSpacePlayer_1() {
    return (void*)((uintptr_t)this + 0x8848);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LookAt_2() {
    return (void*)((uintptr_t)this + 0xb350);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose_2() {
    return (void*)((uintptr_t)this + 0x8b58);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_BoneDrivenController_3() {
    return (void*)((uintptr_t)this + 0xab50);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_5() {
    return (void*)((uintptr_t)this + 0x8cb0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend_3() {
    return (void*)((uintptr_t)this + 0x8cf8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_4() {
    return (void*)((uintptr_t)this + 0x8db8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LocalToComponentSpace_4() {
    return (void*)((uintptr_t)this + 0x8f90);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose_1() {
    return (void*)((uintptr_t)this + 0x8fd0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_UseCachedPose_3() {
    return (void*)((uintptr_t)this + 0x9208);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LocalToComponentSpace_3() {
    return (void*)((uintptr_t)this + 0x9230);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::set_Head_Inside_Box(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8a6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8a6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LocalToComponentSpace_2() {
    return (void*)((uintptr_t)this + 0x9428);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ComponentToLocalSpace_3() {
    return (void*)((uintptr_t)this + 0x9448);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Current_Camera_Rotation() {
    return (void*)((uintptr_t)this + 0xb8b4);
}
bool _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Left_Foot_Last_Planted() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8b0 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LookAt_5() {
    return (void*)((uintptr_t)this + 0x9470);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::set_Is_Moving_Backwards(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8b3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8b3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LookAt_4() {
    return (void*)((uintptr_t)this + 0x9620);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::AnimNotify_PlantRightFoot() {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LayeredBoneBlend() {
    return (void*)((uintptr_t)this + 0x98b8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ComponentToLocalSpace() {
    return (void*)((uintptr_t)this + 0xb030);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ModifyBone_1() {
    return (void*)((uintptr_t)this + 0x9978);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequenceEvaluator_1() {
    return (void*)((uintptr_t)this + 0x9ac0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ControlRig_1() {
    return (void*)((uintptr_t)this + 0x9e78);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SequencePlayer_1() {
    return (void*)((uintptr_t)this + 0xa1e0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_TransitionResult() {
    return (void*)((uintptr_t)this + 0xa398);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_StateResult() {
    return (void*)((uintptr_t)this + 0xa498);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_SaveCachedPose() {
    return (void*)((uintptr_t)this + 0xa578);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_BlendListByBool_9ED0C2C74ECDB52764E28CAD1BEB433A() {
    return;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_ControlRig() {
    return (void*)((uintptr_t)this + 0xa7e8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_Root() {
    return (void*)((uintptr_t)this + 0xb168);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LookAt_1() {
    return (void*)((uintptr_t)this + 0xb500);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_AnimGraphNode_LookAt() {
    return (void*)((uintptr_t)this + 0xb6b0);
}
_Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C*& _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_NetworkBoxy() {
    return *(_Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C**)((uintptr_t)this + 0xb860);
}
float& _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Delta_Seconds() {
    return *(float*)((uintptr_t)this + 0xb868);
}
float& _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Horizontal_Speed() {
    return *(float*)((uintptr_t)this + 0xb880);
}
bool _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Moving_Horizontally() {
    return (*(uint8_t*)((uintptr_t)this + 0xb884 + 0)) & 1 != 0;
}
float& _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Root_Rotation() {
    return *(float*)((uintptr_t)this + 0xb88c);
}
float& _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Smoothed_Root_Rotation() {
    return *(float*)((uintptr_t)this + 0xb890);
}
float& _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Previous_Smoothed_Root_Rotation() {
    return *(float*)((uintptr_t)this + 0xb894);
}
float& _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Root_Rotation_Offset() {
    return *(float*)((uintptr_t)this + 0xb898);
}
float& _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Turn_Weight() {
    return *(float*)((uintptr_t)this + 0xb89c);
}
float& _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Turn_Explicit_Time() {
    return *(float*)((uintptr_t)this + 0xb8a0);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::set_Is_Crouching(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::set_Arms_Inside_Box(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8a5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8a5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Head_Inside_Box() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8a6 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::set_Is_Charging_Launch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8a7 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8a7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Is_Falling() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8a8 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::set_Left_Foot_Last_Planted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::set_Hand_Launched(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8b1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Is_Jumpscare_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8b2 + 0)) & 1 != 0;
}
bool _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Is_Moving_Backwards() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8b3 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Current_Smoothed_Camera_Rotation() {
    return (void*)((uintptr_t)this + 0xb8c0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Look_Position() {
    return (void*)((uintptr_t)this + 0xb8cc);
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::set_Is_Dancing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb904 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb904 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Aim_Head() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8e4 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::set_Aim_Head(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Fist_Position() {
    return (void*)((uintptr_t)this + 0xb8e8);
}
void* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_World_Location() {
    return (void*)((uintptr_t)this + 0xb8f4);
}
bool _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Is_Fist_Retracting() {
    return (*(uint8_t*)((uintptr_t)this + 0xb900 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::set_Is_Fist_Retracting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb900 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb900 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Is_Sitting() {
    return (*(uint8_t*)((uintptr_t)this + 0xb901 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::set_Is_Flipping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb902 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb902 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::get_Is_Dancing() {
    return (*(uint8_t*)((uintptr_t)this + 0xb904 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/World/Geometry/Characters/BoxyBoo/Animations/ABP_NetworkBoxyBoo.ABP_NetworkBoxyBoo_C");
    return result;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::AnimGraph(_Script_Engine::PoseLink& AnimGraph) {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LookAt_E6E1653947BC73B7677182A79397F3C8() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_A87B4E3646908965953ECF975534EF09() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_ModifyBone_8F91AF44437A8EE399F47C866FF3CFB6() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_2B341A304951801B7834948873EC59B2() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_B411D3CD46685BCE5A3185B8FAD66729() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_ModifyBone_436A89064FB12001D5C6679F5516FED1() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_SequenceEvaluator_8F3657DD4B4D1B6D0650218368501602() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_ControlRig_709DB9AC4E23EFF7EF9B58B28F2CEE4A() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_E64335AA41FBB4ED57F3FBABA4A0F543() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_2759988A43EB92E6A6B45F8C6382D19A() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_0D45EA5541B382CC703981AB7EB93294() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_EE35911944C9AAB016A5B98286A40C56() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_A81FD1DD4D29A5EC3CF57F9865CC9E8F() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_ControlRig_8A87B10D4402BFF55F65BB82A7644E1B() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_7E9EEF0F4E8A75DC65AB2B8AA5419679() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_67D7358A4E1948ED66265A823820995E() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_TransitionResult_0DEB195643A24D050F9972B31F634C13() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkBoxyBoo_AnimGraphNode_LayeredBoneBlend_93569466441179AE358267BE8E5D9D5D() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::AnimNotify_PlantLeftFoot() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::BlueprintBeginPlay0() {
    return;
}
void _Game_World_Geometry_Characters_BoxyBoo_Animations_ABP_NetworkBoxyBoo::ABP_NetworkBoxyBoo_C::Play_Jumpscare_Animation() {
    return;
}
