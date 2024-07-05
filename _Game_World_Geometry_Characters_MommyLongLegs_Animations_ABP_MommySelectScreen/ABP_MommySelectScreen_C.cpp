#include "..\FUObjectArray.hpp"
#include "ABP_MommySelectScreen_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
void _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::ExecuteUbergraph_ABP_MommySelectScreen(int32_t EntryPoint) {
    return;
}
void* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_AnimGraphNode_SequencePlayer_1() {
    return (void*)((uintptr_t)this + 0xa18);
}
void* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_AnimGraphNode_TransitionResult_1() {
    return (void*)((uintptr_t)this + 0x9c8);
}
void* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_AnimGraphNode_Root() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_AnimGraphNode_ControlRig_1() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_AnimGraphNode_ControlRig() {
    return (void*)((uintptr_t)this + 0x660);
}
void* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_AnimGraphNode_TransitionResult() {
    return (void*)((uintptr_t)this + 0x9f0);
}
void* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_AnimGraphNode_StateResult_2() {
    return (void*)((uintptr_t)this + 0xa98);
}
void* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_AnimGraphNode_SequencePlayer() {
    return (void*)((uintptr_t)this + 0xac8);
}
void* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_AnimGraphNode_StateResult_1() {
    return (void*)((uintptr_t)this + 0xb48);
}
void* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_AnimGraphNode_SequenceEvaluator() {
    return (void*)((uintptr_t)this + 0xb78);
}
void* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_AnimGraphNode_StateResult() {
    return (void*)((uintptr_t)this + 0xbc8);
}
void* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_AnimGraphNode_StateMachine() {
    return (void*)((uintptr_t)this + 0xbf8);
}
void* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_AnimGraphNode_RigidBody() {
    return (void*)((uintptr_t)this + 0xcb0);
}
void* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_AnimGraphNode_LocalToComponentSpace() {
    return (void*)((uintptr_t)this + 0x14e0);
}
void* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_AnimGraphNode_ComponentToLocalSpace() {
    return (void*)((uintptr_t)this + 0x1500);
}
bool _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::get_Can_Begin_Transition() {
    return (*(uint8_t*)((uintptr_t)this + 0x1520 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::set_Can_Begin_Transition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1520 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1520 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/World/Geometry/Characters/MommyLongLegs/Animations/ABP_MommySelectScreen.ABP_MommySelectScreen_C");
    return result;
}
void _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::AnimGraph(_Script_Engine::PoseLink& AnimGraph) {
    return;
}
void _Game_World_Geometry_Characters_MommyLongLegs_Animations_ABP_MommySelectScreen::ABP_MommySelectScreen_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    return;
}
