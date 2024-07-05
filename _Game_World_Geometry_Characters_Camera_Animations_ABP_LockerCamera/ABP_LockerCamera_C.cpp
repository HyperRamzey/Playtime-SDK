#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Interaction_BP_Locker\BP_Locker_C.hpp"
#include "ABP_LockerCamera_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_Root() {
    return (void*)((uintptr_t)this + 0x2c8);
}
bool _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_IsInterrupted() {
    return (*(uint8_t*)((uintptr_t)this + 0x7f9 + 0)) & 1 != 0;
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_TransitionResult_2() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_TransitionResult_7() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_TransitionResult_6() {
    return (void*)((uintptr_t)this + 0x320);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_TransitionResult_5() {
    return (void*)((uintptr_t)this + 0x348);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_TransitionResult_4() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_TransitionResult_3() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_TransitionResult_1() {
    return (void*)((uintptr_t)this + 0x3e8);
}
void _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_AC38B9A64AB3D7DE9ADF53B53137FC4F() {
    return;
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_TransitionResult() {
    return (void*)((uintptr_t)this + 0x410);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_SequenceEvaluator_1() {
    return (void*)((uintptr_t)this + 0x438);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_StateResult_4() {
    return (void*)((uintptr_t)this + 0x488);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_SequenceEvaluator() {
    return (void*)((uintptr_t)this + 0x4b8);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_StateResult_3() {
    return (void*)((uintptr_t)this + 0x508);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_SequencePlayer_2() {
    return (void*)((uintptr_t)this + 0x538);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_StateResult_2() {
    return (void*)((uintptr_t)this + 0x5b8);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_SequencePlayer_1() {
    return (void*)((uintptr_t)this + 0x5e8);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_StateResult_1() {
    return (void*)((uintptr_t)this + 0x668);
}
void _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::set_IsTakeout(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7fb + 0);
    *(uint8_t*)((uintptr_t)this + 0x7fb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_SequencePlayer() {
    return (void*)((uintptr_t)this + 0x698);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_StateResult() {
    return (void*)((uintptr_t)this + 0x718);
}
void* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_AnimGraphNode_StateMachine() {
    return (void*)((uintptr_t)this + 0x748);
}
bool _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_IsEntering() {
    return (*(uint8_t*)((uintptr_t)this + 0x7f8 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::set_IsEntering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::set_IsInterrupted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7f9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_IsExiting() {
    return (*(uint8_t*)((uintptr_t)this + 0x7fa + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::set_IsExiting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x7fa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::get_IsTakeout() {
    return (*(uint8_t*)((uintptr_t)this + 0x7fb + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/World/Geometry/Characters/Camera/Animations/ABP_LockerCamera.ABP_LockerCamera_C");
    return result;
}
void _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::AnimGraph(_Script_Engine::PoseLink& AnimGraph) {
    return;
}
void _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_B355280E44F0BE2E3CF9FE89E2590B32() {
    return;
}
void _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_LockerCamera_AnimGraphNode_TransitionResult_A135CD6043F988DD1EFAB38CF7B8817F() {
    return;
}
void _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::CustomEvent_0(_Game_Gameplay_Interaction_BP_Locker::BP_Locker_C* Locker_Ref) {
    return;
}
void _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    return;
}
void _Game_World_Geometry_Characters_Camera_Animations_ABP_LockerCamera::ABP_LockerCamera_C::ExecuteUbergraph_ABP_LockerCamera(int32_t EntryPoint) {
    return;
}
