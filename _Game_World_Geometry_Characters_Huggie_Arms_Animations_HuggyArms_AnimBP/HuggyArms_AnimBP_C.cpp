#include "..\FUObjectArray.hpp"
#include "..\_Game_Player_Huggy_BP_NetworkHuggy\BP_NetworkHuggy_C.hpp"
#include "HuggyArms_AnimBP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\PoseLink.hpp"
float& _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::get_AnimationDeltaTime() {
    return *(float*)((uintptr_t)this + 0x608);
}
void* _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::get_AnimGraphNode_BlendSpacePlayer() {
    return (void*)((uintptr_t)this + 0x440);
}
void* _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::get_AnimGraphNode_Root() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::get_AnimGraphNode_SequencePlayer() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::get_AnimGraphNode_TransitionResult_1() {
    return (void*)((uintptr_t)this + 0x340);
}
void* _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::get_AnimGraphNode_Slot() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::get_AnimGraphNode_TransitionResult() {
    return (void*)((uintptr_t)this + 0x368);
}
void* _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::get_AnimGraphNode_StateResult_1() {
    return (void*)((uintptr_t)this + 0x410);
}
void* _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::get_AnimGraphNode_StateResult() {
    return (void*)((uintptr_t)this + 0x528);
}
void _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::ExecuteUbergraph_HuggyArms_AnimBP(int32_t EntryPoint) {
    return;
}
void* _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::get_AnimGraphNode_StateMachine() {
    return (void*)((uintptr_t)this + 0x558);
}
float& _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::get_ForwardMovement() {
    return *(float*)((uintptr_t)this + 0x60c);
}
float& _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::get_RightMovement() {
    return *(float*)((uintptr_t)this + 0x610);
}
bool _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::get_Is_Jumpscare_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x614 + 0)) & 1 != 0;
}
void _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::set_Is_Jumpscare_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x614 + 0);
    *(uint8_t*)((uintptr_t)this + 0x614 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C*& _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::get_Network_Huggy() {
    return *(_Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C**)((uintptr_t)this + 0x618);
}
_Script_CoreUObject::Class* _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/World/Geometry/Characters/Huggie/Arms/Animations/HuggyArms_AnimBP.HuggyArms_AnimBP_C");
    return result;
}
void _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::AnimGraph(_Script_Engine::PoseLink& AnimGraph) {
    return;
}
void _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    return;
}
void _Game_World_Geometry_Characters_Huggie_Arms_Animations_HuggyArms_AnimBP::HuggyArms_AnimBP_C::StartAttackAnimation() {
    return;
}
