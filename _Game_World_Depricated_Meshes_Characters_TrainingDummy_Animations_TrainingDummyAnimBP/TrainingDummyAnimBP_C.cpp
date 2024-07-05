#include "..\FUObjectArray.hpp"
#include "TrainingDummyAnimBP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
void _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::set_Crouched(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x103c + 0);
    *(uint8_t*)((uintptr_t)this + 0x103c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_StateResult_3() {
    return (void*)((uintptr_t)this + 0x5d0);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_TransitionResult_3() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_TransitionResult_4() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_Root() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_TransitionResult_7() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_TransitionResult_5() {
    return (void*)((uintptr_t)this + 0x348);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_TransitionResult_6() {
    return (void*)((uintptr_t)this + 0x320);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_TransitionResult_2() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_TransitionResult_1() {
    return (void*)((uintptr_t)this + 0x3e8);
}
float& _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_LookUp() {
    return *(float*)((uintptr_t)this + 0x1038);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_TransitionResult() {
    return (void*)((uintptr_t)this + 0x410);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_SequencePlayer() {
    return (void*)((uintptr_t)this + 0x438);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_StateResult_4() {
    return (void*)((uintptr_t)this + 0x4b8);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_BlendSpacePlayer_3() {
    return (void*)((uintptr_t)this + 0x4e8);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_BlendSpacePlayer_2() {
    return (void*)((uintptr_t)this + 0x600);
}
void _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::ExecuteUbergraph_TrainingDummyAnimBP(int32_t EntryPoint) {
    return;
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_RotationOffsetBlendSpace_2() {
    return (void*)((uintptr_t)this + 0x6e8);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_StateResult_2() {
    return (void*)((uintptr_t)this + 0x878);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_RotationOffsetBlendSpace_1() {
    return (void*)((uintptr_t)this + 0x8a8);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_BlendSpacePlayer() {
    return (void*)((uintptr_t)this + 0xb50);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_BlendSpacePlayer_1() {
    return (void*)((uintptr_t)this + 0xa38);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_StateResult_1() {
    return (void*)((uintptr_t)this + 0xb20);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_RotationOffsetBlendSpace() {
    return (void*)((uintptr_t)this + 0xc38);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_StateResult() {
    return (void*)((uintptr_t)this + 0xdc8);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_StateMachine() {
    return (void*)((uintptr_t)this + 0xdf8);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_SaveCachedPose() {
    return (void*)((uintptr_t)this + 0xea8);
}
void* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimGraphNode_UseCachedPose() {
    return (void*)((uintptr_t)this + 0x1000);
}
float& _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_AnimationDeltaTime() {
    return *(float*)((uintptr_t)this + 0x1028);
}
float& _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_ForwardMovement() {
    return *(float*)((uintptr_t)this + 0x102c);
}
float& _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_RightMovement() {
    return *(float*)((uintptr_t)this + 0x1030);
}
bool _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_Falling() {
    return (*(uint8_t*)((uintptr_t)this + 0x1034 + 0)) & 1 != 0;
}
void _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::set_Falling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1034 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1034 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_Crouched() {
    return (*(uint8_t*)((uintptr_t)this + 0x103c + 0)) & 1 != 0;
}
bool _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_NeedsRevived() {
    return (*(uint8_t*)((uintptr_t)this + 0x103d + 0)) & 1 != 0;
}
void _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::set_NeedsRevived(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x103d + 0);
    *(uint8_t*)((uintptr_t)this + 0x103d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_IsDashing() {
    return (*(uint8_t*)((uintptr_t)this + 0x103e + 0)) & 1 != 0;
}
void _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::set_IsDashing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x103e + 0);
    *(uint8_t*)((uintptr_t)this + 0x103e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::get_DashingAlpha() {
    return *(float*)((uintptr_t)this + 0x1040);
}
_Script_CoreUObject::Class* _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/World/Depricated/Meshes/Characters/TrainingDummy/Animations/TrainingDummyAnimBP.TrainingDummyAnimBP_C");
    return result;
}
void _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::AnimGraph(_Script_Engine::PoseLink& AnimGraph) {
    return;
}
void _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TrainingDummyAnimBP_AnimGraphNode_BlendSpacePlayer_9600D0A348109ACF0D209F8B08EE219C() {
    return;
}
void _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TrainingDummyAnimBP_AnimGraphNode_BlendSpacePlayer_6EF2D55444EC7EB5C2A862B4A1BC470C() {
    return;
}
void _Game_World_Depricated_Meshes_Characters_TrainingDummy_Animations_TrainingDummyAnimBP::TrainingDummyAnimBP_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    return;
}
