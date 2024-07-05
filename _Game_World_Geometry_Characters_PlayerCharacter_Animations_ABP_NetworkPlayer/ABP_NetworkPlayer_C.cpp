#include "..\FUObjectArray.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "ABP_NetworkPlayer_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_4() {
    return (void*)((uintptr_t)this + 0x81d0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_18() {
    return (void*)((uintptr_t)this + 0x30c0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_30() {
    return (void*)((uintptr_t)this + 0x1b08);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_32() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_BFA6C71A476DEEFC789EB2AFCAB49872() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_51() {
    return (void*)((uintptr_t)this + 0x2b98);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_RotationOffsetBlendSpace_2() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_MakeDynamicAdditive_6() {
    return (void*)((uintptr_t)this + 0x3e38);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_28() {
    return (void*)((uintptr_t)this + 0x2f30);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LocalToComponentSpace_9() {
    return (void*)((uintptr_t)this + 0x480);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Being_Carried_By_Monster(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c95 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c95 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SaveCachedPose_14() {
    return (void*)((uintptr_t)this + 0x598);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_BlendBoneByChannel_1() {
    return (void*)((uintptr_t)this + 0x4e8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_76() {
    return (void*)((uintptr_t)this + 0x19d0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequencePlayer_E1DF699944485E1697D6F7A8147CE22A() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_4DB6EA854BE662DE6646129CE959855A() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_22() {
    return (void*)((uintptr_t)this + 0x4208);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_55() {
    return (void*)((uintptr_t)this + 0x2af8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_Slot_6() {
    return (void*)((uintptr_t)this + 0x4a0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_Slot_5() {
    return (void*)((uintptr_t)this + 0x550);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_RotationOffsetBlendSpace_1() {
    return (void*)((uintptr_t)this + 0x6f0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_31() {
    return (void*)((uintptr_t)this + 0x880);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Interrupted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_BlendBoneByChannel() {
    return (void*)((uintptr_t)this + 0x8a8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SaveCachedPose_11() {
    return (void*)((uintptr_t)this + 0x1430);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_WantsToProne() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c96 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_35() {
    return (void*)((uintptr_t)this + 0x2e18);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_BlendListByBool_5() {
    return (void*)((uintptr_t)this + 0x910);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_96E67495423146899C45D4A93D4F2060() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ModifyBone_10() {
    return (void*)((uintptr_t)this + 0x9b0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_BlendListByBool_2() {
    return (void*)((uintptr_t)this + 0x5ef8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ControlRig_2() {
    return (void*)((uintptr_t)this + 0x2120);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_BlendSpacePlayer_3() {
    return (void*)((uintptr_t)this + 0xab8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SaveCachedPose_13() {
    return (void*)((uintptr_t)this + 0xba0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_30() {
    return (void*)((uintptr_t)this + 0xcf8);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::Play_Emote(int32_t Table_Index) {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_38() {
    return (void*)((uintptr_t)this + 0x2da0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_BlendListByBool_4() {
    return (void*)((uintptr_t)this + 0xd20);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_29() {
    return (void*)((uintptr_t)this + 0xdc0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_B91B5DD740718D62C7E7FA8F8B23B2B5() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_16() {
    return (void*)((uintptr_t)this + 0x3110);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_34() {
    return (void*)((uintptr_t)this + 0xde8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ModifyBone_5() {
    return (void*)((uintptr_t)this + 0x3260);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ControlRig_3() {
    return (void*)((uintptr_t)this + 0xe68);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator_9() {
    return (void*)((uintptr_t)this + 0x4630);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SaveCachedPose_12() {
    return (void*)((uintptr_t)this + 0x11d0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ModifyBone_9() {
    return (void*)((uintptr_t)this + 0x1328);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TwoWayBlend_901AB5494AA70BFF2E787090AB06C508() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ModifyBone_8() {
    return (void*)((uintptr_t)this + 0x1588);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_68() {
    return (void*)((uintptr_t)this + 0x28f0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_F54974F745D87B589FEEB59FBDA75902() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LocalToComponentSpace_8() {
    return (void*)((uintptr_t)this + 0x1690);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_18() {
    return (void*)((uintptr_t)this + 0x4fe8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_44() {
    return (void*)((uintptr_t)this + 0x2cb0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ComponentToLocalSpace_9() {
    return (void*)((uintptr_t)this + 0x16b0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_33() {
    return (void*)((uintptr_t)this + 0x16d0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_22() {
    return (void*)((uintptr_t)this + 0x1750);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_32() {
    return (void*)((uintptr_t)this + 0x1810);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_21() {
    return (void*)((uintptr_t)this + 0x1890);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_29() {
    return (void*)((uintptr_t)this + 0x2040);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_31() {
    return (void*)((uintptr_t)this + 0x1950);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SaveCachedPose_10() {
    return (void*)((uintptr_t)this + 0x1cc0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_75() {
    return (void*)((uintptr_t)this + 0x19f8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_57() {
    return (void*)((uintptr_t)this + 0x2aa8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_20() {
    return (void*)((uintptr_t)this + 0x1a20);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_28() {
    return (void*)((uintptr_t)this + 0x1ae0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ControlRig_1() {
    return (void*)((uintptr_t)this + 0x5358);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_33() {
    return (void*)((uintptr_t)this + 0x1b88);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_27() {
    return (void*)((uintptr_t)this + 0x1bb8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_32() {
    return (void*)((uintptr_t)this + 0x1be0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateMachine_4() {
    return (void*)((uintptr_t)this + 0x1c10);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_7() {
    return (void*)((uintptr_t)this + 0x7d18);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_9() {
    return (void*)((uintptr_t)this + 0x6d08);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_18() {
    return (void*)((uintptr_t)this + 0x4b40);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_66() {
    return (void*)((uintptr_t)this + 0x2940);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_74() {
    return (void*)((uintptr_t)this + 0x1e18);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_5() {
    return (void*)((uintptr_t)this + 0x7c18);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_69() {
    return (void*)((uintptr_t)this + 0x28c8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_73() {
    return (void*)((uintptr_t)this + 0x1e40);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ApplyAdditive_4() {
    return (void*)((uintptr_t)this + 0x4dd8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_72() {
    return (void*)((uintptr_t)this + 0x1e68);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator() {
    return (void*)((uintptr_t)this + 0x6dd8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ApplyAdditive_5() {
    return (void*)((uintptr_t)this + 0x4420);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_71() {
    return (void*)((uintptr_t)this + 0x1e90);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_7() {
    return (void*)((uintptr_t)this + 0x7f30);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_16() {
    return (void*)((uintptr_t)this + 0x4db0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_29() {
    return (void*)((uintptr_t)this + 0x1eb8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TwoWayBlend_1() {
    return (void*)((uintptr_t)this + 0x2528);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_31() {
    return (void*)((uintptr_t)this + 0x1f38);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_40() {
    return (void*)((uintptr_t)this + 0x2d50);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_28() {
    return (void*)((uintptr_t)this + 0x1f68);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_30() {
    return (void*)((uintptr_t)this + 0x1fe8);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Dance_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c94 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_26() {
    return (void*)((uintptr_t)this + 0x2018);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_Slot_3() {
    return (void*)((uintptr_t)this + 0x7818);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateMachine_3() {
    return (void*)((uintptr_t)this + 0x2070);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator_16() {
    return (void*)((uintptr_t)this + 0x2488);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get___CustomProperty_Player_Forward_685072C846513C2451750790E0810CE6() {
    return (void*)((uintptr_t)this + 0x9b58);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ComponentToLocalSpace_6() {
    return (void*)((uintptr_t)this + 0x3888);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator_15() {
    return (void*)((uintptr_t)this + 0x24d8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ModifyBone_7() {
    return (void*)((uintptr_t)this + 0x25f0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ModifyBone_6() {
    return (void*)((uintptr_t)this + 0x26f8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SaveCachedPose_9() {
    return (void*)((uintptr_t)this + 0x6240);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_RotateRootBone() {
    return (void*)((uintptr_t)this + 0x2800);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_17() {
    return (void*)((uintptr_t)this + 0x4d30);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_26() {
    return (void*)((uintptr_t)this + 0x36d0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_70() {
    return (void*)((uintptr_t)this + 0x28a0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_39() {
    return (void*)((uintptr_t)this + 0x2d78);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_67() {
    return (void*)((uintptr_t)this + 0x2918);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_65() {
    return (void*)((uintptr_t)this + 0x2968);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_64() {
    return (void*)((uintptr_t)this + 0x2990);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_63() {
    return (void*)((uintptr_t)this + 0x29b8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_62() {
    return (void*)((uintptr_t)this + 0x29e0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_WantsToProne(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c96 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c96 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_21() {
    return (void*)((uintptr_t)this + 0x4940);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_61() {
    return (void*)((uintptr_t)this + 0x2a08);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_25() {
    return (void*)((uintptr_t)this + 0x38c8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_60() {
    return (void*)((uintptr_t)this + 0x2a30);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_59() {
    return (void*)((uintptr_t)this + 0x2a58);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_MakeDynamicAdditive_2() {
    return (void*)((uintptr_t)this + 0x65b8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_58() {
    return (void*)((uintptr_t)this + 0x2a80);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Cog_Z_Transform_Target() {
    return *(float*)((uintptr_t)this + 0x9bac);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator_11() {
    return (void*)((uintptr_t)this + 0x4108);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_56() {
    return (void*)((uintptr_t)this + 0x2ad0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_54() {
    return (void*)((uintptr_t)this + 0x2b20);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_19() {
    return (void*)((uintptr_t)this + 0x4d00);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_53() {
    return (void*)((uintptr_t)this + 0x2b48);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_MakeDynamicAdditive_7() {
    return (void*)((uintptr_t)this + 0x3ba0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_52() {
    return (void*)((uintptr_t)this + 0x2b70);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_B0B1B33C43A3700AA46B4991BDBFCF90() {
    return;
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Left_Foot_Planted() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c1c + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_50() {
    return (void*)((uintptr_t)this + 0x2bc0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_EBC96F114BCEDFD9B81774A3A7BE7868() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_MakeDynamicAdditive_4() {
    return (void*)((uintptr_t)this + 0x4f60);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_49() {
    return (void*)((uintptr_t)this + 0x2be8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_48() {
    return (void*)((uintptr_t)this + 0x2c10);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_6() {
    return (void*)((uintptr_t)this + 0x7eb0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_BlendSpacePlayer_1() {
    return (void*)((uintptr_t)this + 0x5770);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_47() {
    return (void*)((uintptr_t)this + 0x2c38);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_F1CED8AA41C01D42017A0994DEBB57D4() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_46() {
    return (void*)((uintptr_t)this + 0x2c60);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_2() {
    return (void*)((uintptr_t)this + 0x98a8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_45() {
    return (void*)((uintptr_t)this + 0x2c88);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_43() {
    return (void*)((uintptr_t)this + 0x2cd8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_42() {
    return (void*)((uintptr_t)this + 0x2d00);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_41() {
    return (void*)((uintptr_t)this + 0x2d28);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_A7D6CF0848E994561CE861BEED5252D3() {
    return;
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Dance_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c94 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_37() {
    return (void*)((uintptr_t)this + 0x2dc8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_36() {
    return (void*)((uintptr_t)this + 0x2df0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TwoWayBlend() {
    return (void*)((uintptr_t)this + 0x4040);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_34() {
    return (void*)((uintptr_t)this + 0x2e40);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_33() {
    return (void*)((uintptr_t)this + 0x2e68);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_8() {
    return (void*)((uintptr_t)this + 0x76a8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_32() {
    return (void*)((uintptr_t)this + 0x2e90);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_31() {
    return (void*)((uintptr_t)this + 0x2eb8);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_3D479F3A4518F0EF50AEEF825AACCE0C() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_30() {
    return (void*)((uintptr_t)this + 0x2ee0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_29() {
    return (void*)((uintptr_t)this + 0x2f08);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_5() {
    return (void*)((uintptr_t)this + 0x6778);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_27() {
    return (void*)((uintptr_t)this + 0x2f58);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SaveCachedPose_8() {
    return (void*)((uintptr_t)this + 0x6398);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_26() {
    return (void*)((uintptr_t)this + 0x2f80);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_RunNetworkCharacterFunctionality(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c92 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c92 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_25() {
    return (void*)((uintptr_t)this + 0x2fa8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_7() {
    return (void*)((uintptr_t)this + 0x7860);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_24() {
    return (void*)((uintptr_t)this + 0x2fd0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_15() {
    return (void*)((uintptr_t)this + 0x5740);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_23() {
    return (void*)((uintptr_t)this + 0x2ff8);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Sitting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_22() {
    return (void*)((uintptr_t)this + 0x3020);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_21() {
    return (void*)((uintptr_t)this + 0x3048);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator_6() {
    return (void*)((uintptr_t)this + 0x5b18);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_20() {
    return (void*)((uintptr_t)this + 0x3070);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_19() {
    return (void*)((uintptr_t)this + 0x3098);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_10() {
    return (void*)((uintptr_t)this + 0x51e0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_17() {
    return (void*)((uintptr_t)this + 0x30e8);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequenceEvaluator_DA53541D457799A77B1C5983C5573CE8() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_BlendSpacePlayer_2() {
    return (void*)((uintptr_t)this + 0x3138);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ComponentToLocalSpace_8() {
    return (void*)((uintptr_t)this + 0x3220);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Jumping_Jacks_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c93 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c93 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LocalToComponentSpace_7() {
    return (void*)((uintptr_t)this + 0x3240);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_28() {
    return (void*)((uintptr_t)this + 0x3368);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Jumping_Jacks_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c93 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_19() {
    return (void*)((uintptr_t)this + 0x3398);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_27() {
    return (void*)((uintptr_t)this + 0x3458);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LookAt_1() {
    return (void*)((uintptr_t)this + 0x34e0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ComponentToLocalSpace_7() {
    return (void*)((uintptr_t)this + 0x3690);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ModifyBone_2() {
    return (void*)((uintptr_t)this + 0x7140);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LocalToComponentSpace_6() {
    return (void*)((uintptr_t)this + 0x36b0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_27() {
    return (void*)((uintptr_t)this + 0x3750);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_16() {
    return (void*)((uintptr_t)this + 0x5328);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ModifyBone_4() {
    return (void*)((uintptr_t)this + 0x3780);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Gesture_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x9bc9 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_10() {
    return (void*)((uintptr_t)this + 0x6b30);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LocalToComponentSpace_5() {
    return (void*)((uintptr_t)this + 0x38a8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_26() {
    return (void*)((uintptr_t)this + 0x3948);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_25() {
    return (void*)((uintptr_t)this + 0x3978);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Turn_Direction() {
    return *(float*)((uintptr_t)this + 0x9ca0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ApplyAdditive_8() {
    return (void*)((uintptr_t)this + 0x39a0);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Character_Actor_Rotation() {
    return *(float*)((uintptr_t)this + 0x9c98);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_MakeDynamicAdditive_8() {
    return (void*)((uintptr_t)this + 0x3a68);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator_14() {
    return (void*)((uintptr_t)this + 0x3aa0);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Left_Hand_Extended() {
    return (*(uint8_t*)((uintptr_t)this + 0x9bd9 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LocalToComponentSpace_3() {
    return (void*)((uintptr_t)this + 0x74c0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_24() {
    return (void*)((uintptr_t)this + 0x3af0);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Smoothed_Root_Rotation() {
    return *(float*)((uintptr_t)this + 0x9be8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_BlendSpacePlayer() {
    return (void*)((uintptr_t)this + 0x6a48);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_25() {
    return (void*)((uintptr_t)this + 0x3b70);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator_13() {
    return (void*)((uintptr_t)this + 0x3bd8);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::AnimGraph(_Script_Engine::PoseLink& AnimGraph) {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_23() {
    return (void*)((uintptr_t)this + 0x3c28);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_MakeDynamicAdditive() {
    return (void*)((uintptr_t)this + 0x6e28);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ApplyAdditive_7() {
    return (void*)((uintptr_t)this + 0x3ca8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LocalToComponentSpace() {
    return (void*)((uintptr_t)this + 0x8c70);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ApplyAdditive_6() {
    return (void*)((uintptr_t)this + 0x3d70);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Moving_Backwards() {
    return (*(uint8_t*)((uintptr_t)this + 0x9bdb + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator_12() {
    return (void*)((uintptr_t)this + 0x3e70);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ModifyBone() {
    return (void*)((uintptr_t)this + 0x7990);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_22() {
    return (void*)((uintptr_t)this + 0x3ec0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_24() {
    return (void*)((uintptr_t)this + 0x3f40);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_12() {
    return (void*)((uintptr_t)this + 0x6068);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_24() {
    return (void*)((uintptr_t)this + 0x3f68);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_15() {
    return (void*)((uintptr_t)this + 0x3f98);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Customizing_Character() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c91 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_21() {
    return (void*)((uintptr_t)this + 0x3fc0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_MakeDynamicAdditive_1() {
    return (void*)((uintptr_t)this + 0x6838);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_23() {
    return (void*)((uintptr_t)this + 0x4158);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_BlendListByBool_1() {
    return (void*)((uintptr_t)this + 0x7268);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_20() {
    return (void*)((uintptr_t)this + 0x4188);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_10() {
    return (void*)((uintptr_t)this + 0x7b50);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_14() {
    return (void*)((uintptr_t)this + 0x4238);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ComponentToLocalSpace_5() {
    return (void*)((uintptr_t)this + 0x4260);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LocalToComponentSpace_4() {
    return (void*)((uintptr_t)this + 0x4280);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::Impl_Play_Hurt_Animation() {
    return;
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Interrupted() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c31 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_11() {
    return (void*)((uintptr_t)this + 0x64f0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ModifyBone_3() {
    return (void*)((uintptr_t)this + 0x42a0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ControlRig_685072C846513C2451750790E0810CE6() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_23() {
    return (void*)((uintptr_t)this + 0x43a8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_22() {
    return (void*)((uintptr_t)this + 0x43d0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_21() {
    return (void*)((uintptr_t)this + 0x43f8);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Sitting() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c2c + 0)) & 1 != 0;
}
_Script_Engine::AnimSequenceBase*& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Gesture_Sequence() {
    return *(_Script_Engine::AnimSequenceBase**)((uintptr_t)this + 0x9bc0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator_2() {
    return (void*)((uintptr_t)this + 0x69f8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_18() {
    return (void*)((uintptr_t)this + 0x44e8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_Slot_4() {
    return (void*)((uintptr_t)this + 0x61f8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_MakeDynamicAdditive_5() {
    return (void*)((uintptr_t)this + 0x45a8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_10() {
    return (void*)((uintptr_t)this + 0x6118);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator_10() {
    return (void*)((uintptr_t)this + 0x45e0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ModifyBone_1() {
    return (void*)((uintptr_t)this + 0x76d0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_17() {
    return (void*)((uintptr_t)this + 0x4680);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_RotationOffsetBlendSpace() {
    return (void*)((uintptr_t)this + 0x5c28);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_16() {
    return (void*)((uintptr_t)this + 0x4740);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_9FB7F423412663B21B00EA8711535F23() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_13() {
    return (void*)((uintptr_t)this + 0x6098);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_15() {
    return (void*)((uintptr_t)this + 0x4800);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SaveCachedPose() {
    return (void*)((uintptr_t)this + 0x9510);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_19() {
    return (void*)((uintptr_t)this + 0x48c0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_20() {
    return (void*)((uintptr_t)this + 0x4970);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::OverrideSetCustomizingCharacter(bool Override) {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_10() {
    return (void*)((uintptr_t)this + 0x7500);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_14() {
    return (void*)((uintptr_t)this + 0x4998);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_2() {
    return (void*)((uintptr_t)this + 0x9758);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_19() {
    return (void*)((uintptr_t)this + 0x4a58);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_2() {
    return (void*)((uintptr_t)this + 0x9668);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator_3() {
    return (void*)((uintptr_t)this + 0x6568);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_13() {
    return (void*)((uintptr_t)this + 0x4a80);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LookAt_2C992D594FDAE8B90826B38E6596A395() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_11() {
    return (void*)((uintptr_t)this + 0x5f98);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_12() {
    return (void*)((uintptr_t)this + 0x4b68);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator_5() {
    return (void*)((uintptr_t)this + 0x6018);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_18() {
    return (void*)((uintptr_t)this + 0x4c28);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_20() {
    return (void*)((uintptr_t)this + 0x4ca8);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Left_Foot_Planted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_1() {
    return (void*)((uintptr_t)this + 0x9958);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_17() {
    return (void*)((uintptr_t)this + 0x4cd8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_5() {
    return (void*)((uintptr_t)this + 0x8178);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_11() {
    return (void*)((uintptr_t)this + 0x4ea0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_88423F9D455813881B4AA0B70ADA01CC() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Player_Controlled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c2e + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c2e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_Slot_2() {
    return (void*)((uintptr_t)this + 0x7888);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator_8() {
    return (void*)((uintptr_t)this + 0x4f98);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_6() {
    return (void*)((uintptr_t)this + 0x7dc8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_15() {
    return (void*)((uintptr_t)this + 0x5018);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_17() {
    return (void*)((uintptr_t)this + 0x5040);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Root_Rotation_Offset() {
    return *(float*)((uintptr_t)this + 0x9ba0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_16() {
    return (void*)((uintptr_t)this + 0x5070);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get___CustomProperty_Player_Location_685072C846513C2451750790E0810CE6() {
    return (void*)((uintptr_t)this + 0x9b64);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_14() {
    return (void*)((uintptr_t)this + 0x50f0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ApplyAdditive_3() {
    return (void*)((uintptr_t)this + 0x5118);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Crouching(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9be0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9be0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_8() {
    return (void*)((uintptr_t)this + 0x7c68);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_MakeDynamicAdditive_3() {
    return (void*)((uintptr_t)this + 0x52a0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator_7() {
    return (void*)((uintptr_t)this + 0x52d8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_12() {
    return (void*)((uintptr_t)this + 0x5e78);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_15() {
    return (void*)((uintptr_t)this + 0x56c0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_14() {
    return (void*)((uintptr_t)this + 0x5858);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_14() {
    return (void*)((uintptr_t)this + 0x5888);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_13() {
    return (void*)((uintptr_t)this + 0x5908);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_9() {
    return (void*)((uintptr_t)this + 0x5938);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Horizontal_Speed() {
    return *(float*)((uintptr_t)this + 0x9b9c);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_13() {
    return (void*)((uintptr_t)this + 0x59f8);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Backwards_Weight() {
    return *(float*)((uintptr_t)this + 0x9bdc);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_BlendListByBool_3() {
    return (void*)((uintptr_t)this + 0x5a78);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_8() {
    return (void*)((uintptr_t)this + 0x5b68);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_7() {
    return (void*)((uintptr_t)this + 0x5db8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_11() {
    return (void*)((uintptr_t)this + 0x60c0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_12() {
    return (void*)((uintptr_t)this + 0x60f0);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Rolling() {
    return (*(uint8_t*)((uintptr_t)this + 0x9be4 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateMachine_2() {
    return (void*)((uintptr_t)this + 0x6148);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator_4() {
    return (void*)((uintptr_t)this + 0x6518);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_6() {
    return (void*)((uintptr_t)this + 0x65f0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ApplyAdditive_2() {
    return (void*)((uintptr_t)this + 0x66b0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ApplyAdditive_1() {
    return (void*)((uintptr_t)this + 0x6870);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_4() {
    return (void*)((uintptr_t)this + 0x6938);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SaveCachedPose_7() {
    return (void*)((uintptr_t)this + 0x6bb0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequenceEvaluator_1() {
    return (void*)((uintptr_t)this + 0x6d88);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_3() {
    return (void*)((uintptr_t)this + 0x6e60);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ApplyAdditive() {
    return (void*)((uintptr_t)this + 0x6f20);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_RigidBody_F049658D4418AADA069208964CD8BDC5() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SaveCachedPose_6() {
    return (void*)((uintptr_t)this + 0x6fe8);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Exiting_Locker() {
    return (*(uint8_t*)((uintptr_t)this + 0x9bfd + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ComponentToLocalSpace_4() {
    return (void*)((uintptr_t)this + 0x7248);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_9D436EE349486F9A99C0688D8BB68E53() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LookAt() {
    return (void*)((uintptr_t)this + 0x7310);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ComponentToLocalSpace_3() {
    return (void*)((uintptr_t)this + 0x74e0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SaveCachedPose_5() {
    return (void*)((uintptr_t)this + 0x7528);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_9() {
    return (void*)((uintptr_t)this + 0x7680);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LocalToComponentSpace_2() {
    return (void*)((uintptr_t)this + 0x77d8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ComponentToLocalSpace_2() {
    return (void*)((uintptr_t)this + 0x77f8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_2() {
    return (void*)((uintptr_t)this + 0x78d0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LocalToComponentSpace_1() {
    return (void*)((uintptr_t)this + 0x7a98);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ComponentToLocalSpace_1() {
    return (void*)((uintptr_t)this + 0x7ab8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_13() {
    return (void*)((uintptr_t)this + 0x7ad8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_12() {
    return (void*)((uintptr_t)this + 0x7b00);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Grabpack_Base_Aim_Pitch() {
    return *(float*)((uintptr_t)this + 0x9bec);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_11() {
    return (void*)((uintptr_t)this + 0x7b28);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Moving_Horizontally() {
    return (*(uint8_t*)((uintptr_t)this + 0x9be2 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_9() {
    return (void*)((uintptr_t)this + 0x7b78);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_8() {
    return (void*)((uintptr_t)this + 0x7ba0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_7() {
    return (void*)((uintptr_t)this + 0x7bc8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_6() {
    return (void*)((uintptr_t)this + 0x7bf0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_4() {
    return (void*)((uintptr_t)this + 0x7c40);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_9() {
    return (void*)((uintptr_t)this + 0x7ce8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_8() {
    return (void*)((uintptr_t)this + 0x7d98);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend_1() {
    return (void*)((uintptr_t)this + 0x7df0);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Standing_Up() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c2f + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_LayeredBoneBlend() {
    return (void*)((uintptr_t)this + 0x7f60);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_5() {
    return (void*)((uintptr_t)this + 0x8020);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Vertical_Speed() {
    return *(float*)((uintptr_t)this + 0x9ba4);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_5() {
    return (void*)((uintptr_t)this + 0x8048);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_6() {
    return (void*)((uintptr_t)this + 0x80c8);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Downed() {
    return (*(uint8_t*)((uintptr_t)this + 0x9be3 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_4() {
    return (void*)((uintptr_t)this + 0x80f8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_4() {
    return (void*)((uintptr_t)this + 0x81a8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateMachine_1() {
    return (void*)((uintptr_t)this + 0x8200);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_RotationOffsetBlendSpace_A6605B4E42F2FCC37F016EBC6AA52995() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SaveCachedPose_4() {
    return (void*)((uintptr_t)this + 0x82b0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequencePlayer_4B56331B4D3D8CCFDE32BE83DF681FF6() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_Root() {
    return (void*)((uintptr_t)this + 0x8408);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Entering_Locker() {
    return (*(uint8_t*)((uintptr_t)this + 0x9bfe + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_RigidBody() {
    return (void*)((uintptr_t)this + 0x8440);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SaveCachedPose_3() {
    return (void*)((uintptr_t)this + 0x8c90);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::SetCosmeticType(void* Cosmetic_Type) {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_3() {
    return (void*)((uintptr_t)this + 0x8de8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ComponentToLocalSpace() {
    return (void*)((uintptr_t)this + 0x8e10);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_RunNetworkCharacterFunctionality() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c92 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_ControlRig() {
    return (void*)((uintptr_t)this + 0x8e30);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_9837115340ABB1DF3D399A9305A32AC5() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SaveCachedPose_2() {
    return (void*)((uintptr_t)this + 0x9198);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SaveCachedPose_1() {
    return (void*)((uintptr_t)this + 0x92f0);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Grabpack_Base_Aim_Yaw() {
    return *(float*)((uintptr_t)this + 0x9bf0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_3() {
    return (void*)((uintptr_t)this + 0x9448);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Velocity() {
    return (void*)((uintptr_t)this + 0x9c34);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Left_Hand_Extended(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9bd9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9bd9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_Slot_1() {
    return (void*)((uintptr_t)this + 0x94c8);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::ExecuteUbergraph_ABP_NetworkPlayer(int32_t EntryPoint) {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_B1482E4E430219320F9D1AA313F5CB67() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_Slot() {
    return (void*)((uintptr_t)this + 0x96e8);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Standing_Up(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c2f + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c2f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Previous_Smoothed_Root_Rotation() {
    return *(float*)((uintptr_t)this + 0x9b70);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_3() {
    return (void*)((uintptr_t)this + 0x9730);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult_1() {
    return (void*)((uintptr_t)this + 0x9780);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_546A53AB41E3B42005CC25804E4B98E0() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_TransitionResult() {
    return (void*)((uintptr_t)this + 0x97a8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_2() {
    return (void*)((uintptr_t)this + 0x97d0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Right_Hand_Extended(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9bda + 0);
    *(uint8_t*)((uintptr_t)this + 0x9bda + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult_3() {
    return (void*)((uintptr_t)this + 0x97f8);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_BlendListByBool_A2D70076467C7635D7C477A149790CF8() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer_1() {
    return (void*)((uintptr_t)this + 0x9828);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_SequencePlayer() {
    return (void*)((uintptr_t)this + 0x98d8);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose_1() {
    return (void*)((uintptr_t)this + 0x9988);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_F5A871DE461B1E74C7F2FE81144CCC0E() {
    return;
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Player_Controlled() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c2e + 0)) & 1 != 0;
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Network_Character() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x9b80);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateResult() {
    return (void*)((uintptr_t)this + 0x99b0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_StateMachine() {
    return (void*)((uintptr_t)this + 0x99e0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_BlendListByBool() {
    return (void*)((uintptr_t)this + 0x9a90);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_AnimGraphNode_UseCachedPose() {
    return (void*)((uintptr_t)this + 0x9b30);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Target_Root_Rotation() {
    return *(float*)((uintptr_t)this + 0x9b74);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Delta_Seconds() {
    return *(float*)((uintptr_t)this + 0x9b94);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Root_Rotation() {
    return *(float*)((uintptr_t)this + 0x9b78);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_T_Posing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c2d + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c2d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Pawn*& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Pawn() {
    return *(_Script_Engine::Pawn**)((uintptr_t)this + 0x9b88);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_D55AAA6D434FC7EF6EB2B7AEEF461DCF() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_RotationOffsetBlendSpace_DFFE3A5D4C1841B2043AFC9E27D9C20B() {
    return;
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Turn_Weight() {
    return *(float*)((uintptr_t)this + 0x9b90);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Aim_Pitch() {
    return *(float*)((uintptr_t)this + 0x9b98);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_E4C2336F410CE75456173B8D5503AFED() {
    return;
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Being_Carried_By_Monster() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c95 + 0)) & 1 != 0;
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Cog_Z_Transform() {
    return *(float*)((uintptr_t)this + 0x9ba8);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Cog_Z_Transform_Interp_Speed() {
    return *(float*)((uintptr_t)this + 0x9bb0);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Crouch_Weight() {
    return *(float*)((uintptr_t)this + 0x9bb4);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_TimeSinceSwinging() {
    return *(float*)((uintptr_t)this + 0x9bb8);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Force_Stop_Gesture() {
    return (*(uint8_t*)((uintptr_t)this + 0x9bc8 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Force_Stop_Gesture(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9bc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9bc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Gesture_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9bc9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9bc9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::AnimMontage*& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Gesture_Montage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x9bd0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_FDA8DE71439E7D81E94BA8B14F3F53D7() {
    return;
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Swinging() {
    return (*(uint8_t*)((uintptr_t)this + 0x9bd8 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Swinging(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9bd8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9bd8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Right_Hand_Extended() {
    return (*(uint8_t*)((uintptr_t)this + 0x9bda + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Moving_Backwards(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9bdb + 0);
    *(uint8_t*)((uintptr_t)this + 0x9bdb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Crouching() {
    return (*(uint8_t*)((uintptr_t)this + 0x9be0 + 0)) & 1 != 0;
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Falling() {
    return (*(uint8_t*)((uintptr_t)this + 0x9be1 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Falling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9be1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9be1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Moving_Horizontally(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9be2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9be2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Downed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9be3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9be3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Healing() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c30 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Rolling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9be4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9be4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Idle_Bob() {
    return *(float*)((uintptr_t)this + 0x9bf4);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Idle_Explicit() {
    return *(float*)((uintptr_t)this + 0x9bf8);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequencePlayer_946AA7814BEB6EEBE95155934145FE31() {
    return;
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_Jumpscare_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x9bfc + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Jumpscare_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9bfc + 0);
    *(uint8_t*)((uintptr_t)this + 0x9bfc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Exiting_Locker(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9bfd + 0);
    *(uint8_t*)((uintptr_t)this + 0x9bfd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Entering_Locker(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9bfe + 0);
    *(uint8_t*)((uintptr_t)this + 0x9bfe + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Turn_Explicit() {
    return *(float*)((uintptr_t)this + 0x9c00);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Current_Smoothed_Rotation() {
    return (void*)((uintptr_t)this + 0x9c04);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Smoothed_Look_Position() {
    return (void*)((uintptr_t)this + 0x9c10);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Aim_Position() {
    return (void*)((uintptr_t)this + 0x9c20);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_5F0806AB4B6499090AE292813F79E41D() {
    return;
}
bool _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Is_T_Posing() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c2d + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Healing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_SelectMontages() {
    return (void*)((uintptr_t)this + 0x9c40);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_857215ED466F885666940BA06090E8FC() {
    return;
}
void* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Customization_Category() {
    return (void*)((uintptr_t)this + 0x9c90);
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::set_Is_Customizing_Character(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c91 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c91 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Want_To_Prone_Weight() {
    return *(float*)((uintptr_t)this + 0x9c9c);
}
float& _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::get_Turn_Direction_Smooth() {
    return *(float*)((uintptr_t)this + 0x9ca4);
}
_Script_CoreUObject::Class* _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/World/Geometry/Characters/PlayerCharacter/Animations/ABP_NetworkPlayer.ABP_NetworkPlayer_C");
    return result;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_3C7A9E884950873B6CCBE48CCC181A09() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::PlaySelectAnimationFromType(void* Cosmetic_Type) {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::AnimNotify_PlantLeftFoot() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_A7773EDA45E3D39B47A9A9A9CF5EAF57() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_BlendListByBool_AA0AFA4A432C86C1B24322962FC74A43() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_77BBF0B44771549EA9A972B98E622632() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_8E6F6016415E8D934EB8D59CA8F78A47() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_C7566562424972686D5243ABBDDCF78A() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_F1EF8E714A0CD1A0521C469DAEDCD837() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_SequencePlayer_260D786249AC526E005B31B466581801() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_2C97ED854364C4A888C672874BBEA078() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_LayeredBoneBlend_86DB37B046254703463ACEB9F0F245A1() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_ModifyBone_3BAC4C964B98BD6F128F878395D98003() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_BlendSpacePlayer_B0D7D6794766C04C64B32FAF2CB6826A() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_9DC7C1574826C8B86DA874A68AEB1592() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_60CF38714E4B943897571489658D423E() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_F8DEC8214E624274EFBBFD8095CC7706() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_57831BA042F562739BB950B9DAA58FB2() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_BA2902674111D4F85B29048DC2762A32() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_EEEE2AE146C58FFFF09F6690B0C10CBD() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NetworkPlayer_AnimGraphNode_TransitionResult_16281B75474023A9FB3F7D9DE90E07B1() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::Impl_Play_Jump_Animation() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::Play_Gesture(_Script_Engine::AnimSequence* Third_Person_Anim_Sequence) {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::AnimNotify_PlantRightFoot() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::BlueprintBeginPlay0() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::Emote_Debug() {
    return;
}
void _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C::SetWantsToProne() {
    return;
}
