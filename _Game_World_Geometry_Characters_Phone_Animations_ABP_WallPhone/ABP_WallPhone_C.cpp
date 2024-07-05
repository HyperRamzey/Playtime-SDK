#include "..\FUObjectArray.hpp"
#include "ABP_WallPhone_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
void* _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::get_AnimGraphNode_TransitionResult() {
    return (void*)((uintptr_t)this + 0x370);
}
void _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::ExecuteUbergraph_ABP_WallPhone(int32_t EntryPoint) {
    return;
}
void* _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::get_AnimGraphNode_TransitionResult_3() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::get_AnimGraphNode_Root() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::get_AnimGraphNode_TransitionResult_2() {
    return (void*)((uintptr_t)this + 0x320);
}
void* _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::get_AnimGraphNode_StateResult_3() {
    return (void*)((uintptr_t)this + 0x418);
}
void* _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::get_AnimGraphNode_TransitionResult_1() {
    return (void*)((uintptr_t)this + 0x348);
}
void* _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::get_AnimGraphNode_SequencePlayer_1() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::get_AnimGraphNode_SequenceEvaluator_1() {
    return (void*)((uintptr_t)this + 0x448);
}
void* _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::get_AnimGraphNode_StateResult_2() {
    return (void*)((uintptr_t)this + 0x498);
}
void _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WallPhone_AnimGraphNode_TransitionResult_955FE4254A74F1594934BAB4FEF1C0E3() {
    return;
}
void* _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::get_AnimGraphNode_SequencePlayer() {
    return (void*)((uintptr_t)this + 0x4c8);
}
void* _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::get_AnimGraphNode_StateResult_1() {
    return (void*)((uintptr_t)this + 0x548);
}
void* _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::get_AnimGraphNode_SequenceEvaluator() {
    return (void*)((uintptr_t)this + 0x578);
}
void _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::Toggle_Phone_State() {
    return;
}
void* _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::get_AnimGraphNode_StateResult() {
    return (void*)((uintptr_t)this + 0x5c8);
}
void* _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::get_AnimGraphNode_StateMachine() {
    return (void*)((uintptr_t)this + 0x5f8);
}
bool _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::get_Detached_From_Dock() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a8 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::set_Detached_From_Dock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/World/Geometry/Characters/Phone/Animations/ABP_WallPhone.ABP_WallPhone_C");
    return result;
}
void _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::AnimGraph(_Script_Engine::PoseLink& AnimGraph) {
    return;
}
void _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WallPhone_AnimGraphNode_TransitionResult_C5E199294E97FCE82794A6B807D84A8E() {
    return;
}
void _Game_World_Geometry_Characters_Phone_Animations_ABP_WallPhone::ABP_WallPhone_C::Set_Phone_State(bool Detached_From_Dock) {
    return;
}
